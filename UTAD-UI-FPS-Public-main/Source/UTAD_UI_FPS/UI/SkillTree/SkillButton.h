// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "SkillButton.generated.h"

/**
 * 
 */
UENUM()
enum class FButtonState : uint8
{
	UNLOCKED UMETA(DisplayName = "Unlocked"),
	LOCKED UMETA(DisplayName = "Locked"),
	SELECTED UMETA(DisplayName = "Selected"),
	ALREADYUNLOCKED UMETA(DisplayName = "Already Unlocked")
};

UCLASS()
class UTAD_UI_FPS_API USkillButton : public UButton
{
public:
	USkillButton();
	USkillButton(USkillButton* SkillButton);

	UFUNCTION()
	void HandleAnotherButtonClick(FButtonState state);
	
private:
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillButton")
	USkillButton* AboveSkillButton;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillButton")
	FButtonState ButtonState;

	UFUNCTION()
	void UpdateState(FButtonState state);
	
	UFUNCTION()
	void OnButtonClicked();

	UFUNCTION()
	void UpdateButtonCSS();
	
	virtual void SynchronizeProperties() override;
};
