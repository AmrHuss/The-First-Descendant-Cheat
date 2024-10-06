#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_PlayerReviveWatcher

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_PlayerReviveWatcher.Ability_PlayerReviveWatcher_C
// 0x0010 (0x02B0 - 0x02A0)
class UAbility_PlayerReviveWatcher_C final : public UM1Ability
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EM1RecoveryType                               NewVar_0;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void ExecuteUbergraph_Ability_PlayerReviveWatcher(int32 EntryPoint);
	void OnAbilityEvent_D5A02EEE4A7547CF75BEB38365B89635(const struct FM1AbilityEvent& Event);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_PlayerReviveWatcher_C">();
	}
	static class UAbility_PlayerReviveWatcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_PlayerReviveWatcher_C>();
	}
};
static_assert(alignof(UAbility_PlayerReviveWatcher_C) == 0x000008, "Wrong alignment on UAbility_PlayerReviveWatcher_C");
static_assert(sizeof(UAbility_PlayerReviveWatcher_C) == 0x0002B0, "Wrong size on UAbility_PlayerReviveWatcher_C");
static_assert(offsetof(UAbility_PlayerReviveWatcher_C, UberGraphFrame) == 0x0002A0, "Member 'UAbility_PlayerReviveWatcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAbility_PlayerReviveWatcher_C, NewVar_0) == 0x0002A8, "Member 'UAbility_PlayerReviveWatcher_C::NewVar_0' has a wrong offset!");

}

