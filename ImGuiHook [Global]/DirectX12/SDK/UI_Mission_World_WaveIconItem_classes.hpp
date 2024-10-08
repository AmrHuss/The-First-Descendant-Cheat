#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_World_WaveIconItem

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_World_WaveIconItem.UI_Mission_World_WaveIconItem_C
// 0x0018 (0x08D0 - 0x08B8)
class UUI_Mission_World_WaveIconItem_C final : public UM1UIMissionWaveNumberButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Default;                                    // 0x08C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Over;                                       // 0x08C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Mission_World_WaveIconItem(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_World_WaveIconItem_C">();
	}
	static class UUI_Mission_World_WaveIconItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_World_WaveIconItem_C>();
	}
};
static_assert(alignof(UUI_Mission_World_WaveIconItem_C) == 0x000008, "Wrong alignment on UUI_Mission_World_WaveIconItem_C");
static_assert(sizeof(UUI_Mission_World_WaveIconItem_C) == 0x0008D0, "Wrong size on UUI_Mission_World_WaveIconItem_C");
static_assert(offsetof(UUI_Mission_World_WaveIconItem_C, UberGraphFrame) == 0x0008B8, "Member 'UUI_Mission_World_WaveIconItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_World_WaveIconItem_C, UIAnim_Default) == 0x0008C0, "Member 'UUI_Mission_World_WaveIconItem_C::UIAnim_Default' has a wrong offset!");
static_assert(offsetof(UUI_Mission_World_WaveIconItem_C, UIAnim_Over) == 0x0008C8, "Member 'UUI_Mission_World_WaveIconItem_C::UIAnim_Over' has a wrong offset!");

}

