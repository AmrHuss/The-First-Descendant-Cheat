#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Hacking_HUDCenter

#include "Basic.hpp"

#include "UI_Mission_Task_Hacking_HUDCenter_classes.hpp"
#include "UI_Mission_Task_Hacking_HUDCenter_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.BP_ShowWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_Hacking_HUDCenter_C::BP_ShowWidget(bool bInShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_Hacking_HUDCenter_C", "BP_ShowWidget");

	Params::UI_Mission_Task_Hacking_HUDCenter_C_BP_ShowWidget Parms{};

	Parms.bInShow = bInShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_Hacking_HUDCenter_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_Hacking_HUDCenter_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_Hacking_HUDCenter_C::ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_Hacking_HUDCenter_C", "ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter");

	Params::UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

