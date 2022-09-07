// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageableActor.h"

// Sets default values
ADamageableActor::ADamageableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADamageableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADamageableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADamageableActor::TakeDamage()
{
	/* As an example of utilising C++ and Blueprints together: This function would store the health reduction logic etc
	and Blueprints would be used to write the event of this actor taking damage, such as firing a gun at the actor. A designer will
	want to be able to access the Blueprint side of things to change how the event may take place and add SFX etc. The core logic should stay in C++
	as it is more computational and doesn't concern the designer */

	// How the actor takes damage via the TakeDamage() function is defined by this OnTakeDamage() function, which will be defined by Blueprints
	OnTakeDamage();

	/* Relating to what is written above, this refers to writing the logic in C++ and giving the designer creative freedom over how the event plays out */
}

