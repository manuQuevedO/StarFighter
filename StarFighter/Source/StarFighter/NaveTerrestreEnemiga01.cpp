// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTerrestreEnemiga01.h"

ANaveTerrestreEnemiga01::ANaveTerrestreEnemiga01()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Engine/BasicShapes/Cone.Cone"));

	
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);


}
