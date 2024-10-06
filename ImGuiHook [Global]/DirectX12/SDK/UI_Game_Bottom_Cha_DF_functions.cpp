#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Bottom_Cha_DF

#include "Basic.hpp"

#include "UI_Game_Bottom_Cha_DF_classes.hpp"
#include "UI_Game_Bottom_Cha_DF_parameters.hpp"


namespace SDK
{

// Function UI_Game_Bottom_Cha_DF.UI_Game_Bottom_Cha_DF_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Game_Bottom_Cha_DF_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Bottom_Cha_DF_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_Bottom_Cha_DF.UI_Game_Bottom_Cha_DF_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UUI_Game_Bottom_Cha_DF_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Bottom_Cha_DF_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_Bottom_Cha_DF.UI_Game_Bottom_Cha_DF_C.ExecuteUbergraph_UI_Game_Bottom_Cha_DF
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Bottom_Cha_DF_C::ExecuteUbergraph_UI_Game_Bottom_Cha_DF(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Bottom_Cha_DF_C", "ExecuteUbergraph_UI_Game_Bottom_Cha_DF");

	Params::UI_Game_Bottom_Cha_DF_C_ExecuteUbergraph_UI_Game_Bottom_Cha_DF Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Bottom_Cha_DF.UI_Game_Bottom_Cha_DF_C.SetAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Bottom_Cha_DF_C::SetAmount(double InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Bottom_Cha_DF_C", "SetAmount");

	Params::UI_Game_Bottom_Cha_DF_C_SetAmount Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}

}
