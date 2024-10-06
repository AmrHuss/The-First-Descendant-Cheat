#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskWaveDefense

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskWaveDefense.BP_MissionTaskWaveDefense_C
// 0x0008 (0x0738 - 0x0730)
class ABP_MissionTaskWaveDefense_C final : public AM1MissionTaskActorWaveDefense
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0730(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskWaveDefense_C">();
	}
	static class ABP_MissionTaskWaveDefense_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskWaveDefense_C>();
	}
};
static_assert(alignof(ABP_MissionTaskWaveDefense_C) == 0x000008, "Wrong alignment on ABP_MissionTaskWaveDefense_C");
static_assert(sizeof(ABP_MissionTaskWaveDefense_C) == 0x000738, "Wrong size on ABP_MissionTaskWaveDefense_C");
static_assert(offsetof(ABP_MissionTaskWaveDefense_C, Billboard) == 0x000730, "Member 'ABP_MissionTaskWaveDefense_C::Billboard' has a wrong offset!");

}

