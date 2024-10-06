#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Timer_MissionOnly

#include "Basic.hpp"

#include "UI_Timer_MissionOnly_classes.hpp"
#include "UI_Timer_MissionOnly_parameters.hpp"


namespace SDK
{

// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.BP_OnChangeExtraTimer
// (Event, Protected, BlueprintEvent)

void UUI_Timer_MissionOnly_C::BP_OnChangeExtraTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "BP_OnChangeExtraTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.BP_OnResetExtraTime
// (Event, Protected, BlueprintEvent)

void UUI_Timer_MissionOnly_C::BP_OnResetExtraTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "BP_OnResetExtraTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.BP_SetWarning
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWarn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Timer_MissionOnly_C::BP_SetWarning(bool bWarn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "BP_SetWarning");

	Params::UI_Timer_MissionOnly_C_BP_SetWarning Parms{};

	Parms.bWarn = bWarn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Timer_MissionOnly_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.ExecuteUbergraph_UI_Timer_MissionOnly
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Timer_MissionOnly_C::ExecuteUbergraph_UI_Timer_MissionOnly(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "ExecuteUbergraph_UI_Timer_MissionOnly");

	Params::UI_Timer_MissionOnly_C_ExecuteUbergraph_UI_Timer_MissionOnly Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Timer_MissionOnly_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "PreConstruct");

	Params::UI_Timer_MissionOnly_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.SetExtraTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Timer_MissionOnly_C::SetExtraTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "SetExtraTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.SetUI_Default
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Timer_MissionOnly_C::SetUI_Default()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "SetUI_Default");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.SetUI_Style
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Timer_MissionOnly_C::SetUI_Style()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "SetUI_Style");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.UI_Timer_MissionOnly_OnTimerWarningBelow
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Timer_MissionOnly_C::UI_Timer_MissionOnly_OnTimerWarningBelow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "UI_Timer_MissionOnly_OnTimerWarningBelow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Timer_MissionOnly.UI_Timer_MissionOnly_C.WidgetAnimationEvt_UIAnim_ExtraTime_Start_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUI_Timer_MissionOnly_C::WidgetAnimationEvt_UIAnim_ExtraTime_Start_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_MissionOnly_C", "WidgetAnimationEvt_UIAnim_ExtraTime_Start_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

