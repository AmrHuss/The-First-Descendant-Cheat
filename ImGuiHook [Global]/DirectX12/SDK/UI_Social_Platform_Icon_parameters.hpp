#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Social_Platform_Icon

#include "Basic.hpp"

#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function UI_Social_Platform_Icon.UI_Social_Platform_Icon_C.ExecuteUbergraph_UI_Social_Platform_Icon
// 0x0008 (0x0008 - 0x0000)
struct UI_Social_Platform_Icon_C_ExecuteUbergraph_UI_Social_Platform_Icon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Social_Platform_Icon_C_ExecuteUbergraph_UI_Social_Platform_Icon) == 0x000004, "Wrong alignment on UI_Social_Platform_Icon_C_ExecuteUbergraph_UI_Social_Platform_Icon");
static_assert(sizeof(UI_Social_Platform_Icon_C_ExecuteUbergraph_UI_Social_Platform_Icon) == 0x000008, "Wrong size on UI_Social_Platform_Icon_C_ExecuteUbergraph_UI_Social_Platform_Icon");
static_assert(offsetof(UI_Social_Platform_Icon_C_ExecuteUbergraph_UI_Social_Platform_Icon, EntryPoint) == 0x000000, "Member 'UI_Social_Platform_Icon_C_ExecuteUbergraph_UI_Social_Platform_Icon::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_ExecuteUbergraph_UI_Social_Platform_Icon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_Social_Platform_Icon_C_ExecuteUbergraph_UI_Social_Platform_Icon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_Social_Platform_Icon.UI_Social_Platform_Icon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Social_Platform_Icon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Social_Platform_Icon_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Social_Platform_Icon_C_PreConstruct");
static_assert(sizeof(UI_Social_Platform_Icon_C_PreConstruct) == 0x000001, "Wrong size on UI_Social_Platform_Icon_C_PreConstruct");
static_assert(offsetof(UI_Social_Platform_Icon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Social_Platform_Icon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_Social_Platform_Icon.UI_Social_Platform_Icon_C.SetUILoginPlatformIcon
// 0x0820 (0x0820 - 0x0000)
struct UI_Social_Platform_Icon_C_SetUILoginPlatformIcon final
{
public:
	EM1LoginPlatformTypes                         MyPlatformType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         UserPlayformType;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0008(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0040(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_2;                        // 0x0070(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_3;                        // 0x00A0(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_4;                        // 0x00D0(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_5;                        // 0x0100(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         Temp_byte_Variable;                                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_6;                        // 0x0138(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_7;                        // 0x0168(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_8;                        // 0x0198(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_9;                        // 0x01C8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_10;                       // 0x01F8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_11;                       // 0x0228(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         Temp_byte_Variable_1;                              // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_12;                       // 0x0260(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_13;                       // 0x0290(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_14;                       // 0x02C0(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_15;                       // 0x02F0(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_16;                       // 0x0320(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_17;                       // 0x0350(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         Temp_byte_Variable_2;                              // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_18;                       // 0x0388(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_19;                       // 0x03B8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_20;                       // 0x03E8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_21;                       // 0x0418(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_22;                       // 0x0448(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_23;                       // 0x0478(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         Temp_byte_Variable_3;                              // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9[0x7];                                      // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_24;                       // 0x04B0(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_25;                       // 0x04E0(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_26;                       // 0x0510(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_27;                       // 0x0540(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_28;                       // 0x0570(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_29;                       // 0x05A0(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         Temp_byte_Variable_4;                              // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D1[0x7];                                      // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_30;                       // 0x05D8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_31;                       // 0x0608(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_32;                       // 0x0638(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_33;                       // 0x0668(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_34;                       // 0x0698(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_35;                       // 0x06C8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x06F8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_1;                           // 0x0728(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_2;                           // 0x0758(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_3;                           // 0x0788(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_4;                           // 0x07B8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         Temp_byte_Variable_5;                              // 0x07E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E9[0x7];                                      // 0x07E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_5;                           // 0x07F0(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon) == 0x000008, "Wrong alignment on UI_Social_Platform_Icon_C_SetUILoginPlatformIcon");
static_assert(sizeof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon) == 0x000820, "Wrong size on UI_Social_Platform_Icon_C_SetUILoginPlatformIcon");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, MyPlatformType) == 0x000000, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::MyPlatformType' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, UserPlayformType) == 0x000001, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::UserPlayformType' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable) == 0x000008, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_1) == 0x000040, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_2) == 0x000070, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_3) == 0x0000A0, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_4) == 0x0000D0, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_5) == 0x000100, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_byte_Variable) == 0x000130, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_6) == 0x000138, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_6' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_7) == 0x000168, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_7' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_8) == 0x000198, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_8' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_9) == 0x0001C8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_9' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_10) == 0x0001F8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_10' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_11) == 0x000228, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_11' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_byte_Variable_1) == 0x000258, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_12) == 0x000260, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_12' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_13) == 0x000290, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_13' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_14) == 0x0002C0, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_14' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_15) == 0x0002F0, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_15' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_16) == 0x000320, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_16' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_17) == 0x000350, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_17' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_byte_Variable_2) == 0x000380, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_18) == 0x000388, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_18' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_19) == 0x0003B8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_19' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_20) == 0x0003E8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_20' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_21) == 0x000418, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_21' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_22) == 0x000448, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_22' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_23) == 0x000478, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_23' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_byte_Variable_3) == 0x0004A8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_24) == 0x0004B0, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_24' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_25) == 0x0004E0, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_25' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_26) == 0x000510, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_26' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_27) == 0x000540, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_27' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_28) == 0x000570, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_28' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_29) == 0x0005A0, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_29' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_byte_Variable_4) == 0x0005D0, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_30) == 0x0005D8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_30' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_31) == 0x000608, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_31' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_32) == 0x000638, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_32' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_33) == 0x000668, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_33' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_34) == 0x000698, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_34' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_softobject_Variable_35) == 0x0006C8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_softobject_Variable_35' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, K2Node_Select_Default) == 0x0006F8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, K2Node_Select_Default_1) == 0x000728, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, K2Node_Select_Default_2) == 0x000758, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, K2Node_Select_Default_3) == 0x000788, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, K2Node_Select_Default_4) == 0x0007B8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, Temp_byte_Variable_5) == 0x0007E8, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_Social_Platform_Icon_C_SetUILoginPlatformIcon, K2Node_Select_Default_5) == 0x0007F0, "Member 'UI_Social_Platform_Icon_C_SetUILoginPlatformIcon::K2Node_Select_Default_5' has a wrong offset!");

}
