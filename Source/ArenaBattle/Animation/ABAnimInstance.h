// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

/**
 *
 */
UCLASS()
class ARENABATTLE_API UABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UABAnimInstance();

protected:
	virtual void NativeInitializeAnimation() override;

	//데이터 수집용
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	//작업 함수들
	//virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
		TObjectPtr<class ACharacter> Owner;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
		TObjectPtr<class UCharacterMovementComponent> Movement;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		FVector Velocity;

	//WalkSpeed입니다.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		float GroundSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		uint8 bIsIdle : 1;

	//움직임에 대한 임계값으로 bIsIdle여부를 판단합니다.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		float MovingThreshould;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		uint8 bIsFalling : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		uint8 bIsJumping : 1;

	//점프 속도에 대한 임계값으로 bIsJumping여부를 판단합니다.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		float JumpingThreshould;
};
