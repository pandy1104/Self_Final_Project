// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_LightBulb.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SpotLightComponent.h"

// Sets default values
ACode_LightBulb::ACode_LightBulb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	HangerMesh = CreateDefaultSubobject<UStaticMeshComponent>("Hanger");
	SetRootComponent(HangerMesh);

	BulbMesh = CreateDefaultSubobject<UStaticMeshComponent>("Bulb");
	BulbMesh->SetupAttachment(HangerMesh);

	SpotLight = CreateDefaultSubobject<USpotLightComponent>("SpotLight");
	SpotLight->SetupAttachment(HangerMesh);
	SpotLight->SetIntensity(5000.f);
	SpotLight->SetInnerConeAngle(40.f);
	SpotLight->SetOuterConeAngle(100.f);
	SpotLight->SetLightColor(FLinearColor::White);
	SpotLight->SetVisibility(true);
}

// Called when the game starts or when spawned
void ACode_LightBulb::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACode_LightBulb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACode_LightBulb::ToggleLight()
{
	if (isOn) {
		SpotLight->SetVisibility(false);
	}
	else {
		SpotLight->SetVisibility(true);
	}
	isOn = !isOn;
}

