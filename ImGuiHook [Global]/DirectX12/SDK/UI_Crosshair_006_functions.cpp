#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Crosshair_006

#include "Basic.hpp"

#include "UI_Crosshair_006_classes.hpp"
#include "UI_Crosshair_006_parameters.hpp"


namespace SDK
{

// Function UI_Crosshair_006.UI_Crosshair_006_C.ExecuteUbergraph_UI_Crosshair_006
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Crosshair_006_C::ExecuteUbergraph_UI_Crosshair_006(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Crosshair_006_C", "ExecuteUbergraph_UI_Crosshair_006");

	Params::UI_Crosshair_006_C_ExecuteUbergraph_UI_Crosshair_006 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Crosshair_006.UI_Crosshair_006_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Crosshair_006_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Crosshair_006_C", "PreConstruct");

	Params::UI_Crosshair_006_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

