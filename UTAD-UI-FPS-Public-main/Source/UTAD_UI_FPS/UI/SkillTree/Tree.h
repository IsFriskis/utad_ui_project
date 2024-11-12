// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillButton.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Tree.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickButtonToUpdate, USkillButton*, SkillButton);

UCLASS()
class UTAD_UI_FPS_API UTree : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
public:
	UFUNCTION()
	void OnClickButton1();

	UFUNCTION()
	void OnClickButton2();

	UFUNCTION()
	void OnClickButton3();
	
	UFUNCTION()
	void OnClickButton4();
	
	UFUNCTION()
	void OnClickButton5();

	UFUNCTION()
	void OnClickButton6();


	UPROPERTY(Transient, meta = (BindWidget))
	USkillButton* SkillButton1;

	UPROPERTY(Transient, meta = (BindWidget))
	USkillButton* SkillButton2;

	UPROPERTY(Transient, meta = (BindWidget))
	USkillButton* SkillButton3;

	UPROPERTY(Transient, meta = (BindWidget))
	USkillButton* SkillButton4;

	UPROPERTY(Transient, meta = (BindWidget))
	USkillButton* SkillButton5;

	UPROPERTY(Transient, meta = (BindWidget))
	USkillButton* SkillButton6;

	FOnClickButtonToUpdate OnClickButtonToUpdate;
};
