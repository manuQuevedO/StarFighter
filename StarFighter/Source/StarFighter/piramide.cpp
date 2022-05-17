// Fill out your copyright notice in the Description page of Project Settings.


#include "piramide.h"

// Sets default values for this component's properties
Upiramide::Upiramide()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	MaxVelocity = 500.0f;
}


// Called when the game starts
void Upiramide::BeginPlay()
{
	Super::BeginPlay();

	// ...
	piramide = GetOwner();

}


// Called every frame
void Upiramide::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	//velocidad += velocidad * DeltaTime;

	TotalTime += DeltaTime;
	posiciones = piramide->GetActorLocation();
	posiciones.X += FMath::Sin(TotalTime + RandomStart);
	posiciones.Y += FMath::Sin(TotalTime + RandomStart);
	//posiciones.X = velocidad + cubo->GetActorLocation().X;
	//posiciones.Y = cubo->GetActorLocation().Y;
	//posiciones.Z = cubo->GetActorLocation().Z;

	piramide->SetActorLocation(posiciones - (Current_Velocity * DeltaTime));

	//cambio de posicion dedl cubo 
	//cubo->SetActorLocation(posiciones);
}

