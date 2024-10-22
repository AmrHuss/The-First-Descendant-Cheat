#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcEtcBase

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcEtcBase.CalcEtcBase_C
// 0x0000 (0x00F8 - 0x00F8)
class UCalcEtcBase_C : public UM1AbilityOpExecCalc
{
public:
	void ApplySkillATK(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1ElementalDamageChannel ElementalChannel, EM1SkillArcheType ArcheType, const struct FM1ScaledInteger& AddPower, const struct FM1ScaledInteger& AddAttack, bool IsHittingPC) const;
	void ApplySkillCost(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, bool IsRatio, double Value, EM1StatType MaxStat, bool bIgnoreCoefficient) const;
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;
	void Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcEtcBase_C">();
	}
	static class UCalcEtcBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcEtcBase_C>();
	}
};
static_assert(alignof(UCalcEtcBase_C) == 0x000008, "Wrong alignment on UCalcEtcBase_C");
static_assert(sizeof(UCalcEtcBase_C) == 0x0000F8, "Wrong size on UCalcEtcBase_C");

}

