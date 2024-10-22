#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AOE_LepicArmLNC

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AOE_LepicArmLNC.AOE_LepicArmLNC_C
// 0x0030 (0x0778 - 0x0748)
class AAOE_LepicArmLNC_C final : public AM1AbilityActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0748(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0750(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Aoe_Radius;                                        // 0x0758(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Dur_LifeTime;                                      // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Period;                                            // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         EndFX;                                             // 0x0770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnPostSpawnAbilityActor();
	void ExecuteUbergraph_AOE_LepicArmLNC(int32 EntryPoint);
	void OnPeriod();
	void ReceiveDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AOE_LepicArmLNC_C">();
	}
	static class AAOE_LepicArmLNC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAOE_LepicArmLNC_C>();
	}
};
static_assert(alignof(AAOE_LepicArmLNC_C) == 0x000008, "Wrong alignment on AAOE_LepicArmLNC_C");
static_assert(sizeof(AAOE_LepicArmLNC_C) == 0x000778, "Wrong size on AAOE_LepicArmLNC_C");
static_assert(offsetof(AAOE_LepicArmLNC_C, UberGraphFrame) == 0x000748, "Member 'AAOE_LepicArmLNC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAOE_LepicArmLNC_C, Sphere) == 0x000750, "Member 'AAOE_LepicArmLNC_C::Sphere' has a wrong offset!");
static_assert(offsetof(AAOE_LepicArmLNC_C, Aoe_Radius) == 0x000758, "Member 'AAOE_LepicArmLNC_C::Aoe_Radius' has a wrong offset!");
static_assert(offsetof(AAOE_LepicArmLNC_C, Dur_LifeTime) == 0x000760, "Member 'AAOE_LepicArmLNC_C::Dur_LifeTime' has a wrong offset!");
static_assert(offsetof(AAOE_LepicArmLNC_C, Period) == 0x000768, "Member 'AAOE_LepicArmLNC_C::Period' has a wrong offset!");
static_assert(offsetof(AAOE_LepicArmLNC_C, EndFX) == 0x000770, "Member 'AAOE_LepicArmLNC_C::EndFX' has a wrong offset!");

}

