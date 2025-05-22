// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Code_InvetoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SELF_FINAL_PROJECT_API UCode_InvetoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCode_InvetoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int InventorySize = 4;

	int ActiveSlot;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	TArray<ACode_PickupAbleObject*> Inventory;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void PickUp(ACode_PickupAbleObject* Item);
	UFUNCTION()
	void Drop();
	UFUNCTION()
	void SetActiveSlot(int Slot);
	UFUNCTION()
	ACode_PickupAbleObject* GetActiveItem();
	int GetActiveSlot();
	UTexture2D* GetItemIcon(int slot);
	int GetSize();
	TArray<ACode_PickupAbleObject*> GetInventory();
};
