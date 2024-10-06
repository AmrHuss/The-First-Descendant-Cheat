#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BaseMission_Marker

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_BaseMission_Marker.UI_BaseMission_Marker_C.BP_UpdateVisibility
// 0x0001 (0x0001 - 0x0000)
struct UI_BaseMission_Marker_C_BP_UpdateVisibility final
{
public:
	bool                                          bIsVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BaseMission_Marker_C_BP_UpdateVisibility) == 0x000001, "Wrong alignment on UI_BaseMission_Marker_C_BP_UpdateVisibility");
static_assert(sizeof(UI_BaseMission_Marker_C_BP_UpdateVisibility) == 0x000001, "Wrong size on UI_BaseMission_Marker_C_BP_UpdateVisibility");
static_assert(offsetof(UI_BaseMission_Marker_C_BP_UpdateVisibility, bIsVisible) == 0x000000, "Member 'UI_BaseMission_Marker_C_BP_UpdateVisibility::bIsVisible' has a wrong offset!");

// Function UI_BaseMission_Marker.UI_BaseMission_Marker_C.ExecuteUbergraph_UI_BaseMission_Marker
// 0x0058 (0x0058 - 0x0000)
struct UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsVisible;                           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetDirectionAngleFromViewCenter_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetRenderTransformAngle_Angle_ImplicitCast; // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker) == 0x000008, "Wrong alignment on UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker");
static_assert(sizeof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker) == 0x000058, "Wrong size on UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, EntryPoint) == 0x000000, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, Temp_bool_Variable) == 0x000004, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, Temp_byte_Variable) == 0x000005, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, Temp_byte_Variable_1) == 0x000006, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, K2Node_Event_IsDesignTime) == 0x000007, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, K2Node_Event_MyGeometry) == 0x000008, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, K2Node_Event_InDeltaTime) == 0x000040, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, K2Node_Event_bIsVisible) == 0x000044, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::K2Node_Event_bIsVisible' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, CallFunc_GetDirectionAngleFromViewCenter_ReturnValue) == 0x000048, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::CallFunc_GetDirectionAngleFromViewCenter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, K2Node_Select_Default) == 0x000050, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker, CallFunc_SetRenderTransformAngle_Angle_ImplicitCast) == 0x000054, "Member 'UI_BaseMission_Marker_C_ExecuteUbergraph_UI_BaseMission_Marker::CallFunc_SetRenderTransformAngle_Angle_ImplicitCast' has a wrong offset!");

// Function UI_BaseMission_Marker.UI_BaseMission_Marker_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_BaseMission_Marker_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BaseMission_Marker_C_PreConstruct) == 0x000001, "Wrong alignment on UI_BaseMission_Marker_C_PreConstruct");
static_assert(sizeof(UI_BaseMission_Marker_C_PreConstruct) == 0x000001, "Wrong size on UI_BaseMission_Marker_C_PreConstruct");
static_assert(offsetof(UI_BaseMission_Marker_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_BaseMission_Marker_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_BaseMission_Marker.UI_BaseMission_Marker_C.SetUIState
// 0x0001 (0x0001 - 0x0000)
struct UI_BaseMission_Marker_C_SetUIState final
{
public:
	bool                                          IsDim;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BaseMission_Marker_C_SetUIState) == 0x000001, "Wrong alignment on UI_BaseMission_Marker_C_SetUIState");
static_assert(sizeof(UI_BaseMission_Marker_C_SetUIState) == 0x000001, "Wrong size on UI_BaseMission_Marker_C_SetUIState");
static_assert(offsetof(UI_BaseMission_Marker_C_SetUIState, IsDim) == 0x000000, "Member 'UI_BaseMission_Marker_C_SetUIState::IsDim' has a wrong offset!");

// Function UI_BaseMission_Marker.UI_BaseMission_Marker_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_BaseMission_Marker_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BaseMission_Marker_C_Tick) == 0x000004, "Wrong alignment on UI_BaseMission_Marker_C_Tick");
static_assert(sizeof(UI_BaseMission_Marker_C_Tick) == 0x00003C, "Wrong size on UI_BaseMission_Marker_C_Tick");
static_assert(offsetof(UI_BaseMission_Marker_C_Tick, MyGeometry) == 0x000000, "Member 'UI_BaseMission_Marker_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_BaseMission_Marker_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_BaseMission_Marker_C_Tick::InDeltaTime' has a wrong offset!");

}

