#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_DeathCount

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_DeathCount.UI_Game_DeathCount_C
// 0x0018 (0x0740 - 0x0728)
class UUI_Game_DeathCount_C final : public UM1UIGame_DeathCount
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_LastCount;                                  // 0x0730(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Default;                                    // 0x0738(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void BP_PlayLastCountLoopAnim(bool bInPlayAnim);
	void ExecuteUbergraph_UI_Game_DeathCount(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_DeathCount_C">();
	}
	static class UUI_Game_DeathCount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_DeathCount_C>();
	}
};
static_assert(alignof(UUI_Game_DeathCount_C) == 0x000008, "Wrong alignment on UUI_Game_DeathCount_C");
static_assert(sizeof(UUI_Game_DeathCount_C) == 0x000740, "Wrong size on UUI_Game_DeathCount_C");
static_assert(offsetof(UUI_Game_DeathCount_C, UberGraphFrame) == 0x000728, "Member 'UUI_Game_DeathCount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Game_DeathCount_C, UIAnim_LastCount) == 0x000730, "Member 'UUI_Game_DeathCount_C::UIAnim_LastCount' has a wrong offset!");
static_assert(offsetof(UUI_Game_DeathCount_C, UIAnim_Default) == 0x000738, "Member 'UUI_Game_DeathCount_C::UIAnim_Default' has a wrong offset!");

}
