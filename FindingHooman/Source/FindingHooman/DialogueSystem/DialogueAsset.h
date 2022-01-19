#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Texture2D.h"
#include "DialogueAsset.generated.h"

UCLASS()
class FINDINGHOOMAN_API UDialogueAsset : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		TArray<FString> Lines;

	UPROPERTY(EditAnywhere)
		TArray<UTexture2D*> Images;
};
