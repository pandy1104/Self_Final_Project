// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_MainMenuGameMode.h"
#include "Kismet/GameplayStatics.h"

void ACode_MainMenuGameMode::BeginPlay()
{
	Super::BeginPlay();
	if (BackgroundMusic)
	{
		UGameplayStatics::PlaySound2D(this, BackgroundMusic);
	}
}
