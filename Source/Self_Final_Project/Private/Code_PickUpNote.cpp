// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_PickUpNote.h"
#include "Components/StaticMeshComponent.h"

#include <Kismet/GameplayStatics.h>

ACode_PickUpNote::ACode_PickUpNote()
{
	NoteMesh = CreateDefaultSubobject<UStaticMeshComponent>("NoteMesh");
	SetRootComponent(NoteMesh);
	NoteMesh->SetSimulatePhysics(true);
	NoteMesh->SetEnableGravity(true);
	NoteMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	NoteMesh->SetCollisionResponseToAllChannels(ECR_Block);
	NoteMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
}

void ACode_PickUpNote::Use_Implementation()
{

    if (!UIClass) return;

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC) {
        NoteUI = CreateWidget<UCode_ReadNoteWidget>(PC, UIClass);


        if (NoteUI)
        {
            NoteUI->SetImage(NoteImage);
            NoteUI->AddToViewport();
            PC->SetShowMouseCursor(true);
            FInputModeGameAndUI InputMode;  
            InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways); 
            PC->SetInputMode(InputMode); 
            PC->SetPause(true);
        }
    }

  
}
