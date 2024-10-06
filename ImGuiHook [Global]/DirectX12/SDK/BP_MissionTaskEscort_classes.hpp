#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskEscort

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskEscort.BP_MissionTaskEscort_C
// 0x0008 (0x0688 - 0x0680)
class ABP_MissionTaskEscort_C final : public AM1MissionTaskActorEscort
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskEscort_C">();
	}
	static class ABP_MissionTaskEscort_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskEscort_C>();
	}
};
static_assert(alignof(ABP_MissionTaskEscort_C) == 0x000008, "Wrong alignment on ABP_MissionTaskEscort_C");
static_assert(sizeof(ABP_MissionTaskEscort_C) == 0x000688, "Wrong size on ABP_MissionTaskEscort_C");
static_assert(offsetof(ABP_MissionTaskEscort_C, Billboard) == 0x000680, "Member 'ABP_MissionTaskEscort_C::Billboard' has a wrong offset!");

}
