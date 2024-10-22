#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_InvasionDungeon_TimeAttack

#include "Basic.hpp"

#include "UI_Game_InvasionDungeon_TimeAttack_classes.hpp"
#include "UI_Game_InvasionDungeon_TimeAttack_parameters.hpp"


namespace SDK
{

// Function UI_Game_InvasionDungeon_TimeAttack.UI_Game_InvasionDungeon_TimeAttack_C.BP_ChangeActiveTimeAttack
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_InvasionDungeon_TimeAttack_C::BP_ChangeActiveTimeAttack(int32 InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InvasionDungeon_TimeAttack_C", "BP_ChangeActiveTimeAttack");

	Params::UI_Game_InvasionDungeon_TimeAttack_C_BP_ChangeActiveTimeAttack Parms{};

	Parms.InUniqueId = InUniqueId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_InvasionDungeon_TimeAttack.UI_Game_InvasionDungeon_TimeAttack_C.ExecuteUbergraph_UI_Game_InvasionDungeon_TimeAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_InvasionDungeon_TimeAttack_C::ExecuteUbergraph_UI_Game_InvasionDungeon_TimeAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InvasionDungeon_TimeAttack_C", "ExecuteUbergraph_UI_Game_InvasionDungeon_TimeAttack");

	Params::UI_Game_InvasionDungeon_TimeAttack_C_ExecuteUbergraph_UI_Game_InvasionDungeon_TimeAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_InvasionDungeon_TimeAttack.UI_Game_InvasionDungeon_TimeAttack_C.BP_GetTimeAttackItems
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UM1UIInvasionDungeonScoreItem*>ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UM1UIInvasionDungeonScoreItem*> UUI_Game_InvasionDungeon_TimeAttack_C::BP_GetTimeAttackItems() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InvasionDungeon_TimeAttack_C", "BP_GetTimeAttackItems");

	Params::UI_Game_InvasionDungeon_TimeAttack_C_BP_GetTimeAttackItems Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

