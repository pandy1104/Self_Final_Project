// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_GameInstance.h"


void UCode_GameInstance::LoadFirstLevel()
{
	LoadLevelSafe(LevelIndex); 
}

void UCode_GameInstance::QuitTheGame()
{
	GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
}

void UCode_GameInstance::LoadCurrentLevel()
{
	LoadLevelSafe(CurrLevelIndex);
}

void UCode_GameInstance::LoadMainMenu()
{
	LoadLevelSafe(0);
}

void UCode_GameInstance::LoadLevelSafe(int FirstLevelIndex)
{
	if (GameLevels.IsValidIndex(FirstLevelIndex)) {
		CurrLevelIndex = FirstLevelIndex;
		UWorld* World = GetWorld();
		FString LevelName = GameLevels[FirstLevelIndex].ToString();
		GEngine->SetClientTravel(World, *LevelName, ETravelType::TRAVEL_Absolute);
	}
}
