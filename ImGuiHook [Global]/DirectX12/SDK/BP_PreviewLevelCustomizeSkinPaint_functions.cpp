#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewLevelCustomizeSkinPaint

#include "Basic.hpp"

#include "BP_PreviewLevelCustomizeSkinPaint_classes.hpp"
#include "BP_PreviewLevelCustomizeSkinPaint_parameters.hpp"


namespace SDK
{

// Function BP_PreviewLevelCustomizeSkinPaint.BP_PreviewLevelCustomizeSkinPaint_C.ExecuteUbergraph_BP_PreviewLevelCustomizeSkinPaint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PreviewLevelCustomizeSkinPaint_C::ExecuteUbergraph_BP_PreviewLevelCustomizeSkinPaint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelCustomizeSkinPaint_C", "ExecuteUbergraph_BP_PreviewLevelCustomizeSkinPaint");

	Params::BP_PreviewLevelCustomizeSkinPaint_C_ExecuteUbergraph_BP_PreviewLevelCustomizeSkinPaint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PreviewLevelCustomizeSkinPaint.BP_PreviewLevelCustomizeSkinPaint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PreviewLevelCustomizeSkinPaint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelCustomizeSkinPaint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

