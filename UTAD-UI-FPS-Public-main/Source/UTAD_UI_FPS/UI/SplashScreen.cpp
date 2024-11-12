// Fill out your copyright notice in the Description page of Project Settings.


#include "SplashScreen.h"

void USplashScreen::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if (IsVisible())
	{
		if (WidgetTimer >= Duration)
		{
			FadeOutTimer += InDeltaTime;

			// Normalize the time (0 to 1) based on the animation duration
			float normalizedTime = FMath::Fmod(FadeOutTimer, FadeOutDuration) / FadeOutDuration;

			// Use a sine wave to create the scale animation effect
			float currentOpacity = 1.0f - FMath::Lerp(0.0f, 1.0f, normalizedTime);

			SplashScreenImage->SetOpacity(currentOpacity);

			if (FadeOutTimer > FadeOutDuration)
			{
				SetVisibility(ESlateVisibility::Hidden);
				SplashScreenImage->SetOpacity(0.0f);
			}
		}
		else
		{
			WidgetTimer += InDeltaTime;
		}
	}
}
