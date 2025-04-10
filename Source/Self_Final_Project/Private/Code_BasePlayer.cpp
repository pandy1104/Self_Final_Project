// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_BasePlayer.h"

// Sets default values
ACode_BasePlayer::ACode_BasePlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


}

// Called when the game starts or when spawned
void ACode_BasePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACode_BasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

