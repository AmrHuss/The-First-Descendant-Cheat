#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskVoidBattleBoss

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskVoidBattleBoss.BP_MissionTaskVoidBattleBoss_C
// 0x0010 (0x06A8 - 0x0698)
class ABP_MissionTaskVoidBattleBoss_C final : public AM1MissionTaskActorVoidBattleEpicMonster
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0698(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x06A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BP_ShouldBeVisibleOnLocal(bool InVisible);
	void ExecuteUbergraph_BP_MissionTaskVoidBattleBoss(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskVoidBattleBoss_C">();
	}
	static class ABP_MissionTaskVoidBattleBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskVoidBattleBoss_C>();
	}
};
static_assert(alignof(ABP_MissionTaskVoidBattleBoss_C) == 0x000008, "Wrong alignment on ABP_MissionTaskVoidBattleBoss_C");
static_assert(sizeof(ABP_MissionTaskVoidBattleBoss_C) == 0x0006A8, "Wrong size on ABP_MissionTaskVoidBattleBoss_C");
static_assert(offsetof(ABP_MissionTaskVoidBattleBoss_C, UberGraphFrame) == 0x000698, "Member 'ABP_MissionTaskVoidBattleBoss_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MissionTaskVoidBattleBoss_C, Billboard) == 0x0006A0, "Member 'ABP_MissionTaskVoidBattleBoss_C::Billboard' has a wrong offset!");

}
