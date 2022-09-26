// Fill out your copyright notice in the Description page of Project Settings.


#include "FieldOfView.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UFieldOfView::UFieldOfView()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	viewAngle = FMath::Clamp(viewAngle, 0.0f, 360.0f);
	viewRadius = 100.0f;
}


// Called when the game starts
void UFieldOfView::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFieldOfView::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UFieldOfView::FindTargets()
{
	AActor* parent = GetOwner();
	TArray<AActor*> targetsToIgnore;
	targetsToIgnore.Add(parent);
	
	TArray<TEnumAsByte<EObjectTypeQuery>> traceObjectTypes;
	traceObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_EngineTraceChannel1));

	targetsList.Empty();

	UKismetSystemLibrary::SphereOverlapActors(GetWorld(), parent->GetActorLocation(), viewRadius, traceObjectTypes, nullptr, targetsToIgnore, targetsList);

	for (int i = 0; i < targetsList.Num(); i++)
	{
		AActor* target = targetsList[i];
		FVector directionToTarget = (target->GetActorLocation() - parent->GetActorLocation());
		directionToTarget.Normalize();

		if (FVector::DotProduct(parent->GetActorLocation(), directionToTarget) < viewAngle / 2)
		{
			targetsList.Add(target);
		}
	}
}

