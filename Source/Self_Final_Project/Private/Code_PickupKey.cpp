// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_PickupKey.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Code_BasePlayer.h"


ACode_PickupKey::ACode_PickupKey()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;
	
	KeyMesh = CreateDefaultSubobject<UStaticMeshComponent>("KeyMesh");
	SetRootComponent(KeyMesh);
	KeyMesh->SetSimulatePhysics(true);
	KeyMesh->SetEnableGravity(true);
	KeyMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	KeyMesh->SetCollisionResponseToAllChannels(ECR_Block);
	KeyMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

}

void ACode_PickupKey::BeginPlay()
{
	Super::BeginPlay();
		FString FinalName = Name.ToString() + " - " + KeyName.ToString();
		Name = FName(*FinalName);
}

