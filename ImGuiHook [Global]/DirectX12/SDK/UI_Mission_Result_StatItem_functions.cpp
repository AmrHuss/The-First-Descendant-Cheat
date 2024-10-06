#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Result_StatItem

#include "Basic.hpp"

#include "UI_Mission_Result_StatItem_classes.hpp"
#include "UI_Mission_Result_StatItem_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Result_StatItem.UI_Mission_Result_StatItem_C.ExecuteUbergraph_UI_Mission_Result_StatItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Result_StatItem_C::ExecuteUbergraph_UI_Mission_Result_StatItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Result_StatItem_C", "ExecuteUbergraph_UI_Mission_Result_StatItem");

	Params::UI_Mission_Result_StatItem_C_ExecuteUbergraph_UI_Mission_Result_StatItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Result_StatItem.UI_Mission_Result_StatItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Result_StatItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Result_StatItem_C", "PreConstruct");

	Params::UI_Mission_Result_StatItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Result_StatItem.UI_Mission_Result_StatItem_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Result_StatItem_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Result_StatItem_C", "SetDataImpl");

	Params::UI_Mission_Result_StatItem_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Result_StatItem.UI_Mission_Result_StatItem_C.UI View
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Mission_Result_StatItem_C::UI_View()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Result_StatItem_C", "UI View");

	UObject::ProcessEvent(Func, nullptr);
}

}

