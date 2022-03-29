#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "BarkInterface.generated.h"

UINTERFACE(MinimalAPI)
class UBarkInterface : public UInterface
{
	GENERATED_BODY()
};

class FINDINGHOOMAN_API IBarkInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void BarkEvent();
};
