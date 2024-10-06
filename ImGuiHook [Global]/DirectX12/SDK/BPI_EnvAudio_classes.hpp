#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EnvAudio

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_EnvAudio.BPI_EnvAudio_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_EnvAudio_C final : public IInterface
{
public:
	void BP_EnvZoneActiveByPlayer();
	void BP_EnvZoneDiscard();
	void Bp_EnvZoneEnter(class ABP_AudioZoneBox_C* OverlapedZone);
	void BP_EnvZoneInitActive();
	void BP_EnvZoneLeave(class ABP_AudioZoneBox_C* LeaveZone);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_EnvAudio_C">();
	}
	static class IBPI_EnvAudio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_EnvAudio_C>();
	}
};
static_assert(alignof(IBPI_EnvAudio_C) == 0x000008, "Wrong alignment on IBPI_EnvAudio_C");
static_assert(sizeof(IBPI_EnvAudio_C) == 0x000028, "Wrong size on IBPI_EnvAudio_C");

}
