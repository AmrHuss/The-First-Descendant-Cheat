#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lepic_ArmLNC

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lepic_ArmLNC.Lepic_ArmLNC_C
// 0x0010 (0x0478 - 0x0468)
class ALepic_ArmLNC_C final : public AM1Weapon
{
public:
	class UM1WeaponMagazineReloadComponent*       M1WeaponMagazineReload;                            // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1WeaponLauncherComponent*             M1WeaponLauncher;                                  // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lepic_ArmLNC_C">();
	}
	static class ALepic_ArmLNC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALepic_ArmLNC_C>();
	}
};
static_assert(alignof(ALepic_ArmLNC_C) == 0x000008, "Wrong alignment on ALepic_ArmLNC_C");
static_assert(sizeof(ALepic_ArmLNC_C) == 0x000478, "Wrong size on ALepic_ArmLNC_C");
static_assert(offsetof(ALepic_ArmLNC_C, M1WeaponMagazineReload) == 0x000468, "Member 'ALepic_ArmLNC_C::M1WeaponMagazineReload' has a wrong offset!");
static_assert(offsetof(ALepic_ArmLNC_C, M1WeaponLauncher) == 0x000470, "Member 'ALepic_ArmLNC_C::M1WeaponLauncher' has a wrong offset!");

}

