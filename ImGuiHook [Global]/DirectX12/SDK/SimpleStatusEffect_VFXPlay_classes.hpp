#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleStatusEffect_VFXPlay

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SimpleStatusEffect_VFXPlay.SimpleStatusEffect_VFXPlay_C
// 0x0028 (0x03A8 - 0x0380)
class USimpleStatusEffect_VFXPlay_C : public UM1SimpleStatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1DataVisualFX*                        VFXAsset;                                          // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFXAsset;                                          // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFXAsset_Deactive;                                 // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFXAsset_Period;                                   // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SimpleStatusEffect_VFXPlay(int32 EntryPoint);
	void BP_OnPeriod();
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleStatusEffect_VFXPlay_C">();
	}
	static class USimpleStatusEffect_VFXPlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleStatusEffect_VFXPlay_C>();
	}
};
static_assert(alignof(USimpleStatusEffect_VFXPlay_C) == 0x000008, "Wrong alignment on USimpleStatusEffect_VFXPlay_C");
static_assert(sizeof(USimpleStatusEffect_VFXPlay_C) == 0x0003A8, "Wrong size on USimpleStatusEffect_VFXPlay_C");
static_assert(offsetof(USimpleStatusEffect_VFXPlay_C, UberGraphFrame) == 0x000380, "Member 'USimpleStatusEffect_VFXPlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USimpleStatusEffect_VFXPlay_C, VFXAsset) == 0x000388, "Member 'USimpleStatusEffect_VFXPlay_C::VFXAsset' has a wrong offset!");
static_assert(offsetof(USimpleStatusEffect_VFXPlay_C, SFXAsset) == 0x000390, "Member 'USimpleStatusEffect_VFXPlay_C::SFXAsset' has a wrong offset!");
static_assert(offsetof(USimpleStatusEffect_VFXPlay_C, SFXAsset_Deactive) == 0x000398, "Member 'USimpleStatusEffect_VFXPlay_C::SFXAsset_Deactive' has a wrong offset!");
static_assert(offsetof(USimpleStatusEffect_VFXPlay_C, SFXAsset_Period) == 0x0003A0, "Member 'USimpleStatusEffect_VFXPlay_C::SFXAsset_Period' has a wrong offset!");

}

