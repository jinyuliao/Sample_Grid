// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/GridPawnInterface.h"
#include "Placeholder.generated.h"

UCLASS()
class SAMPLE_GRID_API APlaceholder : public AActor, public IGridPawnInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlaceholder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
