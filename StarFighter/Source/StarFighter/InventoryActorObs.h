// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InventoryActorObs.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AInventoryActorObs : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AInventoryActorObs();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
