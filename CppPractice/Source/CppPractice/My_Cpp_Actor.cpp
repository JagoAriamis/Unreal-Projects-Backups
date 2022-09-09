// Fill out your copyright notice in the Description page of Project Settings.


#include "My_Cpp_Actor.h"

// Sets default values
AMy_Cpp_Actor::AMy_Cpp_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TotalDamage = 200;
	DamageTimeInSeconds = 1.0f;
}

// Called when the game starts or when spawned
void AMy_Cpp_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMy_Cpp_Actor::PostInitProperties()
{
	Super::PostInitProperties();
	CalculateValues();
}

void AMy_Cpp_Actor::CalculateValues()
{
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}

/* This #ifdef is editor-specific. What this does is that building the game only compiles the code that is needed, removing unnecessary increase of executable size */
#if WITH_EDITOR
void AMy_Cpp_Actor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	CalculateValues();
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

// Called every frame
void AMy_Cpp_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


