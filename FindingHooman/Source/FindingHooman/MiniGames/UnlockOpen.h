#pragma once

#include "CoreMinimal.h"
#include "FindingHooman/MiniGames/MiniGame.h"

#include "UnlockOpen.generated.h"

UCLASS()
class FINDINGHOOMAN_API AUnlockOpen : public AMiniGame
{
	GENERATED_BODY()

public:
	AUnlockOpen();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		int scoreToWin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		int valueScore;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
