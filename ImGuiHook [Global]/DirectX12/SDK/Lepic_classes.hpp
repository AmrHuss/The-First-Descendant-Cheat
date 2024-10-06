#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lepic

#include "Basic.hpp"

#include "PlayerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lepic.Lepic_C
// 0x0000 (0x10E0 - 0x10E0)
class ALepic_C final : public APlayerBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lepic_C">();
	}
	static class ALepic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALepic_C>();
	}
};
static_assert(alignof(ALepic_C) == 0x000010, "Wrong alignment on ALepic_C");
static_assert(sizeof(ALepic_C) == 0x0010E0, "Wrong size on ALepic_C");

}

