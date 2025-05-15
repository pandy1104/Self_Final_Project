// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_LightSwitch.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Code_LightBulb.h"
#include "Code_BasePlayer.h"
#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"
#include "Components/AudioComponent.h"

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
	InteractCollision->SetupAttachment(SwitchFrame);

	AudioComponent = CreateDefaultSubobject<UAudioComponent>("AudioComponent");
	AudioComponent->SetupAttachment(SwitchFrame);
}

void ACode_LightSwitch::BeginPlay()
{
	InteractCollision->OnComponentBeginOverlap.AddDynamic(this, &ACode_LightSwitch::OnPlayerEnter);
	InteractCollision->OnComponentEndOverlap.AddDynamic(this, &ACode_LightSwitch::OnPlayerExit);


	OffRotation = SwitchMesh->GetRelativeRotation();
	OnRotation = OffRotation + FRotator(-100.f, 0.f, 0.f);

	if (ConnectedBulb) {
		if (ConnectedBulb->GetLightStatus()) {
			SwitchMesh->SetRelativeRotation(OnRotation);
		}
		else {
			SwitchMesh->SetRelativeRotation(OffRotation);
		}
	}
}

void ACode_LightSwitch::OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ACode_BasePlayer* Player = Cast<ACode_BasePlayer>(OtherActor))
	{
		Player->SetInteractingObject(this);
	}
}

void ACode_LightSwitch::OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (ACode_BasePlayer* Player = Cast<ACode_BasePlayer>(OtherActor))
	{
		Player->SetInteractingObject(nullptr);
	}
}

void ACode_LightSwitch::Interact_Implementation()
{
	if (ConnectedBulb) {
		if (ConnectedBulb->GetLightStatus()) {
			SwitchMesh->SetRelativeRotation(OffRotation);
		}
		else {
			SwitchMesh->SetRelativeRotation(OnRotation);
		}
		if (SfxSound && AudioComponent) {
			AudioComponent->SetSound(SfxSound);
			AudioComponent->Play();
		}
		ConnectedBulb->ToggleLight(); 
		

	}
	
}
