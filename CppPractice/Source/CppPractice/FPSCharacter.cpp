// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "DamageableActor.h"
#include "DrawDebugHelpers.h"

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

void AFPSCharacter::FireWeapon()
{
	// Storing the hit result from instantShot() in this hit variable for this function
	FHitResult hit = instantShot();
	
	/* If the raycast hits something, it's going to have an actor inside of it and FHitResult provides this function. If the actor is 
	of type ADamageableActor, it will be Cast. This is OOP polymorphism at work. ADamageableActor inherits from Actor, so we can Cast it and see if 
	it is of the type it's supposed to be.
	
	As well, this is a pointer. It points to a memory address in the DamageableActor class */
	ADamageableActor* hitActor = Cast<ADamageableActor>(hit.GetActor());

	if (hitActor && hitActor->isAttackable)
	{
		hitActor->TakeDamage();
	}
}

FHitResult AFPSCharacter::instantShot()
{
	FVector rayLocation;
	FRotator rayRotation;
	FVector endTrace = FVector::ZeroVector;

	// Default APlayerController can be called from anywhere. We assign this variable as const so it cannot be modified 
	APlayerController* const playerController = GetWorld()->GetFirstPlayerController();

	if (playerController)
	{
		// Constantly updates the location and rotation of the player based on the player's view point, so long as we can get the player controller. These values are fed into our raycast variables.
		playerController->GetPlayerViewPoint(rayLocation, rayRotation);

		// Calculate the end location of the raycast. The rayRotation is turned into a Vector forward endpoint multiplied by the specified range
		endTrace = rayLocation + (rayRotation.Vector() * weaponRange);
	}

	/** Creating params for the raycast. 
	* Parameters = name of raycast, bool (true - cast against the mesh of an object (useful if we're blowing limbs off a 
	* character. If this were false, it would cast against an object's collider)) and we're getting the instigator of the shot, aka the player, as an object to ignore so 
	* the player doesn't block the shot */
	FCollisionQueryParams traceParams(SCENE_QUERY_STAT(instantShot), true, GetInstigator());
	
	// Default value of 0. The hit result is 0 by default unless something is hit. This is where the hit result is stored
	FHitResult hit(ForceInit);
	
	/* LineTrace = Raycast. 
	Hit = Our hit result
	Start = Where our raycast originates from
	End = The end limit of our raycast
	Trace channel = ECC_Visibility is the everything channel. We wanna hit anything that's visible. 
	Trace Params = The collision query params we set up above, giving us customised params for our ray.
	LineTraceSingleByChannel is a single channel raycast, used to trace against a specific channel and return the first blocking hit */
	GetWorld()->LineTraceSingleByChannel(hit, rayLocation, endTrace, ECC_Visibility, traceParams);
	
	if (playerController->IsInputKeyDown(EKeys::LeftMouseButton))
	{
		DrawDebugLine(GetWorld(), rayLocation, endTrace, FColor(255, 0, 0), false, 5.0f, 0.0f, 10.0f);
	}
	
	return hit;
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

