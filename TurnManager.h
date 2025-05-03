#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurnManager.generated.h"

UCLASS()
class STRATEGICO_API ATurnManager : public AActor
{
    GENERATED_BODY()

public:
    ATurnManager();

    UFUNCTION(BlueprintCallable)
    void StartPlayerTurn();

    UFUNCTION(BlueprintCallable)
    void StartAITurn();

    UFUNCTION(BlueprintCallable)
    void EndCurrentTurn();

    bool bPlayerTurn;
};