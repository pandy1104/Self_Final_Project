// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_FlashLight.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/SphereComponent.h"
#include "Code_BasePlayer.h"

ACode_FlashLight::ACode_FlashLight()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	FlashLightMesh = CreateDefaultSubobject<UStaticMeshComponent>("FlashLightMesh");
	SetRootComponent(FlashLightMesh);

	SpotLight = CreateDefaultSubobject<USpotLightComponent>("SpotLight");
	SpotLight->SetupAttachment(FlashLightMesh);
	SpotLight->SetIntensity(6000.f);
	SpotLight->SetInnerConeAngle(10.f);
	SpotLight->SetOuterConeAngle(20.f);
	SpotLight->SetLightColor(FLinearColor::White);
	SpotLight->SetVisibility(isOn);

	InteractCollision = CreateDefaultSubobject<USphereComponent>("Collision");
	InteractCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	InteractCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	InteractCollision->SetCollisionResponseToAllChannels(ECR_Ignore);
	InteractCollision->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	InteractCollision->SetupAttachment(FlashLightMesh);
}

bool ACode_FlashLight::GetFlashLightStatus()
{
	return isOn;
}

void ACode_FlashLight::ToggleLight()
{
	if (isOn) {
		SpotLight->SetVisibility(false);
	}
	else {
		SpotLight->SetVisibility(true);
	}
	isOn = !isOn;
}

void ACode_FlashLight::BeginPlay()
{
	Super::BeginPlay();

	InteractCollision->OnComponentBeginOverlap.AddDynamic(this, &ACode_FlashLight::OnPlayerEnter);
	InteractCollision->OnComponentEndOverlap.AddDynamic(this, &ACode_FlashLight::OnPlayerExit);
}

void ACode_FlashLight::OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ACode_BasePlayer* Player = Cast<ACode_BasePlayer>(OtherActor))
	{
		Player->SetPickUpObject(this);
	}
}

void ACode_FlashLight::OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (ACode_BasePlayer* Player = Cast<ACode_BasePlayer>(OtherActor))
	{
		Player->SetPickUpObject(nullptr);
	}
}

void ACode_FlashLight::Use_Implementation()
{
	ToggleLight();
}
