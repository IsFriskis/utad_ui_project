// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Crosshair.generated.h"


class UWidgetAnimation;
/**
 * 
 */
UCLASS()
class UTAD_UI_FPS_API UCrosshair : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = Visibility)
	void Show();

	UFUNCTION(BlueprintCallable, Category = Visibility)
	void Hide();

	UFUNCTION(Blueprintable, Category = Visibility)
	void TurnRed();
	UFUNCTION(Blueprintable, Category = Visibility)
	void TurnBlack();
};
