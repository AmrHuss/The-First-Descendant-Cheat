#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MonsterTimer

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_MonsterTimer.UI_MonsterTimer_C.ChangeMonsterLifeTime
// 0x0010 (0x0010 - 0x0000)
struct UI_MonsterTimer_C_ChangeMonsterLifeTime final
{
public:
	double                                        InLifeTime;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MonsterTimer_C_ChangeMonsterLifeTime) == 0x000008, "Wrong alignment on UI_MonsterTimer_C_ChangeMonsterLifeTime");
static_assert(sizeof(UI_MonsterTimer_C_ChangeMonsterLifeTime) == 0x000010, "Wrong size on UI_MonsterTimer_C_ChangeMonsterLifeTime");
static_assert(offsetof(UI_MonsterTimer_C_ChangeMonsterLifeTime, InLifeTime) == 0x000000, "Member 'UI_MonsterTimer_C_ChangeMonsterLifeTime::InLifeTime' has a wrong offset!");
static_assert(offsetof(UI_MonsterTimer_C_ChangeMonsterLifeTime, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'UI_MonsterTimer_C_ChangeMonsterLifeTime::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

