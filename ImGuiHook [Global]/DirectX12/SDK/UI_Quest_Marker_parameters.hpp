#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Quest_Marker

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_Quest_Marker.UI_Quest_Marker_C.BP_SetQuestIconType
// 0x0002 (0x0002 - 0x0000)
struct UI_Quest_Marker_C_BP_SetQuestIconType final
{
public:
	EM1QuestMarkerIconType                        InQuestNPCIconType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBeforeStart;                                    // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Quest_Marker_C_BP_SetQuestIconType) == 0x000001, "Wrong alignment on UI_Quest_Marker_C_BP_SetQuestIconType");
static_assert(sizeof(UI_Quest_Marker_C_BP_SetQuestIconType) == 0x000002, "Wrong size on UI_Quest_Marker_C_BP_SetQuestIconType");
static_assert(offsetof(UI_Quest_Marker_C_BP_SetQuestIconType, InQuestNPCIconType) == 0x000000, "Member 'UI_Quest_Marker_C_BP_SetQuestIconType::InQuestNPCIconType' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_BP_SetQuestIconType, bIsBeforeStart) == 0x000001, "Member 'UI_Quest_Marker_C_BP_SetQuestIconType::bIsBeforeStart' has a wrong offset!");

// Function UI_Quest_Marker.UI_Quest_Marker_C.ExecuteUbergraph_UI_Quest_Marker
// 0x0010 (0x0010 - 0x0000)
struct UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1QuestMarkerIconType                        K2Node_Event_InQuestNPCIconType;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsBeforeStart;                       // 0x0005(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker) == 0x000008, "Wrong alignment on UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker");
static_assert(sizeof(UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker) == 0x000010, "Wrong size on UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker");
static_assert(offsetof(UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker, EntryPoint) == 0x000000, "Member 'UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker, K2Node_Event_InQuestNPCIconType) == 0x000004, "Member 'UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker::K2Node_Event_InQuestNPCIconType' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker, K2Node_Event_bIsBeforeStart) == 0x000005, "Member 'UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker::K2Node_Event_bIsBeforeStart' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker, K2Node_Event_InData) == 0x000008, "Member 'UI_Quest_Marker_C_ExecuteUbergraph_UI_Quest_Marker::K2Node_Event_InData' has a wrong offset!");

// Function UI_Quest_Marker.UI_Quest_Marker_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_Quest_Marker_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Quest_Marker_C_SetDataImpl) == 0x000008, "Wrong alignment on UI_Quest_Marker_C_SetDataImpl");
static_assert(sizeof(UI_Quest_Marker_C_SetDataImpl) == 0x000008, "Wrong size on UI_Quest_Marker_C_SetDataImpl");
static_assert(offsetof(UI_Quest_Marker_C_SetDataImpl, InData) == 0x000000, "Member 'UI_Quest_Marker_C_SetDataImpl::InData' has a wrong offset!");

// Function UI_Quest_Marker.UI_Quest_Marker_C.SetQuestMarkerIcon
// 0x0048 (0x0048 - 0x0000)
struct UI_Quest_Marker_C_SetQuestMarkerIcon final
{
public:
	EM1QuestMarkerIconType                        InQuestTargetState;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBeforeStart;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1QuestMarkerIconType                        Temp_byte_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EM1QuestMarkerIconType                        Temp_byte_Variable_3;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_3;                            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_2;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Quest_Marker_C_SetQuestMarkerIcon) == 0x000008, "Wrong alignment on UI_Quest_Marker_C_SetQuestMarkerIcon");
static_assert(sizeof(UI_Quest_Marker_C_SetQuestMarkerIcon) == 0x000048, "Wrong size on UI_Quest_Marker_C_SetQuestMarkerIcon");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, InQuestTargetState) == 0x000000, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::InQuestTargetState' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, bIsBeforeStart) == 0x000001, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::bIsBeforeStart' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, Temp_bool_Variable) == 0x000002, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, Temp_byte_Variable) == 0x000003, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, Temp_byte_Variable_1) == 0x000004, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, Temp_byte_Variable_2) == 0x000005, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, K2Node_Select_Default) == 0x000006, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, Temp_object_Variable) == 0x000008, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, Temp_object_Variable_1) == 0x000010, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, Temp_byte_Variable_3) == 0x000018, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, Temp_object_Variable_2) == 0x000020, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, Temp_object_Variable_3) == 0x000028, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, K2Node_Select_Default_1) == 0x000030, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, K2Node_Select_Default_2) == 0x000038, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetQuestMarkerIcon, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'UI_Quest_Marker_C_SetQuestMarkerIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_Quest_Marker.UI_Quest_Marker_C.SetUI_StartMission
// 0x0058 (0x0058 - 0x0000)
struct UI_Quest_Marker_C_SetUI_StartMission final
{
public:
	EM1QuestType                                  InMission;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InStart;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1QuestType                                  Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_5;                            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_6;                            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_7;                            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_8;                            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Quest_Marker_C_SetUI_StartMission) == 0x000008, "Wrong alignment on UI_Quest_Marker_C_SetUI_StartMission");
static_assert(sizeof(UI_Quest_Marker_C_SetUI_StartMission) == 0x000058, "Wrong size on UI_Quest_Marker_C_SetUI_StartMission");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, InMission) == 0x000000, "Member 'UI_Quest_Marker_C_SetUI_StartMission::InMission' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, InStart) == 0x000001, "Member 'UI_Quest_Marker_C_SetUI_StartMission::InStart' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_byte_Variable) == 0x000002, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_object_Variable) == 0x000008, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_object_Variable_1) == 0x000010, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_object_Variable_2) == 0x000018, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_object_Variable_3) == 0x000020, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_object_Variable_4) == 0x000028, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_object_Variable_5) == 0x000030, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_object_Variable_6) == 0x000038, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_object_Variable_7) == 0x000040, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, Temp_object_Variable_8) == 0x000048, "Member 'UI_Quest_Marker_C_SetUI_StartMission::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(UI_Quest_Marker_C_SetUI_StartMission, K2Node_Select_Default) == 0x000050, "Member 'UI_Quest_Marker_C_SetUI_StartMission::K2Node_Select_Default' has a wrong offset!");

}
