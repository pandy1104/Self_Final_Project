// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_PlayerHUD.h"
#include "Components/ScaleBox.h"
#include "Components/Image.h"

void UCode_PlayerHUD::ScaleActiveSlot(int ActiveIndex)
{
    TArray<UScaleBox*> Slots = { ScaleBox1, ScaleBox2, ScaleBox3, ScaleBox4 };

    for (int i = 0; i < Slots.Num(); ++i)
    {
        float scale = 1.0f;
        if (i == ActiveIndex) {
            scale = 1.25f;
        }
        if (Slots[i])
        {
            Slots[i]->SetRenderScale(FVector2D(scale, scale));
        }
    }
}

void UCode_PlayerHUD::SetActiveSlot(int ActiveIndex)
{
	ScaleActiveSlot(ActiveIndex);
}

void UCode_PlayerHUD::SetSlotIcon(int SlotIndex, UTexture2D* Icon)
{
    TArray<UImage*> SlotImages = { Icon1, Icon2, Icon3, Icon4 };

    if (!SlotImages.IsValidIndex(SlotIndex) || !SlotImages[SlotIndex])
        return;


    if (Icon)
    {
        SlotImages[SlotIndex]->SetBrushFromTexture(Icon);
        SlotImages[SlotIndex]->SetVisibility(ESlateVisibility::Visible);
    }
    else
    {
        SlotImages[SlotIndex]->SetVisibility(ESlateVisibility::Hidden);
    }
}
