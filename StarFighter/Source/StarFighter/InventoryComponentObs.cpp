// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponentObs.h"
#include "Time.h"

// Sets default values for this component's properties
UInventoryComponentObs::UInventoryComponentObs()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponentObs::BeginPlay()
{
	Super::BeginPlay();

	// ...

	
}


// Called every frame
void UInventoryComponentObs::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	srand(time(NULL));
	float rand1 = rand() % 30 - 20;
	float rand2 = rand() % 30 - 20;
	MoveSpeed = 119.0f;

	const FVector Move = FVector(rand1, rand2, 0.0f).GetClampedToMaxSize(1.0f);
	const FVector Movement = Move * MoveSpeed * DeltaTime;

	if (Movement.SizeSquared() > 1.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		//RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

	}
	
}

