// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tree.h"
#include "Blueprint/UserWidget.h"
#include "SkillTree.generated.h"

/**
 * 
 */
UCLASS()
class UTAD_UI_FPS_API USkillTree : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void BackButtonFunc();
	
	UFUNCTION()
	void ConfirmButtonFunc();

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(Transient, meta = (BindWidget))
	UTree* HealthTree;
	UPROPERTY(Transient, meta = (BindWidget))
	UTree* SpeedTree;
	UPROPERTY(Transient, meta = (BindWidget))
	UTree* DamageTree;

	UPROPERTY(Transient, meta = (BindWidget))
	UButton* Backbutton;

	
	UPROPERTY(Transient, meta = (BindWidget))
	UButton* ConfirmButton;
};
