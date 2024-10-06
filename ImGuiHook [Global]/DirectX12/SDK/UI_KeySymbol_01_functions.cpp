#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeySymbol_01

#include "Basic.hpp"

#include "UI_KeySymbol_01_classes.hpp"
#include "UI_KeySymbol_01_parameters.hpp"


namespace SDK
{

// Function UI_KeySymbol_01.UI_KeySymbol_01_C.BP_ChangeDimmedUI
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    InDimmed                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeySymbol_01_C::BP_ChangeDimmedUI(const bool InDimmed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "BP_ChangeDimmedUI");

	Params::UI_KeySymbol_01_C_BP_ChangeDimmedUI Parms{};

	Parms.InDimmed = InDimmed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_KeySymbol_01.UI_KeySymbol_01_C.BP_ChangeProgressUI
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    InStart                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InDuration                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeySymbol_01_C::BP_ChangeProgressUI(const bool InStart, const float InDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "BP_ChangeProgressUI");

	Params::UI_KeySymbol_01_C_BP_ChangeProgressUI Parms{};

	Parms.InStart = InStart;
	Parms.InDuration = InDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_KeySymbol_01.UI_KeySymbol_01_C.BP_SetProgressUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUseProgress                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeySymbol_01_C::BP_SetProgressUI(const bool bUseProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "BP_SetProgressUI");

	Params::UI_KeySymbol_01_C_BP_SetProgressUI Parms{};

	Parms.bUseProgress = bUseProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_KeySymbol_01.UI_KeySymbol_01_C.ExecuteUbergraph_UI_KeySymbol_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeySymbol_01_C::ExecuteUbergraph_UI_KeySymbol_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "ExecuteUbergraph_UI_KeySymbol_01");

	Params::UI_KeySymbol_01_C_ExecuteUbergraph_UI_KeySymbol_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_KeySymbol_01.UI_KeySymbol_01_C.KeySymbol_Change02
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1ButtonUIType                         EM1Button                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeySymbol_01_C::KeySymbol_Change02(EM1ButtonUIType EM1Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "KeySymbol_Change02");

	Params::UI_KeySymbol_01_C_KeySymbol_Change02 Parms{};

	Parms.EM1Button = EM1Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_KeySymbol_01.UI_KeySymbol_01_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeySymbol_01_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "PreConstruct");

	Params::UI_KeySymbol_01_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_KeySymbol_01.UI_KeySymbol_01_C.ResetProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_KeySymbol_01_C::ResetProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "ResetProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_KeySymbol_01.UI_KeySymbol_01_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UUI_KeySymbol_01_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_KeySymbol_01.UI_KeySymbol_01_C.SequenceEvent__ENTRYPOINTUI_KeySymbol_01
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_KeySymbol_01_C::SequenceEvent__ENTRYPOINTUI_KeySymbol_01()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "SequenceEvent__ENTRYPOINTUI_KeySymbol_01");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_KeySymbol_01.UI_KeySymbol_01_C.UISetKeyColor
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_KeySymbol_01_C::UISetKeyColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeySymbol_01_C", "UISetKeyColor");

	UObject::ProcessEvent(Func, nullptr);
}

}

