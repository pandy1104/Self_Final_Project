// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Code_pickupObjectInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCode_pickupObjectInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SELF_FINAL_PROJECT_API ICode_pickupObjectInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
UFUNCTION(BlueprintNativeEvent)
	void Use();
	virtual void Use_Implementation();
};
