// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Code_MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API UCode_MainMenu : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UCode_ButtonWithText* StartGameButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UCode_ButtonWithText* SettingButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UCode_ButtonWithText* QuitGameButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* MainMenuAnimation;

public:
	virtual void NativeConstruct() override;
};
