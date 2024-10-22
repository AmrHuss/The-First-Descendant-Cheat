#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_CraneStunBase

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SE_CraneStunBase.SE_CraneStunBase_C
// 0x0038 (0x03B8 - 0x0380)
class USE_CraneStunBase_C : public UM1SimpleStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                LocationBackup;                                    // 0x0388(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RotationBackup;                                    // 0x0394(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                              LaunchRandomRange;                                 // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LaunchRandomRangeZ;                                // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFlying;                                           // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SE_CraneStunBase(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SE_CraneStunBase_C">();
	}
	static class USE_CraneStunBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USE_CraneStunBase_C>();
	}
};
static_assert(alignof(USE_CraneStunBase_C) == 0x000008, "Wrong alignment on USE_CraneStunBase_C");
static_assert(sizeof(USE_CraneStunBase_C) == 0x0003B8, "Wrong size on USE_CraneStunBase_C");
static_assert(offsetof(USE_CraneStunBase_C, UberGraphFrame) == 0x000380, "Member 'USE_CraneStunBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USE_CraneStunBase_C, LocationBackup) == 0x000388, "Member 'USE_CraneStunBase_C::LocationBackup' has a wrong offset!");
static_assert(offsetof(USE_CraneStunBase_C, RotationBackup) == 0x000394, "Member 'USE_CraneStunBase_C::RotationBackup' has a wrong offset!");
static_assert(offsetof(USE_CraneStunBase_C, LaunchRandomRange) == 0x0003A0, "Member 'USE_CraneStunBase_C::LaunchRandomRange' has a wrong offset!");
static_assert(offsetof(USE_CraneStunBase_C, LaunchRandomRangeZ) == 0x0003A8, "Member 'USE_CraneStunBase_C::LaunchRandomRangeZ' has a wrong offset!");
static_assert(offsetof(USE_CraneStunBase_C, bFlying) == 0x0003B0, "Member 'USE_CraneStunBase_C::bFlying' has a wrong offset!");

}

