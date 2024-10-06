#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_TargetListItem2_Survival

#include "Basic.hpp"

#include "UI_Mission_Task_TargetListItem2_Survival_classes.hpp"
#include "UI_Mission_Task_TargetListItem2_Survival_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Task_TargetListItem2_Survival.UI_Mission_Task_TargetListItem2_Survival_C.BP_SetAllMonstersKilled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInAllMonsterdKilled                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_TargetListItem2_Survival_C::BP_SetAllMonstersKilled(bool bInAllMonsterdKilled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem2_Survival_C", "BP_SetAllMonstersKilled");

	Params::UI_Mission_Task_TargetListItem2_Survival_C_BP_SetAllMonstersKilled Parms{};

	Parms.bInAllMonsterdKilled = bInAllMonsterdKilled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_TargetListItem2_Survival.UI_Mission_Task_TargetListItem2_Survival_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Mission_Task_TargetListItem2_Survival_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem2_Survival_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task_TargetListItem2_Survival.UI_Mission_Task_TargetListItem2_Survival_C.ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_TargetListItem2_Survival_C::ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem2_Survival_C", "ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival");

	Params::UI_Mission_Task_TargetListItem2_Survival_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_TargetListItem2_Survival.UI_Mission_Task_TargetListItem2_Survival_C.Finished_A91C80D44D68822C6CDEAB81F8E5D8BC
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_TargetListItem2_Survival_C::Finished_A91C80D44D68822C6CDEAB81F8E5D8BC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem2_Survival_C", "Finished_A91C80D44D68822C6CDEAB81F8E5D8BC");

	UObject::ProcessEvent(Func, nullptr);
}

}
