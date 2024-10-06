#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusEffect_Knockback

#include "Basic.hpp"

#include "StatusEffect_Knockback_classes.hpp"
#include "StatusEffect_Knockback_parameters.hpp"


namespace SDK
{

// Function StatusEffect_Knockback.StatusEffect_Knockback_C.GetVelocityX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  VelocityX_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Knockback_C::GetVelocityX(double* VelocityX_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusEffect_Knockback_C", "GetVelocityX");

	Params::StatusEffect_Knockback_C_GetVelocityX Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VelocityX_0 != nullptr)
		*VelocityX_0 = Parms.VelocityX_0;
}


// Function StatusEffect_Knockback.StatusEffect_Knockback_C.GetMoveFloatCurve
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveFloat*                      MoveCurve                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Knockback_C::GetMoveFloatCurve(class UCurveFloat** MoveCurve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusEffect_Knockback_C", "GetMoveFloatCurve");

	Params::StatusEffect_Knockback_C_GetMoveFloatCurve Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MoveCurve != nullptr)
		*MoveCurve = Parms.MoveCurve;
}


// Function StatusEffect_Knockback.StatusEffect_Knockback_C.GetMoveDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  Duration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Knockback_C::GetMoveDuration(double* Duration) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusEffect_Knockback_C", "GetMoveDuration");

	Params::StatusEffect_Knockback_C_GetMoveDuration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;
}

}

