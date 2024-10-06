#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Button_12

#include "Basic.hpp"

#include "UI_Button_12_classes.hpp"
#include "UI_Button_12_parameters.hpp"


namespace SDK
{

// Function UI_Button_12.UI_Button_12_C.BP_ChangeButtonUI
// (Event, Public, BlueprintEvent)
// Parameters:
// EM1ButtonUIType                         InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_12_C::BP_ChangeButtonUI(EM1ButtonUIType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_12_C", "BP_ChangeButtonUI");

	Params::UI_Button_12_C_BP_ChangeButtonUI Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_12.UI_Button_12_C.BP_Selected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_12_C::BP_Selected(bool InSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_12_C", "BP_Selected");

	Params::UI_Button_12_C_BP_Selected Parms{};

	Parms.InSelected = InSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_12.UI_Button_12_C.ExecuteUbergraph_UI_Button_12
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_12_C::ExecuteUbergraph_UI_Button_12(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_12_C", "ExecuteUbergraph_UI_Button_12");

	Params::UI_Button_12_C_ExecuteUbergraph_UI_Button_12 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_12.UI_Button_12_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_12_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_12_C", "PreConstruct");

	Params::UI_Button_12_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_12.UI_Button_12_C.SetIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Button_12_C::SetIcon(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_12_C", "SetIcon");

	Params::UI_Button_12_C_SetIcon Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_12.UI_Button_12_C.SetIconColor
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Button_12_C::SetIconColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_12_C", "SetIconColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Button_12.UI_Button_12_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Button_12_C::SetIconSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_12_C", "SetIconSize");

	UObject::ProcessEvent(Func, nullptr);
}

}
