#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemCoreStat

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemCoreStat.UI_ItemCoreStat_C
// 0x0058 (0x07D0 - 0x0778)
class UUI_ItemCoreStat_C final : public UM1UIItemStat
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Negative;                                      // 0x0780(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Positive;                                      // 0x0788(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Dodge;                                             // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                P_StatOffset;                                      // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_69;                                       // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Mark_1;                                         // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1SpriteImage*                         Widget_Arrow;                                      // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_0;                                         // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsReactorStat;                                     // 0x07C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsViewLabel;                                       // 0x07C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_SetDiffStatValue(bool bIsZero, bool bPositiveNum);
	void ExecuteUbergraph_UI_ItemCoreStat(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetUILayout(bool Vertical);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemCoreStat_C">();
	}
	static class UUI_ItemCoreStat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemCoreStat_C>();
	}
};
static_assert(alignof(UUI_ItemCoreStat_C) == 0x000008, "Wrong alignment on UUI_ItemCoreStat_C");
static_assert(sizeof(UUI_ItemCoreStat_C) == 0x0007D0, "Wrong size on UUI_ItemCoreStat_C");
static_assert(offsetof(UUI_ItemCoreStat_C, UberGraphFrame) == 0x000778, "Member 'UUI_ItemCoreStat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, Ani_Negative) == 0x000780, "Member 'UUI_ItemCoreStat_C::Ani_Negative' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, Ani_Positive) == 0x000788, "Member 'UUI_ItemCoreStat_C::Ani_Positive' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, Dodge) == 0x000790, "Member 'UUI_ItemCoreStat_C::Dodge' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, P_StatOffset) == 0x000798, "Member 'UUI_ItemCoreStat_C::P_StatOffset' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, ScaleBox_69) == 0x0007A0, "Member 'UUI_ItemCoreStat_C::ScaleBox_69' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, SizeBox_0) == 0x0007A8, "Member 'UUI_ItemCoreStat_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, TB_Mark_1) == 0x0007B0, "Member 'UUI_ItemCoreStat_C::TB_Mark_1' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, Widget_Arrow) == 0x0007B8, "Member 'UUI_ItemCoreStat_C::Widget_Arrow' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, WrapBox_0) == 0x0007C0, "Member 'UUI_ItemCoreStat_C::WrapBox_0' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, IsReactorStat) == 0x0007C8, "Member 'UUI_ItemCoreStat_C::IsReactorStat' has a wrong offset!");
static_assert(offsetof(UUI_ItemCoreStat_C, IsViewLabel) == 0x0007C9, "Member 'UUI_ItemCoreStat_C::IsViewLabel' has a wrong offset!");

}
