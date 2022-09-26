// Fill out your copyright notice in the Description page of Project Settings.


#include "Third_Person_Character.h"

// Sets default values
AThird_Person_Character::AThird_Person_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AThird_Person_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThird_Person_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AThird_Person_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

