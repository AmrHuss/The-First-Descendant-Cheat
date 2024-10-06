#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_LevelUp

#include "Basic.hpp"

#include "UI_GameTop_LevelUp_classes.hpp"
#include "UI_GameTop_LevelUp_parameters.hpp"


namespace SDK
{

// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.BP_playakSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_LevelUp_C::BP_playakSound(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "BP_playakSound");

	Params::UI_GameTop_LevelUp_C_BP_playakSound Parms{};

	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.BP_PlayChangedListOpenAnim
// (Event, Public, BlueprintEvent)

void UUI_GameTop_LevelUp_C::BP_PlayChangedListOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "BP_PlayChangedListOpenAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.BP_UpdateAppearanceByLevel
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsMaxLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_LevelUp_C::BP_UpdateAppearanceByLevel(bool bIsMaxLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "BP_UpdateAppearanceByLevel");

	Params::UI_GameTop_LevelUp_C_BP_UpdateAppearanceByLevel Parms{};

	Parms.bIsMaxLevel = bIsMaxLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.ExecuteUbergraph_UI_GameTop_LevelUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_LevelUp_C::ExecuteUbergraph_UI_GameTop_LevelUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "ExecuteUbergraph_UI_GameTop_LevelUp");

	Params::UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.GetEndAnimation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidgetAnimation* UUI_GameTop_LevelUp_C::GetEndAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "GetEndAnimation");

	Params::UI_GameTop_LevelUp_C_GetEndAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_LevelUp_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "OnEventWidgetOpen");

	Params::UI_GameTop_LevelUp_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.PlayCloseAnim
// (BlueprintCallable, BlueprintEvent)

void UUI_GameTop_LevelUp_C::PlayCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "PlayCloseAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.PlaySkillAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GameTop_LevelUp_C::PlaySkillAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "PlaySkillAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.SequenceEvent__ENTRYPOINTUI_GameTop_LevelUp
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameTop_LevelUp_C::SequenceEvent__ENTRYPOINTUI_GameTop_LevelUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "SequenceEvent__ENTRYPOINTUI_GameTop_LevelUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.UI_Deco_TitleLine_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Deco_TitleLine_01_C*          UI_Deco_TitleLine                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_LevelUp_C::UI_Deco_TitleLine_Event_0(class UUI_Deco_TitleLine_01_C* UI_Deco_TitleLine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_LevelUp_C", "UI_Deco_TitleLine_Event_0");

	Params::UI_GameTop_LevelUp_C_UI_Deco_TitleLine_Event_0 Parms{};

	Parms.UI_Deco_TitleLine = UI_Deco_TitleLine;

	UObject::ProcessEvent(Func, &Parms);
}

}

