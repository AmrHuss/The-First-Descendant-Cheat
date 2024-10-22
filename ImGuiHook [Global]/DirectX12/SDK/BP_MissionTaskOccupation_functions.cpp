#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskOccupation

#include "Basic.hpp"

#include "BP_MissionTaskOccupation_classes.hpp"
#include "BP_MissionTaskOccupation_parameters.hpp"


namespace SDK
{

// Function BP_MissionTaskOccupation.BP_MissionTaskOccupation_C.BP_ShouldBeVisibleOnLocal
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissionTaskOccupation_C::BP_ShouldBeVisibleOnLocal(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTaskOccupation_C", "BP_ShouldBeVisibleOnLocal");

	Params::BP_MissionTaskOccupation_C_BP_ShouldBeVisibleOnLocal Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MissionTaskOccupation.BP_MissionTaskOccupation_C.ExecuteUbergraph_BP_MissionTaskOccupation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissionTaskOccupation_C::ExecuteUbergraph_BP_MissionTaskOccupation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTaskOccupation_C", "ExecuteUbergraph_BP_MissionTaskOccupation");

	Params::BP_MissionTaskOccupation_C_ExecuteUbergraph_BP_MissionTaskOccupation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MissionTaskOccupation.BP_MissionTaskOccupation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MissionTaskOccupation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionTaskOccupation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

