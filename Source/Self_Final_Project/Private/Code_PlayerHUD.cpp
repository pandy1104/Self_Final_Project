// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_PlayerHUD.h"
#include "Components/ScaleBox.h"
#include "Components/Image.h"
#include "Components/EditableText.h"

void UCode_PlayerHUD::ScaleActiveSlot(int ActiveIndex)
{
    TArray<UScaleBox*> Slots = { ScaleBox1, ScaleBox2, ScaleBox3, ScaleBox4 };

    for (int i = 0; i < Slots.Num(); ++i)
    {
        float scale = 1.5f;
        if (i == ActiveIndex) {
            scale = 3.0f;
        }
        if (Slots[i])
        {
            Slots[i]->SetRenderScale(FVector2D(scale, scale));
        }
    }
}

void UCode_PlayerHUD::HideText()
{
    ItemName->SetVisibility(ESlateVisibility::Hidden);
}

void UCode_PlayerHUD::NativeConstruct()
{
    Super::NativeConstruct();
    TArray<UScaleBox*> Slots = { ScaleBox1, ScaleBox2, ScaleBox3, ScaleBox4 };
    TArray<UImage*> SlotImages = { Icon1, Icon2, Icon3, Icon4 };
    for (int i = 0; i < Slots.Num(); ++i)
    {
        float scale = 1.5f;
        Slots[i]->SetRenderScale(FVector2D(scale, scale));
        SlotImages[i]->SetVisibility(ESlateVisibility::Hidden);
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

void UCode_PlayerHUD::SetItemName(FText Name)
{
    ItemName->SetVisibility(ESlateVisibility::Visible);
    ItemName->SetText(Name);
    GetWorld()->GetTimerManager().SetTimer(HideTextTimerHandle, this, &UCode_PlayerHUD::HideText, 1.0f, false);
}
