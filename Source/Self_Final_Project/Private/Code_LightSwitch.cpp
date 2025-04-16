// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_LightSwitch.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

ACode_LightSwitch::ACode_LightSwitch()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	SwitchFrame = CreateDefaultSubobject<UStaticMeshComponent>("SwitchFrame");
	SetRootComponent(SwitchFrame);

	SwitchMesh = CreateDefaultSubobject<UStaticMeshComponent>("Switch");
	SwitchMesh->SetupAttachment(SwitchFrame);

	InteractCollision = CreateDefaultSubobject<UBoxComponent>("Collision");
	InteractCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	InteractCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	InteractCollision->SetCollisionResponseToAllChannels(ECR_Ignore);
	InteractCollision->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	InteractCollision->SetupAttachment(SwitchMesh);
}
