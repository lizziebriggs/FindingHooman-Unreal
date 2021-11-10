#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Blueprint/UserWidget.h"

#include "Doge.generated.h"

UCLASS()
class FINDINGHOOMAN_API ADoge : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADoge();

	// CAMERA

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
		float ZoomSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
		float MaxZoom;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
		float MinZoom;

	void ZoomCamera(float Axis);

	void MoveForward(float Axis);
	void MoveRight(float Axis);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
