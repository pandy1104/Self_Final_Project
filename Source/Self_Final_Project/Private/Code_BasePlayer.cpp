// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


ACode_BasePlayer::ACode_BasePlayer() {

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->SetRelativeLocation(FVector(20.f, 0.f, 80.f));
	SpringArm->TargetArmLength = 0;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraRotationLagSpeed = 8.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	SpringArm->bUsePawnControlRotation = true;
}




void ACode_BasePlayer::BeginPlay()
{
	Super::BeginPlay();
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
