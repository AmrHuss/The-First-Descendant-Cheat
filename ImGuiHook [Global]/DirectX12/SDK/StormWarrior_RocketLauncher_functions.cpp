#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StormWarrior_RocketLauncher

#include "Basic.hpp"

#include "StormWarrior_RocketLauncher_classes.hpp"
#include "StormWarrior_RocketLauncher_parameters.hpp"


namespace SDK
{

// Function StormWarrior_RocketLauncher.StormWarrior_RocketLauncher_C.OnEventReceived_FA8E44774F6E6C136E6B94B6ED6CEB35
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStormWarrior_RocketLauncher_C::OnEventReceived_FA8E44774F6E6C136E6B94B6ED6CEB35(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormWarrior_RocketLauncher_C", "OnEventReceived_FA8E44774F6E6C136E6B94B6ED6CEB35");

	Params::StormWarrior_RocketLauncher_C_OnEventReceived_FA8E44774F6E6C136E6B94B6ED6CEB35 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StormWarrior_RocketLauncher.StormWarrior_RocketLauncher_C.OnCompleted_FA8E44774F6E6C136E6B94B6ED6CEB35
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStormWarrior_RocketLauncher_C::OnCompleted_FA8E44774F6E6C136E6B94B6ED6CEB35(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormWarrior_RocketLauncher_C", "OnCompleted_FA8E44774F6E6C136E6B94B6ED6CEB35");

	Params::StormWarrior_RocketLauncher_C_OnCompleted_FA8E44774F6E6C136E6B94B6ED6CEB35 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StormWarrior_RocketLauncher.StormWarrior_RocketLauncher_C.OnBlendOut_FA8E44774F6E6C136E6B94B6ED6CEB35
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStormWarrior_RocketLauncher_C::OnBlendOut_FA8E44774F6E6C136E6B94B6ED6CEB35(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormWarrior_RocketLauncher_C", "OnBlendOut_FA8E44774F6E6C136E6B94B6ED6CEB35");

	Params::StormWarrior_RocketLauncher_C_OnBlendOut_FA8E44774F6E6C136E6B94B6ED6CEB35 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StormWarrior_RocketLauncher.StormWarrior_RocketLauncher_C.ExecuteUbergraph_StormWarrior_RocketLauncher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStormWarrior_RocketLauncher_C::ExecuteUbergraph_StormWarrior_RocketLauncher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormWarrior_RocketLauncher_C", "ExecuteUbergraph_StormWarrior_RocketLauncher");

	Params::StormWarrior_RocketLauncher_C_ExecuteUbergraph_StormWarrior_RocketLauncher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StormWarrior_RocketLauncher.StormWarrior_RocketLauncher_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UStormWarrior_RocketLauncher_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormWarrior_RocketLauncher_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

