// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "FoodItem.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORYSYSTEM_API UFoodItem : public UItem
{
	GENERATED_BODY()

public:
	/**The weight of the item*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (ClamMin = 0.0))
	float HealthToHeal;
	
protected:
	virtual void Use(AInventorySystemCharacter* Character) override;
	
};
