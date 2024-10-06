#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Animlayer_Player_UpperBody

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function animlayer_Player_UpperBody.animlayer_Player_UpperBody_C.AimOffsetLayer
// 0x0020 (0x0020 - 0x0000)
struct Animlayer_Player_UpperBody_C_AimOffsetLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AimOffsetLayer_0;                                  // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Animlayer_Player_UpperBody_C_AimOffsetLayer) == 0x000008, "Wrong alignment on Animlayer_Player_UpperBody_C_AimOffsetLayer");
static_assert(sizeof(Animlayer_Player_UpperBody_C_AimOffsetLayer) == 0x000020, "Wrong size on Animlayer_Player_UpperBody_C_AimOffsetLayer");
static_assert(offsetof(Animlayer_Player_UpperBody_C_AimOffsetLayer, InPose) == 0x000000, "Member 'Animlayer_Player_UpperBody_C_AimOffsetLayer::InPose' has a wrong offset!");
static_assert(offsetof(Animlayer_Player_UpperBody_C_AimOffsetLayer, AimOffsetLayer_0) == 0x000010, "Member 'Animlayer_Player_UpperBody_C_AimOffsetLayer::AimOffsetLayer_0' has a wrong offset!");

// Function animlayer_Player_UpperBody.animlayer_Player_UpperBody_C.UpperBodyLayer
// 0x0020 (0x0020 - 0x0000)
struct Animlayer_Player_UpperBody_C_UpperBodyLayer final
{
public:
	struct FPoseLink                              InputPose;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBodyLayer_0;                                  // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Animlayer_Player_UpperBody_C_UpperBodyLayer) == 0x000008, "Wrong alignment on Animlayer_Player_UpperBody_C_UpperBodyLayer");
static_assert(sizeof(Animlayer_Player_UpperBody_C_UpperBodyLayer) == 0x000020, "Wrong size on Animlayer_Player_UpperBody_C_UpperBodyLayer");
static_assert(offsetof(Animlayer_Player_UpperBody_C_UpperBodyLayer, InputPose) == 0x000000, "Member 'Animlayer_Player_UpperBody_C_UpperBodyLayer::InputPose' has a wrong offset!");
static_assert(offsetof(Animlayer_Player_UpperBody_C_UpperBodyLayer, UpperBodyLayer_0) == 0x000010, "Member 'Animlayer_Player_UpperBody_C_UpperBodyLayer::UpperBodyLayer_0' has a wrong offset!");

}

