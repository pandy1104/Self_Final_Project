// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Code_MainMenu.h"
#include "Code_MainMenuPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API ACode_MainMenuPlayerController : public APlayerController
{
	GENERATED_BODY()
	

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<UCode_MainMenu> MenuClass;
	UCode_MainMenu* MenuInstance;
};
