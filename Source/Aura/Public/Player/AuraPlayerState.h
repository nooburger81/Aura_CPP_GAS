// Copyright ChefDevGaming 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AuraPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerState : public APlayerState
{
	GENERATED_BODY()
	public:
		AAuraPlayerState();
	protected:
	
		UPROPERTY()
		TObjectPtr<UAuraAbilitySystemComponent> AbilitySystemComponent;

		UPROPERTY()
		TObjectPtr<UAttributeSet> AttributeSet;
	
};
