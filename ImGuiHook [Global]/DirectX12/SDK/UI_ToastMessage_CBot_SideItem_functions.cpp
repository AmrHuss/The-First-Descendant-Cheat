#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ToastMessage_CBot_SideItem

#include "Basic.hpp"

#include "UI_ToastMessage_CBot_SideItem_classes.hpp"
#include "UI_ToastMessage_CBot_SideItem_parameters.hpp"


namespace SDK
{

// Function UI_ToastMessage_CBot_SideItem.UI_ToastMessage_CBot_SideItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ToastMessage_CBot_SideItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ToastMessage_CBot_SideItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ToastMessage_CBot_SideItem.UI_ToastMessage_CBot_SideItem_C.ExecuteUbergraph_UI_ToastMessage_CBot_SideItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ToastMessage_CBot_SideItem_C::ExecuteUbergraph_UI_ToastMessage_CBot_SideItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ToastMessage_CBot_SideItem_C", "ExecuteUbergraph_UI_ToastMessage_CBot_SideItem");

	Params::UI_ToastMessage_CBot_SideItem_C_ExecuteUbergraph_UI_ToastMessage_CBot_SideItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

