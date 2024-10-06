#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Player_Overhaul

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Player_Overhaul.UI_Player_Overhaul_C
// 0x0018 (0x0268 - 0x0250)
class UUI_Player_Overhaul_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x0258(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_342;                                         // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Player_Overhaul(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Player_Overhaul_C">();
	}
	static class UUI_Player_Overhaul_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Player_Overhaul_C>();
	}
};
static_assert(alignof(UUI_Player_Overhaul_C) == 0x000008, "Wrong alignment on UUI_Player_Overhaul_C");
static_assert(sizeof(UUI_Player_Overhaul_C) == 0x000268, "Wrong size on UUI_Player_Overhaul_C");
static_assert(offsetof(UUI_Player_Overhaul_C, UberGraphFrame) == 0x000250, "Member 'UUI_Player_Overhaul_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Player_Overhaul_C, NewAnimation) == 0x000258, "Member 'UUI_Player_Overhaul_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UUI_Player_Overhaul_C, Image_342) == 0x000260, "Member 'UUI_Player_Overhaul_C::Image_342' has a wrong offset!");

}
