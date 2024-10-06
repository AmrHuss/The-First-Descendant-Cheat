#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameGuide_GainItem_mini

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_GameGuide_GainItem_mini.UI_GameGuide_GainItem_mini_C.BP_PlayTierAnim
// 0x0001 (0x0001 - 0x0000)
struct UI_GameGuide_GainItem_mini_C_BP_PlayTierAnim final
{
public:
	EM1ItemTierType                               InTier;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameGuide_GainItem_mini_C_BP_PlayTierAnim) == 0x000001, "Wrong alignment on UI_GameGuide_GainItem_mini_C_BP_PlayTierAnim");
static_assert(sizeof(UI_GameGuide_GainItem_mini_C_BP_PlayTierAnim) == 0x000001, "Wrong size on UI_GameGuide_GainItem_mini_C_BP_PlayTierAnim");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_BP_PlayTierAnim, InTier) == 0x000000, "Member 'UI_GameGuide_GainItem_mini_C_BP_PlayTierAnim::InTier' has a wrong offset!");

// Function UI_GameGuide_GainItem_mini.UI_GameGuide_GainItem_mini_C.BP_SetItemIconType
// 0x0006 (0x0006 - 0x0000)
struct UI_GameGuide_GainItem_mini_C_BP_SetItemIconType final
{
public:
	EM1ItemType                                   InItemType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1CurrencyType                               InCurrecyType;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1EquipmentCategoryType                      InEquipCategory;                                   // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1EquipItemClassType                         InWeaponClassType;                                 // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ConsumableItemCategoryType                 InConsumableCategory;                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1RuneClassType                              InRuneClassType;                                   // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameGuide_GainItem_mini_C_BP_SetItemIconType) == 0x000001, "Wrong alignment on UI_GameGuide_GainItem_mini_C_BP_SetItemIconType");
static_assert(sizeof(UI_GameGuide_GainItem_mini_C_BP_SetItemIconType) == 0x000006, "Wrong size on UI_GameGuide_GainItem_mini_C_BP_SetItemIconType");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_BP_SetItemIconType, InItemType) == 0x000000, "Member 'UI_GameGuide_GainItem_mini_C_BP_SetItemIconType::InItemType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_BP_SetItemIconType, InCurrecyType) == 0x000001, "Member 'UI_GameGuide_GainItem_mini_C_BP_SetItemIconType::InCurrecyType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_BP_SetItemIconType, InEquipCategory) == 0x000002, "Member 'UI_GameGuide_GainItem_mini_C_BP_SetItemIconType::InEquipCategory' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_BP_SetItemIconType, InWeaponClassType) == 0x000003, "Member 'UI_GameGuide_GainItem_mini_C_BP_SetItemIconType::InWeaponClassType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_BP_SetItemIconType, InConsumableCategory) == 0x000004, "Member 'UI_GameGuide_GainItem_mini_C_BP_SetItemIconType::InConsumableCategory' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_BP_SetItemIconType, InRuneClassType) == 0x000005, "Member 'UI_GameGuide_GainItem_mini_C_BP_SetItemIconType::InRuneClassType' has a wrong offset!");

// Function UI_GameGuide_GainItem_mini.UI_GameGuide_GainItem_mini_C.BP_SetVisibleQuantityOrLevel
// 0x0001 (0x0001 - 0x0000)
struct UI_GameGuide_GainItem_mini_C_BP_SetVisibleQuantityOrLevel final
{
public:
	bool                                          bIsVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameGuide_GainItem_mini_C_BP_SetVisibleQuantityOrLevel) == 0x000001, "Wrong alignment on UI_GameGuide_GainItem_mini_C_BP_SetVisibleQuantityOrLevel");
static_assert(sizeof(UI_GameGuide_GainItem_mini_C_BP_SetVisibleQuantityOrLevel) == 0x000001, "Wrong size on UI_GameGuide_GainItem_mini_C_BP_SetVisibleQuantityOrLevel");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_BP_SetVisibleQuantityOrLevel, bIsVisible) == 0x000000, "Member 'UI_GameGuide_GainItem_mini_C_BP_SetVisibleQuantityOrLevel::bIsVisible' has a wrong offset!");

// Function UI_GameGuide_GainItem_mini.UI_GameGuide_GainItem_mini_C.ExecuteUbergraph_UI_GameGuide_GainItem_mini
// 0x0050 (0x0050 - 0x0000)
struct UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               K2Node_Event_InTier;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Get_UI_TierColor_Base_TierColor;          // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsVisible;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemType                                   K2Node_Event_InItemType;                           // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1CurrencyType                               K2Node_Event_InCurrecyType;                        // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1EquipmentCategoryType                      K2Node_Event_InEquipCategory;                      // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1EquipItemClassType                         K2Node_Event_InWeaponClassType;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ConsumableItemCategoryType                 K2Node_Event_InConsumableCategory;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1RuneClassType                              K2Node_Event_InRuneClassType;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Temp_object_Variable;                              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini) == 0x000008, "Wrong alignment on UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini");
static_assert(sizeof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini) == 0x000050, "Wrong size on UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, EntryPoint) == 0x000000, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, Temp_byte_Variable) == 0x000004, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, Temp_bool_Variable) == 0x000005, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, Temp_byte_Variable_1) == 0x000006, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, Temp_byte_Variable_2) == 0x000007, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, CallFunc_PlayUIAnimation_ReturnValue) == 0x000008, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Event_InTier) == 0x000010, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Event_InTier' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, CallFunc_Get_UI_TierColor_Base_TierColor) == 0x000014, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::CallFunc_Get_UI_TierColor_Base_TierColor' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Event_bIsVisible) == 0x000024, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Event_bIsVisible' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Event_InItemType) == 0x000025, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Event_InItemType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Event_InCurrecyType) == 0x000026, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Event_InCurrecyType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Event_InEquipCategory) == 0x000027, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Event_InEquipCategory' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Event_InWeaponClassType) == 0x000028, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Event_InWeaponClassType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Event_InConsumableCategory) == 0x000029, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Event_InConsumableCategory' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Event_InRuneClassType) == 0x00002A, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Event_InRuneClassType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Select_Default) == 0x00002B, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, Temp_object_Variable) == 0x000030, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, K2Node_Select_Default_1) == 0x000038, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini, CallFunc_PlayUIAnimation_ReturnValue_1) == 0x000048, "Member 'UI_GameGuide_GainItem_mini_C_ExecuteUbergraph_UI_GameGuide_GainItem_mini::CallFunc_PlayUIAnimation_ReturnValue_1' has a wrong offset!");

// Function UI_GameGuide_GainItem_mini.UI_GameGuide_GainItem_mini_C.UISetItemIcon
// 0x01B8 (0x01B8 - 0x0000)
struct UI_GameGuide_GainItem_mini_C_UISetItemIcon final
{
public:
	EM1ItemType                                   InItemType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1CurrencyType                               InCurrencyType;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1EquipmentCategoryType                      InEquipCategory;                                   // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1EquipItemClassType                         InWeaponClass;                                     // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ConsumableItemCategoryType                 InConsumableCategoryType;                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1RuneClassType                              InRuneClassType;                                   // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Default;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1ItemType                                   Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_6;                            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_7;                            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_8;                            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_9;                            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_10;                           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1ConsumableItemCategoryType                 Temp_byte_Variable_1;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable_11;                           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_12;                           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_13;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_14;                           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_15;                           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_16;                           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_17;                           // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_18;                           // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_19;                           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_20;                           // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_21;                           // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_22;                           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_23;                           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_24;                           // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_25;                           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_26;                           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_Get_UI_CurrencyType_Icon_ElementalTypeIcon; // 0x0100(0x0030)(HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_As____2D;                       // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A[0x6];                                      // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_Get_UI_WeaponClass_Icon_ElementalTypeIcon; // 0x0160(0x0030)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_As____2D_1;                     // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default_2;                           // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameGuide_GainItem_mini_C_UISetItemIcon) == 0x000008, "Wrong alignment on UI_GameGuide_GainItem_mini_C_UISetItemIcon");
static_assert(sizeof(UI_GameGuide_GainItem_mini_C_UISetItemIcon) == 0x0001B8, "Wrong size on UI_GameGuide_GainItem_mini_C_UISetItemIcon");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, InItemType) == 0x000000, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::InItemType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, InCurrencyType) == 0x000001, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::InCurrencyType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, InEquipCategory) == 0x000002, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::InEquipCategory' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, InWeaponClass) == 0x000003, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::InWeaponClass' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, InConsumableCategoryType) == 0x000004, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::InConsumableCategoryType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, InRuneClassType) == 0x000005, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::InRuneClassType' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Default) == 0x000008, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Default' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_byte_Variable) == 0x000010, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable) == 0x000018, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_1) == 0x000020, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_2) == 0x000028, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_3) == 0x000030, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_4) == 0x000038, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_5) == 0x000040, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_6) == 0x000048, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_7) == 0x000050, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_8) == 0x000058, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_9) == 0x000060, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_10) == 0x000068, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_byte_Variable_1) == 0x000070, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_11) == 0x000078, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_12) == 0x000080, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_12' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_13) == 0x000088, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_13' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_14) == 0x000090, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_14' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_15) == 0x000098, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_15' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_16) == 0x0000A0, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_16' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_17) == 0x0000A8, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_17' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_18) == 0x0000B0, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_18' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_19) == 0x0000B8, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_19' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_20) == 0x0000C0, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_20' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_21) == 0x0000C8, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_21' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_22) == 0x0000D0, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_22' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_23) == 0x0000D8, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_23' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_24) == 0x0000E0, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_24' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_25) == 0x0000E8, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_25' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_object_Variable_26) == 0x0000F0, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_object_Variable_26' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, Temp_bool_Variable) == 0x0000F8, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000F9, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, CallFunc_Get_UI_CurrencyType_Icon_ElementalTypeIcon) == 0x000100, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::CallFunc_Get_UI_CurrencyType_Icon_ElementalTypeIcon' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, K2Node_Select_Default) == 0x000130, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000138, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, K2Node_DynamicCast_As____2D) == 0x000140, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::K2Node_DynamicCast_As____2D' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, K2Node_Select_Default_1) == 0x000150, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000158, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000159, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, CallFunc_Get_UI_WeaponClass_Icon_ElementalTypeIcon) == 0x000160, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::CallFunc_Get_UI_WeaponClass_Icon_ElementalTypeIcon' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x000190, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, K2Node_DynamicCast_As____2D_1) == 0x000198, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::K2Node_DynamicCast_As____2D_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, K2Node_DynamicCast_bSuccess_1) == 0x0001A0, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, K2Node_Select_Default_2) == 0x0001A8, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_GainItem_mini_C_UISetItemIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0001B0, "Member 'UI_GameGuide_GainItem_mini_C_UISetItemIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");

}

