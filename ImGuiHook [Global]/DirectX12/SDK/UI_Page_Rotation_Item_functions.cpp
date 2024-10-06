#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Page_Rotation_Item

#include "Basic.hpp"

#include "UI_Page_Rotation_Item_classes.hpp"
#include "UI_Page_Rotation_Item_parameters.hpp"


namespace SDK
{

// Function UI_Page_Rotation_Item.UI_Page_Rotation_Item_C.BP_DisplayAsSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bSelected_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Page_Rotation_Item_C::BP_DisplayAsSelected(const bool bSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Page_Rotation_Item_C", "BP_DisplayAsSelected");

	Params::UI_Page_Rotation_Item_C_BP_DisplayAsSelected Parms{};

	Parms.bSelected_0 = bSelected_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Page_Rotation_Item.UI_Page_Rotation_Item_C.ExecuteUbergraph_UI_Page_Rotation_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Page_Rotation_Item_C::ExecuteUbergraph_UI_Page_Rotation_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Page_Rotation_Item_C", "ExecuteUbergraph_UI_Page_Rotation_Item");

	Params::UI_Page_Rotation_Item_C_ExecuteUbergraph_UI_Page_Rotation_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

