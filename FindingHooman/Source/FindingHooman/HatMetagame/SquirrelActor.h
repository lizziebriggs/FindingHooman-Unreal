#pragma once

#include "CoreMinimal.h"
#include "FindingHooman/HatMetagame/SquirrelManager.h"
#include "GameFramework/Actor.h"

#include "SquirrelActor.generated.h"

UCLASS()
class FINDINGHOOMAN_API ASquirrelActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ASquirrelActor();

protected:
	virtual void BeginPlay() override;

	/*UPROPERTY(EditAnywhere, Category = AcornPool)
		TSubclassOf<class AAcorn> acornBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AcornPool)
		int poolSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AcornPool)
		TArray<AAcorn*> acornPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AcornPool)
		int nextAcorn;

	UFUNCTION(BlueprintCallable)
		void ThrowAcorn(FVector spawnPos, FVector throwTo);*/

public:	
	virtual void Tick(float DeltaTime) override;
};
