// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHealthBar.h"
#include "Kismet/GameplayStatics.h"
#include "../UTAD_UI_FPSCharacter.h"
#include "Components/ProgressBar.h"
#include "Math/Color.h"
#include "Styling/SlateColor.h"



void UPlayerHealthBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	if (bIsLowHealth && PlayerHealthBar)
	{
		float Time = GetWorld()->GetTimeSeconds();
		float SineValue = FMath::Sin(Time * 4.0f); // Adjust the frequency as needed
		FLinearColor Color = FLinearColor::LerpUsingHSV(FLinearColor::Green, FLinearColor::Red, (SineValue + 1.0f) / 2.0f);
		PlayerHealthBar->SetFillColorAndOpacity(Color);
	}

	if(bHit && PlayerHealthBar && (!bIsLowHealth))
	{
		if(hitTimer <= 0.15f)
		{
			hitTimer += InDeltaTime;
			PlayerHealthBar->SetFillColorAndOpacity(FLinearColor::Yellow);
		}
		else
		{
			PlayerHealthBar->SetFillColorAndOpacity(FLinearColor::Green);
			hitTimer = 0.f;
			bHit = false;
		}
		
	}
}


void UPlayerHealthBar::Show()
{
	SetVisibility(ESlateVisibility::HitTestInvisible);
}

void UPlayerHealthBar::Hide()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UPlayerHealthBar::UpdatePlayerHealthBar(int NewHealth, int MaxHealth)
{
	if (PlayerHealthBar)
	{
		float HealthPercent = static_cast<float>(NewHealth) / static_cast<float>(MaxHealth);
		PlayerHealthBar->SetPercent(HealthPercent);

		bIsLowHealth = HealthPercent <= 0.5f;
		bHit = true;
		if (bIsLowHealth)
		{

		}
		else
		{
			//PlayerHealthBar->SetFillColorAndOpacity(FLinearColor::Green);
		}
	}
}

void UPlayerHealthBar::LowHealthBlink()
{
	
}


