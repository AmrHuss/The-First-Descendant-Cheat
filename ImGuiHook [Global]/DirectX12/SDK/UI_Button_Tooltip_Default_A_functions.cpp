#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Button_Tooltip_Default_A

#include "Basic.hpp"

#include "UI_Button_Tooltip_Default_A_classes.hpp"
#include "UI_Button_Tooltip_Default_A_parameters.hpp"


namespace SDK
{

// Function UI_Button_Tooltip_Default_A.UI_Button_Tooltip_Default_A_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Button_Tooltip_Default_A_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_Tooltip_Default_A_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Button_Tooltip_Default_A.UI_Button_Tooltip_Default_A_C.ExecuteUbergraph_UI_Button_Tooltip_Default_A
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_Tooltip_Default_A_C::ExecuteUbergraph_UI_Button_Tooltip_Default_A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_Tooltip_Default_A_C", "ExecuteUbergraph_UI_Button_Tooltip_Default_A");

	Params::UI_Button_Tooltip_Default_A_C_ExecuteUbergraph_UI_Button_Tooltip_Default_A Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_Tooltip_Default_A.UI_Button_Tooltip_Default_A_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_Tooltip_Default_A_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_Tooltip_Default_A_C", "OnEventWidgetOpen");

	Params::UI_Button_Tooltip_Default_A_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_Tooltip_Default_A.UI_Button_Tooltip_Default_A_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_Tooltip_Default_A_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_Tooltip_Default_A_C", "PreConstruct");

	Params::UI_Button_Tooltip_Default_A_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_Tooltip_Default_A.UI_Button_Tooltip_Default_A_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUIKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Button_Tooltip_Default_A_C::SetText(const class FString& InUIKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_Tooltip_Default_A_C", "SetText");

	Params::UI_Button_Tooltip_Default_A_C_SetText Parms{};

	Parms.InUIKey = std::move(InUIKey);

	UObject::ProcessEvent(Func, &Parms);
}

}
