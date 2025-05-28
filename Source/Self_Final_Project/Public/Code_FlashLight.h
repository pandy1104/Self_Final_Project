// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Code_PickupAbleObject.h"
#include "Code_FlashLight.generated.h"

/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API ACode_FlashLight : public ACode_PickupAbleObject
{
	GENERATED_BODY()
	
public:
	ACode_FlashLight();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* FlashLightMesh;
	bool isOn = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* SfxSound;

	UPROPERTY()
	UAudioComponent* AudioComponent;

public:
	
	bool GetFlashLightStatus();
	void SetFLashLightStatus(bool Status);
	void ToggleLight();

	virtual void BeginPlay() override;
	virtual void Use_Implementation() override;
};
