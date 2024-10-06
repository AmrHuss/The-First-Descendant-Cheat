#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RuneDetails

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_RuneDetails.UI_RuneDetails_C
// 0x01D0 (0x0930 - 0x0760)
class UUI_RuneDetails_C final : public UM1UIRuneDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0760(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0768(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               Deco_BG;                                           // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Exclusive_WS;                                      // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           GroupId;                                           // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_87;                                          // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_107;                                         // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_182;                                         // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_capacity_1;                                  // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_capacity_2;                                  // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ClassType;                                   // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_RuneClassType;                               // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_RuneSocketType;                              // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Lock;                                          // 0x07D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_RuneClass;                                     // 0x07D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_EquippedInfo;                              // 0x07E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               P_Detail;                                          // 0x07E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_CapacityIncrease;                            // 0x07F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_Cost;                                        // 0x07F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_Group;                                       // 0x0800(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_RuneAttachedToCharacter;                     // 0x0808(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_RuneTooltip_Duplicate;                       // 0x0810(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Rune_Icon;                                         // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           SocketTypeName;                                    // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_CapacityIncreaseValue;                          // 0x0828(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_ClassType;                                      // 0x0830(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_CostValue;                                      // 0x0838(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1RichTextBlock*                       TB_Desc;                                           // 0x0840(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_RuneAttachedToCharacter;                        // 0x0848(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_RuneAttachedToCharacter_1;                      // 0x0850(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_CannotComposable;                             // 0x0858(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_CannotDecompable;                             // 0x0860(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_CannotEnchantable;                            // 0x0868(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Capacity;                                     // 0x0870(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Capacity_1;                                   // 0x0878(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_ClassType;                                    // 0x0880(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_CommaAndSpace_0;                              // 0x0888(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_CommaAndSpace_1;                              // 0x0890(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Equip;                                        // 0x0898(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_ItemName;                                     // 0x08A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Level;                                        // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Socket;                                       // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_SupportedTypes;                               // 0x08B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Tier;                                         // 0x08C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_WeaponClass;                                  // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Tier_Back;                                         // 0x08D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Tier_Bg;                                           // 0x08D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_002_C*                    UI_Deco_Back_002;                                  // 0x08E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine_2;                               // 0x08E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine_5;                               // 0x08F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine_6;                               // 0x08F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         UI_ExclusiveWeapon;                                // 0x0900(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RuneEnchant_Icon_C*                 UI_RuneEnchant_Icon;                               // 0x0908(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Weapon_Picto;                                      // 0x0910(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_RunEnchant;                                     // 0x0918(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_State_Check;                                    // 0x0920(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Capacity_1_0;                                 // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BP_ShowAsAttachedToEquippedCharacterOrWeapon(const bool bIsWeaponRune);
	void BP_ShowAsAttachedToNumerousCharacterOrWeapon(const bool bIsWeaponRune);
	void Construct();
	void ExecuteUbergraph_UI_RuneDetails(int32 EntryPoint);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void PreConstruct(bool IsDesignTime);
	void Set_Enchant_Level_(int32 CurrentLevel, int32 MaxLevel);
	void SetDataImpl(class UM1UIData* InData);
	void SetExclusiveWeapon(class UM1UIDataItemInfo_Rune* RuneData);
	void SetGroupIdText(const class FString& GroupIdString);
	void SetRuneSocketTypeImage(EM1RuneSocketType RuneSocketType);
	void UILcoked(bool IsLocked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_RuneDetails_C">();
	}
	static class UUI_RuneDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_RuneDetails_C>();
	}
};
static_assert(alignof(UUI_RuneDetails_C) == 0x000008, "Wrong alignment on UUI_RuneDetails_C");
static_assert(sizeof(UUI_RuneDetails_C) == 0x000930, "Wrong size on UUI_RuneDetails_C");
static_assert(offsetof(UUI_RuneDetails_C, UberGraphFrame) == 0x000760, "Member 'UUI_RuneDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, UIAnim_Open) == 0x000768, "Member 'UUI_RuneDetails_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Deco_BG) == 0x000770, "Member 'UUI_RuneDetails_C::Deco_BG' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Exclusive_WS) == 0x000778, "Member 'UUI_RuneDetails_C::Exclusive_WS' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, GroupId) == 0x000780, "Member 'UUI_RuneDetails_C::GroupId' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Image) == 0x000788, "Member 'UUI_RuneDetails_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Image_87) == 0x000790, "Member 'UUI_RuneDetails_C::Image_87' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Image_107) == 0x000798, "Member 'UUI_RuneDetails_C::Image_107' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Image_182) == 0x0007A0, "Member 'UUI_RuneDetails_C::Image_182' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Image_capacity_1) == 0x0007A8, "Member 'UUI_RuneDetails_C::Image_capacity_1' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Image_capacity_2) == 0x0007B0, "Member 'UUI_RuneDetails_C::Image_capacity_2' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Image_ClassType) == 0x0007B8, "Member 'UUI_RuneDetails_C::Image_ClassType' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Image_RuneClassType) == 0x0007C0, "Member 'UUI_RuneDetails_C::Image_RuneClassType' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Image_RuneSocketType) == 0x0007C8, "Member 'UUI_RuneDetails_C::Image_RuneSocketType' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Img_Lock) == 0x0007D0, "Member 'UUI_RuneDetails_C::Img_Lock' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Img_RuneClass) == 0x0007D8, "Member 'UUI_RuneDetails_C::Img_RuneClass' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Overlay_EquippedInfo) == 0x0007E0, "Member 'UUI_RuneDetails_C::Overlay_EquippedInfo' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, P_Detail) == 0x0007E8, "Member 'UUI_RuneDetails_C::P_Detail' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Panel_CapacityIncrease) == 0x0007F0, "Member 'UUI_RuneDetails_C::Panel_CapacityIncrease' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Panel_Cost) == 0x0007F8, "Member 'UUI_RuneDetails_C::Panel_Cost' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Panel_Group) == 0x000800, "Member 'UUI_RuneDetails_C::Panel_Group' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Panel_RuneAttachedToCharacter) == 0x000808, "Member 'UUI_RuneDetails_C::Panel_RuneAttachedToCharacter' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Panel_RuneTooltip_Duplicate) == 0x000810, "Member 'UUI_RuneDetails_C::Panel_RuneTooltip_Duplicate' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Rune_Icon) == 0x000818, "Member 'UUI_RuneDetails_C::Rune_Icon' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, SocketTypeName) == 0x000820, "Member 'UUI_RuneDetails_C::SocketTypeName' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, TB_CapacityIncreaseValue) == 0x000828, "Member 'UUI_RuneDetails_C::TB_CapacityIncreaseValue' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, TB_ClassType) == 0x000830, "Member 'UUI_RuneDetails_C::TB_ClassType' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, TB_CostValue) == 0x000838, "Member 'UUI_RuneDetails_C::TB_CostValue' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, TB_Desc) == 0x000840, "Member 'UUI_RuneDetails_C::TB_Desc' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, TB_RuneAttachedToCharacter) == 0x000848, "Member 'UUI_RuneDetails_C::TB_RuneAttachedToCharacter' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, TB_RuneAttachedToCharacter_1) == 0x000850, "Member 'UUI_RuneDetails_C::TB_RuneAttachedToCharacter_1' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_CannotComposable) == 0x000858, "Member 'UUI_RuneDetails_C::Text_CannotComposable' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_CannotDecompable) == 0x000860, "Member 'UUI_RuneDetails_C::Text_CannotDecompable' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_CannotEnchantable) == 0x000868, "Member 'UUI_RuneDetails_C::Text_CannotEnchantable' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_Capacity) == 0x000870, "Member 'UUI_RuneDetails_C::Text_Capacity' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_Capacity_1) == 0x000878, "Member 'UUI_RuneDetails_C::Text_Capacity_1' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_ClassType) == 0x000880, "Member 'UUI_RuneDetails_C::Text_ClassType' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_CommaAndSpace_0) == 0x000888, "Member 'UUI_RuneDetails_C::Text_CommaAndSpace_0' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_CommaAndSpace_1) == 0x000890, "Member 'UUI_RuneDetails_C::Text_CommaAndSpace_1' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_Equip) == 0x000898, "Member 'UUI_RuneDetails_C::Text_Equip' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_ItemName) == 0x0008A0, "Member 'UUI_RuneDetails_C::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_Level) == 0x0008A8, "Member 'UUI_RuneDetails_C::Text_Level' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_Socket) == 0x0008B0, "Member 'UUI_RuneDetails_C::Text_Socket' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_SupportedTypes) == 0x0008B8, "Member 'UUI_RuneDetails_C::Text_SupportedTypes' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_Tier) == 0x0008C0, "Member 'UUI_RuneDetails_C::Text_Tier' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_WeaponClass) == 0x0008C8, "Member 'UUI_RuneDetails_C::Text_WeaponClass' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Tier_Back) == 0x0008D0, "Member 'UUI_RuneDetails_C::Tier_Back' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Tier_Bg) == 0x0008D8, "Member 'UUI_RuneDetails_C::Tier_Bg' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, UI_Deco_Back_002) == 0x0008E0, "Member 'UUI_RuneDetails_C::UI_Deco_Back_002' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, UI_Deco_TitleLine_2) == 0x0008E8, "Member 'UUI_RuneDetails_C::UI_Deco_TitleLine_2' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, UI_Deco_TitleLine_5) == 0x0008F0, "Member 'UUI_RuneDetails_C::UI_Deco_TitleLine_5' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, UI_Deco_TitleLine_6) == 0x0008F8, "Member 'UUI_RuneDetails_C::UI_Deco_TitleLine_6' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, UI_ExclusiveWeapon) == 0x000900, "Member 'UUI_RuneDetails_C::UI_ExclusiveWeapon' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, UI_RuneEnchant_Icon) == 0x000908, "Member 'UUI_RuneDetails_C::UI_RuneEnchant_Icon' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Weapon_Picto) == 0x000910, "Member 'UUI_RuneDetails_C::Weapon_Picto' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, WS_RunEnchant) == 0x000918, "Member 'UUI_RuneDetails_C::WS_RunEnchant' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, WS_State_Check) == 0x000920, "Member 'UUI_RuneDetails_C::WS_State_Check' has a wrong offset!");
static_assert(offsetof(UUI_RuneDetails_C, Text_Capacity_1_0) == 0x000928, "Member 'UUI_RuneDetails_C::Text_Capacity_1_0' has a wrong offset!");

}

