// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class NEWSHOOTER_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	// For Constructor
	AItem();

protected:
	// Called when the game starts or when spawned
	// For most functions
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// For public functions
	virtual void Tick(float DeltaTime) override;

private:
	// For private variables

	/* Skeletal mesh for the item */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Properties", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* ItemMesh;

	/* Line trace collides with box to show HUD widgets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Properties", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;

public:
	// For getters and setters to access private variables from accessors  

};