// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Code_InteractableObject.h"
#include "Code_LightSwitch.generated.h"

/**
 * 
 */

UCLASS()
class SELF_FINAL_PROJECT_API ACode_LightSwitch : public ACode_InteractableObject
{
	GENERATED_BODY()
	
public:
	ACode_LightSwitch();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* SwitchFrame;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* SwitchMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UBoxComponent* InteractCollision;

	UPROPERTY(EditInstanceOnly, Category = "Light")
	TObjectPtr<class ACode_LightBulb> ConnectedBulb;

	FRotator OnRotation;
	FRotator OffRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* SfxSound;

	UPROPERTY()
	UAudioComponent* AudioComponent;

	UFUNCTION()
	void OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
private:

	virtual void Interact_Implementation() override;
};
