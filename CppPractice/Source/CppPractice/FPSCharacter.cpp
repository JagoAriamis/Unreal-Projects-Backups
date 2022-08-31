// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

FHitResult AFPSCharacter::instantShot()
{
	FVector rayLocation;
	FRotator rayRotation;
	FVector endTrace = FVector::ZeroVector;

	/** Default APlayerController can be called from anywhere. We assign this variable as const so it cannot be modified
	* 
	* */
	APlayerController* const playerController = GetWorld()->GetFirstPlayerController();

	if (playerController)
	{
		// Constantly updates the location and rotation of the raycast based on the player's view point, so long as we can get the player controller
		playerController->GetPlayerViewPoint(rayLocation, rayRotation);
		endTrace = rayLocation + (rayRotation.Vector() * weaponRange);
	}

	/** Set up ray collision parameters here. You're  ill right now, so come back when you're feeling better!*/
	return FHitResult();
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

