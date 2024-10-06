#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParamBased_SetOption_CommonGauge

#include "Basic.hpp"

#include "ParamBased_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ParamBased_SetOption_CommonGauge.ParamBased_SetOption_CommonGauge_C
// 0x0008 (0x00F8 - 0x00F0)
class UParamBased_SetOption_CommonGauge_C final : public UParamBased_C
{
public:
	double                                        MaxSkillDurCoefficient;                            // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ParamBased_SetOption_CommonGauge_C">();
	}
	static class UParamBased_SetOption_CommonGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParamBased_SetOption_CommonGauge_C>();
	}
};
static_assert(alignof(UParamBased_SetOption_CommonGauge_C) == 0x000008, "Wrong alignment on UParamBased_SetOption_CommonGauge_C");
static_assert(sizeof(UParamBased_SetOption_CommonGauge_C) == 0x0000F8, "Wrong size on UParamBased_SetOption_CommonGauge_C");
static_assert(offsetof(UParamBased_SetOption_CommonGauge_C, MaxSkillDurCoefficient) == 0x0000F0, "Member 'UParamBased_SetOption_CommonGauge_C::MaxSkillDurCoefficient' has a wrong offset!");

}

