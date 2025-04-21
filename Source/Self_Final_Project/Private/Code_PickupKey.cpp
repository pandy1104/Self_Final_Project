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

	InteractCollision = CreateDefaultSubobject<USphereComponent>("Collision");
	InteractCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	InteractCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	InteractCollision->SetCollisionResponseToAllChannels(ECR_Ignore);
	InteractCollision->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	InteractCollision->SetupAttachment(KeyMesh);

}

void ACode_PickupKey::BeginPlay()
{
	Super::BeginPlay();

	InteractCollision->OnComponentBeginOverlap.AddDynamic(this, &ACode_PickupKey::OnPlayerEnter);
	InteractCollision->OnComponentEndOverlap.AddDynamic(this, &ACode_PickupKey::OnPlayerExit);
}

void ACode_PickupKey::OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ACode_BasePlayer* Player = Cast<ACode_BasePlayer>(OtherActor))
	{
		Player->SetPickUpObject(this);
	}
}

void ACode_PickupKey::OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (ACode_BasePlayer* Player = Cast<ACode_BasePlayer>(OtherActor))
	{
		Player->SetPickUpObject(nullptr);
	}
}
