#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spica

#include "Basic.hpp"


namespace SDK::Params
{

// Function Spica.SpicaGameEngine.GetOnPawnControllerChanged
// 0x0010 (0x0010 - 0x0000)
struct SpicaGameEngine_GetOnPawnControllerChanged final
{
public:
	class APawn*                                  InPawn;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                            InController;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpicaGameEngine_GetOnPawnControllerChanged) == 0x000008, "Wrong alignment on SpicaGameEngine_GetOnPawnControllerChanged");
static_assert(sizeof(SpicaGameEngine_GetOnPawnControllerChanged) == 0x000010, "Wrong size on SpicaGameEngine_GetOnPawnControllerChanged");
static_assert(offsetof(SpicaGameEngine_GetOnPawnControllerChanged, InPawn) == 0x000000, "Member 'SpicaGameEngine_GetOnPawnControllerChanged::InPawn' has a wrong offset!");
static_assert(offsetof(SpicaGameEngine_GetOnPawnControllerChanged, InController) == 0x000008, "Member 'SpicaGameEngine_GetOnPawnControllerChanged::InController' has a wrong offset!");

// Function Spica.SpicaRPCHelperComponent.ServerNotifyRemoteFunctionCalled
// 0x0010 (0x0010 - 0x0000)
struct SpicaRPCHelperComponent_ServerNotifyRemoteFunctionCalled final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PacketId;                                          // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SpicaRPCHelperComponent_ServerNotifyRemoteFunctionCalled) == 0x000008, "Wrong alignment on SpicaRPCHelperComponent_ServerNotifyRemoteFunctionCalled");
static_assert(sizeof(SpicaRPCHelperComponent_ServerNotifyRemoteFunctionCalled) == 0x000010, "Wrong size on SpicaRPCHelperComponent_ServerNotifyRemoteFunctionCalled");
static_assert(offsetof(SpicaRPCHelperComponent_ServerNotifyRemoteFunctionCalled, Actor) == 0x000000, "Member 'SpicaRPCHelperComponent_ServerNotifyRemoteFunctionCalled::Actor' has a wrong offset!");
static_assert(offsetof(SpicaRPCHelperComponent_ServerNotifyRemoteFunctionCalled, PacketId) == 0x000008, "Member 'SpicaRPCHelperComponent_ServerNotifyRemoteFunctionCalled::PacketId' has a wrong offset!");

}

