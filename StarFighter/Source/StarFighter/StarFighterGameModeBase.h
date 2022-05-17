// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StarFighterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AStarFighterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	AStarFighterGameModeBase();

	template<typename T>
	T SpawnNave();



};

template<typename T>
T AStarFighterGameModeBase::SpawnNave() {
	
	return GetWorld()->SpawnActor<T>(FVector::ZeroVector, FRotator::ZeroRotator);
}
