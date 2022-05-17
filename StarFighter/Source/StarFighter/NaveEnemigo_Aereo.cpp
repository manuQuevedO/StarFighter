// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo_Aereo.h"
#include "Time.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

//#include "Enemigo.h"
ANaveEnemigo_Aereo::ANaveEnemigo_Aereo()
{
	//static ConstructorHelpers::FObjectFinder<UStaticMesh>EnemigoAereoMesh(TEXT("/Game/Assets/Tie/TIE_Fighter_polySurface75_polySurface72_polySurface71.TIE_Fighter_polySurface75_polySurface72_polySurface71"));
	//EnemigoMesh->SetStaticMesh(EnemigoAereoMesh.Object);
}


//void AEnemigoAereo1::UpdateMovement(float DeltaTime)
//{
	//Current_Location = this->GetActorLocation();

	//Current_Location.X += FMath::Sin(TotalTime + RandomStart);
	//Current_Location.Z += FMath::Sin(TotalTime + RandomStart);

	//this->SetActorLocation(Current_Location - (Current_Velocity * DeltaTime));

	//TotalTime += DeltaTime;

//}

void ANaveEnemigo_Aereo::Tick(float DeltaTime)
{
	srand(time(NULL));
	float rand1 = rand() % 20 - 15;
	float rand2 = rand() % 30 - 15;
	MoveSpeed = 129.0f;

	const FVector Move = FVector(rand1, rand2, 0.0f).GetClampedToMaxSize(1.0f);
	const FVector Movement = Move * MoveSpeed * DeltaTime;

	if (Movement.SizeSquared() > 1.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

	}


}