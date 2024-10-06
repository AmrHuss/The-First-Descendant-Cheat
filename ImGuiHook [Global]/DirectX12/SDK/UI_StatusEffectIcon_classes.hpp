#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_StatusEffectIcon

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_StatusEffectIcon.UI_StatusEffectIcon_C
// 0x0058 (0x0768 - 0x0710)
class UUI_StatusEffectIcon_C final : public UM1UIGameStatusEffectIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Remain10per;                                // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Cool_warning;                                      // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1SpriteImage*                         Icon;                                              // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MI_CoolTime;                                       // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Panel_Stack;                                       // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_StackCount;                                   // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_BuffOrDebuff;                                   // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowProgress;                                      // 0x0758(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_759[0x7];                                      // 0x0759(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Cooltime_Per;                                      // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_UpdateElapsedProgressRatio(const float InRatio);
	void BP_UpdateIcon(class UTexture2D* Icon_0, const struct FGameplayTag& InStatusEffectIdTag, const bool InbInfiniteDuration);
	void BP_UpdateStackCount(const int32 InCount);
	void ExecuteUbergraph_UI_StatusEffectIcon(int32 EntryPoint);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void PreConstruct(bool IsDesignTime);
	void UISetFillImageColor(class UProgressBar* Target, const struct FLinearColor& Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_StatusEffectIcon_C">();
	}
	static class UUI_StatusEffectIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_StatusEffectIcon_C>();
	}
};
static_assert(alignof(UUI_StatusEffectIcon_C) == 0x000008, "Wrong alignment on UUI_StatusEffectIcon_C");
static_assert(sizeof(UUI_StatusEffectIcon_C) == 0x000768, "Wrong size on UUI_StatusEffectIcon_C");
static_assert(offsetof(UUI_StatusEffectIcon_C, UberGraphFrame) == 0x000710, "Member 'UUI_StatusEffectIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, UIAnim_Open) == 0x000718, "Member 'UUI_StatusEffectIcon_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, UIAnim_Remain10per) == 0x000720, "Member 'UUI_StatusEffectIcon_C::UIAnim_Remain10per' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, Cool_warning) == 0x000728, "Member 'UUI_StatusEffectIcon_C::Cool_warning' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, Icon) == 0x000730, "Member 'UUI_StatusEffectIcon_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, MI_CoolTime) == 0x000738, "Member 'UUI_StatusEffectIcon_C::MI_CoolTime' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, Panel_Stack) == 0x000740, "Member 'UUI_StatusEffectIcon_C::Panel_Stack' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, Text_StackCount) == 0x000748, "Member 'UUI_StatusEffectIcon_C::Text_StackCount' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, WS_BuffOrDebuff) == 0x000750, "Member 'UUI_StatusEffectIcon_C::WS_BuffOrDebuff' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, ShowProgress) == 0x000758, "Member 'UUI_StatusEffectIcon_C::ShowProgress' has a wrong offset!");
static_assert(offsetof(UUI_StatusEffectIcon_C, Cooltime_Per) == 0x000760, "Member 'UUI_StatusEffectIcon_C::Cooltime_Per' has a wrong offset!");

}
