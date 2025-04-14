// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Code_BaseCharacter.h"
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

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	class USpringArmComponent* SpringArm;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	class UCameraComponent* Camera;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void InputAxisMoveForward(float AxisValue);
	void InputAxisStrafe(float AxisValue);
	void TryInteract();

public:
	void SetInteractingObject(ACode_InteractableObject* InteractObject);
};
