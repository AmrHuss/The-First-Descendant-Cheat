#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSkillRecoveryHpAndShield

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CalcRecoveryBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcSkillRecoveryHpAndShield.CalcSkillRecoveryHpAndShield_C
// 0x0018 (0x0118 - 0x0100)
class UCalcSkillRecoveryHpAndShield_C final : public UCalcRecoveryBase_C
{
public:
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RecoveryRatio;                                     // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       HpRecoverValue;                                    // 0x0108(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       ShieldRecoverValue;                                // 0x0110(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void SetRecoveryOutModifier(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcSkillRecoveryHpAndShield_C">();
	}
	static class UCalcSkillRecoveryHpAndShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcSkillRecoveryHpAndShield_C>();
	}
};
static_assert(alignof(UCalcSkillRecoveryHpAndShield_C) == 0x000008, "Wrong alignment on UCalcSkillRecoveryHpAndShield_C");
static_assert(sizeof(UCalcSkillRecoveryHpAndShield_C) == 0x000118, "Wrong size on UCalcSkillRecoveryHpAndShield_C");
static_assert(offsetof(UCalcSkillRecoveryHpAndShield_C, RecoveryRatio) == 0x000100, "Member 'UCalcSkillRecoveryHpAndShield_C::RecoveryRatio' has a wrong offset!");
static_assert(offsetof(UCalcSkillRecoveryHpAndShield_C, HpRecoverValue) == 0x000108, "Member 'UCalcSkillRecoveryHpAndShield_C::HpRecoverValue' has a wrong offset!");
static_assert(offsetof(UCalcSkillRecoveryHpAndShield_C, ShieldRecoverValue) == 0x000110, "Member 'UCalcSkillRecoveryHpAndShield_C::ShieldRecoverValue' has a wrong offset!");

}

