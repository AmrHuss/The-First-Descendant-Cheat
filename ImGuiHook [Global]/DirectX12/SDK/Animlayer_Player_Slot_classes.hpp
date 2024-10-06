#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Animlayer_Player_Slot

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass animlayer_Player_Slot.animlayer_Player_Slot_C
// 0x0000 (0x0028 - 0x0028)
class IAnimlayer_Player_Slot_C final : public IAnimLayerInterface
{
public:
	void FullBody(const struct FPoseLink& InPose_FullBody, struct FPoseLink* FullBody_0);
	void Motion_M(const struct FPoseLink& InPose_Motion_M, struct FPoseLink* Motion_M_0);
	void UpperBody_L(const struct FPoseLink& InPose_UpperBody_L, struct FPoseLink* UpperBody_L_0);
	void UpperBody_L_Additive(const struct FPoseLink& InPose_UpperBody_L_Additive, struct FPoseLink* UpperBody_L_Additive_0);
	void UpperBody_U(const struct FPoseLink& InPose_UpperBody_U, struct FPoseLink* UpperBody_U_0);
	void UpperBody_U_R(const struct FPoseLink& InPose_UpperBody_U_R, struct FPoseLink* UpperBody_U_R_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"animlayer_Player_Slot_C">();
	}
	static class IAnimlayer_Player_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAnimlayer_Player_Slot_C>();
	}
};
static_assert(alignof(IAnimlayer_Player_Slot_C) == 0x000008, "Wrong alignment on IAnimlayer_Player_Slot_C");
static_assert(sizeof(IAnimlayer_Player_Slot_C) == 0x000028, "Wrong size on IAnimlayer_Player_Slot_C");

}

