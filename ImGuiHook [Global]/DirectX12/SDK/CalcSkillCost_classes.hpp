#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSkillCost

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CalcEtcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcSkillCost.CalcSkillCost_C
// 0x0018 (0x0110 - 0x00F8)
class UCalcSkillCost_C : public UCalcEtcBase_C
{
public:
	EM1StatType                                   CurrentStat;                                       // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   MaxStat;                                           // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Value;                                             // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRatio;                                           // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreCoefficient;                                 // 0x0109(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcSkillCost_C">();
	}
	static class UCalcSkillCost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcSkillCost_C>();
	}
};
static_assert(alignof(UCalcSkillCost_C) == 0x000008, "Wrong alignment on UCalcSkillCost_C");
static_assert(sizeof(UCalcSkillCost_C) == 0x000110, "Wrong size on UCalcSkillCost_C");
static_assert(offsetof(UCalcSkillCost_C, CurrentStat) == 0x0000F8, "Member 'UCalcSkillCost_C::CurrentStat' has a wrong offset!");
static_assert(offsetof(UCalcSkillCost_C, MaxStat) == 0x0000F9, "Member 'UCalcSkillCost_C::MaxStat' has a wrong offset!");
static_assert(offsetof(UCalcSkillCost_C, Value) == 0x000100, "Member 'UCalcSkillCost_C::Value' has a wrong offset!");
static_assert(offsetof(UCalcSkillCost_C, IsRatio) == 0x000108, "Member 'UCalcSkillCost_C::IsRatio' has a wrong offset!");
static_assert(offsetof(UCalcSkillCost_C, IgnoreCoefficient) == 0x000109, "Member 'UCalcSkillCost_C::IgnoreCoefficient' has a wrong offset!");

}

