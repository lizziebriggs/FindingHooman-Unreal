#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "InteractInterface.generated.h"

UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

class FINDINGHOOMAN_API IInteractInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void OnInteract(AActor* Caller);

	// Focus = when the player looks at the caller
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void StartFocus();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void EndFocus();
};
