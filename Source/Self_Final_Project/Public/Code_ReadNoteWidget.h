// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Code_ReadNoteWidget.generated.h"

/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API UCode_ReadNoteWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected: 
	UPROPERTY(meta = (BindWidget))
	class UImage* Note;
	UPROPERTY(meta = (BindWidget))
	class UButton* CloseButton;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* WarpIn;

	
public:
	virtual void NativeConstruct() override;
	UFUNCTION()
	void OnClose();
	void SetImage(UTexture2D* NoteDisplay);
};
