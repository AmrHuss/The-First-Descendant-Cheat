#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AK_Ambient_3D

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AmbientObjectType_structs.hpp"
#include "AkAudio_structs.hpp"
#include "AkAudio_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AK_Ambient_3D.BP_AK_Ambient_3D_C
// 0x0058 (0x02E0 - 0x0288)
class ABP_AK_Ambient_3D_C final : public AAkAmbientSound
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EAmbientObjectType                            AmbientType;                                       // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OverlapVolumeControl_;                             // 0x0291(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_292[0x6];                                      // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        GenerateGrid;                                      // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                     AmbientSound;                                      // 0x02A0(0x0010)(Edit, BlueprintVisible)
	TArray<class UArrowComponent*>                SoundSpot;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FTransform>                     AKSpot;                                            // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USplineComponent*                       AmbientWay;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Attenuation;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Auto_AddSpotPoint(const struct FVector& NewLoc);
	void Construct();
	void Debug_Listening_Area();
	void ExecuteUbergraph_BP_AK_Ambient_3D(int32 EntryPoint);
	void GenerateSplineMeter();
	void GenerateSplinePoint();
	void ReceiveBeginPlay();
	void ResetAmbient();
	void SetPlayMethod();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AK_Ambient_3D_C">();
	}
	static class ABP_AK_Ambient_3D_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AK_Ambient_3D_C>();
	}
};
static_assert(alignof(ABP_AK_Ambient_3D_C) == 0x000008, "Wrong alignment on ABP_AK_Ambient_3D_C");
static_assert(sizeof(ABP_AK_Ambient_3D_C) == 0x0002E0, "Wrong size on ABP_AK_Ambient_3D_C");
static_assert(offsetof(ABP_AK_Ambient_3D_C, UberGraphFrame) == 0x000288, "Member 'ABP_AK_Ambient_3D_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AK_Ambient_3D_C, AmbientType) == 0x000290, "Member 'ABP_AK_Ambient_3D_C::AmbientType' has a wrong offset!");
static_assert(offsetof(ABP_AK_Ambient_3D_C, OverlapVolumeControl_) == 0x000291, "Member 'ABP_AK_Ambient_3D_C::OverlapVolumeControl_' has a wrong offset!");
static_assert(offsetof(ABP_AK_Ambient_3D_C, GenerateGrid) == 0x000298, "Member 'ABP_AK_Ambient_3D_C::GenerateGrid' has a wrong offset!");
static_assert(offsetof(ABP_AK_Ambient_3D_C, AmbientSound) == 0x0002A0, "Member 'ABP_AK_Ambient_3D_C::AmbientSound' has a wrong offset!");
static_assert(offsetof(ABP_AK_Ambient_3D_C, SoundSpot) == 0x0002B0, "Member 'ABP_AK_Ambient_3D_C::SoundSpot' has a wrong offset!");
static_assert(offsetof(ABP_AK_Ambient_3D_C, AKSpot) == 0x0002C0, "Member 'ABP_AK_Ambient_3D_C::AKSpot' has a wrong offset!");
static_assert(offsetof(ABP_AK_Ambient_3D_C, AmbientWay) == 0x0002D0, "Member 'ABP_AK_Ambient_3D_C::AmbientWay' has a wrong offset!");
static_assert(offsetof(ABP_AK_Ambient_3D_C, Attenuation) == 0x0002D8, "Member 'ABP_AK_Ambient_3D_C::Attenuation' has a wrong offset!");

}

