// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillTree.h"

#include "UTAD_UI_FPS/UTAD_UI_FPSCharacter.h"


void USkillTree::BackButtonFunc()
{
	FInputModeGameOnly InputMode;
	APlayerController* PlayerController = GetOwningPlayer();
	if(PlayerController)
	{
		PlayerController->bShowMouseCursor = false;
		PlayerController->SetInputMode(InputMode);
	}
	SetVisibility(ESlateVisibility::Collapsed);
}

void USkillTree::ConfirmButtonFunc()
{
	if(HealthTree->SkillButton1->ButtonState == FButtonState::SELECTED)
	{
		HealthTree->SkillButton1->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(HealthTree->SkillButton2->ButtonState == FButtonState::SELECTED)
	{
		HealthTree->SkillButton2->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(HealthTree->SkillButton3->ButtonState == FButtonState::SELECTED)
	{
		HealthTree->SkillButton3->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(HealthTree->SkillButton4->ButtonState == FButtonState::SELECTED)
	{
		HealthTree->SkillButton4->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(HealthTree->SkillButton5->ButtonState == FButtonState::SELECTED)
	{
		HealthTree->SkillButton5->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(HealthTree->SkillButton6->ButtonState == FButtonState::SELECTED)
	{
		HealthTree->SkillButton6->UpdateState(FButtonState::ALREADYUNLOCKED);
	}

	
	if(DamageTree->SkillButton1->ButtonState == FButtonState::SELECTED)
	{
		DamageTree->SkillButton1->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(DamageTree->SkillButton2->ButtonState == FButtonState::SELECTED)
	{
		DamageTree->SkillButton2->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(DamageTree->SkillButton3->ButtonState == FButtonState::SELECTED)
	{
		DamageTree->SkillButton3->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(DamageTree->SkillButton4->ButtonState == FButtonState::SELECTED)
	{
		DamageTree->SkillButton4->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(DamageTree->SkillButton5->ButtonState == FButtonState::SELECTED)
	{
		DamageTree->SkillButton5->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(DamageTree->SkillButton6->ButtonState == FButtonState::SELECTED)
	{
		DamageTree->SkillButton6->UpdateState(FButtonState::ALREADYUNLOCKED);
	}

	if(SpeedTree->SkillButton1->ButtonState == FButtonState::SELECTED)
	{
		SpeedTree->SkillButton1->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(SpeedTree->SkillButton2->ButtonState == FButtonState::SELECTED)
	{
		SpeedTree->SkillButton2->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(SpeedTree->SkillButton3->ButtonState == FButtonState::SELECTED)
	{
		SpeedTree->SkillButton3->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(SpeedTree->SkillButton4->ButtonState == FButtonState::SELECTED)
	{
		SpeedTree->SkillButton4->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(SpeedTree->SkillButton5->ButtonState == FButtonState::SELECTED)
	{
		SpeedTree->SkillButton5->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
	if(SpeedTree->SkillButton6->ButtonState == FButtonState::SELECTED)
	{
		SpeedTree->SkillButton6->UpdateState(FButtonState::ALREADYUNLOCKED);
	}
}

void USkillTree::NativeConstruct()
{
	Super::NativeConstruct();
	if(Backbutton)
	{
		Backbutton->OnClicked.AddDynamic(this, &USkillTree::BackButtonFunc);
	}
	if(ConfirmButton)
	{
		ConfirmButton->OnClicked.AddDynamic(this, &USkillTree::ConfirmButtonFunc);
	}
}
