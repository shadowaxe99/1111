
#pragma once

#include "CoreMinimal.h"
#include "TaskAutomation.generated.h"

UCLASS()
class VIRTUALBUTLER_API UTaskAutomation : public UObject
{
    GENERATED_BODY()

public:
    UTaskAutomation();

    UFUNCTION(BlueprintCallable, Category = "Task Automation")
    void ExecuteTask(FString taskName);

private:
    void Task1();
    void Task2();
    void Task3();
    // Add more tasks as needed
};
