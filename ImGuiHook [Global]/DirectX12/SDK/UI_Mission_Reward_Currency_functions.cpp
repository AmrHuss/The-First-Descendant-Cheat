#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Reward_Currency

#include "Basic.hpp"

#include "UI_Mission_Reward_Currency_classes.hpp"
#include "UI_Mission_Reward_Currency_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Reward_Currency.UI_Mission_Reward_Currency_C.ExecuteUbergraph_UI_Mission_Reward_Currency
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Reward_Currency_C::ExecuteUbergraph_UI_Mission_Reward_Currency(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Reward_Currency_C", "ExecuteUbergraph_UI_Mission_Reward_Currency");

	Params::UI_Mission_Reward_Currency_C_ExecuteUbergraph_UI_Mission_Reward_Currency Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Reward_Currency.UI_Mission_Reward_Currency_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Reward_Currency_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Reward_Currency_C", "PreConstruct");

	Params::UI_Mission_Reward_Currency_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

