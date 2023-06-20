// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ABComboActionData.generated.h"

/**
 *
 */
UCLASS()
class ARENABATTLE_API UABComboActionData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UABComboActionData();

	//몽타주 섹션 이름
	UPROPERTY(EditAnywhere, Category = Name)
		FString MontageSectionNamePrefix;

	//최대 콤보 개수
	UPROPERTY(EditAnywhere, Category = Name)
		uint8 MaxComboCount;

	//기준 프레임(마지막 프레임)
	UPROPERTY(EditAnywhere, Category = Name)
		float FrameRate;

	//콤보를 확인할 프레임
	UPROPERTY(EditAnywhere, Category = ComboData)
		TArray<float> EffectiveFrameCount;
};
