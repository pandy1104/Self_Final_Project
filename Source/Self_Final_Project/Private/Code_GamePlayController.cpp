// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_GamePlayController.h"

void ACode_GamePlayController::BeginPlay()
{
	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}
