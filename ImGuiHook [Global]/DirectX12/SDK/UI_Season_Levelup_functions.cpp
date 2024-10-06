#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Season_Levelup

#include "Basic.hpp"

#include "UI_Season_Levelup_classes.hpp"
#include "UI_Season_Levelup_parameters.hpp"


namespace SDK
{

// Function UI_Season_Levelup.UI_Season_Levelup_C.BP_PlayAnimation
// (Event, Protected, BlueprintEvent)

void UUI_Season_Levelup_C::BP_PlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Season_Levelup_C", "BP_PlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Season_Levelup.UI_Season_Levelup_C.BP_widget_playAkEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_Season_Levelup_C::BP_widget_playAkEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Season_Levelup_C", "BP_widget_playAkEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Season_Levelup.UI_Season_Levelup_C.ExecuteUbergraph_UI_Season_Levelup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Season_Levelup_C::ExecuteUbergraph_UI_Season_Levelup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Season_Levelup_C", "ExecuteUbergraph_UI_Season_Levelup");

	Params::UI_Season_Levelup_C_ExecuteUbergraph_UI_Season_Levelup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Season_Levelup.UI_Season_Levelup_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Season_Levelup_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Season_Levelup_C", "OnEventWidgetOpen");

	Params::UI_Season_Levelup_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Season_Levelup.UI_Season_Levelup_C.SequenceEvent__ENTRYPOINTUI_Season_Levelup
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Season_Levelup_C::SequenceEvent__ENTRYPOINTUI_Season_Levelup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Season_Levelup_C", "SequenceEvent__ENTRYPOINTUI_Season_Levelup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Season_Levelup.UI_Season_Levelup_C.BP_GetAnimation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidgetAnimation* UUI_Season_Levelup_C::BP_GetAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Season_Levelup_C", "BP_GetAnimation");

	Params::UI_Season_Levelup_C_BP_GetAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
