#pragma once

#include "CoreMinimal.h"
#include "FindingHooman/HatMetagame/Acorn.h"
#include "GameFramework/Actor.h"

#include "SquirrelManager.generated.h"

UCLASS()
class FINDINGHOOMAN_API ASquirrelManager : public AActor
{
	GENERATED_BODY()
	
public:	
	ASquirrelManager();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = AcornPool)
		TSubclassOf<class AAcorn> acornBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AcornPool)
		int poolSize;

	TArray<AAcorn*> acornPool;
	int nextAcorn;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void ThrowAcorn(FVector spawnPos, FVector throwTo);
};
