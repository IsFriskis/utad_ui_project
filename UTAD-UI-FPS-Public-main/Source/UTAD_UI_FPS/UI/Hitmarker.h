﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Hitmarker.generated.h"

/**
 * 
 */
UCLASS()
class UTAD_UI_FPS_API UHitmarker : public UUserWidget
{
	GENERATED_BODY()

public:

	void PlayAnim();

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* HitAnim;
};
