// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FieldOfView.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPPRACTICE_API UFieldOfView : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFieldOfView();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldOfView")
		float viewAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldOfView")
		float viewRadius;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "FieldOfView")
		void FindTargets();
};
		
