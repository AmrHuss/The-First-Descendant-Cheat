#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KyleCommonGaugeIncreaseByBarrier

#include "Basic.hpp"

#include "KyleCommonGaugeIncreaseByBarrier_classes.hpp"
#include "KyleCommonGaugeIncreaseByBarrier_parameters.hpp"


namespace SDK
{

// Function KyleCommonGaugeIncreaseByBarrier.KyleCommonGaugeIncreaseByBarrier_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1AbilityOpExecCalcOutput       Output                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKyleCommonGaugeIncreaseByBarrier_C::Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KyleCommonGaugeIncreaseByBarrier_C", "Execute");

	Params::KyleCommonGaugeIncreaseByBarrier_C_Execute Parms{};

	Parms.Param = std::move(Param);
	Parms.Output = std::move(Output);

	UObject::ProcessEvent(Func, &Parms);

	Output = std::move(Parms.Output);
}

}

