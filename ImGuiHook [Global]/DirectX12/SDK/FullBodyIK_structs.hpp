#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FullBodyIK

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ControlRig_structs.hpp"


namespace SDK
{

// Enum FullBodyIK.EFBIKBoneLimitType
// NumValues: 0x0004
enum class EFBIKBoneLimitType : uint8
{
	Free                                     = 0,
	Limit                                    = 1,
	Locked                                   = 2,
	EFBIKBoneLimitType_MAX                   = 3,
};

// Enum FullBodyIK.EPoleVectorOption
// NumValues: 0x0003
enum class EPoleVectorOption : uint8
{
	Direction                                = 0,
	Location                                 = 1,
	EPoleVectorOption_MAX                    = 2,
};

// ScriptStruct FullBodyIK.FBIKBoneLimit
// 0x0010 (0x0010 - 0x0000)
struct FFBIKBoneLimit final
{
public:
	EFBIKBoneLimitType                            LimitType_X;                                       // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFBIKBoneLimitType                            LimitType_Y;                                       // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFBIKBoneLimitType                            LimitType_Z;                                       // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Limit;                                             // 0x0004(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFBIKBoneLimit) == 0x000004, "Wrong alignment on FFBIKBoneLimit");
static_assert(sizeof(FFBIKBoneLimit) == 0x000010, "Wrong size on FFBIKBoneLimit");
static_assert(offsetof(FFBIKBoneLimit, LimitType_X) == 0x000000, "Member 'FFBIKBoneLimit::LimitType_X' has a wrong offset!");
static_assert(offsetof(FFBIKBoneLimit, LimitType_Y) == 0x000001, "Member 'FFBIKBoneLimit::LimitType_Y' has a wrong offset!");
static_assert(offsetof(FFBIKBoneLimit, LimitType_Z) == 0x000002, "Member 'FFBIKBoneLimit::LimitType_Z' has a wrong offset!");
static_assert(offsetof(FFBIKBoneLimit, Limit) == 0x000004, "Member 'FFBIKBoneLimit::Limit' has a wrong offset!");

// ScriptStruct FullBodyIK.FBIKConstraintOption
// 0x0058 (0x0058 - 0x0000)
struct FFBIKConstraintOption final
{
public:
	struct FRigElementKey                         Item;                                              // 0x0000(0x000C)(Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseStiffness;                                     // 0x000D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LinearStiffness;                                   // 0x0010(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularStiffness;                                  // 0x001C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseAngularLimit;                                  // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFBIKBoneLimit                         AngularLimit;                                      // 0x002C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bUsePoleVector;                                    // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPoleVectorOption                             PoleVectorOption;                                  // 0x003D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PoleVector;                                        // 0x0040(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               OffsetRotation;                                    // 0x004C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFBIKConstraintOption) == 0x000004, "Wrong alignment on FFBIKConstraintOption");
static_assert(sizeof(FFBIKConstraintOption) == 0x000058, "Wrong size on FFBIKConstraintOption");
static_assert(offsetof(FFBIKConstraintOption, Item) == 0x000000, "Member 'FFBIKConstraintOption::Item' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, bEnabled) == 0x00000C, "Member 'FFBIKConstraintOption::bEnabled' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, bUseStiffness) == 0x00000D, "Member 'FFBIKConstraintOption::bUseStiffness' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, LinearStiffness) == 0x000010, "Member 'FFBIKConstraintOption::LinearStiffness' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, AngularStiffness) == 0x00001C, "Member 'FFBIKConstraintOption::AngularStiffness' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, bUseAngularLimit) == 0x000028, "Member 'FFBIKConstraintOption::bUseAngularLimit' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, AngularLimit) == 0x00002C, "Member 'FFBIKConstraintOption::AngularLimit' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, bUsePoleVector) == 0x00003C, "Member 'FFBIKConstraintOption::bUsePoleVector' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, PoleVectorOption) == 0x00003D, "Member 'FFBIKConstraintOption::PoleVectorOption' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, PoleVector) == 0x000040, "Member 'FFBIKConstraintOption::PoleVector' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, OffsetRotation) == 0x00004C, "Member 'FFBIKConstraintOption::OffsetRotation' has a wrong offset!");

// ScriptStruct FullBodyIK.MotionProcessInput
// 0x0002 (0x0002 - 0x0000)
struct FMotionProcessInput final
{
public:
	bool                                          bForceEffectorRotationTarget;                      // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnlyApplyWhenReachedToTarget;                     // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMotionProcessInput) == 0x000001, "Wrong alignment on FMotionProcessInput");
static_assert(sizeof(FMotionProcessInput) == 0x000002, "Wrong size on FMotionProcessInput");
static_assert(offsetof(FMotionProcessInput, bForceEffectorRotationTarget) == 0x000000, "Member 'FMotionProcessInput::bForceEffectorRotationTarget' has a wrong offset!");
static_assert(offsetof(FMotionProcessInput, bOnlyApplyWhenReachedToTarget) == 0x000001, "Member 'FMotionProcessInput::bOnlyApplyWhenReachedToTarget' has a wrong offset!");

// ScriptStruct FullBodyIK.FBIKDebugOption
// 0x0050 (0x0050 - 0x0000)
struct FFBIKDebugOption final
{
public:
	bool                                          bDrawDebugHierarchy;                               // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bColorAngularMotionStrength;                       // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bColorLinearMotionStrength;                        // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDrawDebugAxes;                                    // 0x0003(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDrawDebugEffector;                                // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDrawDebugConstraints;                             // 0x0005(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6[0xA];                                        // 0x0006(0x000A)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             DrawWorldOffset;                                   // 0x0010(0x0030)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DrawSize;                                          // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0xC];                                       // 0x0044(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFBIKDebugOption) == 0x000010, "Wrong alignment on FFBIKDebugOption");
static_assert(sizeof(FFBIKDebugOption) == 0x000050, "Wrong size on FFBIKDebugOption");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugHierarchy) == 0x000000, "Member 'FFBIKDebugOption::bDrawDebugHierarchy' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bColorAngularMotionStrength) == 0x000001, "Member 'FFBIKDebugOption::bColorAngularMotionStrength' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bColorLinearMotionStrength) == 0x000002, "Member 'FFBIKDebugOption::bColorLinearMotionStrength' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugAxes) == 0x000003, "Member 'FFBIKDebugOption::bDrawDebugAxes' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugEffector) == 0x000004, "Member 'FFBIKDebugOption::bDrawDebugEffector' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugConstraints) == 0x000005, "Member 'FFBIKDebugOption::bDrawDebugConstraints' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, DrawWorldOffset) == 0x000010, "Member 'FFBIKDebugOption::DrawWorldOffset' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, DrawSize) == 0x000040, "Member 'FFBIKDebugOption::DrawSize' has a wrong offset!");

// ScriptStruct FullBodyIK.SolverInput
// 0x0024 (0x0024 - 0x0000)
struct FSolverInput final
{
public:
	float                                         LinearMotionStrength;                              // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinLinearMotionStrength;                           // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularMotionStrength;                             // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinAngularMotionStrength;                          // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultTargetClamp;                                // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Precision;                                         // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Damping;                                           // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxIterations;                                     // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseJacobianTranspose;                             // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSolverInput) == 0x000004, "Wrong alignment on FSolverInput");
static_assert(sizeof(FSolverInput) == 0x000024, "Wrong size on FSolverInput");
static_assert(offsetof(FSolverInput, LinearMotionStrength) == 0x000000, "Member 'FSolverInput::LinearMotionStrength' has a wrong offset!");
static_assert(offsetof(FSolverInput, MinLinearMotionStrength) == 0x000004, "Member 'FSolverInput::MinLinearMotionStrength' has a wrong offset!");
static_assert(offsetof(FSolverInput, AngularMotionStrength) == 0x000008, "Member 'FSolverInput::AngularMotionStrength' has a wrong offset!");
static_assert(offsetof(FSolverInput, MinAngularMotionStrength) == 0x00000C, "Member 'FSolverInput::MinAngularMotionStrength' has a wrong offset!");
static_assert(offsetof(FSolverInput, DefaultTargetClamp) == 0x000010, "Member 'FSolverInput::DefaultTargetClamp' has a wrong offset!");
static_assert(offsetof(FSolverInput, Precision) == 0x000014, "Member 'FSolverInput::Precision' has a wrong offset!");
static_assert(offsetof(FSolverInput, Damping) == 0x000018, "Member 'FSolverInput::Damping' has a wrong offset!");
static_assert(offsetof(FSolverInput, MaxIterations) == 0x00001C, "Member 'FSolverInput::MaxIterations' has a wrong offset!");
static_assert(offsetof(FSolverInput, bUseJacobianTranspose) == 0x000020, "Member 'FSolverInput::bUseJacobianTranspose' has a wrong offset!");

// ScriptStruct FullBodyIK.FBIKEndEffector
// 0x0040 (0x0040 - 0x0000)
struct FFBIKEndEffector final
{
public:
	struct FRigElementKey                         Item;                                              // 0x0000(0x000C)(Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Position;                                          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PositionAlpha;                                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PositionDepth;                                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                  Rotation;                                          // 0x0020(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlpha;                                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RotationDepth;                                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Pull;                                              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFBIKEndEffector) == 0x000010, "Wrong alignment on FFBIKEndEffector");
static_assert(sizeof(FFBIKEndEffector) == 0x000040, "Wrong size on FFBIKEndEffector");
static_assert(offsetof(FFBIKEndEffector, Item) == 0x000000, "Member 'FFBIKEndEffector::Item' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, Position) == 0x00000C, "Member 'FFBIKEndEffector::Position' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, PositionAlpha) == 0x000018, "Member 'FFBIKEndEffector::PositionAlpha' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, PositionDepth) == 0x00001C, "Member 'FFBIKEndEffector::PositionDepth' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, Rotation) == 0x000020, "Member 'FFBIKEndEffector::Rotation' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, RotationAlpha) == 0x000030, "Member 'FFBIKEndEffector::RotationAlpha' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, RotationDepth) == 0x000034, "Member 'FFBIKEndEffector::RotationDepth' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, Pull) == 0x000038, "Member 'FFBIKEndEffector::Pull' has a wrong offset!");

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
// 0x0198 (0x0198 - 0x0000)
struct alignas(0x08) FRigUnit_FullbodyIK_WorkData final
{
public:
	uint8                                         Pad_0[0x198];                                      // 0x0000(0x0198)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigUnit_FullbodyIK_WorkData) == 0x000008, "Wrong alignment on FRigUnit_FullbodyIK_WorkData");
static_assert(sizeof(FRigUnit_FullbodyIK_WorkData) == 0x000198, "Wrong size on FRigUnit_FullbodyIK_WorkData");

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
// 0x0250 (0x0350 - 0x0100)
struct FRigUnit_FullbodyIK final : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                         Root;                                              // 0x0100(0x000C)(Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFBIKEndEffector>               Effectors;                                         // 0x0110(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFBIKConstraintOption>          Constraints;                                       // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSolverInput                           SolverProperty;                                    // 0x0130(0x0024)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FMotionProcessInput                    MotionProperty;                                    // 0x0154(0x0002)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bPropagateToChildren;                              // 0x0156(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_157[0x9];                                      // 0x0157(0x0009)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFBIKDebugOption                       DebugOption;                                       // 0x0160(0x0050)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FullbodyIK_WorkData           WorkData;                                          // 0x01B0(0x0198)(Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRigUnit_FullbodyIK) == 0x000010, "Wrong alignment on FRigUnit_FullbodyIK");
static_assert(sizeof(FRigUnit_FullbodyIK) == 0x000350, "Wrong size on FRigUnit_FullbodyIK");
static_assert(offsetof(FRigUnit_FullbodyIK, Root) == 0x000100, "Member 'FRigUnit_FullbodyIK::Root' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, Effectors) == 0x000110, "Member 'FRigUnit_FullbodyIK::Effectors' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, Constraints) == 0x000120, "Member 'FRigUnit_FullbodyIK::Constraints' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, SolverProperty) == 0x000130, "Member 'FRigUnit_FullbodyIK::SolverProperty' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, MotionProperty) == 0x000154, "Member 'FRigUnit_FullbodyIK::MotionProperty' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, bPropagateToChildren) == 0x000156, "Member 'FRigUnit_FullbodyIK::bPropagateToChildren' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, DebugOption) == 0x000160, "Member 'FRigUnit_FullbodyIK::DebugOption' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, WorkData) == 0x0001B0, "Member 'FRigUnit_FullbodyIK::WorkData' has a wrong offset!");

}

