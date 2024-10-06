#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraModifier_DeboneStart

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.BlueprintModifyCamera
// 0x0058 (0x0058 - 0x0000)
struct CameraModifier_DeboneStart_C_BlueprintModifyCamera final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ViewLocation;                                      // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         FOV;                                               // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewViewLocation;                                   // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NewViewRotation;                                   // 0x002C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         NewFOV;                                            // 0x0038(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFadeOut_ReturnValue;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F[0x1];                                       // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FadeCameraRotation_OutRotation;           // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_FadeCameraLocation_OutLocation;           // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CameraModifier_DeboneStart_C_BlueprintModifyCamera) == 0x000004, "Wrong alignment on CameraModifier_DeboneStart_C_BlueprintModifyCamera");
static_assert(sizeof(CameraModifier_DeboneStart_C_BlueprintModifyCamera) == 0x000058, "Wrong size on CameraModifier_DeboneStart_C_BlueprintModifyCamera");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, DeltaTime) == 0x000000, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::DeltaTime' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, ViewLocation) == 0x000004, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::ViewLocation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, ViewRotation) == 0x000010, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::ViewRotation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, FOV) == 0x00001C, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::FOV' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, NewViewLocation) == 0x000020, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::NewViewLocation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, NewViewRotation) == 0x00002C, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::NewViewRotation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, NewFOV) == 0x000038, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::NewFOV' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, CallFunc_IsFadeOut_ReturnValue) == 0x00003C, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::CallFunc_IsFadeOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, CallFunc_Not_PreBool_ReturnValue) == 0x00003D, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, CallFunc_BooleanAND_ReturnValue) == 0x00003E, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, CallFunc_FadeCameraRotation_OutRotation) == 0x000040, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::CallFunc_FadeCameraRotation_OutRotation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_BlueprintModifyCamera, CallFunc_FadeCameraLocation_OutLocation) == 0x00004C, "Member 'CameraModifier_DeboneStart_C_BlueprintModifyCamera::CallFunc_FadeCameraLocation_OutLocation' has a wrong offset!");

// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.FadeCameraLocation
// 0x00B0 (0x00B0 - 0x0000)
struct CameraModifier_DeboneStart_C_FadeCameraLocation final
{
public:
	struct FVector                                InViewLocation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OutLocation;                                       // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetLocationAlpha_OutAlpha;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default;                             // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CameraModifier_DeboneStart_C_FadeCameraLocation) == 0x000008, "Wrong alignment on CameraModifier_DeboneStart_C_FadeCameraLocation");
static_assert(sizeof(CameraModifier_DeboneStart_C_FadeCameraLocation) == 0x0000B0, "Wrong size on CameraModifier_DeboneStart_C_FadeCameraLocation");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, InViewLocation) == 0x000000, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::InViewLocation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, OutLocation) == 0x00000C, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::OutLocation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, Temp_bool_Variable) == 0x000018, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_GetLocationAlpha_OutAlpha) == 0x000020, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_GetLocationAlpha_OutAlpha' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, K2Node_Select_Default) == 0x000028, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_GetViewTarget_ReturnValue) == 0x000040, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000054, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_BreakRotator_Roll) == 0x000060, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_BreakRotator_Pitch) == 0x000064, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_BreakRotator_Yaw) == 0x000068, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_MakeRotator_ReturnValue) == 0x00006C, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000078, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000084, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000090, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_VLerp_ReturnValue) == 0x00009C, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x0000A8, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraLocation, CallFunc_VLerp_Alpha_ImplicitCast) == 0x0000AC, "Member 'CameraModifier_DeboneStart_C_FadeCameraLocation::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");

// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.FadeCameraRotation
// 0x0078 (0x0078 - 0x0000)
struct CameraModifier_DeboneStart_C_FadeCameraRotation final
{
public:
	struct FRotator                               InViewRotation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               OutRotation;                                       // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetRotationAlpha_OutAlpha;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Select_Default;                             // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RLerp_Alpha_ImplicitCast;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CameraModifier_DeboneStart_C_FadeCameraRotation) == 0x000008, "Wrong alignment on CameraModifier_DeboneStart_C_FadeCameraRotation");
static_assert(sizeof(CameraModifier_DeboneStart_C_FadeCameraRotation) == 0x000078, "Wrong size on CameraModifier_DeboneStart_C_FadeCameraRotation");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, InViewRotation) == 0x000000, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::InViewRotation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, OutRotation) == 0x00000C, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::OutRotation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, Temp_bool_Variable) == 0x000018, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_GetRotationAlpha_OutAlpha) == 0x000020, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_GetRotationAlpha_OutAlpha' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_GetViewTarget_ReturnValue) == 0x000028, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, K2Node_Select_Default) == 0x000030, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00003C, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_BreakRotator_Roll) == 0x000048, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_BreakRotator_Pitch) == 0x00004C, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_BreakRotator_Yaw) == 0x000050, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_MakeRotator_ReturnValue) == 0x000054, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_RLerp_ReturnValue) == 0x000060, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x00006C, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_FadeCameraRotation, CallFunc_RLerp_Alpha_ImplicitCast) == 0x000070, "Member 'CameraModifier_DeboneStart_C_FadeCameraRotation::CallFunc_RLerp_Alpha_ImplicitCast' has a wrong offset!");

// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.GetLocationAlpha
// 0x0040 (0x0040 - 0x0000)
struct CameraModifier_DeboneStart_C_GetLocationAlpha final
{
public:
	double                                        OutAlpha;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewLocalVar_1;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue_1; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_OutAlpha_ImplicitCast;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_OutAlpha_ImplicitCast_1;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValueFromRuntimeCurve_InTime_ImplicitCast; // 0x0030(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMax_A_ImplicitCast;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CameraModifier_DeboneStart_C_GetLocationAlpha) == 0x000008, "Wrong alignment on CameraModifier_DeboneStart_C_GetLocationAlpha");
static_assert(sizeof(CameraModifier_DeboneStart_C_GetLocationAlpha) == 0x000040, "Wrong size on CameraModifier_DeboneStart_C_GetLocationAlpha");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetLocationAlpha, OutAlpha) == 0x000000, "Member 'CameraModifier_DeboneStart_C_GetLocationAlpha::OutAlpha' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetLocationAlpha, NewLocalVar_1) == 0x000008, "Member 'CameraModifier_DeboneStart_C_GetLocationAlpha::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetLocationAlpha, CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue) == 0x000010, "Member 'CameraModifier_DeboneStart_C_GetLocationAlpha::CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetLocationAlpha, CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue_1) == 0x000014, "Member 'CameraModifier_DeboneStart_C_GetLocationAlpha::CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetLocationAlpha, CallFunc_FMax_ReturnValue) == 0x000018, "Member 'CameraModifier_DeboneStart_C_GetLocationAlpha::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetLocationAlpha, K2Node_FunctionResult_OutAlpha_ImplicitCast) == 0x000020, "Member 'CameraModifier_DeboneStart_C_GetLocationAlpha::K2Node_FunctionResult_OutAlpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetLocationAlpha, K2Node_FunctionResult_OutAlpha_ImplicitCast_1) == 0x000028, "Member 'CameraModifier_DeboneStart_C_GetLocationAlpha::K2Node_FunctionResult_OutAlpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetLocationAlpha, CallFunc_GetFloatValueFromRuntimeCurve_InTime_ImplicitCast) == 0x000030, "Member 'CameraModifier_DeboneStart_C_GetLocationAlpha::CallFunc_GetFloatValueFromRuntimeCurve_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetLocationAlpha, CallFunc_FMax_A_ImplicitCast) == 0x000038, "Member 'CameraModifier_DeboneStart_C_GetLocationAlpha::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");

// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.GetRotationAlpha
// 0x0040 (0x0040 - 0x0000)
struct CameraModifier_DeboneStart_C_GetRotationAlpha final
{
public:
	double                                        OutAlpha;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewLocalVar_1;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue_1; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_OutAlpha_ImplicitCast;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_OutAlpha_ImplicitCast_1;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValueFromRuntimeCurve_InTime_ImplicitCast; // 0x0030(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMax_A_ImplicitCast;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CameraModifier_DeboneStart_C_GetRotationAlpha) == 0x000008, "Wrong alignment on CameraModifier_DeboneStart_C_GetRotationAlpha");
static_assert(sizeof(CameraModifier_DeboneStart_C_GetRotationAlpha) == 0x000040, "Wrong size on CameraModifier_DeboneStart_C_GetRotationAlpha");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetRotationAlpha, OutAlpha) == 0x000000, "Member 'CameraModifier_DeboneStart_C_GetRotationAlpha::OutAlpha' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetRotationAlpha, NewLocalVar_1) == 0x000008, "Member 'CameraModifier_DeboneStart_C_GetRotationAlpha::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetRotationAlpha, CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue) == 0x000010, "Member 'CameraModifier_DeboneStart_C_GetRotationAlpha::CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetRotationAlpha, CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue_1) == 0x000014, "Member 'CameraModifier_DeboneStart_C_GetRotationAlpha::CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetRotationAlpha, CallFunc_FMax_ReturnValue) == 0x000018, "Member 'CameraModifier_DeboneStart_C_GetRotationAlpha::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetRotationAlpha, K2Node_FunctionResult_OutAlpha_ImplicitCast) == 0x000020, "Member 'CameraModifier_DeboneStart_C_GetRotationAlpha::K2Node_FunctionResult_OutAlpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetRotationAlpha, K2Node_FunctionResult_OutAlpha_ImplicitCast_1) == 0x000028, "Member 'CameraModifier_DeboneStart_C_GetRotationAlpha::K2Node_FunctionResult_OutAlpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetRotationAlpha, CallFunc_GetFloatValueFromRuntimeCurve_InTime_ImplicitCast) == 0x000030, "Member 'CameraModifier_DeboneStart_C_GetRotationAlpha::CallFunc_GetFloatValueFromRuntimeCurve_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_GetRotationAlpha, CallFunc_FMax_A_ImplicitCast) == 0x000038, "Member 'CameraModifier_DeboneStart_C_GetRotationAlpha::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");

// Function CameraModifier_DeboneStart.CameraModifier_DeboneStart_C.Initialize
// 0x0018 (0x0018 - 0x0000)
struct CameraModifier_DeboneStart_C_Initialize final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InRotation;                                        // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CameraModifier_DeboneStart_C_Initialize) == 0x000004, "Wrong alignment on CameraModifier_DeboneStart_C_Initialize");
static_assert(sizeof(CameraModifier_DeboneStart_C_Initialize) == 0x000018, "Wrong size on CameraModifier_DeboneStart_C_Initialize");
static_assert(offsetof(CameraModifier_DeboneStart_C_Initialize, InLocation) == 0x000000, "Member 'CameraModifier_DeboneStart_C_Initialize::InLocation' has a wrong offset!");
static_assert(offsetof(CameraModifier_DeboneStart_C_Initialize, InRotation) == 0x00000C, "Member 'CameraModifier_DeboneStart_C_Initialize::InRotation' has a wrong offset!");

}
