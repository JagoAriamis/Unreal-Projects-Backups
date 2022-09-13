// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "My_Cpp_Actor.generated.h"

UCLASS()
class CPPPRACTICE_API AMy_Cpp_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMy_Cpp_Actor();

	// The total amount of damage the actor can deal. Editable and can be read and written from Blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		int32 TotalDamage;

	// The amount of time that damage is dealt over. Editable and can be read and written from Blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		float DamageTimeInSeconds;

	// The amount of damage the actor can deal per second. Readable but unmodifiable by Blueprints.
	// Transient = property is not saved or loaded from disk. It is a derived, non-persistent value, so there's no reason to store it
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Damage")
		float DamagePerSecond;

	UFUNCTION(BlueprintCallable, Category = "Damage")
		void CalculateValues();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitProperties();
	

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
