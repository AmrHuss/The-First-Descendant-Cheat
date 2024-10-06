#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Radar

#include "Basic.hpp"

#include "UI_Game_Radar_classes.hpp"
#include "UI_Game_Radar_parameters.hpp"


namespace SDK
{

// Function UI_Game_Radar.UI_Game_Radar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Game_Radar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Radar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_Radar.UI_Game_Radar_C.ExecuteUbergraph_UI_Game_Radar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Radar_C::ExecuteUbergraph_UI_Game_Radar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Radar_C", "ExecuteUbergraph_UI_Game_Radar");

	Params::UI_Game_Radar_C_ExecuteUbergraph_UI_Game_Radar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
