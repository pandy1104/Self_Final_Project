// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Code_Interactable_Interface.h"
#include "Code_InteractableObject.h"
#include "Code_Door.generated.h"

class UTimelineComponent;
class UCurveFloat;


UCLASS()
class SELF_FINAL_PROJECT_API ACode_Door : public ACode_InteractableObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACode_Door();

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	UStaticMeshComponent* DoorMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* DoorJoint;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* DoorFrameMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UBoxComponent* InteractCollision;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool isOpen = false;

	FRotator ClosedRotation;
	FRotator OpenRotation;

	UPROPERTY(VisibleAnywhere)
	UTimelineComponent* DoorTimeline;
	UPROPERTY(EditAnywhere, Category = "Door|Timeline")
	UCurveFloat* DoorCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* SfxSound;

	UPROPERTY()
	UAudioComponent* AudioComponent;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsLocked = false;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RequiredKeyName;

	UFUNCTION()
	void HandleTimelineProgress(float Value);

	UFUNCTION()
	void OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ToggleDoor();
	virtual void Interact_Implementation() override;
};
