#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Climb

#include "Basic.hpp"

#include "Skill_Climb_classes.hpp"
#include "Skill_Climb_parameters.hpp"


namespace SDK
{

// Function Skill_Climb.Skill_Climb_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USkill_Climb_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Climb.Skill_Climb_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Climb_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "BP_OnDeactivated");

	Params::Skill_Climb_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Climb.Skill_Climb_C.ExecuteUbergraph_Skill_Climb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Climb_C::ExecuteUbergraph_Skill_Climb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "ExecuteUbergraph_Skill_Climb");

	Params::Skill_Climb_C_ExecuteUbergraph_Skill_Climb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Climb.Skill_Climb_C.GetClimbMontageParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     OutMontage                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             OutSection                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Climb_C::GetClimbMontageParam(class UAnimMontage** OutMontage, class FName* OutSection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "GetClimbMontageParam");

	Params::Skill_Climb_C_GetClimbMontageParam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMontage != nullptr)
		*OutMontage = Parms.OutMontage;

	if (OutSection != nullptr)
		*OutSection = Parms.OutSection;
}


// Function Skill_Climb.Skill_Climb_C.OnBlendOut_05CFB6A44178B888242050A9EF156EF4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_Climb_C::OnBlendOut_05CFB6A44178B888242050A9EF156EF4(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "OnBlendOut_05CFB6A44178B888242050A9EF156EF4");

	Params::Skill_Climb_C_OnBlendOut_05CFB6A44178B888242050A9EF156EF4 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Climb.Skill_Climb_C.OnCompleted_05CFB6A44178B888242050A9EF156EF4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_Climb_C::OnCompleted_05CFB6A44178B888242050A9EF156EF4(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "OnCompleted_05CFB6A44178B888242050A9EF156EF4");

	Params::Skill_Climb_C_OnCompleted_05CFB6A44178B888242050A9EF156EF4 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Climb.Skill_Climb_C.OnEventReceived_05CFB6A44178B888242050A9EF156EF4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_Climb_C::OnEventReceived_05CFB6A44178B888242050A9EF156EF4(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "OnEventReceived_05CFB6A44178B888242050A9EF156EF4");

	Params::Skill_Climb_C_OnEventReceived_05CFB6A44178B888242050A9EF156EF4 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Climb.Skill_Climb_C.TryCommitClimb
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool USkill_Climb_C::TryCommitClimb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "TryCommitClimb");

	Params::Skill_Climb_C_TryCommitClimb Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Skill_Climb.Skill_Climb_C.UpdateClimbMotionWarping
// (Public, BlueprintCallable, BlueprintEvent)

void USkill_Climb_C::UpdateClimbMotionWarping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "UpdateClimbMotionWarping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Climb.Skill_Climb_C.GetEndLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          OutLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Climb_C::GetEndLocation(struct FVector* OutLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "GetEndLocation");

	Params::Skill_Climb_C_GetEndLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);
}


// Function Skill_Climb.Skill_Climb_C.GetGrabOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          OutOffset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Climb_C::GetGrabOffset(struct FVector* OutOffset) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Climb_C", "GetGrabOffset");

	Params::Skill_Climb_C_GetGrabOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutOffset != nullptr)
		*OutOffset = std::move(Parms.OutOffset);
}

}

