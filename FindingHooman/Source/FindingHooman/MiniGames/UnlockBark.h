#pragma once

#include "CoreMinimal.h"
#include "Containers/Array.h"
#include "FindingHooman/MiniGames/MiniGame.h"
#include "FindingHooman/NPCs/BirbActor.h"
#include "GameFramework/Actor.h"

#include "UnlockBark.generated.h"

UCLASS()
class FINDINGHOOMAN_API AUnlockBark : public AMiniGame
{
	GENERATED_BODY()
	
public:
	AUnlockBark();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		TArray<ABirbActor*> birbs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		float goalTime;

	int birbsInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)
		bool infinite;
	float fTimer;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
