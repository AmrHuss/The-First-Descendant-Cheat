#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaxCommonGaugeBased

#include "Basic.hpp"

#include "StatBased_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MaxCommonGaugeBased.MaxCommonGaugeBased_C
// 0x0000 (0x00F8 - 0x00F8)
class UMaxCommonGaugeBased_C final : public UStatBased_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MaxCommonGaugeBased_C">();
	}
	static class UMaxCommonGaugeBased_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaxCommonGaugeBased_C>();
	}
};
static_assert(alignof(UMaxCommonGaugeBased_C) == 0x000008, "Wrong alignment on UMaxCommonGaugeBased_C");
static_assert(sizeof(UMaxCommonGaugeBased_C) == 0x0000F8, "Wrong size on UMaxCommonGaugeBased_C");

}

