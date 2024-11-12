// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHealthBar.generated.h"

/**
 * 
 */
UCLASS()
class UTAD_UI_FPS_API UPlayerHealthBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable, Category = Visibility)
	void Show();

	UFUNCTION(BlueprintCallable, Category = Visibility)
	void Hide();

	void UpdatePlayerHealthBar(int NewHealth, int MaxHealth);
	
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* LowHealthAnim;

	UFUNCTION()
	void LowHealthBlink();
protected:

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:

private:


	UPROPERTY(meta = (BindWidget))
	class UProgressBar* PlayerHealthBar;

	float BlinkTimer = 0.f;
	bool bIsLowHealth = false;
	bool bBlinkTurningRed = true;
	
	
	float hitTimer = 0.f;
	bool bHit = false;
};
