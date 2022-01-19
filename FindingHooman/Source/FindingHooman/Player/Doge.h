#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Blueprint/UserWidget.h"
#include "FindingHooman/DialogueSystem/DialogueTrigger.h"
#include "FindingHooman/DialogueSystem/DialogueManager.h"

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

	// MOVEMENT
	void MoveForward(float Axis);
	void MoveRight(float Axis);

	// INTERACTION
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void Interact();
	bool bCanInteract;

	UPROPERTY(VisibleAnywhere, Category = Interaction)
		UBoxComponent* TriggerBox;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
