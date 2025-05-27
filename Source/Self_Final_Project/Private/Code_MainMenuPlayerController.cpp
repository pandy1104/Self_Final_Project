// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_MainMenuPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Code_MainMenu.h"

void ACode_MainMenuPlayerController::BeginPlay()
{
	MenuInstance = CreateWidget<UCode_MainMenu>(this, MenuClass);
	if (MenuInstance) {
		MenuInstance->AddToViewport(); 
		FInputModeUIOnly InputMode; 
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways); 
		InputMode.SetWidgetToFocus(MenuInstance->TakeWidget()); 
		SetInputMode(InputMode); 
		bShowMouseCursor = true;
	}
}
