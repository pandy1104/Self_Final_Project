// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Code_BaseCharacter.h"
#include "Code_PlayerHUD.h"
#include "Code_BasePlayer.generated.h"

/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API ACode_BasePlayer : public ACode_BaseCharacter
{
	GENERATED_BODY()

	ACode_BasePlayer();

protected:
	virtual void BeginPlay() override;

	class ACode_InteractableObject* CurrentInteractable = nullptr;
	class ACode_PickupAbleObject* CurrentPickupAble = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	class USpringArmComponent* SpringArm;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	class UCameraComponent* Camera;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCode_InvetoryComponent* InventoryComponent;
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UCode_PlayerHUD> HUDClass;
	class UCode_PlayerHUD* PlayerHUD;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USpotLightComponent* SpotLight;

private:
	void InputAxisMoveForward(float AxisValue);
	void InputAxisStrafe(float AxisValue);
	void TryInteract();
	void TryPickUp();
	void TryDrop();
	void TryUse();
	void SlotItem1();
	void SlotItem2();
	void SlotItem3();
	void SlotItem4();
	
public:
	void SetInteractingObject(ACode_InteractableObject* InteractObject);
	void SetPickUpObject(ACode_PickupAbleObject* PickUpObject);
	void UpdateInventoryUI();
	void SetFlashLightStatus(bool isOn);
	UCode_InvetoryComponent* GetInventory();
};
