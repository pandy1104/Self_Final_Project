// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_ReadNoteWidget.h"
#include "Components/Image.h"
#include "Components/Button.h"

void UCode_ReadNoteWidget::NativeConstruct()
{
    CloseButton->OnClicked.AddDynamic(this, &UCode_ReadNoteWidget::OnClose);
}

void UCode_ReadNoteWidget::OnClose()
{
    RemoveFromParent();

    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        PC->SetInputMode(FInputModeGameOnly());
        PC->SetShowMouseCursor(false);
        PC->SetPause(false);
    }
}

void UCode_ReadNoteWidget::SetImage(UTexture2D* NoteDisplay)
{
    Note->SetBrushFromTexture(NoteDisplay);
}
