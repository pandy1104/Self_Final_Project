// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Code_InteractableObject.h"
#include "Code_InvetoryComponent.h"
#include "Code_PickupAbleObject.h"


ACode_BasePlayer::ACode_BasePlayer() {

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(GetMesh(), FName("head"));
	SpringArm->SetRelativeLocation(FVector(0, 25.0f, 0));
	SpringArm->TargetArmLength = 0;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraRotationLagSpeed = 7.5f;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	SpringArm->bUsePawnControlRotation = true;

	InventoryComponent = CreateDefaultSubobject<UCode_InvetoryComponent>("InventoryComponent");

}


void ACode_BasePlayer::BeginPlay()
{
	Super::BeginPlay();

	if (HUDClass)
	{
		PlayerHUD = CreateWidget<UCode_PlayerHUD>(GetWorld(), HUDClass);
		if (PlayerHUD)
		{
			PlayerHUD->AddToViewport();
			UpdateInventoryUI();
		}
	}
}


void ACode_BasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Camera Controller
	PlayerInputComponent->BindAxis("TurnRight", this, &ACode_BasePlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ACode_BasePlayer::AddControllerPitchInput);

	//Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &ACode_BasePlayer::InputAxisMoveForward);
	PlayerInputComponent->BindAxis("Strafe", this, &ACode_BasePlayer::InputAxisStrafe);

	//Keybind
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ACode_BasePlayer::TryInteract);
	PlayerInputComponent->BindAction("PickUp", IE_Pressed, this, &ACode_BasePlayer::TryPickUp);
	PlayerInputComponent->BindAction("Drop", IE_Pressed, this, &ACode_BasePlayer::TryDrop);

	//ItemSlot
	PlayerInputComponent->BindAction("Slot1", IE_Pressed, this, &ACode_BasePlayer::SlotItem1);
	PlayerInputComponent->BindAction("Slot2", IE_Pressed, this, &ACode_BasePlayer::SlotItem2);
	PlayerInputComponent->BindAction("Slot3", IE_Pressed, this, &ACode_BasePlayer::SlotItem3);
	PlayerInputComponent->BindAction("Slot4", IE_Pressed, this, &ACode_BasePlayer::SlotItem4);
}

void ACode_BasePlayer::InputAxisMoveForward(float AxisValue)
{
	FRotator BreakRotation = GetControlRotation();
	FRotator MakeRotation(0., BreakRotation.Yaw, 0.);
	FVector WorldDirection = MakeRotation.Vector();
	AddMovementInput(WorldDirection, AxisValue);
}

void ACode_BasePlayer::InputAxisStrafe(float AxisValue)
{
	FRotator BreakRotation = GetControlRotation();
	FRotator MakeRotation(0., BreakRotation.Yaw, 0.);
	FVector WorldDirection = FRotationMatrix(MakeRotation).GetScaledAxis(EAxis::Y);
	AddMovementInput(WorldDirection, AxisValue);
}

void ACode_BasePlayer::TryInteract()
{
	if (CurrentInteractable)
	{
		CurrentInteractable->Execute_Interact(CurrentInteractable);
	}
}

void ACode_BasePlayer::TryPickUp()
{
	if (CurrentPickupAble) {
		InventoryComponent->PickUp(CurrentPickupAble);
		CurrentPickupAble = nullptr;
		UpdateInventoryUI();
	}

}

void ACode_BasePlayer::TryDrop()
{
	InventoryComponent->Drop();
	UpdateInventoryUI();
}

void ACode_BasePlayer::SlotItem1()
{
	InventoryComponent->SetActiveSlot(0);
	PlayerHUD->SetActiveSlot(0);
}

void ACode_BasePlayer::SlotItem2()
{
	InventoryComponent->SetActiveSlot(1);
	PlayerHUD->SetActiveSlot(1);
}

void ACode_BasePlayer::SlotItem3()
{
	InventoryComponent->SetActiveSlot(2);
	PlayerHUD->SetActiveSlot(2);
}

void ACode_BasePlayer::SlotItem4()
{
	InventoryComponent->SetActiveSlot(3);
	PlayerHUD->SetActiveSlot(3);
}


void ACode_BasePlayer::SetInteractingObject(ACode_InteractableObject* InteractObject)
{
	CurrentInteractable = InteractObject;
}

void ACode_BasePlayer::SetPickUpObject(ACode_PickupAbleObject* PickUpObject)
{
	CurrentPickupAble = PickUpObject;
}

void ACode_BasePlayer::UpdateInventoryUI()
{
	for (int i = 0; i < InventoryComponent->GetSize(); ++i)
	{
		UTexture2D* Icon = InventoryComponent->GetItemIcon(i); 
		PlayerHUD->SetSlotIcon(i, Icon);
	}
}


