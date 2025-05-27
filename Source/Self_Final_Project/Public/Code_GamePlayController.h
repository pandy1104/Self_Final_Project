// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Code_GamePlayController.generated.h"

/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API ACode_GamePlayController : public APlayerController
{
	GENERATED_BODY()
	

public:
	virtual void BeginPlay() override;

};
