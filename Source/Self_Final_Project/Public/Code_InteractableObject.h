// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Code_Interactable_Interface.h"
#include "GameFramework/Actor.h"
#include "Code_InteractableObject.generated.h"

UCLASS()
class SELF_FINAL_PROJECT_API ACode_InteractableObject : public AActor, public ICode_Interactable_Interface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACode_InteractableObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact_Implementation() override;
};
