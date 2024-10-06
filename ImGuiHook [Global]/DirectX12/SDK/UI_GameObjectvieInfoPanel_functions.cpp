#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameObjectvieInfoPanel

#include "Basic.hpp"

#include "UI_GameObjectvieInfoPanel_classes.hpp"
#include "UI_GameObjectvieInfoPanel_parameters.hpp"


namespace SDK
{

// Function UI_GameObjectvieInfoPanel.UI_GameObjectvieInfoPanel_C.BP_GetWidgetsByPriority
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EM1GameObjectiveDisplayByPriority, class UM1UIWidget*>ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TMap<EM1GameObjectiveDisplayByPriority, class UM1UIWidget*> UUI_GameObjectvieInfoPanel_C::BP_GetWidgetsByPriority()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameObjectvieInfoPanel_C", "BP_GetWidgetsByPriority");

	Params::UI_GameObjectvieInfoPanel_C_BP_GetWidgetsByPriority Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_GameObjectvieInfoPanel.UI_GameObjectvieInfoPanel_C.Bp_Play_Ak_Audio_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_GameObjectvieInfoPanel_C::Bp_Play_Ak_Audio_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameObjectvieInfoPanel_C", "Bp_Play_Ak_Audio_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameObjectvieInfoPanel.UI_GameObjectvieInfoPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameObjectvieInfoPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameObjectvieInfoPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameObjectvieInfoPanel.UI_GameObjectvieInfoPanel_C.ExecuteUbergraph_UI_GameObjectvieInfoPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameObjectvieInfoPanel_C::ExecuteUbergraph_UI_GameObjectvieInfoPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameObjectvieInfoPanel_C", "ExecuteUbergraph_UI_GameObjectvieInfoPanel");

	Params::UI_GameObjectvieInfoPanel_C_ExecuteUbergraph_UI_GameObjectvieInfoPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameObjectvieInfoPanel.UI_GameObjectvieInfoPanel_C.SequenceEvent__ENTRYPOINTUI_GameObjectvieInfoPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameObjectvieInfoPanel_C::SequenceEvent__ENTRYPOINTUI_GameObjectvieInfoPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameObjectvieInfoPanel_C", "SequenceEvent__ENTRYPOINTUI_GameObjectvieInfoPanel");

	UObject::ProcessEvent(Func, nullptr);
}

}

