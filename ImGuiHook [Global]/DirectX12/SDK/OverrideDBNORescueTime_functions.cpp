#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OverrideDBNORescueTime

#include "Basic.hpp"

#include "OverrideDBNORescueTime_classes.hpp"
#include "OverrideDBNORescueTime_parameters.hpp"


namespace SDK
{

// Function OverrideDBNORescueTime.OverrideDBNORescueTime_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1AbilityOpExecCalcOutput       Output                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOverrideDBNORescueTime_C::Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverrideDBNORescueTime_C", "Execute");

	Params::OverrideDBNORescueTime_C_Execute Parms{};

	Parms.Param = std::move(Param);
	Parms.Output = std::move(Output);

	UObject::ProcessEvent(Func, &Parms);

	Output = std::move(Parms.Output);
}

}

