/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: Core_structs.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int32_t                                            A;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            B;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            C;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            D;                                             // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.Array_Mirror
// 0x000C
struct FArray_Mirror
{
	struct FPointer                                    Data;                                          // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayNum;                                      // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayMax;                                      // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.InlinePointerArray_Mirror
// 0x0010
struct FInlinePointerArray_Mirror
{
	struct FPointer                                    InlineData;                                    // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FArray_Mirror                               SecondaryData;                                 // 0x0004 (0x000C) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int32_t                                            Pitch;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Yaw;                                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Roll;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Plane
// 0x0004 (0x000C - 0x0010)
struct FPlane : FVector
{
	float                                              W;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              W;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              G;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              B;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              A;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	uint8_t                                            B;                                             // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            G;                                             // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            R;                                             // 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            A;                                             // 0x0003 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x001D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   OutVal;                                        // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   ArriveTangent;                                 // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   LeaveTangent;                                  // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x001C (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x000D
struct FInterpCurveVector2D
{
	class TArray<struct FInterpCurvePointVector2D>     Points;                                        // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0011
struct FInterpCurvePointFloat
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OutVal;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArriveTangent;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LeaveTangent;                                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x000D
struct FInterpCurveFloat
{
	class TArray<struct FInterpCurvePointFloat>        Points;                                        // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0029
struct FInterpCurvePointVector
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     OutVal;                                        // 0x0004 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ArriveTangent;                                 // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LeaveTangent;                                  // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0028 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveVector
// 0x000D
struct FInterpCurveVector
{
	class TArray<struct FInterpCurvePointVector>       Points;                                        // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              W;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                        // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FPlane                                      YPlane;                                        // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FPlane                                      ZPlane;                                        // 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FPlane                                      WPlane;                                        // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                        // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     BoxExtent;                                     // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              SphereRadius;                                  // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                            // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     v2;                                            // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.TAlphaBlend
// 0x0015
struct FTAlphaBlend
{
	float                                              AlphaIn;                                       // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AlphaOut;                                      // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AlphaTarget;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTime;                                     // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTimeToGo;                                 // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            BlendType;                                     // 0x0014 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.BoneAtom
// 0x0050
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                      // 0x0000 (0x0010) [0x0000000000000000]               
	struct FVector                                     Translation;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Scale;                                         // 0x001C (0x000C) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x8];                              // 0x0028 (0x0008) MISSED OFFSET
	struct FQuat                                       SelfRotation;                                  // 0x0030 (0x0010) [0x0000000000000000]               
	struct FQuat                                       ParentRotation;                                // 0x0040 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Core.Object.OctreeElementId
// 0x0008
struct FOctreeElementId
{
	struct FPointer                                    Node;                                          // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ElementIndex;                                  // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.RenderCommandFence
// 0x0004
struct FRenderCommandFence
{
	int32_t                                            NumPendingFences;                              // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.RawDistribution
// 0x0018
struct FRawDistribution
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Op;                                            // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            LookupTableNumElements;                        // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            LookupTableChunkSize;                          // 0x0003 (0x0001) [0x0000000000000000]               
	class TArray<float>                                LookupTable;                                   // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LookupTableTimeScale;                          // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              LookupTableStartTime;                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointLinearColor
// 0x0035
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                OutVal;                                        // 0x0004 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ArriveTangent;                                 // 0x0014 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                LeaveTangent;                                  // 0x0024 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0034 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveLinearColor
// 0x000D
struct FInterpCurveLinearColor
{
	class TArray<struct FInterpCurvePointLinearColor>  Points;                                        // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0041
struct FInterpCurvePointQuat
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            UnknownData00[0xC];                              // 0x0004 (0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                        // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       ArriveTangent;                                 // 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       LeaveTangent;                                  // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x0040 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x000D
struct FInterpCurveQuat
{
	class TArray<struct FInterpCurvePointQuat>         Points;                                        // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x004D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 OutVal;                                        // 0x0004 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 ArriveTangent;                                 // 0x001C (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FTwoVectors                                 LeaveTangent;                                  // 0x0034 (0x0018) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InterpMode;                                    // 0x004C (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x000D
struct FInterpCurveTwoVectors
{
	class TArray<struct FInterpCurvePointTwoVectors>   Points;                                        // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            InterpMethod;                                  // 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                           // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Max;                                           // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            IsValid;                                       // 0x0018 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              FOV;                                           // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.SHVector
// 0x0030
struct FSHVector
{
	float                                              V[9];                                          // 0x0000 (0x0024) [0x0000000000000001] (CPF_Edit)    
	float                                              Padding[3];                                    // 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Core.Object.SHVectorRGB
// 0x0090
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                             // 0x0000 (0x0030) [0x0000000000000001] (CPF_Edit)    
	struct FSHVector                                   G;                                             // 0x0030 (0x0030) [0x0000000000000001] (CPF_Edit)    
	struct FSHVector                                   B;                                             // 0x0060 (0x0030) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.PackedNormal
// 0x0004
struct FPackedNormal
{
	uint8_t                                            X;                                             // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Y;                                             // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Z;                                             // 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            W;                                             // 0x0003 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x000C
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                          // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayNum;                                      // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayMax;                                      // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// 0x0014
struct FFColorVertexBuffer_Mirror
{
	struct FPointer                                    VfTable;                                       // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    VertexData;                                    // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            Data;                                          // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Stride;                                        // 0x000C (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumVertices;                                   // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x0004
struct FRenderCommandFence_Mirror
{
	int32_t                                            NumPendingFences;                              // 0x0000 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0034
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                       // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            BulkDataFlags;                                 // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ElementCount;                                  // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            BulkDataOffsetInFile;                          // 0x000C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            BulkDataSizeOnDisk;                            // 0x0010 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            SavedBulkDataFlags;                            // 0x0014 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            SavedElementCount;                             // 0x0018 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            SavedBulkDataOffsetInFile;                     // 0x001C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            SavedBulkDataSizeOnDisk;                       // 0x0020 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    BulkData;                                      // 0x0024 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            LockStatus;                                    // 0x0028 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    AttachedAr;                                    // 0x002C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            bShouldFreeOnEmpty;                            // 0x0030 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.BitArray_Mirror
// 0x001C
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                  // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            InlineData[4];                                 // 0x0004 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            NumBits;                                       // 0x0014 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            MaxBits;                                       // 0x0018 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.SparseArray_Mirror
// 0x0030
struct FSparseArray_Mirror
{
	class TArray<int32_t>                              Elements;                                      // 0x0000 (0x000C) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FBitArray_Mirror                            AllocationFlags;                               // 0x000C (0x001C) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            FirstFreeIndex;                                // 0x0028 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            NumFreeIndices;                                // 0x002C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.Set_Mirror
// 0x003C
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                      // 0x0000 (0x0030) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            InlineHash;                                    // 0x0030 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Hash;                                          // 0x0034 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            HashSize;                                      // 0x0038 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x003C
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                         // 0x0000 (0x003C) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.Map_Mirror
// 0x003C
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                         // 0x0000 (0x003C) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int32_t                                            Value;                                         // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int32_t                                            A;                                             // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            B;                                             // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Core.Object.dword
// 0x0004
struct Fdword
{
	int32_t                                            A;                                             // 0x0000 (0x0004) [0x0000000000001001] (CPF_Edit | CPF_Native)
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0004 (0x0018 - 0x001C)
struct FRawDistributionFloat : FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                  // 0x0018 (0x0004) [0x0000000006080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline)
};

// ScriptStruct Core.DistributionFloat.MatineeRawDistributionFloat
// 0x0008 (0x001C - 0x0024)
struct FMatineeRawDistributionFloat : FRawDistributionFloat
{
	float                                              MatineeValue;                                  // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bInMatinee : 1;                                // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0004 (0x0018 - 0x001C)
struct FRawDistributionVector : FRawDistribution
{
	class UDistributionVector*                         Distribution;                                  // 0x0018 (0x0004) [0x0000000006080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
