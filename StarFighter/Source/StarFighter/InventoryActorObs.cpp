// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryActorObs.h"

AInventoryActorObs::AInventoryActorObs()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}

void AInventoryActorObs::BeginPlay()
{
	Super::BeginPlay();
}

void AInventoryActorObs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
