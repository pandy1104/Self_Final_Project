// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_InteractableObject.h"

// Sets default values
ACode_InteractableObject::ACode_InteractableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACode_InteractableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACode_InteractableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACode_InteractableObject::Interact_Implementation()
{
}

