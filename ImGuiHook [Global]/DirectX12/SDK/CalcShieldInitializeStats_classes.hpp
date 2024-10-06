#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcShieldInitializeStats

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CalcEtcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcShieldInitializeStats.CalcShieldInitializeStats_C
// 0x0028 (0x0120 - 0x00F8)
class UCalcShieldInitializeStats_C final : public UCalcEtcBase_C
{
public:
	EM1ElementalDamageChannel                     SkillElementalType;                                // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1SkillArcheType                             SkillArcheType;                                    // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MultiplyValue;                                     // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddValue;                                          // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StatAddRatio;                                      // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   RefStat;                                           // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   ResultStat;                                        // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcShieldInitializeStats_C">();
	}
	static class UCalcShieldInitializeStats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcShieldInitializeStats_C>();
	}
};
static_assert(alignof(UCalcShieldInitializeStats_C) == 0x000008, "Wrong alignment on UCalcShieldInitializeStats_C");
static_assert(sizeof(UCalcShieldInitializeStats_C) == 0x000120, "Wrong size on UCalcShieldInitializeStats_C");
static_assert(offsetof(UCalcShieldInitializeStats_C, SkillElementalType) == 0x0000F8, "Member 'UCalcShieldInitializeStats_C::SkillElementalType' has a wrong offset!");
static_assert(offsetof(UCalcShieldInitializeStats_C, SkillArcheType) == 0x0000F9, "Member 'UCalcShieldInitializeStats_C::SkillArcheType' has a wrong offset!");
static_assert(offsetof(UCalcShieldInitializeStats_C, MultiplyValue) == 0x000100, "Member 'UCalcShieldInitializeStats_C::MultiplyValue' has a wrong offset!");
static_assert(offsetof(UCalcShieldInitializeStats_C, AddValue) == 0x000108, "Member 'UCalcShieldInitializeStats_C::AddValue' has a wrong offset!");
static_assert(offsetof(UCalcShieldInitializeStats_C, StatAddRatio) == 0x000110, "Member 'UCalcShieldInitializeStats_C::StatAddRatio' has a wrong offset!");
static_assert(offsetof(UCalcShieldInitializeStats_C, RefStat) == 0x000118, "Member 'UCalcShieldInitializeStats_C::RefStat' has a wrong offset!");
static_assert(offsetof(UCalcShieldInitializeStats_C, ResultStat) == 0x000119, "Member 'UCalcShieldInitializeStats_C::ResultStat' has a wrong offset!");

}

