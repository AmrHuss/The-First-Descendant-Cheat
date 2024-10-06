#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_VoidVault_item

#include "Basic.hpp"

#include "UI_Mission_VoidVault_item_classes.hpp"
#include "UI_Mission_VoidVault_item_parameters.hpp"


namespace SDK
{

// Function UI_Mission_VoidVault_item.UI_Mission_VoidVault_item_C.BP_SetIsOwned
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bOwned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_VoidVault_item_C::BP_SetIsOwned(bool bOwned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidVault_item_C", "BP_SetIsOwned");

	Params::UI_Mission_VoidVault_item_C_BP_SetIsOwned Parms{};

	Parms.bOwned = bOwned;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_VoidVault_item.UI_Mission_VoidVault_item_C.ExecuteUbergraph_UI_Mission_VoidVault_item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_VoidVault_item_C::ExecuteUbergraph_UI_Mission_VoidVault_item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidVault_item_C", "ExecuteUbergraph_UI_Mission_VoidVault_item");

	Params::UI_Mission_VoidVault_item_C_ExecuteUbergraph_UI_Mission_VoidVault_item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_VoidVault_item.UI_Mission_VoidVault_item_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_VoidVault_item_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidVault_item_C", "SetDataImpl");

	Params::UI_Mission_VoidVault_item_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}

}

