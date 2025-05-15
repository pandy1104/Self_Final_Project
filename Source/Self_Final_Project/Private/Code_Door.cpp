// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_Door.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"
#include "Components/BoxComponent.h"
#include "Code_BasePlayer.h"
#include "Components/AudioComponent.h"

// Sets default values
ACode_Door::ACode_Door()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	DoorFrameMesh = CreateDefaultSubobject<UStaticMeshComponent>("DoorFrame");
	SetRootComponent(DoorFrameMesh);
	
	DoorJoint = CreateDefaultSubobject<UStaticMeshComponent>("Joint");
	DoorJoint->SetupAttachment(DoorFrameMesh);

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>("Door");
	DoorMesh->SetupAttachment(DoorJoint);

	DoorTimeline = CreateDefaultSubobject<UTimelineComponent>("TimelineComponent");

	InteractCollision = CreateDefaultSubobject<UBoxComponent>("Collision");
	InteractCollision->SetRelativeLocation(FVector(0.f, 10.f, 120.f));
	InteractCollision->SetWorldScale3D(FVector(1.5f,2.f, 3.5f));
	InteractCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	InteractCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	InteractCollision->SetCollisionResponseToAllChannels(ECR_Ignore);
	InteractCollision->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	InteractCollision->SetupAttachment(DoorFrameMesh);

	AudioComponent = CreateDefaultSubobject<UAudioComponent>("AudioComponent");
	AudioComponent->SetupAttachment(DoorFrameMesh);
}

// Called when the game starts or when spawned
void ACode_Door::BeginPlay()
{
	Super::BeginPlay();

	InteractCollision->OnComponentBeginOverlap.AddDynamic(this, &ACode_Door::OnPlayerEnter);
	InteractCollision->OnComponentEndOverlap.AddDynamic(this, &ACode_Door::OnPlayerExit);

	if (IsValid(DoorCurve)) {
		ClosedRotation = DoorJoint->GetRelativeRotation();
		OpenRotation = ClosedRotation + FRotator(0.f, 110.f, 0.f);


		//delegate
		FOnTimelineFloat TimelineUpdateDelegate;
		TimelineUpdateDelegate.BindUFunction(this, "HandleTimelineProgress");
		DoorTimeline->AddInterpFloat(DoorCurve, TimelineUpdateDelegate);
		DoorTimeline->SetTimelineLengthMode(ETimelineLengthMode::TL_LastKeyFrame);
	}
}

void ACode_Door::HandleTimelineProgress(float Value)
{
	FRotator Rotation = FMath::Lerp(ClosedRotation, OpenRotation, Value);
	DoorJoint->SetRelativeRotation(Rotation);
}

void ACode_Door::OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ACode_BasePlayer* Player = Cast<ACode_BasePlayer>(OtherActor))
	{
		Player->SetInteractingObject(this);
	}
}

void ACode_Door::OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (ACode_BasePlayer* Player = Cast<ACode_BasePlayer>(OtherActor))
	{
		Player->SetInteractingObject(nullptr);
	}
}

// Called every frame
void ACode_Door::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACode_Door::ToggleDoor()
{
	if (isOpen)
	{
		DoorTimeline->Reverse();
	}
	else
	{
		DoorTimeline->Play();
	}
	isOpen = !isOpen;
}

void ACode_Door::Interact_Implementation()
{
	if (SfxSound && AudioComponent) {
		AudioComponent->SetSound(SfxSound);
		AudioComponent->Play();
	}
	ToggleDoor();
}

