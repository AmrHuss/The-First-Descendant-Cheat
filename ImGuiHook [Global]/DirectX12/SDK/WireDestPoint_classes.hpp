#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WireDestPoint

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WireDestPoint.WireDestPoint_C
// 0x0000 (0x0330 - 0x0330)
class AWireDestPoint_C final : public AM1WireDestination
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WireDestPoint_C">();
	}
	static class AWireDestPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWireDestPoint_C>();
	}
};
static_assert(alignof(AWireDestPoint_C) == 0x000008, "Wrong alignment on AWireDestPoint_C");
static_assert(sizeof(AWireDestPoint_C) == 0x000330, "Wrong size on AWireDestPoint_C");

}

