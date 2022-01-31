// Fill out your copyright notice in the Description page of Project Settings.

#include "PortalCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/EngineTypes.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "Portal.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

DEFINE_LOG_CATEGORY(LogPortalCharacter);

APortalCharacter::APortalCharacter()
{
	PrimaryActorTick.bCanEverTick = true;// Tick enabled.
	PrimaryActorTick.TickGroup = ETickingGroup::TG_PostPhysics;

	GetMesh()->SetCollisionObjectType(ECC_Pawn);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	GetCapsuleComponent()->SetCollisionObjectType(ECC_Pawn);
	GetCapsuleComponent()->SetCollisionProfileName("PortalPawn");
	GetCapsuleComponent()->SetCapsuleRadius(40.0f);

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(GetCapsuleComponent());
	bUseControllerRotationYaw = false;
	camera->bUsePawnControlRotation = false;


	physicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));
	physicsHandle->LinearDamping = 200.0f;
	physicsHandle->AngularDamping = 200.0f;
	physicsHandle->LinearStiffness = 5000.0f;
	physicsHandle->AngularStiffness = 3000.0f;
	physicsHandle->bSoftAngularConstraint = true;
	physicsHandle->bSoftLinearConstraint = true;
	physicsHandle->bInterpolateTarget = true;
	physicsHandle->InterpolationSpeed = 100.0f;
	orientation = false;

	// Setup default variables.
	crouchMultiplier = 0.5f;
	runMultiplier = 1.5f;
	crouchSpeed = 0.4f;
	interactDistance = 2000.0f;
	mouseSpeed = 1.4f;
	orientationCorrectionTime = 1.8f;
	doubleJump = false;
	jumpCount = 0;
}

void APortalCharacter::BeginPlay()
{
	Super::BeginPlay();

	startMaxWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
}

void APortalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Update orientation if need be.
	// NOTE: Apply this before any user input that will apply movement through rotation...
	if (orientation) ReturnToOrientation();

	UpdateMouseMovement(DeltaTime);

	// Update physics handle location if something is being held.
	if (physicsHandle->GetGrabbedComponent() != nullptr)
	{
		// Update handle offset.
		FVector newLoc = camera->GetComponentTransform().TransformPositionNoScale(originalRelativeLocation);
		FRotator newRot = camera->GetComponentTransform().TransformRotation(originalRelativeRotation.Quaternion()).Rotator();
		physicsHandle->SetTargetLocationAndRotation(newLoc, newRot);
	}

	// Update movement velocity.
	currLinVel = GetCapsuleComponent()->GetPhysicsLinearVelocity();
	currRotVel = GetCapsuleComponent()->GetPhysicsAngularVelocityInDegrees();

	// Update last location.
	lastLocation = camera->GetComponentLocation();

	if (doubleJump && jumped && IsGrounded())
	{
		jumped = false;
		jumpCount = 0;
	}
}

void APortalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Setup action bindings.
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APortalCharacter::JumpAction<true>);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APortalCharacter::JumpAction<false>);
	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &APortalCharacter::RunAction<true>);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &APortalCharacter::RunAction<false>);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &APortalCharacter::CrouchAction<true>);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &APortalCharacter::CrouchAction<false>);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APortalCharacter::InteractAction<true>);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &APortalCharacter::InteractAction<false>);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APortalCharacter::FireAction<true>);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &APortalCharacter::FireAction<false>);

	// Setup axis bindings.
	PlayerInputComponent->BindAxis("MoveForward", this, &APortalCharacter::Forward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APortalCharacter::Right);
	PlayerInputComponent->BindAxis("Turn", this, &APortalCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &APortalCharacter::LookUp);
}

void APortalCharacter::JumpAction(bool pressed)
{
	if (doubleJump ? jumpCount < 1 : IsGrounded())
	{
		Jump();
		jumpCount++;
		jumped = true;
	}
}

void APortalCharacter::RunAction(bool pressed)
{
	if (pressed)
	{
		GetCharacterMovement()->MaxWalkSpeed = startMaxWalkSpeed * runMultiplier;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = startMaxWalkSpeed * crouchMultiplier;
	}
}

void APortalCharacter::CrouchAction(bool pressed)
{
	// Clear any timers.
	GetWorld()->GetTimerManager().ClearTimer(crouchSettings.crouchTimerHandle);

	// Setup starting variables.
	crouchSettings.timeCrouchStarted = GetWorld()->GetTimeSeconds();
	crouchSettings.timeToCrouch = crouchSpeed;
	crouchSettings.startingHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

	// Crouch Action - Pressed
	if (pressed)
	{
		// Set crouched height.
		crouchSettings.endingHeight = GetCharacterMovement()->CrouchedHalfHeight;

		// Start new crouch timer lerp.
		FTimerDelegate crouchTimerDelegate;
		crouchTimerDelegate.BindUFunction(this, "crouchSettings");
		GetWorld()->GetTimerManager().SetTimer(crouchSettings.crouchTimerHandle, crouchTimerDelegate, 0.01f, true);
		GetCharacterMovement()->MaxWalkSpeed = startMaxWalkSpeed * crouchMultiplier;
	}
	// Crouch Action - Released
	else
	{
		// Set un-crouched height.
		crouchSettings.endingHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

		// Start new crouch timer lerp.
		FTimerDelegate crouchTimerDelegate;
		crouchTimerDelegate.BindUFunction(this, "crouchSettings");
		GetWorld()->GetTimerManager().SetTimer(crouchSettings.crouchTimerHandle, crouchTimerDelegate, 0.01f, true);
		GetCharacterMovement()->MaxWalkSpeed = startMaxWalkSpeed;
	}
}

void APortalCharacter::CrouchLerp()
{
	// Crouch or un-crouch the player.
	float crouchAlpha = (GetWorld()->GetTimeSeconds() - crouchSettings.timeCrouchStarted) / crouchSettings.timeToCrouch;
	float lastHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	float lerpedHalfHeight = FMath::Lerp(crouchSettings.startingHeight, crouchSettings.endingHeight, crouchAlpha);
	GetCapsuleComponent()->SetCapsuleHalfHeight(lerpedHalfHeight, false);
	GetCapsuleComponent()->AddWorldOffset(FVector(0.0f, 0.0f, lerpedHalfHeight - lastHeight), false, nullptr, ETeleportType::TeleportPhysics);

	// End timer.
	if (crouchAlpha >= 1.0f)
	{
		GetWorld()->GetTimerManager().ClearTimer(crouchSettings.crouchTimerHandle);
	}
}

void APortalCharacter::InteractAction(bool pressed)
{
	// Interact Action - Pressed
	if (pressed)
	{
		// Perform interact line trace and fill relevant information in character settings.
		// Doesn't support picking up through portals but the PortalTraceSingleExample can be used to achieve this.
		FHitResult interactHit;
		FVector startLocation = camera->GetComponentLocation();
		FVector endLocation = startLocation + (camera->GetForwardVector() * interactDistance);
		FCollisionObjectQueryParams collObjParams;
		collObjParams.AddObjectTypesToQuery(ECC_Interactable);
		FCollisionQueryParams collParams;
		collParams.AddIgnoredActor(this);
		bool wentThroughPortal = GetWorld()->LineTraceSingleByObjectType(interactHit, startLocation, endLocation, collObjParams, collParams);
		lastInteractHit = interactHit;

		// If something was hit grab it with the physics handle.
		if (interactHit.bBlockingHit)
		{
			// Create component to grab here.
			UPrimitiveComponent* primComp = interactHit.GetComponent();

			// Only pickup with physics handle if there is a component and it is simulating physics.
			if (primComp != nullptr && primComp->IsSimulatingPhysics())
			{
				originalRelativeLocation = camera->GetComponentTransform().InverseTransformPositionNoScale(primComp->GetComponentLocation());
				originalRelativeRotation = camera->GetComponentTransform().TransformRotation(primComp->GetComponentQuat()).Rotator();
				physicsHandle->GrabComponentAtLocationWithRotation(primComp, NAME_None, primComp->GetComponentLocation(), primComp->GetComponentRotation());
				primComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
			}
		}
	}
	// Interact Action - Released
	else ReleaseInteractable();
}

void APortalCharacter::ReleaseInteractable()
{
	// Drop physics handle comp.
	if (UPrimitiveComponent* primComp = physicsHandle->GetGrabbedComponent())
	{
		primComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
		physicsHandle->ReleaseComponent();
	}
	// Nothing needs releasing.
	else return;

	// Reset interact struct.
	lastInteractHit = FHitResult();
}

void APortalCharacter::FireAction(bool pressed)
{
	// Fire Pressed...
	if (pressed)
	{
		if (UPrimitiveComponent* grabbedComp = physicsHandle->GetGrabbedComponent())
		{
			ReleaseInteractable();
			grabbedComp->AddImpulse(25000.0f * camera->GetForwardVector());
		}
	}
	// Fire Released...
	else
	{
		// ....
	}
}

void APortalCharacter::Forward(float val)
{
	GetCharacterMovement()->AddInputVector(GetCapsuleComponent()->GetForwardVector() * val, false);
}

void APortalCharacter::Right(float val)
{
	GetCharacterMovement()->AddInputVector(GetCapsuleComponent()->GetRightVector() * val, false);
}

void APortalCharacter::Turn(float val)
{
}

void APortalCharacter::LookUp(float val)
{
}

bool APortalCharacter::IsGrounded()
{
	return !GetMovementComponent()->IsFalling();
}

void APortalCharacter::UpdatePhysicsHandleOffset()
{
	// Fix holding physics objects through portals...
}

void APortalCharacter::PortalTeleport(class APortal* targetPortal)
{
	// Start timer to return the player to the correct orientation relative to the world.
	orientationStart = GetWorld()->GetTimeSeconds();
	orientationAtStart = GetCapsuleComponent()->GetComponentRotation();
	orientation = true;
}

void APortalCharacter::ReturnToOrientation()
{
	float alpha = (GetWorld()->GetTimeSeconds() - orientationStart) / orientationCorrectionTime;
	FRotator currentOrientation = GetCapsuleComponent()->GetComponentRotation();
	FQuat target = FRotator(0.0f, currentOrientation.Yaw, 0.0f).Quaternion();
	FQuat newOrientation = FQuat::Slerp(currentOrientation.Quaternion(), target, alpha);
	GetCapsuleComponent()->SetWorldRotation(newOrientation.Rotator(), false, nullptr, ETeleportType::TeleportPhysics);
	if (alpha >= 1.0f) orientation = false;
}

void APortalCharacter::UpdateMouseMovement(float deltaTime)
{
	// Get current mouse axis values.
	float mouseX = InputComponent->GetAxisValue("Turn");
	float mouseY = InputComponent->GetAxisValue("LookUp");

	// Camera movement pitch.
	FRotator newRelativeCameraRot = camera->GetRelativeTransform().Rotator();
	newRelativeCameraRot.Pitch += (mouseY * mouseSpeed);
	newRelativeCameraRot.Yaw = 0.0f;
	newRelativeCameraRot.Roll = 0.0f;
	newRelativeCameraRot.Pitch = FMath::Clamp(newRelativeCameraRot.Pitch, -85.f, 85.f);
	camera->SetRelativeRotation(newRelativeCameraRot);

	// Camera movement yaw.
	GetCapsuleComponent()->AddLocalRotation(FRotator(0.0f, (mouseX * mouseSpeed), 0.0f));
}

bool APortalCharacter::PortalTraceSingleExample(struct FHitResult& outHit, const FVector& start, const FVector& end, ECollisionChannel objectType, int maxPortalTrace)
{
	// Perform first trace.
	bool beenThroughPortal = false;
	FCollisionObjectQueryParams collObjParams;
	collObjParams.AddObjectTypesToQuery(ECC_Portal);
	collObjParams.AddObjectTypesToQuery(objectType);
	FCollisionQueryParams collParams;
	collParams.AddIgnoredActor(this);
	GetWorld()->LineTraceSingleByObjectType(outHit, start, end, collObjParams, collParams);

	// If a portal was hit perform another trace from said portal with converted start and end positions.
	if (outHit.bBlockingHit)
	{
		if (APortal* wasPortal = Cast<APortal>(outHit.Actor))
		{
			beenThroughPortal = true;
			APortal* lastPortal = wasPortal;
			for (int i = 0; i < maxPortalTrace; i++)
			{
				FVector newStart = wasPortal->ConvertLocationToPortal(outHit.Location, wasPortal, wasPortal->pTargetPortal);
				FVector newEnd = wasPortal->ConvertLocationToPortal(end, wasPortal, wasPortal->pTargetPortal);
				outHit = FHitResult();

				// Ignore target portal to avoid returning its blocking hit result.
				collParams.AddIgnoredActor(lastPortal->targetPortal);

				// Line trace from portal exit.
				GetWorld()->LineTraceSingleByObjectType(outHit, newStart, newEnd, collObjParams, collParams);

				// If another portal was hit continue otherwise exit.
				if (!Cast<APortal>(outHit.Actor)) return outHit.bBlockingHit;
			}
		}
	}

	// Return if the trace passed through a portal in the world.
	return beenThroughPortal;
}