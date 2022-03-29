#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Math/Vector.h"

#include "BirbActor.generated.h"

UCLASS()
class FINDINGHOOMAN_API ABirbActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ABirbActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float timeInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float fTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector startPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool inAir;

	UFUNCTION(BlueprintCallable)
		FVector RandomPosition();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
