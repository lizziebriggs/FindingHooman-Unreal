#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

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

	void TurnCamera(float Val);
	void LookUp(float Val);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool InvertCameraHori;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool InvertCameraVert;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		float MouseSensitivityHori;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		float MouseSensitivityVert;

	// MOVEMENT
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool InvertMovementHori;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool InvertMovementVert;

	bool bIsRunning;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
		float normalWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
		float normalRunSpeed;

	float WalkSpeed;
	float RunSpeed;

	void MoveForward(float Axis);
	void MoveRight(float Axis);
	void ToggleRun();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool canMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool canMoveCamera;

	// INTERACTION
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void Interact();
	bool bCanInteract;

	UPROPERTY(VisibleAnywhere, Category = Interaction)
		UBoxComponent* TriggerBox;

	// SKILLS
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Skills)
		USphereComponent* SkillRadius;

	UFUNCTION(BlueprintCallable)
		void UnlockSkill(int skill);
	UFUNCTION(BlueprintCallable)
		void LockSkill(int skill);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Skills)
		int currentSkill;

	UFUNCTION(BlueprintCallable)
		void SetSkill(int skill);

	void SetSkillPush() { currentSkill = 1; }
	void SetSkillDig() { currentSkill = 2; }
	void SetSkillBark() { currentSkill = 3; }
	void SetSkillOpen() { currentSkill = 4; }

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Skills)
		bool bCanPush;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Skills)
		bool bCanDig;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Skills)
		bool bCanBark;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Skills)
		bool bCanOpen;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sounds)
		USoundBase* barkSound;

	UFUNCTION()
		void OnOverlapSkillBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// HAT ABILITIES

	UFUNCTION(BlueprintCallable)
		void RevertAbilities();

	UFUNCTION(BlueprintCallable)
		void WearPropellerHat();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hats)
		float jumpBoost;

	UFUNCTION(BlueprintCallable)
		void WearGooseHat();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hats)
		USoundBase* gooseSound;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hats)
		bool isGoose;

	UFUNCTION(BlueprintCallable)
		void WearAcornHat();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hats)
		bool squirrelsFollow;

	UFUNCTION(BlueprintCallable)
		void WearBunnyHat();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Hats)
		float speedBoost;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
