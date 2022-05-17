// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/GameplayStatics.h"

//#include <Pstarfighter/EnemigoAereo1.h>
//#include <Pstarfighter/EnemigoAereo1.cpp>

// Sets default values
ANaveEnemigo::ANaveEnemigo()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Enemigo Mesh"));
	RootComponent = EnemigoMesh;
	CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComponent"));
	EnemigoMesh->SetEnableGravity(false);
	EnemigoMesh->SetConstraintMode(EDOFMode::XZPlane);
	EnemigoMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	EnemigoMesh->SetCollisionProfileName(TEXT("PhysicsActor"));
	CapsuleCollision->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void ANaveEnemigo::BeginPlay()
{
	Super::BeginPlay();

	//RandomStart = FMath::Rand();
	//ThisWorld = GetWorld();

}

//Called every frame
void ANaveEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UpdateMovement(DeltaTime);

}

// Called to bind functionality to input
void ANaveEnemigo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//void AEnemigo::UpdateMovement(float DeltaTime)
//{
	//Current_Location = this->GetActorLocation();
	//Current_Location.X += FMath::Sin(TotalTime + RandomStart);
	//Current_Location.Z += FMath::Sin(TotalTime + RandomStart);

	//this->SetActorLocation(Current_Location - (Current_Velocity * DeltaTime));

	//TotalTime += DeltaTime;
//}