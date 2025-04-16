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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* SwitchFrame;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* SwitchMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UBoxComponent* InteractCollision;
	
	
private:

};
