#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionSubTaskDestruction

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionSubTaskDestruction.BP_MissionSubTaskDestruction_C
// 0x0008 (0x0650 - 0x0648)
class ABP_MissionSubTaskDestruction_C final : public AM1MissionSubTaskActorDestruction
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionSubTaskDestruction_C">();
	}
	static class ABP_MissionSubTaskDestruction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionSubTaskDestruction_C>();
	}
};
static_assert(alignof(ABP_MissionSubTaskDestruction_C) == 0x000008, "Wrong alignment on ABP_MissionSubTaskDestruction_C");
static_assert(sizeof(ABP_MissionSubTaskDestruction_C) == 0x000650, "Wrong size on ABP_MissionSubTaskDestruction_C");
static_assert(offsetof(ABP_MissionSubTaskDestruction_C, Billboard) == 0x000648, "Member 'ABP_MissionSubTaskDestruction_C::Billboard' has a wrong offset!");

}
