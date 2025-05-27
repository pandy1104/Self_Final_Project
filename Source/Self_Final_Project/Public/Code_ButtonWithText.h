// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Code_ButtonWithText.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnClickEvent);

UCLASS()
class SELF_FINAL_PROJECT_API UCode_ButtonWithText : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UButton* BackgroundButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UTextBlock* Information;

public:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Info;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnClickEvent ClickEventDelegate;

private:
	UFUNCTION()
	void HandleClickButton();
};
