#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraModifier_DeboneArrived

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C
// 0x0220 (0x0268 - 0x0048)
class UCameraModifier_DeboneArrived_C : public UM1CameraModifierForPlayer
{
public:
	double                                        CameraGoalDistance;                                // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CameraPitchOffset;                                 // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BeforeViewLocation;                                // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AfterViewLocation;                                 // 0x0064(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BeforeViewRotation;                                // 0x0070(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               AfterViewRotation;                                 // 0x007C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bWasFadeIn;                                        // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasFadeOut;                                       // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasFully;                                         // 0x008A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInterrupted;                                      // 0x008B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     FadeInCurve;                                       // 0x0090(0x0088)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     FadeOutCurve;                                      // 0x0118(0x0088)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FRotator                               BeforeFullyCameraRotation;                         // 0x01A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FullyCameraRotationSpeed;                          // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRuntimeFloatCurve                     FullyCameraRotationSpeedCurve;                     // 0x01B8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFloatRange                            ClampCameraRotationRange;                          // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                            CurClampCameraRotationRange;                       // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStopCameraClamp;                                  // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
	void FadeCameraLocation(struct FVector* OutLocation);
	void FadeCameraRotation(struct FRotator* OutRotation);
	void FullyCameraLocation(const struct FRotator& InViewRotation, struct FVector* OutLocation);
	void FullyCameraRotation(struct FRotator* OutRotation);
	void FullyCameraRotationClamp(const struct FRotator& Begin, const struct FRotator& Goal, double DeltaSeconds, struct FRotator* OutBegin, struct FRotator* OutGoal);
	void GetCurvedAlpha(double* Float);
	void InitFadeIn(const struct FVector& InLocation, const struct FRotator& InRotation);
	void InitFadeOut();
	void InitFully(struct FVector* OutLocation, struct FRotator* OutRotation);
	void ProcessFadeIn(const struct FVector& InViewLocation, const struct FRotator& InViewRotation, struct FVector* OutViewLocation, struct FRotator* OutViewRotation);
	void ProcessFadeOut(const struct FVector& InViewLocation, const struct FRotator& InViewRotation, struct FVector* OutViewLocation, struct FRotator* OutViewRotation);
	void ProcessFully(const struct FVector& InViewLocation, const struct FRotator& InViewRotation, double DeltaSeconds, struct FVector* OutViewLocation, struct FRotator* OutViewRotation);
	void ProcessZero(const struct FVector& InViewLocation, const struct FRotator& InViewRotation, struct FVector* OutViewLocation, struct FRotator* OutViewRotation);
	void StopCameraClamp(bool bStop);
	void UpdateAfterViews(const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector* OutLocation, struct FRotator* OutRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraModifier_DeboneArrived_C">();
	}
	static class UCameraModifier_DeboneArrived_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraModifier_DeboneArrived_C>();
	}
};
static_assert(alignof(UCameraModifier_DeboneArrived_C) == 0x000008, "Wrong alignment on UCameraModifier_DeboneArrived_C");
static_assert(sizeof(UCameraModifier_DeboneArrived_C) == 0x000268, "Wrong size on UCameraModifier_DeboneArrived_C");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, CameraGoalDistance) == 0x000048, "Member 'UCameraModifier_DeboneArrived_C::CameraGoalDistance' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, CameraPitchOffset) == 0x000050, "Member 'UCameraModifier_DeboneArrived_C::CameraPitchOffset' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, BeforeViewLocation) == 0x000058, "Member 'UCameraModifier_DeboneArrived_C::BeforeViewLocation' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, AfterViewLocation) == 0x000064, "Member 'UCameraModifier_DeboneArrived_C::AfterViewLocation' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, BeforeViewRotation) == 0x000070, "Member 'UCameraModifier_DeboneArrived_C::BeforeViewRotation' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, AfterViewRotation) == 0x00007C, "Member 'UCameraModifier_DeboneArrived_C::AfterViewRotation' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, bWasFadeIn) == 0x000088, "Member 'UCameraModifier_DeboneArrived_C::bWasFadeIn' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, bWasFadeOut) == 0x000089, "Member 'UCameraModifier_DeboneArrived_C::bWasFadeOut' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, bWasFully) == 0x00008A, "Member 'UCameraModifier_DeboneArrived_C::bWasFully' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, bInterrupted) == 0x00008B, "Member 'UCameraModifier_DeboneArrived_C::bInterrupted' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, FadeInCurve) == 0x000090, "Member 'UCameraModifier_DeboneArrived_C::FadeInCurve' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, FadeOutCurve) == 0x000118, "Member 'UCameraModifier_DeboneArrived_C::FadeOutCurve' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, BeforeFullyCameraRotation) == 0x0001A0, "Member 'UCameraModifier_DeboneArrived_C::BeforeFullyCameraRotation' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, FullyCameraRotationSpeed) == 0x0001B0, "Member 'UCameraModifier_DeboneArrived_C::FullyCameraRotationSpeed' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, FullyCameraRotationSpeedCurve) == 0x0001B8, "Member 'UCameraModifier_DeboneArrived_C::FullyCameraRotationSpeedCurve' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, ClampCameraRotationRange) == 0x000240, "Member 'UCameraModifier_DeboneArrived_C::ClampCameraRotationRange' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, CurClampCameraRotationRange) == 0x000250, "Member 'UCameraModifier_DeboneArrived_C::CurClampCameraRotationRange' has a wrong offset!");
static_assert(offsetof(UCameraModifier_DeboneArrived_C, bStopCameraClamp) == 0x000260, "Member 'UCameraModifier_DeboneArrived_C::bStopCameraClamp' has a wrong offset!");

}

