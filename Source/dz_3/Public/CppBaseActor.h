// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

USTRUCT(BlueprintType)
struct FMovementStruct {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Amplitude = 70.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Frequency = 4.f;
};

UCLASS()
class DZ_3_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBaseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Amplitude1 = 70.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Frequency2 = 4.f;

	FVector InitialLocation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION(BlueprintCallable)
	float SinMovement(float ampl, float freq, float Time);
};
