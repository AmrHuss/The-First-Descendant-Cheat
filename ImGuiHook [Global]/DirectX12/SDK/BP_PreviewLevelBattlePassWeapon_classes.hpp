#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewLevelBattlePassWeapon

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PreviewLevelBattlePassWeapon.BP_PreviewLevelBattlePassWeapon_C
// 0x0010 (0x02F8 - 0x02E8)
class ABP_PreviewLevelBattlePassWeapon_C final : public AM1ActorPreviewLevel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PreviewLevelBattlePassWeapon(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PreviewLevelBattlePassWeapon_C">();
	}
	static class ABP_PreviewLevelBattlePassWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PreviewLevelBattlePassWeapon_C>();
	}
};
static_assert(alignof(ABP_PreviewLevelBattlePassWeapon_C) == 0x000008, "Wrong alignment on ABP_PreviewLevelBattlePassWeapon_C");
static_assert(sizeof(ABP_PreviewLevelBattlePassWeapon_C) == 0x0002F8, "Wrong size on ABP_PreviewLevelBattlePassWeapon_C");
static_assert(offsetof(ABP_PreviewLevelBattlePassWeapon_C, UberGraphFrame) == 0x0002E8, "Member 'ABP_PreviewLevelBattlePassWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PreviewLevelBattlePassWeapon_C, DefaultSceneRoot) == 0x0002F0, "Member 'ABP_PreviewLevelBattlePassWeapon_C::DefaultSceneRoot' has a wrong offset!");

}
