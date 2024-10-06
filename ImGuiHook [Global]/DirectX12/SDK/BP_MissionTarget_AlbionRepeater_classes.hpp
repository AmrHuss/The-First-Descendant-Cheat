#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTarget_AlbionRepeater

#include "Basic.hpp"

#include "BP_MissionTargetBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTarget_AlbionRepeater.BP_MissionTarget_AlbionRepeater_C
// 0x0050 (0x05E0 - 0x0590)
class ABP_MissionTarget_AlbionRepeater_C final : public ABP_MissionTargetBase_C
{
public:
	class UCapsuleComponent*                      Capsule_Nav;                                       // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1StaticMeshComponent*                 M1StaticMesh3;                                     // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1StaticMeshComponent*                 M1StaticMesh2;                                     // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1StaticMeshComponent*                 M1StaticMesh1;                                     // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1StaticMeshComponent*                 M1StaticMesh;                                      // 0x05B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FX_Phase1_01;                                      // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FX_Phase2_02;                                      // 0x05C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FX_Phase2_01;                                      // 0x05C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FX_Phase1_03;                                      // 0x05D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FX_Phase1_02;                                      // 0x05D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	float BP_GetPushAwayCollsionRadius() const;
	struct FVector GetTargetPointOffset() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTarget_AlbionRepeater_C">();
	}
	static class ABP_MissionTarget_AlbionRepeater_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTarget_AlbionRepeater_C>();
	}
};
static_assert(alignof(ABP_MissionTarget_AlbionRepeater_C) == 0x000008, "Wrong alignment on ABP_MissionTarget_AlbionRepeater_C");
static_assert(sizeof(ABP_MissionTarget_AlbionRepeater_C) == 0x0005E0, "Wrong size on ABP_MissionTarget_AlbionRepeater_C");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, Capsule_Nav) == 0x000590, "Member 'ABP_MissionTarget_AlbionRepeater_C::Capsule_Nav' has a wrong offset!");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, M1StaticMesh3) == 0x000598, "Member 'ABP_MissionTarget_AlbionRepeater_C::M1StaticMesh3' has a wrong offset!");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, M1StaticMesh2) == 0x0005A0, "Member 'ABP_MissionTarget_AlbionRepeater_C::M1StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, M1StaticMesh1) == 0x0005A8, "Member 'ABP_MissionTarget_AlbionRepeater_C::M1StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, M1StaticMesh) == 0x0005B0, "Member 'ABP_MissionTarget_AlbionRepeater_C::M1StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, FX_Phase1_01) == 0x0005B8, "Member 'ABP_MissionTarget_AlbionRepeater_C::FX_Phase1_01' has a wrong offset!");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, FX_Phase2_02) == 0x0005C0, "Member 'ABP_MissionTarget_AlbionRepeater_C::FX_Phase2_02' has a wrong offset!");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, FX_Phase2_01) == 0x0005C8, "Member 'ABP_MissionTarget_AlbionRepeater_C::FX_Phase2_01' has a wrong offset!");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, FX_Phase1_03) == 0x0005D0, "Member 'ABP_MissionTarget_AlbionRepeater_C::FX_Phase1_03' has a wrong offset!");
static_assert(offsetof(ABP_MissionTarget_AlbionRepeater_C, FX_Phase1_02) == 0x0005D8, "Member 'ABP_MissionTarget_AlbionRepeater_C::FX_Phase1_02' has a wrong offset!");

}

