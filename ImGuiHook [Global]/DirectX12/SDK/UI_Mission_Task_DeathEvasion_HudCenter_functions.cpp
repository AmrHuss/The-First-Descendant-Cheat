#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_DeathEvasion_HudCenter

#include "Basic.hpp"

#include "UI_Mission_Task_DeathEvasion_HudCenter_classes.hpp"
#include "UI_Mission_Task_DeathEvasion_HudCenter_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Task_DeathEvasion_HudCenter.UI_Mission_Task_DeathEvasion_HudCenter_C.ExecuteUbergraph_UI_Mission_Task_DeathEvasion_HudCenter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_DeathEvasion_HudCenter_C::ExecuteUbergraph_UI_Mission_Task_DeathEvasion_HudCenter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_DeathEvasion_HudCenter_C", "ExecuteUbergraph_UI_Mission_Task_DeathEvasion_HudCenter");

	Params::UI_Mission_Task_DeathEvasion_HudCenter_C_ExecuteUbergraph_UI_Mission_Task_DeathEvasion_HudCenter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_DeathEvasion_HudCenter.UI_Mission_Task_DeathEvasion_HudCenter_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_DeathEvasion_HudCenter_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_DeathEvasion_HudCenter_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task_DeathEvasion_HudCenter.UI_Mission_Task_DeathEvasion_HudCenter_C.SequenceEvent__ENTRYPOINTUI_Mission_Task_DeathEvasion_HudCenter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_DeathEvasion_HudCenter_C::SequenceEvent__ENTRYPOINTUI_Mission_Task_DeathEvasion_HudCenter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_DeathEvasion_HudCenter_C", "SequenceEvent__ENTRYPOINTUI_Mission_Task_DeathEvasion_HudCenter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task_DeathEvasion_HudCenter.UI_Mission_Task_DeathEvasion_HudCenter_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_DeathEvasion_HudCenter_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_DeathEvasion_HudCenter_C", "SetDataImpl");

	Params::UI_Mission_Task_DeathEvasion_HudCenter_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}

}

