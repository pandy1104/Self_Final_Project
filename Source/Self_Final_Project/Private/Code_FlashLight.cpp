// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_FlashLight.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Code_BasePlayer.h"

ACode_FlashLight::ACode_FlashLight()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	FlashLightMesh = CreateDefaultSubobject<UStaticMeshComponent>("FlashLightMesh");
	SetRootComponent(FlashLightMesh);
	FlashLightMesh->SetSimulatePhysics(true);    
	FlashLightMesh->SetEnableGravity(true);
	FlashLightMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	FlashLightMesh->SetCollisionResponseToAllChannels(ECR_Block);
	FlashLightMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
}

bool ACode_FlashLight::GetFlashLightStatus()
{
	return isOn;
}

void ACode_FlashLight::ToggleLight()
{
	ACode_BasePlayer* Player = Cast<ACode_BasePlayer>(GetOwner());
	if (Player) {
		Player->SetFlashLightStatus(isOn);
		isOn = !isOn;
	}
	
}

void ACode_FlashLight::BeginPlay()
{
	Super::BeginPlay();
}


void ACode_FlashLight::Use_Implementation()
{
	ToggleLight();
}
