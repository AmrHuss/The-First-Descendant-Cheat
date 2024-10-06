#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeySymbol_Dual

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_KeySymbol_Dual.UI_KeySymbol_Dual_C
// 0x0050 (0x07C0 - 0x0770)
class UUI_KeySymbol_Dual_C final : public UM1UIKeySymbolDual
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0770(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Start;                                      // 0x0778(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_HoldingStart;                                 // 0x0780(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Anchor;                                      // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Plus;                                        // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               P_Key;                                             // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               P_Plus_Size;                                       // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Panel_HoldingProgress;                             // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Widget_HoldingProgress;                            // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_ChangeDimmedUI(const bool InDimmed);
	void BP_ChangeProgressUI(const bool InStart, const float InDuration);
	void BP_SetPlusImage(class UTexture2D* InTexture);
	void BP_SetProgressUI(const bool bUseProgress);
	void ExecuteUbergraph_UI_KeySymbol_Dual(int32 EntryPoint);
	void KeySymbol_Change01(EM1ButtonUIType EM1Button);
	void PreConstruct(bool IsDesignTime);
	void ResetProgress();
	void SequenceEvent_0();
	void SequenceEvent__ENTRYPOINTUI_KeySymbol_Dual();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_KeySymbol_Dual_C">();
	}
	static class UUI_KeySymbol_Dual_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_KeySymbol_Dual_C>();
	}
};
static_assert(alignof(UUI_KeySymbol_Dual_C) == 0x000008, "Wrong alignment on UUI_KeySymbol_Dual_C");
static_assert(sizeof(UUI_KeySymbol_Dual_C) == 0x0007C0, "Wrong size on UUI_KeySymbol_Dual_C");
static_assert(offsetof(UUI_KeySymbol_Dual_C, UberGraphFrame) == 0x000770, "Member 'UUI_KeySymbol_Dual_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_KeySymbol_Dual_C, UIAnim_Start) == 0x000778, "Member 'UUI_KeySymbol_Dual_C::UIAnim_Start' has a wrong offset!");
static_assert(offsetof(UUI_KeySymbol_Dual_C, ANIM_HoldingStart) == 0x000780, "Member 'UUI_KeySymbol_Dual_C::ANIM_HoldingStart' has a wrong offset!");
static_assert(offsetof(UUI_KeySymbol_Dual_C, HorizontalBox) == 0x000788, "Member 'UUI_KeySymbol_Dual_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UUI_KeySymbol_Dual_C, Image_Anchor) == 0x000790, "Member 'UUI_KeySymbol_Dual_C::Image_Anchor' has a wrong offset!");
static_assert(offsetof(UUI_KeySymbol_Dual_C, Image_Plus) == 0x000798, "Member 'UUI_KeySymbol_Dual_C::Image_Plus' has a wrong offset!");
static_assert(offsetof(UUI_KeySymbol_Dual_C, P_Key) == 0x0007A0, "Member 'UUI_KeySymbol_Dual_C::P_Key' has a wrong offset!");
static_assert(offsetof(UUI_KeySymbol_Dual_C, P_Plus_Size) == 0x0007A8, "Member 'UUI_KeySymbol_Dual_C::P_Plus_Size' has a wrong offset!");
static_assert(offsetof(UUI_KeySymbol_Dual_C, Panel_HoldingProgress) == 0x0007B0, "Member 'UUI_KeySymbol_Dual_C::Panel_HoldingProgress' has a wrong offset!");
static_assert(offsetof(UUI_KeySymbol_Dual_C, Widget_HoldingProgress) == 0x0007B8, "Member 'UUI_KeySymbol_Dual_C::Widget_HoldingProgress' has a wrong offset!");

}

