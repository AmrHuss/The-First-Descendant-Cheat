#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionWave_Start

#include "Basic.hpp"

#include "UI_MissionWave_Start_classes.hpp"
#include "UI_MissionWave_Start_parameters.hpp"


namespace SDK
{

// Function UI_MissionWave_Start.UI_MissionWave_Start_C.BP_widget_playAkEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_MissionWave_Start_C::BP_widget_playAkEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionWave_Start_C", "BP_widget_playAkEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MissionWave_Start.UI_MissionWave_Start_C.ExecuteUbergraph_UI_MissionWave_Start
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MissionWave_Start_C::ExecuteUbergraph_UI_MissionWave_Start(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionWave_Start_C", "ExecuteUbergraph_UI_MissionWave_Start");

	Params::UI_MissionWave_Start_C_ExecuteUbergraph_UI_MissionWave_Start Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionWave_Start.UI_MissionWave_Start_C.PlayAnimOpenClose
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MissionWave_Start_C::PlayAnimOpenClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionWave_Start_C", "PlayAnimOpenClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MissionWave_Start.UI_MissionWave_Start_C.SequenceEvent__ENTRYPOINTUI_MissionWave_Start
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MissionWave_Start_C::SequenceEvent__ENTRYPOINTUI_MissionWave_Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionWave_Start_C", "SequenceEvent__ENTRYPOINTUI_MissionWave_Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MissionWave_Start.UI_MissionWave_Start_C.GetEndAnimation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidgetAnimation* UUI_MissionWave_Start_C::GetEndAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionWave_Start_C", "GetEndAnimation");

	Params::UI_MissionWave_Start_C_GetEndAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
