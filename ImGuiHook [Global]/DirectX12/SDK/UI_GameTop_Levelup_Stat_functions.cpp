#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_Levelup_Stat

#include "Basic.hpp"

#include "UI_GameTop_Levelup_Stat_classes.hpp"
#include "UI_GameTop_Levelup_Stat_parameters.hpp"


namespace SDK
{

// Function UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C.ExecuteUbergraph_UI_GameTop_Levelup_Stat
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_Levelup_Stat_C::ExecuteUbergraph_UI_GameTop_Levelup_Stat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_Levelup_Stat_C", "ExecuteUbergraph_UI_GameTop_Levelup_Stat");

	Params::UI_GameTop_Levelup_Stat_C_ExecuteUbergraph_UI_GameTop_Levelup_Stat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C.PlayStatOpenAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InDelay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_Levelup_Stat_C::PlayStatOpenAnim(double InDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_Levelup_Stat_C", "PlayStatOpenAnim");

	Params::UI_GameTop_Levelup_Stat_C_PlayStatOpenAnim Parms{};

	Parms.InDelay = InDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_Levelup_Stat_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_Levelup_Stat_C", "PreConstruct");

	Params::UI_GameTop_Levelup_Stat_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
