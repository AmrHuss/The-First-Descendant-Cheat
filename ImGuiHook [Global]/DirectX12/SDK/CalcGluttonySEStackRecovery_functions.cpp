#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcGluttonySEStackRecovery

#include "Basic.hpp"

#include "CalcGluttonySEStackRecovery_classes.hpp"
#include "CalcGluttonySEStackRecovery_parameters.hpp"


namespace SDK
{

// Function CalcGluttonySEStackRecovery.CalcGluttonySEStackRecovery_C.ApplyGluttonySEStackRecovery
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// double                                  RecoveryAmount_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1RecoveryType                         RecoveryType_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1StatType                             RecoveryStat                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcGluttonySEStackRecovery_C::ApplyGluttonySEStackRecovery(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, double RecoveryAmount_0, EM1RecoveryType RecoveryType_0, EM1StatType RecoveryStat) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcGluttonySEStackRecovery_C", "ApplyGluttonySEStackRecovery");

	Params::CalcGluttonySEStackRecovery_C_ApplyGluttonySEStackRecovery Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.RecoveryAmount_0 = RecoveryAmount_0;
	Parms.RecoveryType_0 = RecoveryType_0;
	Parms.RecoveryStat = RecoveryStat;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcGluttonySEStackRecovery.CalcGluttonySEStackRecovery_C.DoCalculation
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcGluttonySEStackRecovery_C::DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcGluttonySEStackRecovery_C", "DoCalculation");

	Params::CalcGluttonySEStackRecovery_C_DoCalculation Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}

}
