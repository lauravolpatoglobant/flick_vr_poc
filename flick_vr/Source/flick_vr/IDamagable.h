// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IDamagable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIDamagable : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
*
*/
class FLICK_VR_API IIDamagable
{
	GENERATED_IINTERFACE_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Damagable")
		void AffectHealth(float delta);
};