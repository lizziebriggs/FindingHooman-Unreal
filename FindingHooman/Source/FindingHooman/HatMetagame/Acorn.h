#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
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

	UFUNCTION(BlueprintCallable)
		void SetActive(bool state);
	bool isActive;
	
	UPROPERTY(BlueprintReadOnly)
		UStaticMeshComponent* mesh;
};
