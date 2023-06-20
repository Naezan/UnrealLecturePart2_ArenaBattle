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

	//������ ������
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	//�۾� �Լ���
	//virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
		TObjectPtr<class ACharacter> Owner;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
		TObjectPtr<class UCharacterMovementComponent> Movement;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		FVector Velocity;

	//WalkSpeed�Դϴ�.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		float GroundSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		uint8 bIsIdle : 1;

	//�����ӿ� ���� �Ӱ谪���� bIsIdle���θ� �Ǵ��մϴ�.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		float MovingThreshould;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		uint8 bIsFalling : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		uint8 bIsJumping : 1;

	//���� �ӵ��� ���� �Ӱ谪���� bIsJumping���θ� �Ǵ��մϴ�.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
		float JumpingThreshould;
};
