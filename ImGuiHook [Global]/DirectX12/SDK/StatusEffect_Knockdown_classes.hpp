#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusEffect_Knockdown

#include "Basic.hpp"

#include "KnockdownStepRange_structs.hpp"
#include "StatusEffect_KnockBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StatusEffect_Knockdown.StatusEffect_Knockdown_C
// 0x0010 (0x0460 - 0x0450)
class UStatusEffect_Knockdown_C final : public UStatusEffect_KnockBase_C
{
public:
	TArray<struct FKnockdownStepRange>            StepRange;                                         // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void GetVelocityZ(double* VelocityZ_0);
	void GetVelocityX(double* VelocityX_0);
	void GetMoveVectorCurve(class UCurveVector** MoveCurve);
	void GetMoveFloatCurve(class UCurveFloat** MoveCurve);
	void CalcAnimHitDirYaw(double* Yaw);

	void GetMoveDuration(double* Duration) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusEffect_Knockdown_C">();
	}
	static class UStatusEffect_Knockdown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusEffect_Knockdown_C>();
	}
};
static_assert(alignof(UStatusEffect_Knockdown_C) == 0x000008, "Wrong alignment on UStatusEffect_Knockdown_C");
static_assert(sizeof(UStatusEffect_Knockdown_C) == 0x000460, "Wrong size on UStatusEffect_Knockdown_C");
static_assert(offsetof(UStatusEffect_Knockdown_C, StepRange) == 0x000450, "Member 'UStatusEffect_Knockdown_C::StepRange' has a wrong offset!");

}
