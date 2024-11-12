// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillPoint.h"

#include "UTAD_UI_FPSCharacter.h"
#include "Components/SphereComponent.h"


// Sets default values
ASkillPoint::ASkillPoint()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Static Mesh Component
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;

	// Create Sphere Component
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);

	// Bind the overlap event
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ASkillPoint::OnOverlapBegin);
}


void ASkillPoint::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AUTAD_UI_FPSCharacter* Character = Cast<AUTAD_UI_FPSCharacter>(OtherActor);
	if(Character)
	{
		Character->SkillPoints++;
		Destroy();
	}
}

// Called when the game starts or when spawned
void ASkillPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASkillPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

