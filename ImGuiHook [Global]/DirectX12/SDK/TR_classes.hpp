#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TR

#include "Basic.hpp"

#include "UpperBody_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass TR.TR_C
// 0x0000 (0x1C80 - 0x1C80)
class UTR_C : public UUpperBody_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TR_C">();
	}
	static class UTR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTR_C>();
	}
};
static_assert(alignof(UTR_C) == 0x000010, "Wrong alignment on UTR_C");
static_assert(sizeof(UTR_C) == 0x001C80, "Wrong size on UTR_C");

}
