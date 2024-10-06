#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpawnMaterialManipulator

#include "Basic.hpp"

#include "BP_SpawnMaterialManipulator_classes.hpp"
#include "BP_SpawnMaterialManipulator_parameters.hpp"


namespace SDK
{

// Function BP_SpawnMaterialManipulator.BP_SpawnMaterialManipulator_C.BP_Init
// (Event, Public, BlueprintEvent)

void UBP_SpawnMaterialManipulator_C::BP_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpawnMaterialManipulator_C", "BP_Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpawnMaterialManipulator.BP_SpawnMaterialManipulator_C.BP_UpdateOverTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   InElapsedTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpawnMaterialManipulator_C::BP_UpdateOverTime(float InElapsedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpawnMaterialManipulator_C", "BP_UpdateOverTime");

	Params::BP_SpawnMaterialManipulator_C_BP_UpdateOverTime Parms{};

	Parms.InElapsedTime = InElapsedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpawnMaterialManipulator.BP_SpawnMaterialManipulator_C.ExecuteUbergraph_BP_SpawnMaterialManipulator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpawnMaterialManipulator_C::ExecuteUbergraph_BP_SpawnMaterialManipulator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpawnMaterialManipulator_C", "ExecuteUbergraph_BP_SpawnMaterialManipulator");

	Params::BP_SpawnMaterialManipulator_C_ExecuteUbergraph_BP_SpawnMaterialManipulator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

