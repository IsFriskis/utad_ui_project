// Fill out your copyright notice in the Description page of Project Settings.


#include "Tree.h"

#include "UTAD_UI_FPS/UTAD_UI_FPSCharacter.h"

void UTree::NativeConstruct()
{
	Super::NativeConstruct();

	SkillButton1->OnClicked.AddDynamic(this, &UTree::OnClickButton1);
	SkillButton2->OnClicked.AddDynamic(this, &UTree::OnClickButton2);
	SkillButton3->OnClicked.AddDynamic(this, &UTree::OnClickButton3);
	SkillButton4->OnClicked.AddDynamic(this, &UTree::OnClickButton4);
	SkillButton5->OnClicked.AddDynamic(this, &UTree::OnClickButton5);
	SkillButton6->OnClicked.AddDynamic(this, &UTree::OnClickButton6);
	
}

void UTree::OnClickButton1()
{
}

void UTree::OnClickButton2()
{
	switch (SkillButton2->ButtonState)
	{
	case FButtonState::UNLOCKED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton2->UpdateState(FButtonState::SELECTED);
				SkillButton3->UpdateState(FButtonState::UNLOCKED);
				Character->SkillPoints--;
			}
			break;
		}
	case FButtonState::SELECTED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton2->UpdateState(FButtonState::UNLOCKED);
				SkillButton3->UpdateState(FButtonState::LOCKED);
				Character->SkillPoints++;
			}
			break;
		}
	default:
		break;
	}
}
void UTree::OnClickButton3()
{
	switch (SkillButton3->ButtonState)
	{
	case FButtonState::UNLOCKED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton3->UpdateState(FButtonState::SELECTED);
				SkillButton4->UpdateState(FButtonState::UNLOCKED);
				Character->SkillPoints--;
			}
			break;
		}
	case FButtonState::SELECTED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton3->UpdateState(FButtonState::UNLOCKED);
				SkillButton4->UpdateState(FButtonState::LOCKED);
				Character->SkillPoints++;
			}
			break;
		}
	default:
		break;
	}
}

void UTree::OnClickButton4()
{
	switch (SkillButton4->ButtonState)
	{
	case FButtonState::UNLOCKED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton4->UpdateState(FButtonState::SELECTED);
				SkillButton5->UpdateState(FButtonState::UNLOCKED);
				Character->SkillPoints--;
			}
			break;
		}
	case FButtonState::SELECTED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton4->UpdateState(FButtonState::UNLOCKED);
				SkillButton5->UpdateState(FButtonState::LOCKED);
				Character->SkillPoints++;
			}
			break;
		}
	default:
		break;
	}
}

void UTree::OnClickButton5()
{
	switch (SkillButton5->ButtonState)
	{
	case FButtonState::UNLOCKED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton5->UpdateState(FButtonState::SELECTED);
				SkillButton6->UpdateState(FButtonState::UNLOCKED);
				Character->SkillPoints--;
			}
			break;
		}
	case FButtonState::SELECTED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton5->UpdateState(FButtonState::UNLOCKED);
				SkillButton6->UpdateState(FButtonState::LOCKED);
				Character->SkillPoints++;
			}
			break;
		}
	default:
		break;
	}
}

void UTree::OnClickButton6()
{
	switch (SkillButton6->ButtonState)
	{
	case FButtonState::UNLOCKED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton6->UpdateState(FButtonState::SELECTED);
				Character->SkillPoints--;
			}
			break;
		}
	case FButtonState::SELECTED:
		{
			AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if(Character->SkillPoints > 0)
			{
				SkillButton6->UpdateState(FButtonState::UNLOCKED);
				Character->SkillPoints++;
			}
			break;
		}
	default:
		break;
	}
}

