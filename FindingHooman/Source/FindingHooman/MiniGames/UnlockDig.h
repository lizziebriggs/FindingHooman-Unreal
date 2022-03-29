#pragma once

#include "CoreMinimal.h"
#include "FindingHooman/MiniGames/MiniGame.h"

#include "UnlockDig.generated.h"

UCLASS()
class FINDINGHOOMAN_API AUnlockDig : public AMiniGame
{
	GENERATED_BODY()

public:
	AUnlockDig();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		int bonesToCollect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		int bonesCollected;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
