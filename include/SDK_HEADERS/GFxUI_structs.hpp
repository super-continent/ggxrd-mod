/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: GFxUI_structs.hpp
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

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x0018
struct FSoundThemeBinding
{
	class FName                                        ThemeName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UUISoundTheme*                               Theme;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      ThemeClassName;                                // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x001C
struct FASValue
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           B : 1;                                         // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              N;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            I;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      S;                                             // 0x0010 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x000C
struct FGFxWidgetBinding
{
	class FName                                        WidgetName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      WidgetClass;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x0010
struct FExternalTexture
{
	class FString                                      Resource;                                      // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UTexture*                                    Texture;                                       // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Rotation;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              XRotation;                                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YRotation;                                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              XScale;                                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YScale;                                        // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ZScale;                                        // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Alpha;                                         // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           Visible : 1;                                   // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           hasX : 1;                                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           hasY : 1;                                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           hasZ : 1;                                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           hasRotation : 1;                               // 0x0028 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           hasXRotation : 1;                              // 0x0028 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           hasYRotation : 1;                              // 0x0028 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           hasXScale : 1;                                 // 0x0028 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           hasYScale : 1;                                 // 0x0028 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           hasZScale : 1;                                 // 0x0028 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           hasAlpha : 1;                                  // 0x0028 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           hasVisible : 1;                                // 0x0028 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                      // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Add;                                           // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GFxUI.GFxClikWidget.EventData
// 0x0028
struct FEventData
{
	class UGFxObject*                                  _this;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Target;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      Type;                                          // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Data;                                          // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mouseIndex;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Button;                                        // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            lastIndex;                                     // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x000C
struct FGCReference
{
	class UObject*                                     m_object;                                      // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            m_count;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_statid;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
