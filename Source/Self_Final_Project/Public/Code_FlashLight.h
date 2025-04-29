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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USpotLightComponent* SpotLight;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USphereComponent* InteractCollision;

	bool isOn = false;

public:
	bool GetFlashLightStatus();
	void ToggleLight();

	virtual void BeginPlay() override;
	UFUNCTION()
	void OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	virtual void Use_Implementation() override;
};
