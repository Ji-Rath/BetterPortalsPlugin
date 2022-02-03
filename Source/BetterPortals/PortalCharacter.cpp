// Fill out your copyright notice in the Description page of Project Settings.

#include "PortalCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/EngineTypes.h"
#include "TimerManager.h"
#include "Portal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

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
	interactDistance = 2000.0f;
	orientationCorrectionTime = 1.8f;
}

void APortalCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APortalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Update orientation if need be.
	// NOTE: Apply this before any user input that will apply movement through rotation...
	if (orientation) ReturnToOrientation();

	UpdateMouseMovement(DeltaTime);

	// Update physics handle location if something is being held.
	if (physicsHandle && physicsHandle->GetGrabbedComponent() != nullptr)
	{
		// Update handle offset.
		FVector newLoc = camera->GetComponentTransform().TransformPositionNoScale(originalRelativeLocation);
		FRotator newRot = camera->GetComponentTransform().TransformRotation(originalRelativeRotation.Quaternion()).Rotator();
		physicsHandle->SetTargetLocationAndRotation(newLoc, newRot);
	}

	// Update movement velocity.
	currLinVel = GetCapsuleComponent()->GetPhysicsLinearVelocity();
	currRotVel = GetCapsuleComponent()->GetPhysicsAngularVelocityInDegrees();

	if (camera)
	{
		// Update last location.
		lastLocation = camera->GetComponentLocation();
	}
}

void APortalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Setup action bindings.
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APortalCharacter::InteractAction<true>);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &APortalCharacter::InteractAction<false>);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APortalCharacter::FireAction<true>);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &APortalCharacter::FireAction<false>);
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
	const FRotator ControlRotation = GetController()->GetControlRotation();

	// Camera movement pitch.
	if (!camera) { return; }
	camera->SetRelativeRotation(ControlRotation);
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
		if (APortal* wasPortal = Cast<APortal>(outHit.GetActor()))
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
				if (!Cast<APortal>(outHit.GetActor())) return outHit.bBlockingHit;
			}
		}
	}

	// Return if the trace passed through a portal in the world.
	return beenThroughPortal;
}