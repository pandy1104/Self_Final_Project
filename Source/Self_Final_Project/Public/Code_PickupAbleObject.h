// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Code_pickupObjectInterface.h"
#include "GameFramework/Actor.h"
#include "Code_PickupAbleObject.generated.h"

UCLASS()
class SELF_FINAL_PROJECT_API ACode_PickupAbleObject : public AActor, public ICode_pickupObjectInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACode_PickupAbleObject();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Use_Implementation() override;
};
