/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: WinDrv_classes.hpp
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.FacebookWindows
// 0x0008 (0x009C - 0x00A4)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x009C (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    ChildProcHandle;                               // 0x00A0 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.FacebookWindows");
		}

		return uClassPointer;
	};

	void OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void eventRequestFacebookFriends();
	void OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void eventRequestFacebookMeInfo();
	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ProcessFacebookRequest(const class FString& Payload, int32_t ResponseCode);
	void FacebookRequest(const class FString& GraphRequest);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};

// Class WinDrv.HttpRequestWindows
// 0x0020 (0x0048 - 0x0068)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                       // 0x0048 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class FString                                      RequestVerb;                                   // 0x004C (0x000C) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    RequestURL;                                    // 0x0058 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<uint8_t>                              Payload;                                       // 0x005C (0x000C) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		}

		return uClassPointer;
	};

	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(const class FString& HeaderName, const class FString& HeaderValue);
	class UHttpRequestInterface* SetContentAsString(const class FString& ContentString);
	class UHttpRequestInterface* SetContent(class TArray<uint8_t>& outContentPayload);
	class UHttpRequestInterface* SetURL(const class FString& URL);
	class UHttpRequestInterface* SetVerb(const class FString& Verb);
	class FString GetVerb();
	void GetContent(class TArray<uint8_t>& outContent);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(const class FString& ParameterName);
	class TArray<class FString> GetHeaders();
	class FString GetHeader(const class FString& HeaderName);
};

// Class WinDrv.HttpResponseWindows
// 0x0010 (0x003C - 0x004C)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                      // 0x003C (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<uint8_t>                              Payload;                                       // 0x0040 (0x000C) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		}

		return uClassPointer;
	};

	int32_t GetResponseCode();
	class FString GetContentAsString();
	void GetContent(class TArray<uint8_t>& outContent);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(const class FString& ParameterName);
	class TArray<class FString> GetHeaders();
	class FString GetHeader(const class FString& HeaderName);
};

// Class WinDrv.WindowsClient
// 0x01AC (0x0050 - 0x01FC)
class UWindowsClient : public UClient
{
public:
	uint8_t                                            UnknownData00[0x16C];                          // 0x0050 (0x016C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                              // 0x01BC (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                            UnknownData01[0x2C];                            // 0x01C0 (0x002C) MISSED OFFSET
	int32_t                                            AllowJoystickInput;                            // 0x01EC (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                            UnknownData02[0xC];                              // 0x01F0 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.WindowsClient");
		}

		return uClassPointer;
	};

};

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0054 - 0x0054)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		}

		return uClassPointer;
	};

};

// Class WinDrv.HttpRequestWindowsMcp
// 0x0018 (0x0068 - 0x0080)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	class FString                                      AppID;                                         // 0x0068 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      AppSecret;                                     // 0x0074 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpRequestWindowsMcp");
		}

		return uClassPointer;
	};

	bool ProcessRequest();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
