// Copyright Epic Games, Inc. All Rights Reserved.


#include "StarFighterGameModeBase.h"
#include "NaveTerrestreEnemiga01.h"

void AStarFighterGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//auto ne = SpawnNave<ANaveTerrestreEnemiga01>();
	UE_LOG(LogTemp, Warning, TEXT("Dentro de BeginPlay en GameModeBase"));
	GetWorld()->SpawnActor<ANaveTerrestreEnemiga01>(FVector::ZeroVector, FRotator::ZeroRotator);
	
}

AStarFighterGameModeBase::AStarFighterGameModeBase()
{
	/*UE_LOG(LogTemp, Warning, TEXT("Dentro de constructor en GameModeBase"));
	GetWorld()->SpawnActor<ANaveTerrestreEnemiga01>(FVector::ZeroVector, FRotator::ZeroRotator);*/

	//SpawnNave<ANaveTerrestreEnemiga01>();

}
