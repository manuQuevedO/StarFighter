// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubo.h"

// Sets default values for this component's properties
UCubo::UCubo()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	MaxVelocity = 500.0f;
}


// Called when the game starts
void UCubo::BeginPlay()
{
	Super::BeginPlay();

	// ...
	cubo = GetOwner();

}


// Called every frame
void UCubo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	vel += vel * DeltaTime;

	TotalTime += DeltaTime;
	current_location = cubo->GetActorLocation();
	current_location.Y += FMath::Sin(TotalTime + RandomStart);
	//current_location.X = vel + cubo->GetActorLocation().X;
	//posiciones.Y = cubo->GetActorLocation().Y;
	//posiciones.Z = cubo->GetActorLocation().Z;

	cubo->SetActorLocation(current_location - (Current_Velocity * DeltaTime));

	//cambio de posicion dedl cubo 
	//cubo->SetActorLocation(posiciones);
}

