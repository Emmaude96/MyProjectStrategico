#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameManager.generated.h"

UCLASS()
class STRATEGICO_API AGameManager : public AGameModeBase
{
    GENERATED_BODY()

public:
    AGameManager();

    UFUNCTION(BlueprintCallable)
    void StartGame();

    UFUNCTION(BlueprintCallable)
    void EndTurn();

    UFUNCTION(BlueprintCallable)
    void CheckGameOver();

    bool bIsPlayerTurn;

protected:
    virtual void BeginPlay() override;
};