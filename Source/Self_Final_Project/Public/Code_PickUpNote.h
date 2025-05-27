// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Code_PickupAbleObject.h"
#include "Code_ReadNoteWidget.h"
#include "Code_PickUpNote.generated.h"

/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API ACode_PickUpNote : public ACode_PickupAbleObject
{
	GENERATED_BODY()

	ACode_PickUpNote();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* NoteMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* NoteImage;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UCode_ReadNoteWidget> UIClass;
	class UCode_ReadNoteWidget* NoteUI;
public:
	virtual void Use_Implementation() override;

};
