// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillButton.h"

USkillButton::USkillButton()
{
	OnClicked.AddDynamic(this, &USkillButton::OnButtonClicked);
}

USkillButton::USkillButton(USkillButton* SkillButton)
{

}

void USkillButton::HandleAnotherButtonClick(FButtonState state)
{
	switch (state)
	{
	case FButtonState::SELECTED:
		{
			ButtonState = FButtonState::UNLOCKED;
			break;
		}
	
	case FButtonState::UNLOCKED:
		{
			ButtonState = FButtonState::LOCKED;
			break;
		}
	}
	UpdateButtonCSS();
}

void USkillButton::UpdateState(FButtonState state)
{
	ButtonState = state;
	UpdateButtonCSS();
}

void USkillButton::OnButtonClicked()
{
}

void USkillButton::UpdateButtonCSS()
{
	switch (ButtonState)
	{
	case FButtonState::UNLOCKED:
		{
			FButtonStyle style;
			style.Normal.TintColor = FLinearColor::Gray;
			SetStyle(style);
			break;
		}
		case FButtonState::LOCKED:
		{
			FButtonStyle style;
			style.Normal.TintColor = FLinearColor::Red;
			SetStyle(style);
			break;
		}
		case FButtonState::SELECTED:
		{
			FButtonStyle style;
			style.Normal.TintColor = FLinearColor::Green;
			SetStyle(style);
			break;
		}
		case FButtonState::ALREADYUNLOCKED:
		{
			FButtonStyle style;
			style.Normal.TintColor = FLinearColor::Blue;
			SetStyle(style);
			break;
		}
	}
}

void USkillButton::SynchronizeProperties()
{
	Super::SynchronizeProperties();
	SetIsEnabled(true);
	OnClicked.AddDynamic(this, &USkillButton::OnButtonClicked);
	OnPressed.AddDynamic(this, &USkillButton::OnButtonClicked);


}
