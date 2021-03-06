// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Target.generated.h"

UCLASS()
class RNB_KUN_API ATarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATarget();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void OnDestroy();

	float Health = 100;

	void DamageTarget(float Damage);
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComponent;
};
