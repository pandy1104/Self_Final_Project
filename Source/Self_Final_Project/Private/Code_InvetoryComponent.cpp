// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_InvetoryComponent.h"
#include "Code_PickupAbleObject.h"

// Sets default values for this component's properties
UCode_InvetoryComponent::UCode_InvetoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	Inventory.SetNum(InventorySize);
}


// Called when the game starts
void UCode_InvetoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCode_InvetoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCode_InvetoryComponent::PickUp(ACode_PickupAbleObject* Item)
{
	for (size_t i = 0; i < Inventory.Num(); i++)
	{
		if (!Inventory[i]) {
			Inventory[i] = Item;
			Item->SetActorHiddenInGame(true);
			Item->SetActorEnableCollision(false);
			return;
		}
	}
}

void UCode_InvetoryComponent::Drop()
{
	if (Inventory.IsValidIndex(ActiveSlot) && Inventory[ActiveSlot]) {
		ACode_PickupAbleObject* Item = Inventory[ActiveSlot];
		Item->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		Item->SetActorHiddenInGame(false);
		Item->SetActorEnableCollision(true);
		Item->SetActorLocation(GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * 25.0f);
		Inventory[ActiveSlot] = nullptr;
	}
}

void UCode_InvetoryComponent::SetActiveSlot(int Slot)
{

	if (Inventory.IsValidIndex(ActiveSlot) && Inventory[ActiveSlot])
	{
		ACode_PickupAbleObject* CurrentItem = Inventory[ActiveSlot]; 
		CurrentItem->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform); 
		CurrentItem->SetActorHiddenInGame(true); 
	}

	if (Slot >= 0 && Slot < InventorySize) {
		ActiveSlot = Slot;
		if (Inventory.IsValidIndex(ActiveSlot) && Inventory[ActiveSlot])
		{
			ACode_PickupAbleObject* NewItem = Inventory[ActiveSlot];
			if (NewItem->GetRootComponent())
			{
				NewItem->SetActorHiddenInGame(false);
				NewItem->SetActorEnableCollision(false);

				USkeletalMeshComponent* MeshComp = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
				if (MeshComp)
				{
					NewItem->AttachToComponent(
						MeshComp,
						FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("HoldingSocket"));
				}
			}
		}

	}
}

ACode_PickupAbleObject* UCode_InvetoryComponent::GetActiveItem()
{
	if (Inventory[ActiveSlot]) {
		return Inventory[ActiveSlot];
	}
	return nullptr;	
}

UTexture2D* UCode_InvetoryComponent::GetItemIcon(int slot)
{
	if (Inventory.IsValidIndex(slot) && Inventory[slot]) {
		return Inventory[slot]->Icon;
	}
	return nullptr;
}

int UCode_InvetoryComponent::GetSize()
{
	return InventorySize;
}
