#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonHitPosition

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonHitPosition.CommonHitPosition_C
// 0x0008 (0x0258 - 0x0250)
class UCommonHitPosition_C final : public UUserWidget
{
public:
	class UImage*                                 Img_CrosshairGuide;                                // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonHitPosition_C">();
	}
	static class UCommonHitPosition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonHitPosition_C>();
	}
};
static_assert(alignof(UCommonHitPosition_C) == 0x000008, "Wrong alignment on UCommonHitPosition_C");
static_assert(sizeof(UCommonHitPosition_C) == 0x000258, "Wrong size on UCommonHitPosition_C");
static_assert(offsetof(UCommonHitPosition_C, Img_CrosshairGuide) == 0x000250, "Member 'UCommonHitPosition_C::Img_CrosshairGuide' has a wrong offset!");

}

