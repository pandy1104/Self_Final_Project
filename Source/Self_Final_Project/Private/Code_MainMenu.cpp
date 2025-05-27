// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_MainMenu.h"
#include "Code_GameInstance.h"
#include "Code_ButtonWithText.h"
#include "Animation/WidgetAnimation.h"

void UCode_MainMenu::NativeConstruct()
{
	Super::NativeConstruct();
	if (MainMenuAnimation) {
		PlayAnimation(MainMenuAnimation);
	}
	UCode_GameInstance* gameInstance = Cast<UCode_GameInstance>(GetGameInstance()); 
	if (gameInstance) {
		if (StartGameButton && QuitGameButton) {
			StartGameButton->ClickEventDelegate.AddDynamic(gameInstance, &UCode_GameInstance::LoadFirstLevel);
			QuitGameButton->ClickEventDelegate.AddDynamic(gameInstance, &UCode_GameInstance::QuitTheGame);
		}
	}
}
	