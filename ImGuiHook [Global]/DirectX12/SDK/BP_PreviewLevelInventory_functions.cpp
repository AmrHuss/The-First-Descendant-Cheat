#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewLevelInventory

#include "Basic.hpp"

#include "BP_PreviewLevelInventory_classes.hpp"
#include "BP_PreviewLevelInventory_parameters.hpp"


namespace SDK
{

// Function BP_PreviewLevelInventory.BP_PreviewLevelInventory_C.ExecuteUbergraph_BP_PreviewLevelInventory
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PreviewLevelInventory_C::ExecuteUbergraph_BP_PreviewLevelInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelInventory_C", "ExecuteUbergraph_BP_PreviewLevelInventory");

	Params::BP_PreviewLevelInventory_C_ExecuteUbergraph_BP_PreviewLevelInventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PreviewLevelInventory.BP_PreviewLevelInventory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PreviewLevelInventory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelInventory_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

