// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Code_PickupAbleObject.h"
#include "Code_PickupKey.generated.h"

/**
 * 
 */
UCLASS()
class SELF_FINAL_PROJECT_API ACode_PickupKey : public ACode_PickupAbleObject
{
	GENERATED_BODY()
	
public:
	ACode_PickupKey();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* KeyMesh;


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName KeyName;
	virtual void BeginPlay() override;
};
