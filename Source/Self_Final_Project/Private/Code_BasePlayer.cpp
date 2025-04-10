// Fill out your copyright notice in the Description page of Project Settings.


#include "Code_BasePlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


ACode_BasePlayer::ACode_BasePlayer() {
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 0;
	SpringArm->SetRelativeLocation(FVector(20.f, 0.f, 80.f));
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
}




void ACode_BasePlayer::BeginPlay()
{
}
