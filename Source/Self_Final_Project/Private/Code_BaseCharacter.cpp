// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_BaseCharacter.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ACode_BaseCharacter::ACode_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bStartWithTickEnabled = false;
	PrimaryActorTick.bCanEverTick = true;
	GetMesh()->SetRelativeRotation(FRotator(0., 270., 0.));
	GetMesh()->SetRelativeLocation(FVector(0., 0., -90.));
}

// Called when the game starts or when spawned
void ACode_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACode_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACode_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

