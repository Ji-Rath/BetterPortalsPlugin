// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PortalCharacter.generated.h"

/* Logging category for this class. */
DECLARE_LOG_CATEGORY_EXTERN(LogPortalCharacter, Log, All);

UCLASS()
class BETTERPORTALS_API APortalCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	/* Camera scene loc. */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Movement")
	class USceneComponent* cameraHolder;

	/* Game/Player Camera. */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Movement")
	class UCameraComponent* camera;

	/* Physics handle component to hold physics object in-front of player. */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Movement")
	class UPhysicsHandleComponent* physicsHandle;

	/* Distance player can interact with objects from. */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Movement")
	float interactDistance;

	/* Time to take re orientating character. */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Movement")
	float orientationCorrectionTime;

	// Last frames camera location in the world.
	FVector lastLocation;

private:
	FVector originalRelativeLocation;
	FVector lastDirection;
	FRotator originalRelativeRotation;
	FRotator orientationAtStart; // Rotation of the capsule at the start of re-orientation.
	FHitResult lastInteractHit;
	float orientationStart; // Start time of the orientation update func.
	bool orientation;	

	FVector currLinVel;
	FVector currRotVel;

protected:

	/** Level start. */
	virtual void BeginPlay() override;

public:	

	/** Constructor */
	APortalCharacter();

	/** Frame. */
	virtual void Tick(float DeltaTime) override;

	/** Setup player input. */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/* ========== Movement input functions. ============== */

	/* Interact action. */
	template<bool pressed> void InteractAction() { InteractAction(pressed); }
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void InteractAction(bool pressed);

	/* Release anything grabbed with the physics handle. */
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void ReleaseInteractable();

	/* Fire action. */
	template<bool pressed> void FireAction() { FireAction(pressed); }
	UFUNCTION(Category = "Movement")
	void FireAction(bool pressed);

	/* Perform ground check every frame to check if the player is actually grounded. */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Movement")
	bool IsGrounded();

	/* Updates the offset from the player that a held physics object should be at. Checks if this offset needs translating to the other side of a portal.
	 * Does work but not in use just decided to release the component if teleported through a portal. */
	void UpdatePhysicsHandleOffset();

	/* Ran from portal to a character when teleporting. Do any extra work in the player class after teleporting. */
	void PortalTeleport(class APortal* targetPortal);

	/* Timer function to return the player to the correct orientation after a teleport event from a portal class. */
	UFUNCTION(Category = "Movement")
	void ReturnToOrientation();

	UFUNCTION(Category = "Movement")
	void UpdateMouseMovement(float deltaTime);

	/* An example function showing how to set up traces with portals with a recursion amount which is how many times it can go through a portal.
	 * Returns if it went through a portal during the trace. */
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	bool PortalTraceSingleExample(struct FHitResult& outHit, const FVector& start, const FVector& end, ECollisionChannel objectType, int maxPortalTrace);

};
