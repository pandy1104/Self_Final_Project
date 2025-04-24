// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Code_PlayerHUD.generated.h"


/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API UCode_PlayerHUD : public UUserWidget
{
	GENERATED_BODY()
	
	
protected:
    UPROPERTY(meta = (BindWidget))
    class UScaleBox* ScaleBox1;

    UPROPERTY(meta = (BindWidget))
    class UImage* Icon1;

    UPROPERTY(meta = (BindWidget))
    class UScaleBox* ScaleBox2;

    UPROPERTY(meta = (BindWidget))
    class UImage* Icon2;

    UPROPERTY(meta = (BindWidget))
    class UScaleBox* ScaleBox3;

    UPROPERTY(meta = (BindWidget))
    class UImage* Icon3;

    UPROPERTY(meta = (BindWidget))
    class UScaleBox* ScaleBox4;

    UPROPERTY(meta = (BindWidget))
    class UImage* Icon4;


private:
    void ScaleActiveSlot(int ActiveIndex);

public:
    void SetActiveSlot(int ActiveIndex);
    void SetSlotIcon(int SlotIndex, UTexture2D* Icon);
};
