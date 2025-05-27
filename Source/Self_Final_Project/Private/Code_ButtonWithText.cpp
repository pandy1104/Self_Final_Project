// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_ButtonWithText.h"
#include "Components/Button.h"	
#include "Components/TextBlock.h"

void UCode_ButtonWithText::NativePreConstruct()
{
	Super::NativePreConstruct();
	Information->SetText(Info);
}

void UCode_ButtonWithText::NativeConstruct()
{
	BackgroundButton->OnClicked.AddDynamic(this, &UCode_ButtonWithText::HandleClickButton);
}

void UCode_ButtonWithText::HandleClickButton()
{
	ClickEventDelegate.Broadcast();
}
