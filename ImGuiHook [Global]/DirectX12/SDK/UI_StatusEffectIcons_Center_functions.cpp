#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_StatusEffectIcons_Center

#include "Basic.hpp"

#include "UI_StatusEffectIcons_Center_classes.hpp"
#include "UI_StatusEffectIcons_Center_parameters.hpp"


namespace SDK
{

// Function UI_StatusEffectIcons_Center.UI_StatusEffectIcons_Center_C.ExecuteUbergraph_UI_StatusEffectIcons_Center
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffectIcons_Center_C::ExecuteUbergraph_UI_StatusEffectIcons_Center(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_StatusEffectIcons_Center_C", "ExecuteUbergraph_UI_StatusEffectIcons_Center");

	Params::UI_StatusEffectIcons_Center_C_ExecuteUbergraph_UI_StatusEffectIcons_Center Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_StatusEffectIcons_Center.UI_StatusEffectIcons_Center_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffectIcons_Center_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_StatusEffectIcons_Center_C", "PreConstruct");

	Params::UI_StatusEffectIcons_Center_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_StatusEffectIcons_Center.UI_StatusEffectIcons_Center_C.SetHorizontalAlign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EHorizontalAlignment                    HAlignment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StatusEffectIcons_Center_C::SetHorizontalAlign(class UOverlay* Target, EHorizontalAlignment HAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_StatusEffectIcons_Center_C", "SetHorizontalAlign");

	Params::UI_StatusEffectIcons_Center_C_SetHorizontalAlign Parms{};

	Parms.Target = Target;
	Parms.HAlignment = HAlignment;

	UObject::ProcessEvent(Func, &Parms);
}

}

