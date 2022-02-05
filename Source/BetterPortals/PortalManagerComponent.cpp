// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalManagerComponent.h"

#include <string>

#include "EngineUtils.h"
#include "Portal.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"


// Sets default values for this component's properties
UPortalManagerComponent::UPortalManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPortalManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	
	SetupPortals();
}


// Called every frame
void UPortalManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                            FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPortalManagerComponent::SetupPortals()
{
	PortalPPDynamic = UMaterialInstanceDynamic::Create(PortalPPMaterial, this);
	int StencilValue = 1;
	for (TActorIterator<AActor> portal(GetWorld(), APortal::StaticClass()); portal; ++portal)
	{
		APortal* foundPortal = Cast<APortal>(*portal);

		FString PortalString = FString("Portal");
		PortalString.AppendInt(StencilValue);
		FName PortalName = FName(PortalString);
		
		UTexture* PortalTexture = foundPortal->renderTarget;
		PortalPPDynamic->SetTextureParameterValue(PortalName, PortalTexture);
		foundPortal->portalMesh->CustomDepthStencilValue = StencilValue;
		StencilValue++;
	}
}

