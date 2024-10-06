#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Deco_Flicker

#include "Basic.hpp"

#include "UI_Deco_Flicker_classes.hpp"
#include "UI_Deco_Flicker_parameters.hpp"


namespace SDK
{

// Function UI_Deco_Flicker.UI_Deco_Flicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Deco_Flicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Flicker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Deco_Flicker.UI_Deco_Flicker_C.ExecuteUbergraph_UI_Deco_Flicker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Deco_Flicker_C::ExecuteUbergraph_UI_Deco_Flicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Flicker_C", "ExecuteUbergraph_UI_Deco_Flicker");

	Params::UI_Deco_Flicker_C_ExecuteUbergraph_UI_Deco_Flicker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

