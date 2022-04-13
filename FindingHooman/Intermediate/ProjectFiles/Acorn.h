#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Acorn.generated.h"

UCLASS()
class FINDINGHOOMAN_API AAcorn : public AActor
{
	GENERATED_BODY()

public:
	AAcorn();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
