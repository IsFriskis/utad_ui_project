// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "SplashScreen.generated.h"

/**
 * 
 */
UCLASS()
class UTAD_UI_FPS_API USplashScreen : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:

	UPROPERTY(Transient, meta = (BindWidget))
	UImage* SplashScreenImage;

private:
	
	float FadeOutTimer = 0.0f;
	float WidgetTimer = 0.0f;
	float Duration = 1.0f;
	float FadeOutDuration = 0.25f;
};
