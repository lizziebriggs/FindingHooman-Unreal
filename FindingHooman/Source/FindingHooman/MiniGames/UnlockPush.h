#pragma once

#include "CoreMinimal.h"
#include "FindingHooman/MiniGames/MiniGame.h"

#include "UnlockPush.generated.h"

UCLASS()
class FINDINGHOOMAN_API AUnlockPush : public AMiniGame
{
	GENERATED_BODY()
	
public:
	AUnlockPush();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		bool hasWrapper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		bool hasHotdog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		bool hasBun;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
