#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioZone_Indoor

#include "Basic.hpp"

#include "BP_AudioZoneBox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AudioZone_Indoor.BP_AudioZone_Indoor_C
// 0x0000 (0x04A0 - 0x04A0)
class ABP_AudioZone_Indoor_C final : public ABP_AudioZoneBox_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AudioZone_Indoor_C">();
	}
	static class ABP_AudioZone_Indoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AudioZone_Indoor_C>();
	}
};
static_assert(alignof(ABP_AudioZone_Indoor_C) == 0x000010, "Wrong alignment on ABP_AudioZone_Indoor_C");
static_assert(sizeof(ABP_AudioZone_Indoor_C) == 0x0004A0, "Wrong size on ABP_AudioZone_Indoor_C");

}
