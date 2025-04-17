// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Code_LightBulb.generated.h"

UCLASS()
class SELF_FINAL_PROJECT_API ACode_LightBulb : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACode_LightBulb();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* HangerMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* BulbMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USpotLightComponent* SpotLight;

	UPROPERTY(EditAnywhere, Category = "Materials")
	UMaterialInterface* OnMaterial;

	UPROPERTY(EditAnywhere, Category = "Materials")
	UMaterialInterface* OffMaterial;

	bool isOn = false;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool GetLightStatus();
	void ToggleLight();
};
