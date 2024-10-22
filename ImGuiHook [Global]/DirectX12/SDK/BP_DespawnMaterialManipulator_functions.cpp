#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DespawnMaterialManipulator

#include "Basic.hpp"

#include "BP_DespawnMaterialManipulator_classes.hpp"
#include "BP_DespawnMaterialManipulator_parameters.hpp"


namespace SDK
{

// Function BP_DespawnMaterialManipulator.BP_DespawnMaterialManipulator_C.BP_Init
// (Event, Public, BlueprintEvent)

void UBP_DespawnMaterialManipulator_C::BP_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DespawnMaterialManipulator_C", "BP_Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DespawnMaterialManipulator.BP_DespawnMaterialManipulator_C.BP_UpdateOverTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   InElapsedTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DespawnMaterialManipulator_C::BP_UpdateOverTime(float InElapsedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DespawnMaterialManipulator_C", "BP_UpdateOverTime");

	Params::BP_DespawnMaterialManipulator_C_BP_UpdateOverTime Parms{};

	Parms.InElapsedTime = InElapsedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DespawnMaterialManipulator.BP_DespawnMaterialManipulator_C.ExecuteUbergraph_BP_DespawnMaterialManipulator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DespawnMaterialManipulator_C::ExecuteUbergraph_BP_DespawnMaterialManipulator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DespawnMaterialManipulator_C", "ExecuteUbergraph_BP_DespawnMaterialManipulator");

	Params::BP_DespawnMaterialManipulator_C_ExecuteUbergraph_BP_DespawnMaterialManipulator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DespawnMaterialManipulator.BP_DespawnMaterialManipulator_C.GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Duration_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DespawnMaterialManipulator_C::GetDuration(double* Duration_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DespawnMaterialManipulator_C", "GetDuration");

	Params::BP_DespawnMaterialManipulator_C_GetDuration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duration_0 != nullptr)
		*Duration_0 = Parms.Duration_0;
}

}

