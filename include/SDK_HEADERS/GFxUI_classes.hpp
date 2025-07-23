/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: GFxUI_classes.hpp
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GFxUI.SwfMovie.FlashTextureRescale
enum class EFlashTextureRescale : uint8_t
{
	FlashTextureScale_High                             = 0,
	FlashTextureScale_Low                              = 1,
	FlashTextureScale_NextLow                          = 2,
	FlashTextureScale_Mult4                            = 3,
	FlashTextureScale_None                             = 4,
	FlashTextureScale_END                              = 5
};

// Enum GFxUI.GFxMoviePlayer.ASType
enum class EASType : uint8_t
{
	AS_Undefined                                       = 0,
	AS_Null                                            = 1,
	AS_Number                                          = 2,
	AS_Int                                             = 3,
	AS_String                                          = 4,
	AS_Boolean                                         = 5,
	AS_END                                             = 6
};

// Enum GFxUI.GFxMoviePlayer.GFxAlign
enum class EGFxAlign : uint8_t
{
	Align_Center                                       = 0,
	Align_TopCenter                                    = 1,
	Align_BottomCenter                                 = 2,
	Align_CenterLeft                                   = 3,
	Align_CenterRight                                  = 4,
	Align_TopLeft                                      = 5,
	Align_TopRight                                     = 6,
	Align_BottomLeft                                   = 7,
	Align_BottomRight                                  = 8,
	Align_END                                          = 9
};

// Enum GFxUI.GFxMoviePlayer.GFxScaleMode
enum class EGFxScaleMode : uint8_t
{
	SM_NoScale                                         = 0,
	SM_ShowAll                                         = 1,
	SM_ExactFit                                        = 2,
	SM_NoBorder                                        = 3,
	SM_END                                             = 4
};

// Enum GFxUI.GFxMoviePlayer.GFxTimingMode
enum class EGFxTimingMode : uint8_t
{
	TM_Game                                            = 0,
	TM_Real                                            = 1,
	TM_END                                             = 2
};

// Enum GFxUI.GFxMoviePlayer.GFxRenderTextureMode
enum class EGFxRenderTextureMode : uint8_t
{
	RTM_Opaque                                         = 0,
	RTM_Alpha                                          = 1,
	RTM_AlphaComposite                                 = 2,
	RTM_END                                            = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUI.GFxEngine
// 0x0010 (0x003C - 0x004C)
class UGFxEngine : public UObject
{
public:
	class TArray<struct FGCReference>                  GCReferences;                                  // 0x003C (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            RefCount;                                      // 0x0048 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxEngine");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxFSCmdHandler");
		}

		return uClassPointer;
	};

	bool eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg);
};

// Class GFxUI.GFxInteraction
// 0x0008 (0x0078 - 0x0080)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x0078 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bFakeMobileTouches : 1;                        // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxInteraction");
		}

		return uClassPointer;
	};

	void CloseAllMoviePlayers();
	void NotifySplitscreenLayoutChanged();
	void NotifyPlayerRemoved(int32_t PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int32_t PlayerIndex, class ULocalPlayer* AddedPlayer);
	void NotifyGameSessionEnded();
	class UGFxMoviePlayer* GetFocusMovie(int32_t ControllerId);
};

// Class GFxUI.GFxMoviePlayer
// 0x012C (0x003C - 0x0168)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                        // 0x003C (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    pCaptureKeys;                                  // 0x0040 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    pFocusIgnoreKeys;                              // 0x0044 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	uint8_t                                            UnknownData00[0x78];                            // 0x0048 (0x0078) MISSED OFFSET
	int32_t                                            NextASUObject;                                 // 0x00C0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class USwfMovie*                                   MovieInfo;                                     // 0x00C4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMovieIsOpen : 1;                              // 0x00C8 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bDisplayWithHudOff : 1;                        // 0x00C8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEnableGammaCorrection : 1;                    // 0x00C8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWidgetsInitializedThisFrame : 1;              // 0x00C8 (0x0004) [0x0000000000002002] [0x00000008] (CPF_Const | CPF_Transient)
	uint32_t                                           bLogUnhandedWidgetInitializations : 1;         // 0x00C8 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAllowInput : 1;                               // 0x00C8 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bAllowFocus : 1;                               // 0x00C8 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bAutoPlay : 1;                                 // 0x00C8 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bPauseGameWhileActive : 1;                     // 0x00C8 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bDisableWorldRendering : 1;                    // 0x00C8 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bCloseOnLevelChange : 1;                       // 0x00C8 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bOnlyOwnerFocusable : 1;                       // 0x00C8 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bForceFullViewport : 1;                        // 0x00C8 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bDiscardNonOwnerInput : 1;                     // 0x00C8 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bCaptureInput : 1;                             // 0x00C8 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bCaptureMouseInput : 1;                        // 0x00C8 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bIgnoreMouseInput : 1;                         // 0x00C8 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bIsSplitscreenLayoutModified : 1;              // 0x00C8 (0x0004) [0x0000000000002000] [0x00020000] (CPF_Transient)
	uint32_t                                           bShowHardwareMouseCursor : 1;                  // 0x00C8 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bBlurLesserMovies : 1;                         // 0x00C8 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bHideLesserMovies : 1;                         // 0x00C8 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bIsPriorityBlurred : 1;                        // 0x00C8 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bIsPriorityHidden : 1;                         // 0x00C8 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bIgnoreVisibilityEffect : 1;                   // 0x00C8 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bIgnoreBlurEffect : 1;                         // 0x00C8 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bIgnoreHalfFrameUpdate : 1;                    // 0x00C8 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bRestartedByRollback : 1;                      // 0x00C8 (0x0004) [0x0000000000000000] [0x04000000] 
	class UTextureRenderTarget2D*                      RenderTexture;                                 // 0x00CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LocalPlayerOwnerIndex;                         // 0x00D0 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UObject*                                     ExternalInterface;                             // 0x00D4 (0x0004) [0x0000000000000000]               
	class TArray<class FName>                          CaptureKeys;                                   // 0x00D8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FName>                          FocusIgnoreKeys;                               // 0x00E4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FExternalTexture>              ExternalTextures;                              // 0x00F0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FSoundThemeBinding>            SoundThemes;                                   // 0x00FC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	EGFxTimingMode                                     TimingMode;                                    // 0x0108 (0x0001) [0x0000000000000000]               
	EGFxRenderTextureMode                              RenderTextureMode;                             // 0x0109 (0x0001) [0x0000000000000000]               
	uint8_t                                            Priority;                                      // 0x010A (0x0001) [0x0000000000000000]               
	class TArray<struct FGFxWidgetBinding>             WidgetBindings;                                // 0x010C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            UnknownData01[0x3C];                            // 0x0118 (0x003C) MISSED OFFSET
	class UGFxObject*                                  SplitscreenLayoutObject;                       // 0x0154 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SplitscreenLayoutYAdjust;                      // 0x0158 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                     // 0x015C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxMoviePlayer");
		}

		return uClassPointer;
	};

	void UpdateSplitscreenLayout();
	void ApplyPriorityVisibilityEffect(bool bRemoveEffect);
	void ApplyPriorityBlurEffect(bool bRemoveEffect);
	void eventApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState);
	void PlaySoundFromTheme(const class FName& EventName, const class FName& optionalSoundThemeName);
	void eventOnFocusLost(int32_t LocalPlayerIndex);
	void eventOnFocusGained(int32_t LocalPlayerIndex);
	void ConsoleCommand(const class FString& Command);
	class APlayerController* eventGetPC();
	class ULocalPlayer* eventGetLP();
	void Init(class ULocalPlayer* optionalLocPlay);
	void SetWidgetPathBinding(class UGFxObject* WidgetToBind, const class FName& Path);
	void eventPostWidgetInit();
	bool eventWidgetUnloaded(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget);
	bool eventWidgetInitialized(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget);
	class UGFxObject* ActionScriptConstructor(const class FString& ClassName);
	class UGFxObject* ActionScriptObject(const class FString& Path);
	class FString ActionScriptString(const class FString& Path);
	float ActionScriptFloat(const class FString& Path);
	int32_t ActionScriptInt(const class FString& Path);
	void ActionScriptVoid(const class FString& Path);
	struct FASValue Invoke(const class FString& method, const class TArray<struct FASValue>& args);
	void ActionScriptSetFunction(class UGFxObject* Object, const class FString& Member);
	class UGFxObject* CreateArray();
	class UGFxObject* CreateObject(const class FString& ASClass, class UClass* optionalType, const class TArray<struct FASValue>& optionalArgs);
	bool SetVariableStringArray(const class FString& Path, int32_t Index, const class TArray<class FString>& Arg);
	bool SetVariableFloatArray(const class FString& Path, int32_t Index, const class TArray<float>& Arg);
	bool SetVariableIntArray(const class FString& Path, int32_t Index, const class TArray<int32_t>& Arg);
	bool SetVariableArray(const class FString& Path, int32_t Index, const class TArray<struct FASValue>& Arg);
	bool GetVariableStringArray(const class FString& Path, int32_t Index, class TArray<class FString>& outArg);
	bool GetVariableFloatArray(const class FString& Path, int32_t Index, class TArray<float>& outArg);
	bool GetVariableIntArray(const class FString& Path, int32_t Index, class TArray<int32_t>& outArg);
	bool GetVariableArray(const class FString& Path, int32_t Index, class TArray<struct FASValue>& outArg);
	void SetVariableObject(const class FString& Path, class UGFxObject* Object);
	void SetVariableString(const class FString& Path, const class FString& S);
	void SetVariableInt(const class FString& Path, int32_t I);
	void SetVariableNumber(const class FString& Path, float F);
	void SetVariableBool(const class FString& Path, bool B);
	void SetVariable(const class FString& Path, const struct FASValue& Arg);
	class UGFxObject* GetVariableObject(const class FString& Path, class UClass* optionalType);
	class FString GetVariableString(const class FString& Path);
	int32_t GetVariableInt(const class FString& Path);
	float GetVariableNumber(const class FString& Path);
	bool GetVariableBool(const class FString& Path);
	struct FASValue GetVariable(const class FString& Path);
	int32_t GetAVMVersion();
	bool eventFilterButtonInput(int32_t ControllerId, const class FName& ButtonName, EInputEvent InputEvent);
	void FlushPlayerInput(bool capturekeysonly);
	void ClearFocusIgnoreKeys();
	void AddFocusIgnoreKey(const class FName& Key);
	void ClearCaptureKeys();
	void AddCaptureKey(const class FName& Key);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void SetPerspective3D(struct FMatrix& outMatPersp);
	void SetView3D(struct FMatrix& outMatView);
	void GetVisibleFrameRect(float& outX0, float& outY0, float& outX1, float& outY1);
	void SetAlignment(EGFxAlign A);
	void SetViewScaleMode(EGFxScaleMode SM);
	void SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height);
	class UGameViewportClient* GetGameViewportClient();
	void SetPriority(uint8_t NewPriority);
	bool SetExternalTexture(const class FString& Resource, class UTexture* Texture);
	void SetExternalInterface(class UObject* H);
	void SetTimingMode(EGFxTimingMode Mode);
	void SetMovieInfo(class USwfMovie* Data);
	void eventConditionalClearPause();
	void eventOnCleanup();
	void eventOnClose();
	void Close(bool optionalUnload);
	void SetPause(bool optionalBPausePlayback);
	void OnPostAdvance(float DeltaTime);
	void PostAdvance(float DeltaTime);
	void Advance(float Time);
	bool eventStart(bool optionalStartPaused);
};

// Class GFxUI.GFxObject
// 0x003C (0x003C - 0x0078)
class UGFxObject : public UObject
{
public:
	int32_t                                            Value[12];                                     // 0x003C (0x0030) [0x0000000000001002] (CPF_Const | CPF_Native)
	class TArray<struct FGFxWidgetBinding>             SubWidgetBindings;                             // 0x006C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxObject");
		}

		return uClassPointer;
	};

	bool eventWidgetUnloaded(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget);
	bool eventWidgetInitialized(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget);
	class UGFxObject* AttachMovie(const class FString& symbolname, const class FString& instancename, int32_t optionalDepth, class UClass* optionalType);
	class UGFxObject* CreateEmptyMovieClip(const class FString& instancename, int32_t optionalDepth, class UClass* optionalType);
	void GotoAndStopI(int32_t frame);
	void GotoAndStop(const class FString& frame);
	void GotoAndPlayI(int32_t frame);
	void GotoAndPlay(const class FString& frame);
	class TArray<class UGFxObject*> ActionScriptArray(const class FString& Path);
	class UGFxObject* ActionScriptObject(const class FString& Path);
	class FString ActionScriptString(const class FString& method);
	float ActionScriptFloat(const class FString& method);
	int32_t ActionScriptInt(const class FString& method);
	void ActionScriptVoid(const class FString& method);
	struct FASValue Invoke(const class FString& Member, const class TArray<struct FASValue>& args);
	void ActionScriptSetFunctionOn(class UGFxObject* Target, const class FString& Member);
	void ActionScriptSetFunction(const class FString& Member);
	void SetElementMemberString(int32_t Index, const class FString& Member, const class FString& S);
	void SetElementMemberInt(int32_t Index, const class FString& Member, int32_t I);
	void SetElementMemberFloat(int32_t Index, const class FString& Member, float F);
	void SetElementMemberBool(int32_t Index, const class FString& Member, bool B);
	void SetElementMemberObject(int32_t Index, const class FString& Member, class UGFxObject* val);
	void SetElementMember(int32_t Index, const class FString& Member, const struct FASValue& Arg);
	class FString GetElementMemberString(int32_t Index, const class FString& Member);
	int32_t GetElementMemberInt(int32_t Index, const class FString& Member);
	float GetElementMemberFloat(int32_t Index, const class FString& Member);
	bool GetElementMemberBool(int32_t Index, const class FString& Member);
	class UGFxObject* GetElementMemberObject(int32_t Index, const class FString& Member, class UClass* optionalType);
	struct FASValue GetElementMember(int32_t Index, const class FString& Member);
	void SetElementColorTransform(int32_t Index, const struct FASColorTransform& cxform);
	void SetElementPosition(int32_t Index, float X, float Y);
	void SetElementVisible(int32_t Index, bool Visible);
	void SetElementDisplayMatrix(int32_t Index, const struct FMatrix& M);
	void SetElementDisplayInfo(int32_t Index, const struct FASDisplayInfo& D);
	struct FMatrix GetElementDisplayMatrix(int32_t Index);
	struct FASDisplayInfo GetElementDisplayInfo(int32_t Index);
	void SetElementString(int32_t Index, const class FString& S);
	void SetElementInt(int32_t Index, int32_t I);
	void SetElementFloat(int32_t Index, float F);
	void SetElementBool(int32_t Index, bool B);
	void SetElementObject(int32_t Index, class UGFxObject* val);
	void SetElement(int32_t Index, const struct FASValue& Arg);
	class FString GetElementString(int32_t Index);
	int32_t GetElementInt(int32_t Index);
	float GetElementFloat(int32_t Index);
	bool GetElementBool(int32_t Index);
	class UGFxObject* GetElementObject(int32_t Index, class UClass* optionalType);
	struct FASValue GetElement(int32_t Index);
	void SetText(const class FString& Text, class UTranslationContext* optionalInContext);
	class FString GetText();
	bool GetVisible();
	void SetVisible(bool Visible);
	void SetDisplayMatrix3D(const struct FMatrix& M);
	void SetDisplayMatrix(const struct FMatrix& M);
	void SetColorTransform(const struct FASColorTransform& cxform);
	void SetPosition(float X, float Y);
	void SetDisplayInfo(const struct FASDisplayInfo& D);
	struct FMatrix GetDisplayMatrix3D();
	struct FMatrix GetDisplayMatrix();
	struct FASColorTransform GetColorTransform();
	bool GetPosition(float& outX, float& outY);
	struct FASDisplayInfo GetDisplayInfo();
	static class FString TranslateString(const class FString& StringToTranslate, class UTranslationContext* optionalInContext);
	void SetFunction(const class FString& Member, class UObject* context, const class FName& fname);
	void SetObject(const class FString& Member, class UGFxObject* val);
	void SetString(const class FString& Member, const class FString& S, class UTranslationContext* optionalInContext);
	void SetInt(const class FString& Member, int32_t I);
	void SetFloat(const class FString& Member, float F);
	void SetBool(const class FString& Member, bool B);
	void Set(const class FString& Member, const struct FASValue& Arg);
	class UGFxObject* GetObjectW(const class FString& Member, class UClass* optionalType);
	class FString GetString(const class FString& Member);
	int32_t GetInt(const class FString& Member);
	float GetFloat(const class FString& Member);
	bool GetBool(const class FString& Member);
	struct FASValue Get(const class FString& Member);
};

// Class GFxUI.GFxRawData
// 0x0030 (0x003C - 0x006C)
class UGFxRawData : public UObject
{
public:
	class TArray<uint8_t>                              RawData;                                       // 0x003C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class FString>                        ReferencedSwfs;                                // 0x0048 (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<class UObject*>                       References;                                    // 0x0054 (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<class UObject*>                       UserReferences;                                // 0x0060 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxRawData");
		}

		return uClassPointer;
	};

};

// Class GFxUI.SwfMovie
// 0x0040 (0x006C - 0x00AC)
class USwfMovie : public UGFxRawData
{
public:
	uint32_t                                           bUsesFontlib : 1;                              // 0x006C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSetSRGBOnImportedTextures : 1;                // 0x006C (0x0004) [0x0000000000020001] [0x00000002] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bPackTextures : 1;                             // 0x006C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bForceSquarePacking : 1;                       // 0x006C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bFullHDTexture : 1;                            // 0x006C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	class FString                                      SourceFile;                                    // 0x0070 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	int32_t                                            PackTextureSize;                               // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	EFlashTextureRescale                               TextureRescale;                                // 0x0080 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      TextureFormat;                                 // 0x0084 (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class FString                                      SourceFileTimestamp;                           // 0x0090 (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	int32_t                                            RTTextures;                                    // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            RTVideoTextures;                               // 0x00A0 (0x0004) [0x0000000000000000]               
	struct FQWord                                      ImportTimeStamp;                               // 0x00A4 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient | CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.SwfMovie");
		}

		return uClassPointer;
	};

};

// Class GFxUI.FlashMovie
// 0x0000 (0x00AC - 0x00AC)
class UFlashMovie : public USwfMovie
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.FlashMovie");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxAction_CloseMovie
// 0x0008 (0x00FC - 0x0104)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00FC (0x0004) [0x0000000000000000]               
	uint32_t                                           bUnload : 1;                                   // 0x0100 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_CloseMovie");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_GetVariable
// 0x0010 (0x00FC - 0x010C)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00FC (0x0004) [0x0000000000000000]               
	class FString                                      Variable;                                      // 0x0100 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_GetVariable");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_Invoke
// 0x001C (0x00FC - 0x0118)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00FC (0x0004) [0x0000000000000000]               
	class FString                                      MethodName;                                    // 0x0100 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FASValue>                      Arguments;                                     // 0x010C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_Invoke");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_OpenMovie
// 0x0030 (0x00FC - 0x012C)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                         // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      MoviePlayerClass;                              // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UGFxMoviePlayer*                             MoviePlayer;                                   // 0x0104 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTakeFocus : 1;                                // 0x0108 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCaptureInput : 1;                             // 0x0108 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bStartPaused : 1;                              // 0x0108 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnableGammaCorrection : 1;                    // 0x0108 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDisplayWithHudOff : 1;                        // 0x0108 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	EGFxRenderTextureMode                              RenderTextureMode;                             // 0x010C (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UTextureRenderTarget2D*                      RenderTexture;                                 // 0x0110 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class FName>                          CaptureKeys;                                   // 0x0114 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          FocusIgnoreKeys;                               // 0x0120 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_OpenMovie");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0010 (0x00FC - 0x010C)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00FC (0x0004) [0x0000000000000000]               
	class TArray<class FName>                          CaptureKeys;                                   // 0x0100 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_SetCaptureKeys");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxAction_SetVariable
// 0x0010 (0x00FC - 0x010C)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00FC (0x0004) [0x0000000000000000]               
	class FString                                      Variable;                                      // 0x0100 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_SetVariable");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxEvent_FSCommand
// 0x0014 (0x0114 - 0x0128)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                         // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      FSCommand;                                     // 0x0118 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UGFxFSCmdHandler_Kismet*                     Handler;                                       // 0x0124 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxEvent_FSCommand");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxFSCmdHandler_Kismet");
		}

		return uClassPointer;
	};

	bool eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg);
};

// Class GFxUI.GFxClikWidget
// 0x000C (0x0078 - 0x0084)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                     // 0x0078 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxClikWidget");
		}

		return uClassPointer;
	};

	void ASRemoveAllEventListeners(const class FString& Event);
	void AS3AddEventListener(const class FString& Type, class UGFxObject* O, bool optionalUseCapture, int32_t optionalListenerPriority, bool optionalUseWeakReference);
	void ASAddEventListener(const class FString& Type, class UGFxObject* O, const class FString& func);
	void SetListener(class UGFxObject* O, const class FString& Member, const struct FScriptDelegate& Listener);
	class FString GetEventStringFromTypename(const class FName& Typename);
	void RemoveAllEventListeners(const class FString& Event);
	void AddEventListener(const class FName& Type, const struct FScriptDelegate& Listener, bool optionalUseCapture, int32_t optionalListenerPriority, bool optionalUseWeakReference);
	void EventListener(const struct FEventData& Data);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
