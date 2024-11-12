// Fill out your copyright notice in the Description page of Project Settings.


#include "Crosshair.h"

#include "Components/Image.h"

void UCrosshair::Show()
{
	SetVisibility(ESlateVisibility::HitTestInvisible);
}

void UCrosshair::Hide()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UCrosshair::TurnRed()
{
	if (UImage* CrosshairImage = Cast<UImage>(GetWidgetFromName(TEXT("Crosshair"))))
	{
		CrosshairImage->SetOpacity(1.0f);
	}
}

void UCrosshair::TurnBlack()
{
	if (UImage* CrosshairImage = Cast<UImage>(GetWidgetFromName(TEXT("Crosshair"))))
	{
		CrosshairImage->SetOpacity(0.5f);
	}
}
