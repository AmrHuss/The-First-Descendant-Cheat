#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Viessa_Active01

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Viessa_Active01.Skill_Viessa_Active01_C
// 0x0030 (0x0368 - 0x0338)
class USkill_Viessa_Active01_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   SocketName;                                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Forwarding_Operation_Tags;                         // 0x0348(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BP_OnActivated();
	void ExecuteUbergraph_Skill_Viessa_Active01(int32 EntryPoint);
	void OnBlendOut_1D43D4E24F5073DD606769972CB99EC7(const struct FM1AbilityEvent& Event);
	void OnCompleted_1D43D4E24F5073DD606769972CB99EC7(const struct FM1AbilityEvent& Event);
	void OnEventReceived_1D43D4E24F5073DD606769972CB99EC7(const struct FM1AbilityEvent& Event);
	void OnFunctionalTest();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Viessa_Active01_C">();
	}
	static class USkill_Viessa_Active01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Viessa_Active01_C>();
	}
};
static_assert(alignof(USkill_Viessa_Active01_C) == 0x000008, "Wrong alignment on USkill_Viessa_Active01_C");
static_assert(sizeof(USkill_Viessa_Active01_C) == 0x000368, "Wrong size on USkill_Viessa_Active01_C");
static_assert(offsetof(USkill_Viessa_Active01_C, UberGraphFrame) == 0x000338, "Member 'USkill_Viessa_Active01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkill_Viessa_Active01_C, SocketName) == 0x000340, "Member 'USkill_Viessa_Active01_C::SocketName' has a wrong offset!");
static_assert(offsetof(USkill_Viessa_Active01_C, Forwarding_Operation_Tags) == 0x000348, "Member 'USkill_Viessa_Active01_C::Forwarding_Operation_Tags' has a wrong offset!");

}

