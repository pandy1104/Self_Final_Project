// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Code_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API UCode_GameInstance : public UGameInstance
{
	GENERATED_BODY()
	

public:

	UFUNCTION()
	void LoadFirstLevel();
	UFUNCTION()
	void QuitTheGame();
	UFUNCTION()
	void LoadCurrentLevel();
	UFUNCTION()
	void LoadMainMenu();
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int LevelIndex;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<FName> GameLevels;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int CurrLevelIndex;



private:
	void LoadLevelSafe(int FirstLevelIndex);
};
