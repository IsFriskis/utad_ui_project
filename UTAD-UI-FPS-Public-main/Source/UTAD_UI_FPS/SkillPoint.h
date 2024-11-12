// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "SkillPoint.generated.h"

UCLASS()
class UTAD_UI_FPS_API ASkillPoint : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASkillPoint();

	// Static Mesh Component
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* StaticMesh;

	// Sphere Component
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComponent;

	// Overlap Begin function
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
