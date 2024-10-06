#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UltimateFreyna_Rune05HpRatioValue

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UltimateFreyna_Rune05HpRatioValue.UltimateFreyna_Rune05HpRatioValue_C
// 0x0008 (0x0100 - 0x00F8)
class UUltimateFreyna_Rune05HpRatioValue_C final : public UM1AbilityOpModValueCalc_StatBased
{
public:
	double                                        MaxHPRatioForIncreaseATK;                          // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UltimateFreyna_Rune05HpRatioValue_C">();
	}
	static class UUltimateFreyna_Rune05HpRatioValue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUltimateFreyna_Rune05HpRatioValue_C>();
	}
};
static_assert(alignof(UUltimateFreyna_Rune05HpRatioValue_C) == 0x000008, "Wrong alignment on UUltimateFreyna_Rune05HpRatioValue_C");
static_assert(sizeof(UUltimateFreyna_Rune05HpRatioValue_C) == 0x000100, "Wrong size on UUltimateFreyna_Rune05HpRatioValue_C");
static_assert(offsetof(UUltimateFreyna_Rune05HpRatioValue_C, MaxHPRatioForIncreaseATK) == 0x0000F8, "Member 'UUltimateFreyna_Rune05HpRatioValue_C::MaxHPRatioForIncreaseATK' has a wrong offset!");

}

