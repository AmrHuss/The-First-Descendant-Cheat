#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ToastMessage_B_Crosshair

#include "Basic.hpp"

#include "UI_ToastMessage_B_Crosshair_classes.hpp"
#include "UI_ToastMessage_B_Crosshair_parameters.hpp"


namespace SDK
{

// Function UI_ToastMessage_B_Crosshair.UI_ToastMessage_B_Crosshair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ToastMessage_B_Crosshair_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ToastMessage_B_Crosshair_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ToastMessage_B_Crosshair.UI_ToastMessage_B_Crosshair_C.ExecuteUbergraph_UI_ToastMessage_B_Crosshair
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ToastMessage_B_Crosshair_C::ExecuteUbergraph_UI_ToastMessage_B_Crosshair(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ToastMessage_B_Crosshair_C", "ExecuteUbergraph_UI_ToastMessage_B_Crosshair");

	Params::UI_ToastMessage_B_Crosshair_C_ExecuteUbergraph_UI_ToastMessage_B_Crosshair Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

