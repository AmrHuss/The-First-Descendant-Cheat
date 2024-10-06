#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusEffect_Chill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SimpleStatusEffect_VFXPlay_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StatusEffect_Chill.StatusEffect_Chill_C
// 0x0008 (0x03B0 - 0x03A8)
class UStatusEffect_Chill_C final : public USimpleStatusEffect_VFXPlay_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_StatusEffect_Chill_C;               // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_StatusEffect_Chill(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusEffect_Chill_C">();
	}
	static class UStatusEffect_Chill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusEffect_Chill_C>();
	}
};
static_assert(alignof(UStatusEffect_Chill_C) == 0x000008, "Wrong alignment on UStatusEffect_Chill_C");
static_assert(sizeof(UStatusEffect_Chill_C) == 0x0003B0, "Wrong size on UStatusEffect_Chill_C");
static_assert(offsetof(UStatusEffect_Chill_C, UberGraphFrame_StatusEffect_Chill_C) == 0x0003A8, "Member 'UStatusEffect_Chill_C::UberGraphFrame_StatusEffect_Chill_C' has a wrong offset!");

}

