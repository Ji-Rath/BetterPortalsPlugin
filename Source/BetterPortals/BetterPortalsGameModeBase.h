// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "Portal.h"
#include "PortalPawn.h"
#include "GameFramework/GameModeBase.h"
#include "BetterPortalsGameModeBase.generated.h"

/* Logging category for this class. */
DECLARE_LOG_CATEGORY_EXTERN(LogPortalGamemode, Log, All);

/* Manages updating portals and when to set them active and inactive. */
UCLASS()
class BETTERPORTALS_API ABetterPortalsGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/* Should the game mode class activate/deactivate portals based on player location and distance. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portal")
	bool performantPortals;

	/* Should check the direction of the portals relative to the way the player is looking. 
	 * NOTE: Doesn't work that well but with more work relative to how far right the player is its possible to improve this. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portal")
	bool checkDirection;

	/* Check for portals being rendered on screen every portalUpdateRate seconds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portal")
	float portalUpdateRate;

	/* Max distance to render a portal at. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Portal")
	float maxPortalRenderDistance;

	/* Pointers to keep track of which portals to update. */
	class APortalPawn* pawn;

	/* Timer handle for the portals udpate function. */
	FTimerHandle portalsTimer;

public:

	/* Constructor. */
	ABetterPortalsGameModeBase();

	/* Function to update portals in the world based off player location relative to each of them. */
	UFUNCTION(Category = "Portals")
	void UpdatePortals();
	
protected:

	/* Level start. */
	virtual void BeginPlay() override;

	/* Frame. */
	virtual void Tick(float DeltaTime) override;
};
