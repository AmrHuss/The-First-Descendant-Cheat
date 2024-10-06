#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Viessa_Active02

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Viessa_Active02.Skill_Viessa_Active02_C
// 0x0010 (0x0348 - 0x0338)
class USkill_Viessa_Active02_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   SocketName;                                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void ExecuteUbergraph_Skill_Viessa_Active02(int32 EntryPoint);
	void OnBlendOut_A5BD92314BA1B2D9D63CD18AC37859EE(const struct FM1AbilityEvent& Event);
	void OnCompleted_A5BD92314BA1B2D9D63CD18AC37859EE(const struct FM1AbilityEvent& Event);
	void OnEventReceived_A5BD92314BA1B2D9D63CD18AC37859EE(const struct FM1AbilityEvent& Event);
	void OnFunctionalTest();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Viessa_Active02_C">();
	}
	static class USkill_Viessa_Active02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Viessa_Active02_C>();
	}
};
static_assert(alignof(USkill_Viessa_Active02_C) == 0x000008, "Wrong alignment on USkill_Viessa_Active02_C");
static_assert(sizeof(USkill_Viessa_Active02_C) == 0x000348, "Wrong size on USkill_Viessa_Active02_C");
static_assert(offsetof(USkill_Viessa_Active02_C, UberGraphFrame) == 0x000338, "Member 'USkill_Viessa_Active02_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkill_Viessa_Active02_C, SocketName) == 0x000340, "Member 'USkill_Viessa_Active02_C::SocketName' has a wrong offset!");

}

