#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameCenter_Warning

#include "Basic.hpp"

#include "UI_GameCenter_Warning_classes.hpp"
#include "UI_GameCenter_Warning_parameters.hpp"


namespace SDK
{

// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.BP_ShowMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// EGameCenterMessageType                  InType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLooping                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameCenter_Warning_C::BP_ShowMessage(const EGameCenterMessageType InType, const bool bIsLooping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameCenter_Warning_C", "BP_ShowMessage");

	Params::UI_GameCenter_Warning_C_BP_ShowMessage Parms{};

	Parms.InType = InType;
	Parms.bIsLooping = bIsLooping;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameCenter_Warning_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameCenter_Warning_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.ExecuteUbergraph_UI_GameCenter_Warning
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameCenter_Warning_C::ExecuteUbergraph_UI_GameCenter_Warning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameCenter_Warning_C", "ExecuteUbergraph_UI_GameCenter_Warning");

	Params::UI_GameCenter_Warning_C_ExecuteUbergraph_UI_GameCenter_Warning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.SequenceEvent_0
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameCenter_Warning_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameCenter_Warning_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.SequenceEvent__ENTRYPOINTUI_GameCenter_Warning
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameCenter_Warning_C::SequenceEvent__ENTRYPOINTUI_GameCenter_Warning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameCenter_Warning_C", "SequenceEvent__ENTRYPOINTUI_GameCenter_Warning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     BG_color                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameCenter_Warning_C::UpdateText(const class FText& Text, const struct FLinearColor& Color, const struct FLinearColor& BG_color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameCenter_Warning_C", "UpdateText");

	Params::UI_GameCenter_Warning_C_UpdateText Parms{};

	Parms.Text = std::move(Text);
	Parms.Color = std::move(Color);
	Parms.BG_color = std::move(BG_color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameCenter_Warning.UI_GameCenter_Warning_C.UpdateTextByType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameCenterMessageType                  InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameCenter_Warning_C::UpdateTextByType(EGameCenterMessageType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameCenter_Warning_C", "UpdateTextByType");

	Params::UI_GameCenter_Warning_C_UpdateTextByType Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}

}

