// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Third_Person_Character.generated.h"

UCLASS()
class CPPPRACTICE_API AThird_Person_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AThird_Person_Character();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float moveSpeed{ 100 };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
