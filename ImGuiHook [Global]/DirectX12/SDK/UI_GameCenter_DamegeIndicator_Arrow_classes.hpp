#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameCenter_DamegeIndicator_Arrow

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C
// 0x0030 (0x0750 - 0x0720)
class UUI_GameCenter_DamegeIndicator_Arrow_C final : public UM1UIDamageTrackingIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_FadeOut;                                    // 0x0728(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Hit;                                        // 0x0730(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StateId;                                           // 0x0740(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_744[0x4];                                      // 0x0744(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_DamageTrackingIconLayer_C*          NewVar_0;                                          // 0x0748(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BP_Init();
	void Construct();
	void ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow(int32 EntryPoint);
	void PlayAnimations();
	void PreConstruct(bool IsDesignTime);
	void StateSetting(int32 State);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameCenter_DamegeIndicator_Arrow_C">();
	}
	static class UUI_GameCenter_DamegeIndicator_Arrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameCenter_DamegeIndicator_Arrow_C>();
	}
};
static_assert(alignof(UUI_GameCenter_DamegeIndicator_Arrow_C) == 0x000008, "Wrong alignment on UUI_GameCenter_DamegeIndicator_Arrow_C");
static_assert(sizeof(UUI_GameCenter_DamegeIndicator_Arrow_C) == 0x000750, "Wrong size on UUI_GameCenter_DamegeIndicator_Arrow_C");
static_assert(offsetof(UUI_GameCenter_DamegeIndicator_Arrow_C, UberGraphFrame) == 0x000720, "Member 'UUI_GameCenter_DamegeIndicator_Arrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_DamegeIndicator_Arrow_C, UIAnim_FadeOut) == 0x000728, "Member 'UUI_GameCenter_DamegeIndicator_Arrow_C::UIAnim_FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_DamegeIndicator_Arrow_C, UIAnim_Hit) == 0x000730, "Member 'UUI_GameCenter_DamegeIndicator_Arrow_C::UIAnim_Hit' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_DamegeIndicator_Arrow_C, Switcher) == 0x000738, "Member 'UUI_GameCenter_DamegeIndicator_Arrow_C::Switcher' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_DamegeIndicator_Arrow_C, StateId) == 0x000740, "Member 'UUI_GameCenter_DamegeIndicator_Arrow_C::StateId' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_DamegeIndicator_Arrow_C, NewVar_0) == 0x000748, "Member 'UUI_GameCenter_DamegeIndicator_Arrow_C::NewVar_0' has a wrong offset!");

}
