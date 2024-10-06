#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_LepicImmortal

#include "Basic.hpp"

#include "Skill_LepicImmortal_classes.hpp"
#include "Skill_LepicImmortal_parameters.hpp"


namespace SDK
{

// Function Skill_LepicImmortal.Skill_LepicImmortal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USkill_LepicImmortal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicImmortal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_LepicImmortal.Skill_LepicImmortal_C.ExecuteUbergraph_Skill_LepicImmortal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_LepicImmortal_C::ExecuteUbergraph_Skill_LepicImmortal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicImmortal_C", "ExecuteUbergraph_Skill_LepicImmortal");

	Params::Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_LepicImmortal.Skill_LepicImmortal_C.OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_LepicImmortal_C::OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicImmortal_C", "OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD");

	Params::Skill_LepicImmortal_C_OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_LepicImmortal.Skill_LepicImmortal_C.OnFunctionalTest
// (Event, Protected, BlueprintEvent)

void USkill_LepicImmortal_C::OnFunctionalTest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicImmortal_C", "OnFunctionalTest");

	UObject::ProcessEvent(Func, nullptr);
}

}

