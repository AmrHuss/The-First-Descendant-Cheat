#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcMpRatioRecovery

#include "Basic.hpp"

#include "CalcRecoveryBase_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcMpRatioRecovery.CalcMpRatioRecovery_C
// 0x0010 (0x0110 - 0x0100)
class UCalcMpRatioRecovery_C final : public UCalcRecoveryBase_C
{
public:
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HealRatioMin;                                      // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HealRatioMax;                                      // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void SetRecoveryOutModifier(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcMpRatioRecovery_C">();
	}
	static class UCalcMpRatioRecovery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcMpRatioRecovery_C>();
	}
};
static_assert(alignof(UCalcMpRatioRecovery_C) == 0x000008, "Wrong alignment on UCalcMpRatioRecovery_C");
static_assert(sizeof(UCalcMpRatioRecovery_C) == 0x000110, "Wrong size on UCalcMpRatioRecovery_C");
static_assert(offsetof(UCalcMpRatioRecovery_C, HealRatioMin) == 0x000100, "Member 'UCalcMpRatioRecovery_C::HealRatioMin' has a wrong offset!");
static_assert(offsetof(UCalcMpRatioRecovery_C, HealRatioMax) == 0x000108, "Member 'UCalcMpRatioRecovery_C::HealRatioMax' has a wrong offset!");

}
