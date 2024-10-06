#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Crosshair_014_A

#include "Basic.hpp"

#include "WB_CrosshairBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Crosshair_014_A.UI_Crosshair_014_A_C
// 0x0010 (0x0738 - 0x0728)
class UUI_Crosshair_014_A_C final : public UWB_CrosshairBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_Crosshair_014_A_C;               // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCL_CenterCircle_C*                     CLCenterCircle_W;                                  // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void EnemyInWeaponRange(bool bEnemyInWeaponRange, const struct FColor& AimingNoticeCrosshairColor);
	void ExecuteUbergraph_UI_Crosshair_014_A(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Crosshair_014_A_C">();
	}
	static class UUI_Crosshair_014_A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Crosshair_014_A_C>();
	}
};
static_assert(alignof(UUI_Crosshair_014_A_C) == 0x000008, "Wrong alignment on UUI_Crosshair_014_A_C");
static_assert(sizeof(UUI_Crosshair_014_A_C) == 0x000738, "Wrong size on UUI_Crosshair_014_A_C");
static_assert(offsetof(UUI_Crosshair_014_A_C, UberGraphFrame_UI_Crosshair_014_A_C) == 0x000728, "Member 'UUI_Crosshair_014_A_C::UberGraphFrame_UI_Crosshair_014_A_C' has a wrong offset!");
static_assert(offsetof(UUI_Crosshair_014_A_C, CLCenterCircle_W) == 0x000730, "Member 'UUI_Crosshair_014_A_C::CLCenterCircle_W' has a wrong offset!");

}

