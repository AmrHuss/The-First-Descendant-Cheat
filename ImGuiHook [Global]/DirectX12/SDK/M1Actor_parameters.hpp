#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1Actor

#include "Basic.hpp"

#include "M1Actor_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function M1Actor.M1WindDirectionalSourceComponent.GetWindStrengthCombinedGust
// 0x001C (0x001C - 0x0000)
struct M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                OutDirection;                                      // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutSpeed;                                          // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust) == 0x000004, "Wrong alignment on M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust");
static_assert(sizeof(M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust) == 0x00001C, "Wrong size on M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust");
static_assert(offsetof(M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust, Position) == 0x000000, "Member 'M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust::Position' has a wrong offset!");
static_assert(offsetof(M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust, OutDirection) == 0x00000C, "Member 'M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust::OutDirection' has a wrong offset!");
static_assert(offsetof(M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust, OutSpeed) == 0x000018, "Member 'M1WindDirectionalSourceComponent_GetWindStrengthCombinedGust::OutSpeed' has a wrong offset!");

// Function M1Actor.M1WindDirectionalSourceComponent.GustForce
// 0x0010 (0x0010 - 0x0000)
struct M1WindDirectionalSourceComponent_GustForce final
{
public:
	float                                         GustStrength;                                      // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GustPreDuration;                                   // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GustApexDuration;                                  // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GustPostDuration;                                  // 0x000C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(M1WindDirectionalSourceComponent_GustForce) == 0x000004, "Wrong alignment on M1WindDirectionalSourceComponent_GustForce");
static_assert(sizeof(M1WindDirectionalSourceComponent_GustForce) == 0x000010, "Wrong size on M1WindDirectionalSourceComponent_GustForce");
static_assert(offsetof(M1WindDirectionalSourceComponent_GustForce, GustStrength) == 0x000000, "Member 'M1WindDirectionalSourceComponent_GustForce::GustStrength' has a wrong offset!");
static_assert(offsetof(M1WindDirectionalSourceComponent_GustForce, GustPreDuration) == 0x000004, "Member 'M1WindDirectionalSourceComponent_GustForce::GustPreDuration' has a wrong offset!");
static_assert(offsetof(M1WindDirectionalSourceComponent_GustForce, GustApexDuration) == 0x000008, "Member 'M1WindDirectionalSourceComponent_GustForce::GustApexDuration' has a wrong offset!");
static_assert(offsetof(M1WindDirectionalSourceComponent_GustForce, GustPostDuration) == 0x00000C, "Member 'M1WindDirectionalSourceComponent_GustForce::GustPostDuration' has a wrong offset!");

// Function M1Actor.M1WindDirectionalSourceComponent.SetEnabled
// 0x0001 (0x0001 - 0x0000)
struct M1WindDirectionalSourceComponent_SetEnabled final
{
public:
	bool                                          InEnabled;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(M1WindDirectionalSourceComponent_SetEnabled) == 0x000001, "Wrong alignment on M1WindDirectionalSourceComponent_SetEnabled");
static_assert(sizeof(M1WindDirectionalSourceComponent_SetEnabled) == 0x000001, "Wrong size on M1WindDirectionalSourceComponent_SetEnabled");
static_assert(offsetof(M1WindDirectionalSourceComponent_SetEnabled, InEnabled) == 0x000000, "Member 'M1WindDirectionalSourceComponent_SetEnabled::InEnabled' has a wrong offset!");

// Function M1Actor.M1WindDirectionalSourceComponent.SetWindChannels
// 0x0001 (0x0001 - 0x0000)
struct M1WindDirectionalSourceComponent_SetWindChannels final
{
public:
	struct FM1WindChannels                        InWindChannels;                                    // 0x0000(0x0001)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(M1WindDirectionalSourceComponent_SetWindChannels) == 0x000001, "Wrong alignment on M1WindDirectionalSourceComponent_SetWindChannels");
static_assert(sizeof(M1WindDirectionalSourceComponent_SetWindChannels) == 0x000001, "Wrong size on M1WindDirectionalSourceComponent_SetWindChannels");
static_assert(offsetof(M1WindDirectionalSourceComponent_SetWindChannels, InWindChannels) == 0x000000, "Member 'M1WindDirectionalSourceComponent_SetWindChannels::InWindChannels' has a wrong offset!");

// Function M1Actor.M1WindDirectionalSourceComponent.IsWindChannelsValid
// 0x0002 (0x0002 - 0x0000)
struct M1WindDirectionalSourceComponent_IsWindChannelsValid final
{
public:
	struct FM1WindChannels                        InWindChannels;                                    // 0x0000(0x0001)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(M1WindDirectionalSourceComponent_IsWindChannelsValid) == 0x000001, "Wrong alignment on M1WindDirectionalSourceComponent_IsWindChannelsValid");
static_assert(sizeof(M1WindDirectionalSourceComponent_IsWindChannelsValid) == 0x000002, "Wrong size on M1WindDirectionalSourceComponent_IsWindChannelsValid");
static_assert(offsetof(M1WindDirectionalSourceComponent_IsWindChannelsValid, InWindChannels) == 0x000000, "Member 'M1WindDirectionalSourceComponent_IsWindChannelsValid::InWindChannels' has a wrong offset!");
static_assert(offsetof(M1WindDirectionalSourceComponent_IsWindChannelsValid, ReturnValue) == 0x000001, "Member 'M1WindDirectionalSourceComponent_IsWindChannelsValid::ReturnValue' has a wrong offset!");

}

