#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReactorAbilityBase

#include "Basic.hpp"

#include "ReactorAbilityBase_classes.hpp"
#include "ReactorAbilityBase_parameters.hpp"


namespace SDK
{

// Function ReactorAbilityBase.ReactorAbilityBase_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UReactorAbilityBase_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReactorAbilityBase_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReactorAbilityBase.ReactorAbilityBase_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReactorAbilityBase_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReactorAbilityBase_C", "BP_OnDeactivated");

	Params::ReactorAbilityBase_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReactorAbilityBase.ReactorAbilityBase_C.ExecuteUbergraph_ReactorAbilityBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReactorAbilityBase_C::ExecuteUbergraph_ReactorAbilityBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReactorAbilityBase_C", "ExecuteUbergraph_ReactorAbilityBase");

	Params::ReactorAbilityBase_C_ExecuteUbergraph_ReactorAbilityBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReactorAbilityBase.ReactorAbilityBase_C.ProcessOptimize
// (Public, BlueprintCallable, BlueprintEvent)

void UReactorAbilityBase_C::ProcessOptimize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReactorAbilityBase_C", "ProcessOptimize");

	UObject::ProcessEvent(Func, nullptr);
}

}

