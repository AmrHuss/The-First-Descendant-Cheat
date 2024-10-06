#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Matching_TextItem

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Matching_TextItem.UI_Matching_TextItem_C
// 0x0038 (0x0748 - 0x0710)
class UUI_Matching_TextItem_C final : public UM1UIMatchingText
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Loop;                                       // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsHUD;                                             // 0x0738(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_739[0x3];                                      // 0x0739(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateChildSize                        In_Size;                                           // 0x073C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BP_SetVisibility(bool bShow);
	void Construct();
	void ExecuteUbergraph_UI_Matching_TextItem(int32 EntryPoint);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void PreConstruct(bool IsDesignTime);
	void SequenceEvent();
	void SequenceEvent__ENTRYPOINTUI_Matching_TextItem();
	void SetUI();
	void ShowMatchingWidget(bool bShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Matching_TextItem_C">();
	}
	static class UUI_Matching_TextItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Matching_TextItem_C>();
	}
};
static_assert(alignof(UUI_Matching_TextItem_C) == 0x000008, "Wrong alignment on UUI_Matching_TextItem_C");
static_assert(sizeof(UUI_Matching_TextItem_C) == 0x000748, "Wrong size on UUI_Matching_TextItem_C");
static_assert(offsetof(UUI_Matching_TextItem_C, UberGraphFrame) == 0x000710, "Member 'UUI_Matching_TextItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Matching_TextItem_C, UIAnim_Loop) == 0x000718, "Member 'UUI_Matching_TextItem_C::UIAnim_Loop' has a wrong offset!");
static_assert(offsetof(UUI_Matching_TextItem_C, UIAnim_Open) == 0x000720, "Member 'UUI_Matching_TextItem_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Matching_TextItem_C, Overlay_0) == 0x000728, "Member 'UUI_Matching_TextItem_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UUI_Matching_TextItem_C, SizeBox_0) == 0x000730, "Member 'UUI_Matching_TextItem_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UUI_Matching_TextItem_C, IsHUD) == 0x000738, "Member 'UUI_Matching_TextItem_C::IsHUD' has a wrong offset!");
static_assert(offsetof(UUI_Matching_TextItem_C, In_Size) == 0x00073C, "Member 'UUI_Matching_TextItem_C::In_Size' has a wrong offset!");

}
