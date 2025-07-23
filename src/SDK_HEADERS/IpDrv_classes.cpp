/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: IpDrv_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#include "rev2-mod/include/SdkHeaders.hpp"

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AInternetLink::eventResolveFailed()
{
	static UFunction* uFnResolveFailed = nullptr;

	if (!uFnResolveFailed)
	{
		uFnResolveFailed = UFunction::FindFunction("Function IpDrv.InternetLink.ResolveFailed");
	}

	AInternetLink_eventResolveFailed_Params ResolveFailed_Params;
	memset(&ResolveFailed_Params, 0, sizeof(ResolveFailed_Params));

	this->ProcessEvent(uFnResolveFailed, &ResolveFailed_Params, nullptr);
};

// Function IpDrv.InternetLink.Resolved
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FIpAddr                 Addr                           (CPF_Parm)

void AInternetLink::eventResolved(const struct FIpAddr& Addr)
{
	static UFunction* uFnResolved = nullptr;

	if (!uFnResolved)
	{
		uFnResolved = UFunction::FindFunction("Function IpDrv.InternetLink.Resolved");
	}

	AInternetLink_eventResolved_Params Resolved_Params;
	memset(&Resolved_Params, 0, sizeof(Resolved_Params));
	memcpy_s(&Resolved_Params.Addr, sizeof(Resolved_Params.Addr), &Addr, sizeof(Addr));

	this->ProcessEvent(uFnResolved, &Resolved_Params, nullptr);
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32554])
// Parameter Info:
// struct FIpAddr                 Arg                            (CPF_Parm | CPF_OutParm)

void AInternetLink::GetLocalIP(struct FIpAddr& Arg)
{
	static UFunction* uFnGetLocalIP = nullptr;

	if (!uFnGetLocalIP)
	{
		uFnGetLocalIP = UFunction::FindFunction("Function IpDrv.InternetLink.GetLocalIP");
	}

	AInternetLink_execGetLocalIP_Params GetLocalIP_Params;
	memset(&GetLocalIP_Params, 0, sizeof(GetLocalIP_Params));
	memcpy_s(&GetLocalIP_Params.Arg, sizeof(GetLocalIP_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnGetLocalIP, &GetLocalIP_Params, nullptr);

	memcpy_s(&Arg, sizeof(Arg), &GetLocalIP_Params.Arg, sizeof(GetLocalIP_Params.Arg));
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33104])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Str                            (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 Addr                           (CPF_Parm | CPF_OutParm)

bool AInternetLink::StringToIpAddr(const class FString& Str, struct FIpAddr& Addr)
{
	static UFunction* uFnStringToIpAddr = nullptr;

	if (!uFnStringToIpAddr)
	{
		uFnStringToIpAddr = UFunction::FindFunction("Function IpDrv.InternetLink.StringToIpAddr");
	}

	AInternetLink_execStringToIpAddr_Params StringToIpAddr_Params;
	memset(&StringToIpAddr_Params, 0, sizeof(StringToIpAddr_Params));
	memcpy_s(&StringToIpAddr_Params.Str, sizeof(StringToIpAddr_Params.Str), &Str, sizeof(Str));
	memcpy_s(&StringToIpAddr_Params.Addr, sizeof(StringToIpAddr_Params.Addr), &Addr, sizeof(Addr));

	this->ProcessEvent(uFnStringToIpAddr, &StringToIpAddr_Params, nullptr);

	memcpy_s(&Addr, sizeof(Addr), &StringToIpAddr_Params.Addr, sizeof(StringToIpAddr_Params.Addr));

	return StringToIpAddr_Params.ReturnValue;
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32624])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FIpAddr                 Arg                            (CPF_Parm)

class FString AInternetLink::IpAddrToString(const struct FIpAddr& Arg)
{
	static UFunction* uFnIpAddrToString = nullptr;

	if (!uFnIpAddrToString)
	{
		uFnIpAddrToString = UFunction::FindFunction("Function IpDrv.InternetLink.IpAddrToString");
	}

	AInternetLink_execIpAddrToString_Params IpAddrToString_Params;
	memset(&IpAddrToString_Params, 0, sizeof(IpAddrToString_Params));
	memcpy_s(&IpAddrToString_Params.Arg, sizeof(IpAddrToString_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnIpAddrToString, &IpAddrToString_Params, nullptr);

	return IpAddrToString_Params.ReturnValue;
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32551])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AInternetLink::GetLastError()
{
	static UFunction* uFnGetLastError = nullptr;

	if (!uFnGetLastError)
	{
		uFnGetLastError = UFunction::FindFunction("Function IpDrv.InternetLink.GetLastError");
	}

	AInternetLink_execGetLastError_Params GetLastError_Params;
	memset(&GetLastError_Params, 0, sizeof(GetLastError_Params));

	this->ProcessEvent(uFnGetLastError, &GetLastError_Params, nullptr);

	return GetLastError_Params.ReturnValue;
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33044])
// Parameter Info:
// class FString                  Domain                         (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void AInternetLink::Resolve(const class FString& Domain)
{
	static UFunction* uFnResolve = nullptr;

	if (!uFnResolve)
	{
		uFnResolve = UFunction::FindFunction("Function IpDrv.InternetLink.Resolve");
	}

	AInternetLink_execResolve_Params Resolve_Params;
	memset(&Resolve_Params, 0, sizeof(Resolve_Params));
	memcpy_s(&Resolve_Params.Domain, sizeof(Resolve_Params.Domain), &Domain, sizeof(Domain));

	this->ProcessEvent(uFnResolve, &Resolve_Params, nullptr);
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32899])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  Addr                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// int32_t                        PortNum                        (CPF_Parm | CPF_OutParm)
// class FString                  LevelName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  EntryName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AInternetLink::ParseURL(const class FString& URL, class FString& Addr, int32_t& PortNum, class FString& LevelName, class FString& EntryName)
{
	static UFunction* uFnParseURL = nullptr;

	if (!uFnParseURL)
	{
		uFnParseURL = UFunction::FindFunction("Function IpDrv.InternetLink.ParseURL");
	}

	AInternetLink_execParseURL_Params ParseURL_Params;
	memset(&ParseURL_Params, 0, sizeof(ParseURL_Params));
	memcpy_s(&ParseURL_Params.URL, sizeof(ParseURL_Params.URL), &URL, sizeof(URL));
	memcpy_s(&ParseURL_Params.Addr, sizeof(ParseURL_Params.Addr), &Addr, sizeof(Addr));
	memcpy_s(&ParseURL_Params.PortNum, sizeof(ParseURL_Params.PortNum), &PortNum, sizeof(PortNum));
	memcpy_s(&ParseURL_Params.LevelName, sizeof(ParseURL_Params.LevelName), &LevelName, sizeof(LevelName));
	memcpy_s(&ParseURL_Params.EntryName, sizeof(ParseURL_Params.EntryName), &EntryName, sizeof(EntryName));

	this->ProcessEvent(uFnParseURL, &ParseURL_Params, nullptr);

	memcpy_s(&Addr, sizeof(Addr), &ParseURL_Params.Addr, sizeof(ParseURL_Params.Addr));
	memcpy_s(&PortNum, sizeof(PortNum), &ParseURL_Params.PortNum, sizeof(ParseURL_Params.PortNum));
	memcpy_s(&LevelName, sizeof(LevelName), &ParseURL_Params.LevelName, sizeof(ParseURL_Params.LevelName));
	memcpy_s(&EntryName, sizeof(EntryName), &ParseURL_Params.EntryName, sizeof(ParseURL_Params.EntryName));

	return ParseURL_Params.ReturnValue;
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32627])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AInternetLink::IsDataPending()
{
	static UFunction* uFnIsDataPending = nullptr;

	if (!uFnIsDataPending)
	{
		uFnIsDataPending = UFunction::FindFunction("Function IpDrv.InternetLink.IsDataPending");
	}

	AInternetLink_execIsDataPending_Params IsDataPending_Params;
	memset(&IsDataPending_Params, 0, sizeof(IsDataPending_Params));

	this->ProcessEvent(uFnIsDataPending, &IsDataPending_Params, nullptr);

	return IsDataPending_Params.ReturnValue;
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void ATcpLink::eventReceivedBinary(int32_t Count, uint8_t B[255])
{
	static UFunction* uFnReceivedBinary = nullptr;

	if (!uFnReceivedBinary)
	{
		uFnReceivedBinary = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedBinary");
	}

	ATcpLink_eventReceivedBinary_Params ReceivedBinary_Params;
	memset(&ReceivedBinary_Params, 0, sizeof(ReceivedBinary_Params));
	memcpy_s(&ReceivedBinary_Params.Count, sizeof(ReceivedBinary_Params.Count), &Count, sizeof(Count));
	memcpy_s(&ReceivedBinary_Params.B, sizeof(ReceivedBinary_Params.B), &B, sizeof(B));

	this->ProcessEvent(uFnReceivedBinary, &ReceivedBinary_Params, nullptr);
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Line                           (CPF_Parm | CPF_NeedCtorLink)

void ATcpLink::eventReceivedLine(const class FString& Line)
{
	static UFunction* uFnReceivedLine = nullptr;

	if (!uFnReceivedLine)
	{
		uFnReceivedLine = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedLine");
	}

	ATcpLink_eventReceivedLine_Params ReceivedLine_Params;
	memset(&ReceivedLine_Params, 0, sizeof(ReceivedLine_Params));
	memcpy_s(&ReceivedLine_Params.Line, sizeof(ReceivedLine_Params.Line), &Line, sizeof(Line));

	this->ProcessEvent(uFnReceivedLine, &ReceivedLine_Params, nullptr);
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)

void ATcpLink::eventReceivedText(const class FString& Text)
{
	static UFunction* uFnReceivedText = nullptr;

	if (!uFnReceivedText)
	{
		uFnReceivedText = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedText");
	}

	ATcpLink_eventReceivedText_Params ReceivedText_Params;
	memset(&ReceivedText_Params, 0, sizeof(ReceivedText_Params));
	memcpy_s(&ReceivedText_Params.Text, sizeof(ReceivedText_Params.Text), &Text, sizeof(Text));

	this->ProcessEvent(uFnReceivedText, &ReceivedText_Params, nullptr);
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ATcpLink::eventClosed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function IpDrv.TcpLink.Closed");
	}

	ATcpLink_eventClosed_Params Closed_Params;
	memset(&Closed_Params, 0, sizeof(Closed_Params));

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function IpDrv.TcpLink.Opened
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ATcpLink::eventOpened()
{
	static UFunction* uFnOpened = nullptr;

	if (!uFnOpened)
	{
		uFnOpened = UFunction::FindFunction("Function IpDrv.TcpLink.Opened");
	}

	ATcpLink_eventOpened_Params Opened_Params;
	memset(&Opened_Params, 0, sizeof(Opened_Params));

	this->ProcessEvent(uFnOpened, &Opened_Params, nullptr);
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ATcpLink::eventAccepted()
{
	static UFunction* uFnAccepted = nullptr;

	if (!uFnAccepted)
	{
		uFnAccepted = UFunction::FindFunction("Function IpDrv.TcpLink.Accepted");
	}

	ATcpLink_eventAccepted_Params Accepted_Params;
	memset(&Accepted_Params, 0, sizeof(Accepted_Params));

	this->ProcessEvent(uFnAccepted, &Accepted_Params, nullptr);
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32992])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm | CPF_OutParm)

int32_t ATcpLink::ReadBinary(int32_t Count, uint8_t& B)
{
	static UFunction* uFnReadBinary = nullptr;

	if (!uFnReadBinary)
	{
		uFnReadBinary = UFunction::FindFunction("Function IpDrv.TcpLink.ReadBinary");
	}

	ATcpLink_execReadBinary_Params ReadBinary_Params;
	memset(&ReadBinary_Params, 0, sizeof(ReadBinary_Params));
	memcpy_s(&ReadBinary_Params.Count, sizeof(ReadBinary_Params.Count), &Count, sizeof(Count));
	memcpy_s(&ReadBinary_Params.B, sizeof(ReadBinary_Params.B), &B, sizeof(B));

	this->ProcessEvent(uFnReadBinary, &ReadBinary_Params, nullptr);

	memcpy_s(&B, sizeof(B), &ReadBinary_Params.B, sizeof(ReadBinary_Params.B));

	return ReadBinary_Params.ReturnValue;
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32997])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Str                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t ATcpLink::ReadText(class FString& Str)
{
	static UFunction* uFnReadText = nullptr;

	if (!uFnReadText)
	{
		uFnReadText = UFunction::FindFunction("Function IpDrv.TcpLink.ReadText");
	}

	ATcpLink_execReadText_Params ReadText_Params;
	memset(&ReadText_Params, 0, sizeof(ReadText_Params));
	memcpy_s(&ReadText_Params.Str, sizeof(ReadText_Params.Str), &Str, sizeof(Str));

	this->ProcessEvent(uFnReadText, &ReadText_Params, nullptr);

	memcpy_s(&Str, sizeof(Str), &ReadText_Params.Str, sizeof(ReadText_Params.Str));

	return ReadText_Params.ReturnValue;
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[836])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

int32_t ATcpLink::SendBinary(int32_t Count, uint8_t B[255])
{
	static UFunction* uFnSendBinary = nullptr;

	if (!uFnSendBinary)
	{
		uFnSendBinary = UFunction::FindFunction("Function IpDrv.TcpLink.SendBinary");
	}

	ATcpLink_execSendBinary_Params SendBinary_Params;
	memset(&SendBinary_Params, 0, sizeof(SendBinary_Params));
	memcpy_s(&SendBinary_Params.Count, sizeof(SendBinary_Params.Count), &Count, sizeof(Count));
	memcpy_s(&SendBinary_Params.B, sizeof(SendBinary_Params.B), &B, sizeof(B));

	this->ProcessEvent(uFnSendBinary, &SendBinary_Params, nullptr);

	return SendBinary_Params.ReturnValue;
};

// Function IpDrv.TcpLink.SendText
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[835])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Str                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

int32_t ATcpLink::SendText(const class FString& Str)
{
	static UFunction* uFnSendText = nullptr;

	if (!uFnSendText)
	{
		uFnSendText = UFunction::FindFunction("Function IpDrv.TcpLink.SendText");
	}

	ATcpLink_execSendText_Params SendText_Params;
	memset(&SendText_Params, 0, sizeof(SendText_Params));
	memcpy_s(&SendText_Params.Str, sizeof(SendText_Params.Str), &Str, sizeof(Str));

	this->ProcessEvent(uFnSendText, &SendText_Params, nullptr);

	return SendText_Params.ReturnValue;
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32626])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::IsConnected()
{
	static UFunction* uFnIsConnected = nullptr;

	if (!uFnIsConnected)
	{
		uFnIsConnected = UFunction::FindFunction("Function IpDrv.TcpLink.IsConnected");
	}

	ATcpLink_execIsConnected_Params IsConnected_Params;
	memset(&IsConnected_Params, 0, sizeof(IsConnected_Params));

	this->ProcessEvent(uFnIsConnected, &IsConnected_Params, nullptr);

	return IsConnected_Params.ReturnValue;
};

// Function IpDrv.TcpLink.Close
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31913])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::Close()
{
	static UFunction* uFnClose = nullptr;

	if (!uFnClose)
	{
		uFnClose = UFunction::FindFunction("Function IpDrv.TcpLink.Close");
	}

	ATcpLink_execClose_Params Close_Params;
	memset(&Close_Params, 0, sizeof(Close_Params));

	this->ProcessEvent(uFnClose, &Close_Params, nullptr);

	return Close_Params.ReturnValue;
};

// Function IpDrv.TcpLink.Open
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25351])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FIpAddr                 Addr                           (CPF_Parm)

bool ATcpLink::Open(const struct FIpAddr& Addr)
{
	static UFunction* uFnOpen = nullptr;

	if (!uFnOpen)
	{
		uFnOpen = UFunction::FindFunction("Function IpDrv.TcpLink.Open");
	}

	ATcpLink_execOpen_Params Open_Params;
	memset(&Open_Params, 0, sizeof(Open_Params));
	memcpy_s(&Open_Params.Addr, sizeof(Open_Params.Addr), &Addr, sizeof(Addr));

	this->ProcessEvent(uFnOpen, &Open_Params, nullptr);

	return Open_Params.ReturnValue;
};

// Function IpDrv.TcpLink.Listen
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30436])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::Listen()
{
	static UFunction* uFnListen = nullptr;

	if (!uFnListen)
	{
		uFnListen = UFunction::FindFunction("Function IpDrv.TcpLink.Listen");
	}

	ATcpLink_execListen_Params Listen_Params;
	memset(&Listen_Params, 0, sizeof(Listen_Params));

	this->ProcessEvent(uFnListen, &Listen_Params, nullptr);

	return Listen_Params.ReturnValue;
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[32282])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PortNum                        (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bUseNextAvailable              (CPF_OptionalParm | CPF_Parm)

int32_t ATcpLink::BindPort(int32_t PortNum, bool bUseNextAvailable)
{
	static UFunction* uFnBindPort = nullptr;

	if (!uFnBindPort)
	{
		uFnBindPort = UFunction::FindFunction("Function IpDrv.TcpLink.BindPort");
	}

	ATcpLink_execBindPort_Params BindPort_Params;
	memset(&BindPort_Params, 0, sizeof(BindPort_Params));
	memcpy_s(&BindPort_Params.PortNum, sizeof(BindPort_Params.PortNum), &PortNum, sizeof(PortNum));
	BindPort_Params.bUseNextAvailable = bUseNextAvailable;

	this->ProcessEvent(uFnBindPort, &BindPort_Params, nullptr);

	return BindPort_Params.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServiceBase::GetAppAccessURL()
{
	static UFunction* uFnGetAppAccessURL = nullptr;

	if (!uFnGetAppAccessURL)
	{
		uFnGetAppAccessURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetAppAccessURL");
	}

	UMcpServiceBase_execGetAppAccessURL_Params GetAppAccessURL_Params;
	memset(&GetAppAccessURL_Params, 0, sizeof(GetAppAccessURL_Params));

	this->ProcessEvent(uFnGetAppAccessURL, &GetAppAccessURL_Params, nullptr);

	return GetAppAccessURL_Params.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServiceBase::GetBaseURL()
{
	static UFunction* uFnGetBaseURL = nullptr;

	if (!uFnGetBaseURL)
	{
		uFnGetBaseURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetBaseURL");
	}

	UMcpServiceBase_execGetBaseURL_Params GetBaseURL_Params;
	memset(&GetBaseURL_Params, 0, sizeof(GetBaseURL_Params));

	this->ProcessEvent(uFnGetBaseURL, &GetBaseURL_Params, nullptr);

	return GetBaseURL_Params.ReturnValue;
};

// Function IpDrv.McpServiceBase.Init
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMcpServiceBase::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.McpServiceBase.Init");
	}

	UMcpServiceBase_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33159])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm)
// class UOnlineMatchmakingStats* MMStats                        (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats)
{
	static UFunction* uFnUploadMatchmakingStats = nullptr;

	if (!uFnUploadMatchmakingStats)
	{
		uFnUploadMatchmakingStats = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats");
	}

	UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Params UploadMatchmakingStats_Params;
	memset(&UploadMatchmakingStats_Params, 0, sizeof(UploadMatchmakingStats_Params));
	memcpy_s(&UploadMatchmakingStats_Params.UniqueId, sizeof(UploadMatchmakingStats_Params.UniqueId), &UniqueId, sizeof(UniqueId));
	UploadMatchmakingStats_Params.MMStats = MMStats;

	this->ProcessEvent(uFnUploadMatchmakingStats, &UploadMatchmakingStats_Params, nullptr);

	return UploadMatchmakingStats_Params.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29847])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        NumPlayers                     (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation(int32_t PlaylistId, int32_t NumPlayers)
{
	static UFunction* uFnUpdatePlaylistPopulation = nullptr;

	if (!uFnUpdatePlaylistPopulation)
	{
		uFnUpdatePlaylistPopulation = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation");
	}

	UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Params UpdatePlaylistPopulation_Params;
	memset(&UpdatePlaylistPopulation_Params, 0, sizeof(UpdatePlaylistPopulation_Params));
	memcpy_s(&UpdatePlaylistPopulation_Params.PlaylistId, sizeof(UpdatePlaylistPopulation_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));
	memcpy_s(&UpdatePlaylistPopulation_Params.NumPlayers, sizeof(UpdatePlaylistPopulation_Params.NumPlayers), &NumPlayers, sizeof(NumPlayers));

	this->ProcessEvent(uFnUpdatePlaylistPopulation, &UpdatePlaylistPopulation_Params, nullptr);

	return UpdatePlaylistPopulation_Params.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[29868])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm)
// class TArray<uint8_t>          Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, class TArray<uint8_t>& Payload)
{
	static UFunction* uFnUploadGameplayEventsData = nullptr;

	if (!uFnUploadGameplayEventsData)
	{
		uFnUploadGameplayEventsData = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData");
	}

	UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Params UploadGameplayEventsData_Params;
	memset(&UploadGameplayEventsData_Params, 0, sizeof(UploadGameplayEventsData_Params));
	memcpy_s(&UploadGameplayEventsData_Params.UniqueId, sizeof(UploadGameplayEventsData_Params.UniqueId), &UniqueId, sizeof(UniqueId));
	memcpy_s(&UploadGameplayEventsData_Params.Payload, sizeof(UploadGameplayEventsData_Params.Payload), &Payload, sizeof(Payload));

	this->ProcessEvent(uFnUploadGameplayEventsData, &UploadGameplayEventsData_Params, nullptr);

	memcpy_s(&Payload, sizeof(Payload), &UploadGameplayEventsData_Params.Payload, sizeof(UploadGameplayEventsData_Params.Payload));

	return UploadGameplayEventsData_Params.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29869])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm)
// class FString                  PlayerNick                     (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UploadPlayerData(const struct FUniqueNetId& UniqueId, const class FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnUploadPlayerData = nullptr;

	if (!uFnUploadPlayerData)
	{
		uFnUploadPlayerData = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData");
	}

	UOnlineEventsInterfaceMcp_execUploadPlayerData_Params UploadPlayerData_Params;
	memset(&UploadPlayerData_Params, 0, sizeof(UploadPlayerData_Params));
	memcpy_s(&UploadPlayerData_Params.UniqueId, sizeof(UploadPlayerData_Params.UniqueId), &UniqueId, sizeof(UniqueId));
	memcpy_s(&UploadPlayerData_Params.PlayerNick, sizeof(UploadPlayerData_Params.PlayerNick), &PlayerNick, sizeof(PlayerNick));
	UploadPlayerData_Params.ProfileSettings = ProfileSettings;
	UploadPlayerData_Params.PlayerStorage = PlayerStorage;

	this->ProcessEvent(uFnUploadPlayerData, &UploadPlayerData_Params, nullptr);

	return UploadPlayerData_Params.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineNewsType                NewsType                       (CPF_Parm)

class FString UOnlineNewsInterfaceMcp::GetNews(uint8_t LocalUserNum, EOnlineNewsType NewsType)
{
	static UFunction* uFnGetNews = nullptr;

	if (!uFnGetNews)
	{
		uFnGetNews = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.GetNews");
	}

	UOnlineNewsInterfaceMcp_execGetNews_Params GetNews_Params;
	memset(&GetNews_Params, 0, sizeof(GetNews_Params));
	memcpy_s(&GetNews_Params.LocalUserNum, sizeof(GetNews_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetNews_Params.NewsType, sizeof(GetNews_Params.NewsType), &NewsType, sizeof(NewsType));

	this->ProcessEvent(uFnGetNews, &GetNews_Params, nullptr);

	return GetNews_Params.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadGameNewsDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate)
{
	static UFunction* uFnClearReadNewsCompletedDelegate = nullptr;

	if (!uFnClearReadNewsCompletedDelegate)
	{
		uFnClearReadNewsCompletedDelegate = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate");
	}

	UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Params ClearReadNewsCompletedDelegate_Params;
	memset(&ClearReadNewsCompletedDelegate_Params, 0, sizeof(ClearReadNewsCompletedDelegate_Params));
	memcpy_s(&ClearReadNewsCompletedDelegate_Params.ReadGameNewsDelegate, sizeof(ClearReadNewsCompletedDelegate_Params.ReadGameNewsDelegate), &ReadGameNewsDelegate, sizeof(ReadGameNewsDelegate));

	this->ProcessEvent(uFnClearReadNewsCompletedDelegate, &ClearReadNewsCompletedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadNewsDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate)
{
	static UFunction* uFnAddReadNewsCompletedDelegate = nullptr;

	if (!uFnAddReadNewsCompletedDelegate)
	{
		uFnAddReadNewsCompletedDelegate = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate");
	}

	UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Params AddReadNewsCompletedDelegate_Params;
	memset(&AddReadNewsCompletedDelegate_Params, 0, sizeof(AddReadNewsCompletedDelegate_Params));
	memcpy_s(&AddReadNewsCompletedDelegate_Params.ReadNewsDelegate, sizeof(AddReadNewsCompletedDelegate_Params.ReadNewsDelegate), &ReadNewsDelegate, sizeof(ReadNewsDelegate));

	this->ProcessEvent(uFnAddReadNewsCompletedDelegate, &AddReadNewsCompletedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// EOnlineNewsType                NewsType                       (CPF_Parm)

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted(bool bWasSuccessful, EOnlineNewsType NewsType)
{
	static UFunction* uFnOnReadNewsCompleted = nullptr;

	if (!uFnOnReadNewsCompleted)
	{
		uFnOnReadNewsCompleted = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted");
	}

	UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Params OnReadNewsCompleted_Params;
	memset(&OnReadNewsCompleted_Params, 0, sizeof(OnReadNewsCompleted_Params));
	OnReadNewsCompleted_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadNewsCompleted_Params.NewsType, sizeof(OnReadNewsCompleted_Params.NewsType), &NewsType, sizeof(NewsType));

	this->ProcessEvent(uFnOnReadNewsCompleted, &OnReadNewsCompleted_Params, nullptr);
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26866])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineNewsType                NewsType                       (CPF_Parm)

bool UOnlineNewsInterfaceMcp::ReadNews(uint8_t LocalUserNum, EOnlineNewsType NewsType)
{
	static UFunction* uFnReadNews = nullptr;

	if (!uFnReadNews)
	{
		uFnReadNews = UFunction::FindFunction("Function IpDrv.OnlineNewsInterfaceMcp.ReadNews");
	}

	UOnlineNewsInterfaceMcp_execReadNews_Params ReadNews_Params;
	memset(&ReadNews_Params, 0, sizeof(ReadNews_Params));
	memcpy_s(&ReadNews_Params.LocalUserNum, sizeof(ReadNews_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadNews_Params.NewsType, sizeof(ReadNews_Params.NewsType), &NewsType, sizeof(NewsType));

	this->ProcessEvent(uFnReadNews, &ReadNews_Params, nullptr);

	return ReadNews_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32570])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UOnlineTitleFileDownloadBase::GetUrlForFile(const class FString& Filename)
{
	static UFunction* uFnGetUrlForFile = nullptr;

	if (!uFnGetUrlForFile)
	{
		uFnGetUrlForFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile");
	}

	UOnlineTitleFileDownloadBase_execGetUrlForFile_Params GetUrlForFile_Params;
	memset(&GetUrlForFile_Params, 0, sizeof(GetUrlForFile_Params));
	memcpy_s(&GetUrlForFile_Params.Filename, sizeof(GetUrlForFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetUrlForFile, &GetUrlForFile_Params, nullptr);

	return GetUrlForFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate)
{
	static UFunction* uFnClearRequestTitleFileListCompleteDelegate = nullptr;

	if (!uFnClearRequestTitleFileListCompleteDelegate)
	{
		uFnClearRequestTitleFileListCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate");
	}

	UOnlineTitleFileDownloadBase_execClearRequestTitleFileListCompleteDelegate_Params ClearRequestTitleFileListCompleteDelegate_Params;
	memset(&ClearRequestTitleFileListCompleteDelegate_Params, 0, sizeof(ClearRequestTitleFileListCompleteDelegate_Params));
	memcpy_s(&ClearRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate, sizeof(ClearRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate), &RequestTitleFileListDelegate, sizeof(RequestTitleFileListDelegate));

	this->ProcessEvent(uFnClearRequestTitleFileListCompleteDelegate, &ClearRequestTitleFileListCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate)
{
	static UFunction* uFnAddRequestTitleFileListCompleteDelegate = nullptr;

	if (!uFnAddRequestTitleFileListCompleteDelegate)
	{
		uFnAddRequestTitleFileListCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate");
	}

	UOnlineTitleFileDownloadBase_execAddRequestTitleFileListCompleteDelegate_Params AddRequestTitleFileListCompleteDelegate_Params;
	memset(&AddRequestTitleFileListCompleteDelegate_Params, 0, sizeof(AddRequestTitleFileListCompleteDelegate_Params));
	memcpy_s(&AddRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate, sizeof(AddRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate), &RequestTitleFileListDelegate, sizeof(RequestTitleFileListDelegate));

	this->ProcessEvent(uFnAddRequestTitleFileListCompleteDelegate, &AddRequestTitleFileListCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  ResultStr                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::OnRequestTitleFileListComplete(bool bWasSuccessful, const class FString& ResultStr)
{
	static UFunction* uFnOnRequestTitleFileListComplete = nullptr;

	if (!uFnOnRequestTitleFileListComplete)
	{
		uFnOnRequestTitleFileListComplete = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete");
	}

	UOnlineTitleFileDownloadBase_execOnRequestTitleFileListComplete_Params OnRequestTitleFileListComplete_Params;
	memset(&OnRequestTitleFileListComplete_Params, 0, sizeof(OnRequestTitleFileListComplete_Params));
	OnRequestTitleFileListComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRequestTitleFileListComplete_Params.ResultStr, sizeof(OnRequestTitleFileListComplete_Params.ResultStr), &ResultStr, sizeof(ResultStr));

	this->ProcessEvent(uFnOnRequestTitleFileListComplete, &OnRequestTitleFileListComplete_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineTitleFileDownloadBase::RequestTitleFileList()
{
	static UFunction* uFnRequestTitleFileList = nullptr;

	if (!uFnRequestTitleFileList)
	{
		uFnRequestTitleFileList = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList");
	}

	UOnlineTitleFileDownloadBase_execRequestTitleFileList_Params RequestTitleFileList_Params;
	memset(&RequestTitleFileList_Params, 0, sizeof(RequestTitleFileList_Params));

	this->ProcessEvent(uFnRequestTitleFileList, &RequestTitleFileList_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFile(const class FString& Filename)
{
	static UFunction* uFnClearDownloadedFile = nullptr;

	if (!uFnClearDownloadedFile)
	{
		uFnClearDownloadedFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile");
	}

	UOnlineTitleFileDownloadBase_execClearDownloadedFile_Params ClearDownloadedFile_Params;
	memset(&ClearDownloadedFile_Params, 0, sizeof(ClearDownloadedFile_Params));
	memcpy_s(&ClearDownloadedFile_Params.Filename, sizeof(ClearDownloadedFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnClearDownloadedFile, &ClearDownloadedFile_Params, nullptr);

	return ClearDownloadedFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFiles()
{
	static UFunction* uFnClearDownloadedFiles = nullptr;

	if (!uFnClearDownloadedFiles)
	{
		uFnClearDownloadedFiles = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles");
	}

	UOnlineTitleFileDownloadBase_execClearDownloadedFiles_Params ClearDownloadedFiles_Params;
	memset(&ClearDownloadedFiles_Params, 0, sizeof(ClearDownloadedFiles_Params));

	this->ProcessEvent(uFnClearDownloadedFiles, &ClearDownloadedFiles_Params, nullptr);

	return ClearDownloadedFiles_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineTitleFileDownloadBase::GetTitleFileState(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState");
	}

	UOnlineTitleFileDownloadBase_execGetTitleFileState_Params GetTitleFileState_Params;
	memset(&GetTitleFileState_Params, 0, sizeof(GetTitleFileState_Params));
	memcpy_s(&GetTitleFileState_Params.Filename, sizeof(GetTitleFileState_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return static_cast<EOnlineEnumerationReadState>(GetTitleFileState_Params.ReturnValue);
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadBase::GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents");
	}

	UOnlineTitleFileDownloadBase_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memset(&GetTitleFileContents_Params, 0, sizeof(GetTitleFileContents_Params));
	memcpy_s(&GetTitleFileContents_Params.Filename, sizeof(GetTitleFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);

	memcpy_s(&FileContents, sizeof(FileContents), &GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents));

	return GetTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnClearReadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearReadTitleFileCompleteDelegate)
	{
		uFnClearReadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate");
	}

	UOnlineTitleFileDownloadBase_execClearReadTitleFileCompleteDelegate_Params ClearReadTitleFileCompleteDelegate_Params;
	memset(&ClearReadTitleFileCompleteDelegate_Params, 0, sizeof(ClearReadTitleFileCompleteDelegate_Params));
	memcpy_s(&ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnAddReadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddReadTitleFileCompleteDelegate)
	{
		uFnAddReadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate");
	}

	UOnlineTitleFileDownloadBase_execAddReadTitleFileCompleteDelegate_Params AddReadTitleFileCompleteDelegate_Params;
	memset(&AddReadTitleFileCompleteDelegate_Params, 0, sizeof(AddReadTitleFileCompleteDelegate_Params));
	memcpy_s(&AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadBase::ReadTitleFile(const class FString& FileToRead)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile");
	}

	UOnlineTitleFileDownloadBase_execReadTitleFile_Params ReadTitleFile_Params;
	memset(&ReadTitleFile_Params, 0, sizeof(ReadTitleFile_Params));
	memcpy_s(&ReadTitleFile_Params.FileToRead, sizeof(ReadTitleFile_Params.FileToRead), &FileToRead, sizeof(FileToRead));

	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);

	return ReadTitleFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadBase::OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnReadTitleFileComplete = nullptr;

	if (!uFnOnReadTitleFileComplete)
	{
		uFnOnReadTitleFileComplete = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete");
	}

	UOnlineTitleFileDownloadBase_execOnReadTitleFileComplete_Params OnReadTitleFileComplete_Params;
	memset(&OnReadTitleFileComplete_Params, 0, sizeof(OnReadTitleFileComplete_Params));
	OnReadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Params.Filename, sizeof(OnReadTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18359])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFile(const class FString& Filename)
{
	static UFunction* uFnClearDownloadedFile = nullptr;

	if (!uFnClearDownloadedFile)
	{
		uFnClearDownloadedFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile");
	}

	UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Params ClearDownloadedFile_Params;
	memset(&ClearDownloadedFile_Params, 0, sizeof(ClearDownloadedFile_Params));
	memcpy_s(&ClearDownloadedFile_Params.Filename, sizeof(ClearDownloadedFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnClearDownloadedFile, &ClearDownloadedFile_Params, nullptr);

	return ClearDownloadedFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18360])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles()
{
	static UFunction* uFnClearDownloadedFiles = nullptr;

	if (!uFnClearDownloadedFiles)
	{
		uFnClearDownloadedFiles = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles");
	}

	UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Params ClearDownloadedFiles_Params;
	memset(&ClearDownloadedFiles_Params, 0, sizeof(ClearDownloadedFiles_Params));

	this->ProcessEvent(uFnClearDownloadedFiles, &ClearDownloadedFiles_Params, nullptr);

	return ClearDownloadedFiles_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineTitleFileDownloadMcp::GetTitleFileState(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState");
	}

	UOnlineTitleFileDownloadMcp_execGetTitleFileState_Params GetTitleFileState_Params;
	memset(&GetTitleFileState_Params, 0, sizeof(GetTitleFileState_Params));
	memcpy_s(&GetTitleFileState_Params.Filename, sizeof(GetTitleFileState_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return static_cast<EOnlineEnumerationReadState>(GetTitleFileState_Params.ReturnValue);
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[22034])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadMcp::GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents");
	}

	UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memset(&GetTitleFileContents_Params, 0, sizeof(GetTitleFileContents_Params));
	memcpy_s(&GetTitleFileContents_Params.Filename, sizeof(GetTitleFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);

	memcpy_s(&FileContents, sizeof(FileContents), &GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents));

	return GetTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26886])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadMcp::ReadTitleFile(const class FString& FileToRead)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile");
	}

	UOnlineTitleFileDownloadMcp_execReadTitleFile_Params ReadTitleFile_Params;
	memset(&ReadTitleFile_Params, 0, sizeof(ReadTitleFile_Params));
	memcpy_s(&ReadTitleFile_Params.FileToRead, sizeof(ReadTitleFile_Params.FileToRead), &FileToRead, sizeof(FileToRead));

	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);

	return ReadTitleFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UOnlineTitleFileDownloadWeb::GetUrlForFile(const class FString& Filename)
{
	static UFunction* uFnGetUrlForFile = nullptr;

	if (!uFnGetUrlForFile)
	{
		uFnGetUrlForFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile");
	}

	UOnlineTitleFileDownloadWeb_execGetUrlForFile_Params GetUrlForFile_Params;
	memset(&GetUrlForFile_Params, 0, sizeof(GetUrlForFile_Params));
	memcpy_s(&GetUrlForFile_Params.Filename, sizeof(GetUrlForFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetUrlForFile, &GetUrlForFile_Params, nullptr);

	return GetUrlForFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bDidSucceed                    (CPF_Parm)

void UOnlineTitleFileDownloadWeb::OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnFileListReceived = nullptr;

	if (!uFnOnFileListReceived)
	{
		uFnOnFileListReceived = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived");
	}

	UOnlineTitleFileDownloadWeb_execOnFileListReceived_Params OnFileListReceived_Params;
	memset(&OnFileListReceived_Params, 0, sizeof(OnFileListReceived_Params));
	OnFileListReceived_Params.Request = Request;
	OnFileListReceived_Params.Response = Response;
	OnFileListReceived_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnFileListReceived, &OnFileListReceived_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineTitleFileDownloadWeb::RequestTitleFileList()
{
	static UFunction* uFnRequestTitleFileList = nullptr;

	if (!uFnRequestTitleFileList)
	{
		uFnRequestTitleFileList = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList");
	}

	UOnlineTitleFileDownloadWeb_execRequestTitleFileList_Params RequestTitleFileList_Params;
	memset(&RequestTitleFileList_Params, 0, sizeof(RequestTitleFileList_Params));

	this->ProcessEvent(uFnRequestTitleFileList, &RequestTitleFileList_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18359])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFile(const class FString& Filename)
{
	static UFunction* uFnClearDownloadedFile = nullptr;

	if (!uFnClearDownloadedFile)
	{
		uFnClearDownloadedFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile");
	}

	UOnlineTitleFileDownloadWeb_execClearDownloadedFile_Params ClearDownloadedFile_Params;
	memset(&ClearDownloadedFile_Params, 0, sizeof(ClearDownloadedFile_Params));
	memcpy_s(&ClearDownloadedFile_Params.Filename, sizeof(ClearDownloadedFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnClearDownloadedFile, &ClearDownloadedFile_Params, nullptr);

	return ClearDownloadedFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18360])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFiles()
{
	static UFunction* uFnClearDownloadedFiles = nullptr;

	if (!uFnClearDownloadedFiles)
	{
		uFnClearDownloadedFiles = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles");
	}

	UOnlineTitleFileDownloadWeb_execClearDownloadedFiles_Params ClearDownloadedFiles_Params;
	memset(&ClearDownloadedFiles_Params, 0, sizeof(ClearDownloadedFiles_Params));

	this->ProcessEvent(uFnClearDownloadedFiles, &ClearDownloadedFiles_Params, nullptr);

	return ClearDownloadedFiles_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineTitleFileDownloadWeb::GetTitleFileState(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState");
	}

	UOnlineTitleFileDownloadWeb_execGetTitleFileState_Params GetTitleFileState_Params;
	memset(&GetTitleFileState_Params, 0, sizeof(GetTitleFileState_Params));
	memcpy_s(&GetTitleFileState_Params.Filename, sizeof(GetTitleFileState_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return static_cast<EOnlineEnumerationReadState>(GetTitleFileState_Params.ReturnValue);
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[22034])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents");
	}

	UOnlineTitleFileDownloadWeb_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memset(&GetTitleFileContents_Params, 0, sizeof(GetTitleFileContents_Params));
	memcpy_s(&GetTitleFileContents_Params.Filename, sizeof(GetTitleFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);

	memcpy_s(&FileContents, sizeof(FileContents), &GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents));

	return GetTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags) (iNative[33136])
// Parameter Info:
// uint32_t                       bSuccess                       (CPF_Parm)
// class FString                  FileRead                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTitleFileDownloadWeb::TriggerDelegates(bool bSuccess, const class FString& FileRead)
{
	static UFunction* uFnTriggerDelegates = nullptr;

	if (!uFnTriggerDelegates)
	{
		uFnTriggerDelegates = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates");
	}

	UOnlineTitleFileDownloadWeb_execTriggerDelegates_Params TriggerDelegates_Params;
	memset(&TriggerDelegates_Params, 0, sizeof(TriggerDelegates_Params));
	TriggerDelegates_Params.bSuccess = bSuccess;
	memcpy_s(&TriggerDelegates_Params.FileRead, sizeof(TriggerDelegates_Params.FileRead), &FileRead, sizeof(FileRead));

	this->ProcessEvent(uFnTriggerDelegates, &TriggerDelegates_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bDidSucceed                    (CPF_Parm)

void UOnlineTitleFileDownloadWeb::OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnFileDownloadComplete = nullptr;

	if (!uFnOnFileDownloadComplete)
	{
		uFnOnFileDownloadComplete = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete");
	}

	UOnlineTitleFileDownloadWeb_execOnFileDownloadComplete_Params OnFileDownloadComplete_Params;
	memset(&OnFileDownloadComplete_Params, 0, sizeof(OnFileDownloadComplete_Params));
	OnFileDownloadComplete_Params.Request = Request;
	OnFileDownloadComplete_Params.Response = Response;
	OnFileDownloadComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnFileDownloadComplete, &OnFileDownloadComplete_Params, nullptr);
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::ReadTitleFile(const class FString& FileToRead)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile");
	}

	UOnlineTitleFileDownloadWeb_execReadTitleFile_Params ReadTitleFile_Params;
	memset(&ReadTitleFile_Params, 0, sizeof(ReadTitleFile_Params));
	memcpy_s(&ReadTitleFile_Params.FileToRead, sizeof(ReadTitleFile_Params.FileToRead), &FileToRead, sizeof(FileToRead));

	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);

	return ReadTitleFile_Params.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33148])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// EMcpFileCompressionType        FileCompressionType            (CPF_Parm)
// class TArray<uint8_t>          CompressedFileContents         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class TArray<uint8_t>          UncompressedFileContents       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineTitleFileDownloadWeb::UncompressTitleFileContents(EMcpFileCompressionType FileCompressionType, class TArray<uint8_t>& CompressedFileContents, class TArray<uint8_t>& UncompressedFileContents)
{
	static UFunction* uFnUncompressTitleFileContents = nullptr;

	if (!uFnUncompressTitleFileContents)
	{
		uFnUncompressTitleFileContents = UFunction::FindFunction("Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents");
	}

	UOnlineTitleFileDownloadWeb_execUncompressTitleFileContents_Params UncompressTitleFileContents_Params;
	memset(&UncompressTitleFileContents_Params, 0, sizeof(UncompressTitleFileContents_Params));
	memcpy_s(&UncompressTitleFileContents_Params.FileCompressionType, sizeof(UncompressTitleFileContents_Params.FileCompressionType), &FileCompressionType, sizeof(FileCompressionType));
	memcpy_s(&UncompressTitleFileContents_Params.CompressedFileContents, sizeof(UncompressTitleFileContents_Params.CompressedFileContents), &CompressedFileContents, sizeof(CompressedFileContents));
	memcpy_s(&UncompressTitleFileContents_Params.UncompressedFileContents, sizeof(UncompressTitleFileContents_Params.UncompressedFileContents), &UncompressedFileContents, sizeof(UncompressedFileContents));

	this->ProcessEvent(uFnUncompressTitleFileContents, &UncompressTitleFileContents_Params, nullptr);

	memcpy_s(&CompressedFileContents, sizeof(CompressedFileContents), &UncompressTitleFileContents_Params.CompressedFileContents, sizeof(UncompressTitleFileContents_Params.CompressedFileContents));
	memcpy_s(&UncompressedFileContents, sizeof(UncompressedFileContents), &UncompressTitleFileContents_Params.UncompressedFileContents, sizeof(UncompressTitleFileContents_Params.UncompressedFileContents));

	return UncompressTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19554])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::DeleteTitleFile(const class FString& Filename)
{
	static UFunction* uFnDeleteTitleFile = nullptr;

	if (!uFnDeleteTitleFile)
	{
		uFnDeleteTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.DeleteTitleFile");
	}

	UTitleFileDownloadCache_execDeleteTitleFile_Params DeleteTitleFile_Params;
	memset(&DeleteTitleFile_Params, 0, sizeof(DeleteTitleFile_Params));
	memcpy_s(&DeleteTitleFile_Params.Filename, sizeof(DeleteTitleFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnDeleteTitleFile, &DeleteTitleFile_Params, nullptr);

	return DeleteTitleFile_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19555])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MaxAgeSeconds                  (CPF_Parm)

bool UTitleFileDownloadCache::DeleteTitleFiles(float MaxAgeSeconds)
{
	static UFunction* uFnDeleteTitleFiles = nullptr;

	if (!uFnDeleteTitleFiles)
	{
		uFnDeleteTitleFiles = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles");
	}

	UTitleFileDownloadCache_execDeleteTitleFiles_Params DeleteTitleFiles_Params;
	memset(&DeleteTitleFiles_Params, 0, sizeof(DeleteTitleFiles_Params));
	memcpy_s(&DeleteTitleFiles_Params.MaxAgeSeconds, sizeof(DeleteTitleFiles_Params.MaxAgeSeconds), &MaxAgeSeconds, sizeof(MaxAgeSeconds));

	this->ProcessEvent(uFnDeleteTitleFiles, &DeleteTitleFiles_Params, nullptr);

	return DeleteTitleFiles_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18331])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::ClearCachedFile(const class FString& Filename)
{
	static UFunction* uFnClearCachedFile = nullptr;

	if (!uFnClearCachedFile)
	{
		uFnClearCachedFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearCachedFile");
	}

	UTitleFileDownloadCache_execClearCachedFile_Params ClearCachedFile_Params;
	memset(&ClearCachedFile_Params, 0, sizeof(ClearCachedFile_Params));
	memcpy_s(&ClearCachedFile_Params.Filename, sizeof(ClearCachedFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnClearCachedFile, &ClearCachedFile_Params, nullptr);

	return ClearCachedFile_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18332])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UTitleFileDownloadCache::ClearCachedFiles()
{
	static UFunction* uFnClearCachedFiles = nullptr;

	if (!uFnClearCachedFiles)
	{
		uFnClearCachedFiles = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearCachedFiles");
	}

	UTitleFileDownloadCache_execClearCachedFiles_Params ClearCachedFiles_Params;
	memset(&ClearCachedFiles_Params, 0, sizeof(ClearCachedFiles_Params));

	this->ProcessEvent(uFnClearCachedFiles, &ClearCachedFiles_Params, nullptr);

	return ClearCachedFiles_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[22036])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UTitleFileDownloadCache::GetTitleFileLogicalName(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileLogicalName = nullptr;

	if (!uFnGetTitleFileLogicalName)
	{
		uFnGetTitleFileLogicalName = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName");
	}

	UTitleFileDownloadCache_execGetTitleFileLogicalName_Params GetTitleFileLogicalName_Params;
	memset(&GetTitleFileLogicalName_Params, 0, sizeof(GetTitleFileLogicalName_Params));
	memcpy_s(&GetTitleFileLogicalName_Params.Filename, sizeof(GetTitleFileLogicalName_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileLogicalName, &GetTitleFileLogicalName_Params, nullptr);

	return GetTitleFileLogicalName_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[22035])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UTitleFileDownloadCache::GetTitleFileHash(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileHash = nullptr;

	if (!uFnGetTitleFileHash)
	{
		uFnGetTitleFileHash = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileHash");
	}

	UTitleFileDownloadCache_execGetTitleFileHash_Params GetTitleFileHash_Params;
	memset(&GetTitleFileHash_Params, 0, sizeof(GetTitleFileHash_Params));
	memcpy_s(&GetTitleFileHash_Params.Filename, sizeof(GetTitleFileHash_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileHash, &GetTitleFileHash_Params, nullptr);

	return GetTitleFileHash_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[22037])
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UTitleFileDownloadCache::GetTitleFileState(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileState");
	}

	UTitleFileDownloadCache_execGetTitleFileState_Params GetTitleFileState_Params;
	memset(&GetTitleFileState_Params, 0, sizeof(GetTitleFileState_Params));
	memcpy_s(&GetTitleFileState_Params.Filename, sizeof(GetTitleFileState_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return static_cast<EOnlineEnumerationReadState>(GetTitleFileState_Params.ReturnValue);
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[22034])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileContents");
	}

	UTitleFileDownloadCache_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memset(&GetTitleFileContents_Params, 0, sizeof(GetTitleFileContents_Params));
	memcpy_s(&GetTitleFileContents_Params.Filename, sizeof(GetTitleFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);

	memcpy_s(&FileContents, sizeof(FileContents), &GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents));

	return GetTitleFileContents_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate)
{
	static UFunction* uFnClearSaveTitleFileCompleteDelegate = nullptr;

	if (!uFnClearSaveTitleFileCompleteDelegate)
	{
		uFnClearSaveTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Params ClearSaveTitleFileCompleteDelegate_Params;
	memset(&ClearSaveTitleFileCompleteDelegate_Params, 0, sizeof(ClearSaveTitleFileCompleteDelegate_Params));
	memcpy_s(&ClearSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate, sizeof(ClearSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate), &SaveCompleteDelegate, sizeof(SaveCompleteDelegate));

	this->ProcessEvent(uFnClearSaveTitleFileCompleteDelegate, &ClearSaveTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate)
{
	static UFunction* uFnAddSaveTitleFileCompleteDelegate = nullptr;

	if (!uFnAddSaveTitleFileCompleteDelegate)
	{
		uFnAddSaveTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Params AddSaveTitleFileCompleteDelegate_Params;
	memset(&AddSaveTitleFileCompleteDelegate_Params, 0, sizeof(AddSaveTitleFileCompleteDelegate_Params));
	memcpy_s(&AddSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate, sizeof(AddSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate), &SaveCompleteDelegate, sizeof(SaveCompleteDelegate));

	this->ProcessEvent(uFnAddSaveTitleFileCompleteDelegate, &AddSaveTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::OnSaveTitleFileComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnSaveTitleFileComplete = nullptr;

	if (!uFnOnSaveTitleFileComplete)
	{
		uFnOnSaveTitleFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete");
	}

	UTitleFileDownloadCache_execOnSaveTitleFileComplete_Params OnSaveTitleFileComplete_Params;
	memset(&OnSaveTitleFileComplete_Params, 0, sizeof(OnSaveTitleFileComplete_Params));
	OnSaveTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnSaveTitleFileComplete_Params.Filename, sizeof(OnSaveTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnSaveTitleFileComplete, &OnSaveTitleFileComplete_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27455])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  LogicalName                    (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::SaveTitleFile(const class FString& Filename, const class FString& LogicalName, const class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnSaveTitleFile = nullptr;

	if (!uFnSaveTitleFile)
	{
		uFnSaveTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.SaveTitleFile");
	}

	UTitleFileDownloadCache_execSaveTitleFile_Params SaveTitleFile_Params;
	memset(&SaveTitleFile_Params, 0, sizeof(SaveTitleFile_Params));
	memcpy_s(&SaveTitleFile_Params.Filename, sizeof(SaveTitleFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&SaveTitleFile_Params.LogicalName, sizeof(SaveTitleFile_Params.LogicalName), &LogicalName, sizeof(LogicalName));
	memcpy_s(&SaveTitleFile_Params.FileContents, sizeof(SaveTitleFile_Params.FileContents), &FileContents, sizeof(FileContents));

	this->ProcessEvent(uFnSaveTitleFile, &SaveTitleFile_Params, nullptr);

	return SaveTitleFile_Params.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate)
{
	static UFunction* uFnClearLoadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearLoadTitleFileCompleteDelegate)
	{
		uFnClearLoadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Params ClearLoadTitleFileCompleteDelegate_Params;
	memset(&ClearLoadTitleFileCompleteDelegate_Params, 0, sizeof(ClearLoadTitleFileCompleteDelegate_Params));
	memcpy_s(&ClearLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate, sizeof(ClearLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate), &LoadCompleteDelegate, sizeof(LoadCompleteDelegate));

	this->ProcessEvent(uFnClearLoadTitleFileCompleteDelegate, &ClearLoadTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate)
{
	static UFunction* uFnAddLoadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddLoadTitleFileCompleteDelegate)
	{
		uFnAddLoadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Params AddLoadTitleFileCompleteDelegate_Params;
	memset(&AddLoadTitleFileCompleteDelegate_Params, 0, sizeof(AddLoadTitleFileCompleteDelegate_Params));
	memcpy_s(&AddLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate, sizeof(AddLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate), &LoadCompleteDelegate, sizeof(LoadCompleteDelegate));

	this->ProcessEvent(uFnAddLoadTitleFileCompleteDelegate, &AddLoadTitleFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::OnLoadTitleFileComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnLoadTitleFileComplete = nullptr;

	if (!uFnOnLoadTitleFileComplete)
	{
		uFnOnLoadTitleFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete");
	}

	UTitleFileDownloadCache_execOnLoadTitleFileComplete_Params OnLoadTitleFileComplete_Params;
	memset(&OnLoadTitleFileComplete_Params, 0, sizeof(OnLoadTitleFileComplete_Params));
	OnLoadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnLoadTitleFileComplete_Params.Filename, sizeof(OnLoadTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnLoadTitleFileComplete, &OnLoadTitleFileComplete_Params, nullptr);
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23483])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::LoadTitleFile(const class FString& Filename)
{
	static UFunction* uFnLoadTitleFile = nullptr;

	if (!uFnLoadTitleFile)
	{
		uFnLoadTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.LoadTitleFile");
	}

	UTitleFileDownloadCache_execLoadTitleFile_Params LoadTitleFile_Params;
	memset(&LoadTitleFile_Params, 0, sizeof(LoadTitleFile_Params));
	memcpy_s(&LoadTitleFile_Params.Filename, sizeof(LoadTitleFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnLoadTitleFile, &LoadTitleFile_Params, nullptr);

	return LoadTitleFile_Params.ReturnValue;
};

// Function IpDrv.McpMessageBase.CacheMessageContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageBase::CacheMessageContents(const class FString& MessageId, class TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnCacheMessageContents = nullptr;

	if (!uFnCacheMessageContents)
	{
		uFnCacheMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageBase.CacheMessageContents");
	}

	UMcpMessageBase_execCacheMessageContents_Params CacheMessageContents_Params;
	memset(&CacheMessageContents_Params, 0, sizeof(CacheMessageContents_Params));
	memcpy_s(&CacheMessageContents_Params.MessageId, sizeof(CacheMessageContents_Params.MessageId), &MessageId, sizeof(MessageId));
	memcpy_s(&CacheMessageContents_Params.MessageContents, sizeof(CacheMessageContents_Params.MessageContents), &MessageContents, sizeof(MessageContents));

	this->ProcessEvent(uFnCacheMessageContents, &CacheMessageContents_Params, nullptr);

	memcpy_s(&MessageContents, sizeof(MessageContents), &CacheMessageContents_Params.MessageContents, sizeof(CacheMessageContents_Params.MessageContents));

	return CacheMessageContents_Params.ReturnValue;
};

// Function IpDrv.McpMessageBase.CacheMessage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMcpMessage             Message                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::CacheMessage(const struct FMcpMessage& Message)
{
	static UFunction* uFnCacheMessage = nullptr;

	if (!uFnCacheMessage)
	{
		uFnCacheMessage = UFunction::FindFunction("Function IpDrv.McpMessageBase.CacheMessage");
	}

	UMcpMessageBase_execCacheMessage_Params CacheMessage_Params;
	memset(&CacheMessage_Params, 0, sizeof(CacheMessage_Params));
	memcpy_s(&CacheMessage_Params.Message, sizeof(CacheMessage_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnCacheMessage, &CacheMessage_Params, nullptr);
};

// Function IpDrv.McpMessageBase.GetMessageContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          MessageContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageBase::GetMessageContentsW(const class FString& MessageId, class TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnGetMessageContentsW = nullptr;

	if (!uFnGetMessageContentsW)
	{
		uFnGetMessageContentsW = UFunction::FindFunction("Function IpDrv.McpMessageBase.GetMessageContents");
	}

	UMcpMessageBase_execGetMessageContentsW_Params GetMessageContentsW_Params;
	memset(&GetMessageContentsW_Params, 0, sizeof(GetMessageContentsW_Params));
	memcpy_s(&GetMessageContentsW_Params.MessageId, sizeof(GetMessageContentsW_Params.MessageId), &MessageId, sizeof(MessageId));
	memcpy_s(&GetMessageContentsW_Params.MessageContents, sizeof(GetMessageContentsW_Params.MessageContents), &MessageContents, sizeof(MessageContents));

	this->ProcessEvent(uFnGetMessageContentsW, &GetMessageContentsW_Params, nullptr);

	memcpy_s(&MessageContents, sizeof(MessageContents), &GetMessageContentsW_Params.MessageContents, sizeof(GetMessageContentsW_Params.MessageContents));

	return GetMessageContentsW_Params.ReturnValue;
};

// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnQueryMessageContentsComplete(const class FString& MessageId, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnQueryMessageContentsComplete = nullptr;

	if (!uFnOnQueryMessageContentsComplete)
	{
		uFnOnQueryMessageContentsComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete");
	}

	UMcpMessageBase_execOnQueryMessageContentsComplete_Params OnQueryMessageContentsComplete_Params;
	memset(&OnQueryMessageContentsComplete_Params, 0, sizeof(OnQueryMessageContentsComplete_Params));
	memcpy_s(&OnQueryMessageContentsComplete_Params.MessageId, sizeof(OnQueryMessageContentsComplete_Params.MessageId), &MessageId, sizeof(MessageId));
	OnQueryMessageContentsComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryMessageContentsComplete_Params.Error, sizeof(OnQueryMessageContentsComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryMessageContentsComplete, &OnQueryMessageContentsComplete_Params, nullptr);
};

// Function IpDrv.McpMessageBase.QueryMessageContents
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::QueryMessageContents(const class FString& MessageId)
{
	static UFunction* uFnQueryMessageContents = nullptr;

	if (!uFnQueryMessageContents)
	{
		uFnQueryMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageBase.QueryMessageContents");
	}

	UMcpMessageBase_execQueryMessageContents_Params QueryMessageContents_Params;
	memset(&QueryMessageContents_Params, 0, sizeof(QueryMessageContents_Params));
	memcpy_s(&QueryMessageContents_Params.MessageId, sizeof(QueryMessageContents_Params.MessageId), &MessageId, sizeof(MessageId));

	this->ProcessEvent(uFnQueryMessageContents, &QueryMessageContents_Params, nullptr);
};

// Function IpDrv.McpMessageBase.GetMessageList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpMessageList         MessageList                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageBase::GetMessageListW(const class FString& ToUniqueUserId, struct FMcpMessageList& MessageList)
{
	static UFunction* uFnGetMessageListW = nullptr;

	if (!uFnGetMessageListW)
	{
		uFnGetMessageListW = UFunction::FindFunction("Function IpDrv.McpMessageBase.GetMessageList");
	}

	UMcpMessageBase_execGetMessageListW_Params GetMessageListW_Params;
	memset(&GetMessageListW_Params, 0, sizeof(GetMessageListW_Params));
	memcpy_s(&GetMessageListW_Params.ToUniqueUserId, sizeof(GetMessageListW_Params.ToUniqueUserId), &ToUniqueUserId, sizeof(ToUniqueUserId));
	memcpy_s(&GetMessageListW_Params.MessageList, sizeof(GetMessageListW_Params.MessageList), &MessageList, sizeof(MessageList));

	this->ProcessEvent(uFnGetMessageListW, &GetMessageListW_Params, nullptr);

	memcpy_s(&MessageList, sizeof(MessageList), &GetMessageListW_Params.MessageList, sizeof(GetMessageListW_Params.MessageList));
};

// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnQueryMessagesComplete(const class FString& UserId, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnQueryMessagesComplete = nullptr;

	if (!uFnOnQueryMessagesComplete)
	{
		uFnOnQueryMessagesComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnQueryMessagesComplete");
	}

	UMcpMessageBase_execOnQueryMessagesComplete_Params OnQueryMessagesComplete_Params;
	memset(&OnQueryMessagesComplete_Params, 0, sizeof(OnQueryMessagesComplete_Params));
	memcpy_s(&OnQueryMessagesComplete_Params.UserId, sizeof(OnQueryMessagesComplete_Params.UserId), &UserId, sizeof(UserId));
	OnQueryMessagesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryMessagesComplete_Params.Error, sizeof(OnQueryMessagesComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryMessagesComplete, &OnQueryMessagesComplete_Params, nullptr);
};

// Function IpDrv.McpMessageBase.QueryMessages
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  TitleId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::QueryMessages(const class FString& ToUniqueUserId, const class FString& TitleId)
{
	static UFunction* uFnQueryMessages = nullptr;

	if (!uFnQueryMessages)
	{
		uFnQueryMessages = UFunction::FindFunction("Function IpDrv.McpMessageBase.QueryMessages");
	}

	UMcpMessageBase_execQueryMessages_Params QueryMessages_Params;
	memset(&QueryMessages_Params, 0, sizeof(QueryMessages_Params));
	memcpy_s(&QueryMessages_Params.ToUniqueUserId, sizeof(QueryMessages_Params.ToUniqueUserId), &ToUniqueUserId, sizeof(ToUniqueUserId));
	memcpy_s(&QueryMessages_Params.TitleId, sizeof(QueryMessages_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnQueryMessages, &QueryMessages_Params, nullptr);
};

// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnDeleteMessageComplete(const class FString& MessageId, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnDeleteMessageComplete = nullptr;

	if (!uFnOnDeleteMessageComplete)
	{
		uFnOnDeleteMessageComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnDeleteMessageComplete");
	}

	UMcpMessageBase_execOnDeleteMessageComplete_Params OnDeleteMessageComplete_Params;
	memset(&OnDeleteMessageComplete_Params, 0, sizeof(OnDeleteMessageComplete_Params));
	memcpy_s(&OnDeleteMessageComplete_Params.MessageId, sizeof(OnDeleteMessageComplete_Params.MessageId), &MessageId, sizeof(MessageId));
	OnDeleteMessageComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteMessageComplete_Params.Error, sizeof(OnDeleteMessageComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnDeleteMessageComplete, &OnDeleteMessageComplete_Params, nullptr);
};

// Function IpDrv.McpMessageBase.DeleteMessage
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::DeleteMessage(const class FString& MessageId)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function IpDrv.McpMessageBase.DeleteMessage");
	}

	UMcpMessageBase_execDeleteMessage_Params DeleteMessage_Params;
	memset(&DeleteMessage_Params, 0, sizeof(DeleteMessage_Params));
	memcpy_s(&DeleteMessage_Params.MessageId, sizeof(DeleteMessage_Params.MessageId), &MessageId, sizeof(MessageId));

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);
};

// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FMcpMessage             Message                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageBase::OnCreateMessageComplete(const struct FMcpMessage& Message, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnCreateMessageComplete = nullptr;

	if (!uFnOnCreateMessageComplete)
	{
		uFnOnCreateMessageComplete = UFunction::FindFunction("Function IpDrv.McpMessageBase.OnCreateMessageComplete");
	}

	UMcpMessageBase_execOnCreateMessageComplete_Params OnCreateMessageComplete_Params;
	memset(&OnCreateMessageComplete_Params, 0, sizeof(OnCreateMessageComplete_Params));
	memcpy_s(&OnCreateMessageComplete_Params.Message, sizeof(OnCreateMessageComplete_Params.Message), &Message, sizeof(Message));
	OnCreateMessageComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateMessageComplete_Params.Error, sizeof(OnCreateMessageComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnCreateMessageComplete, &OnCreateMessageComplete_Params, nullptr);
};

// Function IpDrv.McpMessageBase.CreateMessage
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  FromUniqueUserId               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FromFriendlyName               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  MessageType                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  TitleId                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PushMessage                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ValidUntil                     (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    ToUniqueUserIds                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class TArray<uint8_t>          MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageBase::CreateMessage(const class FString& FromUniqueUserId, const class FString& FromFriendlyName, const class FString& MessageType, const class FString& TitleId, const class FString& PushMessage, const class FString& ValidUntil, class TArray<class FString>& ToUniqueUserIds, class TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnCreateMessage = nullptr;

	if (!uFnCreateMessage)
	{
		uFnCreateMessage = UFunction::FindFunction("Function IpDrv.McpMessageBase.CreateMessage");
	}

	UMcpMessageBase_execCreateMessage_Params CreateMessage_Params;
	memset(&CreateMessage_Params, 0, sizeof(CreateMessage_Params));
	memcpy_s(&CreateMessage_Params.FromUniqueUserId, sizeof(CreateMessage_Params.FromUniqueUserId), &FromUniqueUserId, sizeof(FromUniqueUserId));
	memcpy_s(&CreateMessage_Params.FromFriendlyName, sizeof(CreateMessage_Params.FromFriendlyName), &FromFriendlyName, sizeof(FromFriendlyName));
	memcpy_s(&CreateMessage_Params.MessageType, sizeof(CreateMessage_Params.MessageType), &MessageType, sizeof(MessageType));
	memcpy_s(&CreateMessage_Params.TitleId, sizeof(CreateMessage_Params.TitleId), &TitleId, sizeof(TitleId));
	memcpy_s(&CreateMessage_Params.PushMessage, sizeof(CreateMessage_Params.PushMessage), &PushMessage, sizeof(PushMessage));
	memcpy_s(&CreateMessage_Params.ValidUntil, sizeof(CreateMessage_Params.ValidUntil), &ValidUntil, sizeof(ValidUntil));
	memcpy_s(&CreateMessage_Params.ToUniqueUserIds, sizeof(CreateMessage_Params.ToUniqueUserIds), &ToUniqueUserIds, sizeof(ToUniqueUserIds));
	memcpy_s(&CreateMessage_Params.MessageContents, sizeof(CreateMessage_Params.MessageContents), &MessageContents, sizeof(MessageContents));

	this->ProcessEvent(uFnCreateMessage, &CreateMessage_Params, nullptr);

	memcpy_s(&ToUniqueUserIds, sizeof(ToUniqueUserIds), &CreateMessage_Params.ToUniqueUserIds, sizeof(CreateMessage_Params.ToUniqueUserIds));
	memcpy_s(&MessageContents, sizeof(MessageContents), &CreateMessage_Params.MessageContents, sizeof(CreateMessage_Params.MessageContents));
};

// Function IpDrv.McpMessageBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMcpMessageBase*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpMessageBase* UMcpMessageBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpMessageBase.CreateInstance");
	}

	UMcpMessageBase_execCreateInstance_Params CreateInstance_Params;
	memset(&CreateInstance_Params, 0, sizeof(CreateInstance_Params));

	UMcpMessageBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.CacheMessageContents
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::CacheMessageContents(const class FString& MessageId, class TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnCacheMessageContents = nullptr;

	if (!uFnCacheMessageContents)
	{
		uFnCacheMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageManager.CacheMessageContents");
	}

	UMcpMessageManager_execCacheMessageContents_Params CacheMessageContents_Params;
	memset(&CacheMessageContents_Params, 0, sizeof(CacheMessageContents_Params));
	memcpy_s(&CacheMessageContents_Params.MessageId, sizeof(CacheMessageContents_Params.MessageId), &MessageId, sizeof(MessageId));
	memcpy_s(&CacheMessageContents_Params.MessageContents, sizeof(CacheMessageContents_Params.MessageContents), &MessageContents, sizeof(MessageContents));

	this->ProcessEvent(uFnCacheMessageContents, &CacheMessageContents_Params, nullptr);

	memcpy_s(&MessageContents, sizeof(MessageContents), &CacheMessageContents_Params.MessageContents, sizeof(CacheMessageContents_Params.MessageContents));

	return CacheMessageContents_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.GetMessageById
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpMessage             Message                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::GetMessageByIdW(const class FString& MessageId, struct FMcpMessage& Message)
{
	static UFunction* uFnGetMessageByIdW = nullptr;

	if (!uFnGetMessageByIdW)
	{
		uFnGetMessageByIdW = UFunction::FindFunction("Function IpDrv.McpMessageManager.GetMessageById");
	}

	UMcpMessageManager_execGetMessageByIdW_Params GetMessageByIdW_Params;
	memset(&GetMessageByIdW_Params, 0, sizeof(GetMessageByIdW_Params));
	memcpy_s(&GetMessageByIdW_Params.MessageId, sizeof(GetMessageByIdW_Params.MessageId), &MessageId, sizeof(MessageId));
	memcpy_s(&GetMessageByIdW_Params.Message, sizeof(GetMessageByIdW_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnGetMessageByIdW, &GetMessageByIdW_Params, nullptr);

	memcpy_s(&Message, sizeof(Message), &GetMessageByIdW_Params.Message, sizeof(GetMessageByIdW_Params.Message));

	return GetMessageByIdW_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.CacheMessage
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FMcpMessage             Message                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::CacheMessage(const struct FMcpMessage& Message)
{
	static UFunction* uFnCacheMessage = nullptr;

	if (!uFnCacheMessage)
	{
		uFnCacheMessage = UFunction::FindFunction("Function IpDrv.McpMessageManager.CacheMessage");
	}

	UMcpMessageManager_execCacheMessage_Params CacheMessage_Params;
	memset(&CacheMessage_Params, 0, sizeof(CacheMessage_Params));
	memcpy_s(&CacheMessage_Params.Message, sizeof(CacheMessage_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnCacheMessage, &CacheMessage_Params, nullptr);
};

// Function IpDrv.McpMessageManager.GetMessageContents
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          MessageContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::GetMessageContentsW(const class FString& MessageId, class TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnGetMessageContentsW = nullptr;

	if (!uFnGetMessageContentsW)
	{
		uFnGetMessageContentsW = UFunction::FindFunction("Function IpDrv.McpMessageManager.GetMessageContents");
	}

	UMcpMessageManager_execGetMessageContentsW_Params GetMessageContentsW_Params;
	memset(&GetMessageContentsW_Params, 0, sizeof(GetMessageContentsW_Params));
	memcpy_s(&GetMessageContentsW_Params.MessageId, sizeof(GetMessageContentsW_Params.MessageId), &MessageId, sizeof(MessageId));
	memcpy_s(&GetMessageContentsW_Params.MessageContents, sizeof(GetMessageContentsW_Params.MessageContents), &MessageContents, sizeof(MessageContents));

	this->ProcessEvent(uFnGetMessageContentsW, &GetMessageContentsW_Params, nullptr);

	memcpy_s(&MessageContents, sizeof(MessageContents), &GetMessageContentsW_Params.MessageContents, sizeof(GetMessageContentsW_Params.MessageContents));

	return GetMessageContentsW_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// [0x00840003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryMessageContentsRequestComplete = nullptr;

	if (!uFnOnQueryMessageContentsRequestComplete)
	{
		uFnOnQueryMessageContentsRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete");
	}

	UMcpMessageManager_execOnQueryMessageContentsRequestComplete_Params OnQueryMessageContentsRequestComplete_Params;
	memset(&OnQueryMessageContentsRequestComplete_Params, 0, sizeof(OnQueryMessageContentsRequestComplete_Params));
	OnQueryMessageContentsRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnQueryMessageContentsRequestComplete_Params.HttpResponse = HttpResponse;
	OnQueryMessageContentsRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryMessageContentsRequestComplete, &OnQueryMessageContentsRequestComplete_Params, nullptr);
};

// Function IpDrv.McpMessageManager.QueryMessageContents
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::QueryMessageContents(const class FString& MessageId)
{
	static UFunction* uFnQueryMessageContents = nullptr;

	if (!uFnQueryMessageContents)
	{
		uFnQueryMessageContents = UFunction::FindFunction("Function IpDrv.McpMessageManager.QueryMessageContents");
	}

	UMcpMessageManager_execQueryMessageContents_Params QueryMessageContents_Params;
	memset(&QueryMessageContents_Params, 0, sizeof(QueryMessageContents_Params));
	memcpy_s(&QueryMessageContents_Params.MessageId, sizeof(QueryMessageContents_Params.MessageId), &MessageId, sizeof(MessageId));

	this->ProcessEvent(uFnQueryMessageContents, &QueryMessageContents_Params, nullptr);
};

// Function IpDrv.McpMessageManager.GetMessageList
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpMessageList         MessageList                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageManager::GetMessageListW(const class FString& ToUniqueUserId, struct FMcpMessageList& MessageList)
{
	static UFunction* uFnGetMessageListW = nullptr;

	if (!uFnGetMessageListW)
	{
		uFnGetMessageListW = UFunction::FindFunction("Function IpDrv.McpMessageManager.GetMessageList");
	}

	UMcpMessageManager_execGetMessageListW_Params GetMessageListW_Params;
	memset(&GetMessageListW_Params, 0, sizeof(GetMessageListW_Params));
	memcpy_s(&GetMessageListW_Params.ToUniqueUserId, sizeof(GetMessageListW_Params.ToUniqueUserId), &ToUniqueUserId, sizeof(ToUniqueUserId));
	memcpy_s(&GetMessageListW_Params.MessageList, sizeof(GetMessageListW_Params.MessageList), &MessageList, sizeof(MessageList));

	this->ProcessEvent(uFnGetMessageListW, &GetMessageListW_Params, nullptr);

	memcpy_s(&MessageList, sizeof(MessageList), &GetMessageListW_Params.MessageList, sizeof(GetMessageListW_Params.MessageList));
};

// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// [0x00840003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryMessagesRequestComplete = nullptr;

	if (!uFnOnQueryMessagesRequestComplete)
	{
		uFnOnQueryMessagesRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete");
	}

	UMcpMessageManager_execOnQueryMessagesRequestComplete_Params OnQueryMessagesRequestComplete_Params;
	memset(&OnQueryMessagesRequestComplete_Params, 0, sizeof(OnQueryMessagesRequestComplete_Params));
	OnQueryMessagesRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnQueryMessagesRequestComplete_Params.HttpResponse = HttpResponse;
	OnQueryMessagesRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryMessagesRequestComplete, &OnQueryMessagesRequestComplete_Params, nullptr);
};

// Function IpDrv.McpMessageManager.QueryMessages
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ToUniqueUserId                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  TitleId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::QueryMessages(const class FString& ToUniqueUserId, const class FString& TitleId)
{
	static UFunction* uFnQueryMessages = nullptr;

	if (!uFnQueryMessages)
	{
		uFnQueryMessages = UFunction::FindFunction("Function IpDrv.McpMessageManager.QueryMessages");
	}

	UMcpMessageManager_execQueryMessages_Params QueryMessages_Params;
	memset(&QueryMessages_Params, 0, sizeof(QueryMessages_Params));
	memcpy_s(&QueryMessages_Params.ToUniqueUserId, sizeof(QueryMessages_Params.ToUniqueUserId), &ToUniqueUserId, sizeof(ToUniqueUserId));
	memcpy_s(&QueryMessages_Params.TitleId, sizeof(QueryMessages_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnQueryMessages, &QueryMessages_Params, nullptr);
};

// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnDeleteMessageRequestComplete = nullptr;

	if (!uFnOnDeleteMessageRequestComplete)
	{
		uFnOnDeleteMessageRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete");
	}

	UMcpMessageManager_execOnDeleteMessageRequestComplete_Params OnDeleteMessageRequestComplete_Params;
	memset(&OnDeleteMessageRequestComplete_Params, 0, sizeof(OnDeleteMessageRequestComplete_Params));
	OnDeleteMessageRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnDeleteMessageRequestComplete_Params.HttpResponse = HttpResponse;
	OnDeleteMessageRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteMessageRequestComplete, &OnDeleteMessageRequestComplete_Params, nullptr);
};

// Function IpDrv.McpMessageManager.DeleteMessage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpMessageManager::DeleteMessage(const class FString& MessageId)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function IpDrv.McpMessageManager.DeleteMessage");
	}

	UMcpMessageManager_execDeleteMessage_Params DeleteMessage_Params;
	memset(&DeleteMessage_Params, 0, sizeof(DeleteMessage_Params));
	memcpy_s(&DeleteMessage_Params.MessageId, sizeof(DeleteMessage_Params.MessageId), &MessageId, sizeof(MessageId));

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);
};

// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   CreateMessageRequest           (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpMessageManager::OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnCreateMessageRequestComplete = nullptr;

	if (!uFnOnCreateMessageRequestComplete)
	{
		uFnOnCreateMessageRequestComplete = UFunction::FindFunction("Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete");
	}

	UMcpMessageManager_execOnCreateMessageRequestComplete_Params OnCreateMessageRequestComplete_Params;
	memset(&OnCreateMessageRequestComplete_Params, 0, sizeof(OnCreateMessageRequestComplete_Params));
	OnCreateMessageRequestComplete_Params.CreateMessageRequest = CreateMessageRequest;
	OnCreateMessageRequestComplete_Params.HttpResponse = HttpResponse;
	OnCreateMessageRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCreateMessageRequestComplete, &OnCreateMessageRequestComplete_Params, nullptr);
};

// Function IpDrv.McpMessageManager.CreateMessage
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  FromUniqueUserId               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FromFriendlyName               (CPF_Parm | CPF_NeedCtorLink)
// class FString                  MessageType                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  TitleId                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PushMessage                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ValidUntil                     (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    ToUniqueUserIds                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class TArray<uint8_t>          MessageContents                (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageManager::CreateMessage(const class FString& FromUniqueUserId, const class FString& FromFriendlyName, const class FString& MessageType, const class FString& TitleId, const class FString& PushMessage, const class FString& ValidUntil, class TArray<class FString>& ToUniqueUserIds, class TArray<uint8_t>& MessageContents)
{
	static UFunction* uFnCreateMessage = nullptr;

	if (!uFnCreateMessage)
	{
		uFnCreateMessage = UFunction::FindFunction("Function IpDrv.McpMessageManager.CreateMessage");
	}

	UMcpMessageManager_execCreateMessage_Params CreateMessage_Params;
	memset(&CreateMessage_Params, 0, sizeof(CreateMessage_Params));
	memcpy_s(&CreateMessage_Params.FromUniqueUserId, sizeof(CreateMessage_Params.FromUniqueUserId), &FromUniqueUserId, sizeof(FromUniqueUserId));
	memcpy_s(&CreateMessage_Params.FromFriendlyName, sizeof(CreateMessage_Params.FromFriendlyName), &FromFriendlyName, sizeof(FromFriendlyName));
	memcpy_s(&CreateMessage_Params.MessageType, sizeof(CreateMessage_Params.MessageType), &MessageType, sizeof(MessageType));
	memcpy_s(&CreateMessage_Params.TitleId, sizeof(CreateMessage_Params.TitleId), &TitleId, sizeof(TitleId));
	memcpy_s(&CreateMessage_Params.PushMessage, sizeof(CreateMessage_Params.PushMessage), &PushMessage, sizeof(PushMessage));
	memcpy_s(&CreateMessage_Params.ValidUntil, sizeof(CreateMessage_Params.ValidUntil), &ValidUntil, sizeof(ValidUntil));
	memcpy_s(&CreateMessage_Params.ToUniqueUserIds, sizeof(CreateMessage_Params.ToUniqueUserIds), &ToUniqueUserIds, sizeof(ToUniqueUserIds));
	memcpy_s(&CreateMessage_Params.MessageContents, sizeof(CreateMessage_Params.MessageContents), &MessageContents, sizeof(MessageContents));

	this->ProcessEvent(uFnCreateMessage, &CreateMessage_Params, nullptr);

	memcpy_s(&ToUniqueUserIds, sizeof(ToUniqueUserIds), &CreateMessage_Params.ToUniqueUserIds, sizeof(CreateMessage_Params.ToUniqueUserIds));
	memcpy_s(&MessageContents, sizeof(MessageContents), &CreateMessage_Params.MessageContents, sizeof(CreateMessage_Params.MessageContents));
};

// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          UncompressedMessageContents    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpMessageManager::eventFinishedAsyncUncompression(bool bWasSuccessful, const class FString& MessageId, class TArray<uint8_t>& UncompressedMessageContents)
{
	static UFunction* uFnFinishedAsyncUncompression = nullptr;

	if (!uFnFinishedAsyncUncompression)
	{
		uFnFinishedAsyncUncompression = UFunction::FindFunction("Function IpDrv.McpMessageManager.FinishedAsyncUncompression");
	}

	UMcpMessageManager_eventFinishedAsyncUncompression_Params FinishedAsyncUncompression_Params;
	memset(&FinishedAsyncUncompression_Params, 0, sizeof(FinishedAsyncUncompression_Params));
	FinishedAsyncUncompression_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&FinishedAsyncUncompression_Params.MessageId, sizeof(FinishedAsyncUncompression_Params.MessageId), &MessageId, sizeof(MessageId));
	memcpy_s(&FinishedAsyncUncompression_Params.UncompressedMessageContents, sizeof(FinishedAsyncUncompression_Params.UncompressedMessageContents), &UncompressedMessageContents, sizeof(UncompressedMessageContents));

	this->ProcessEvent(uFnFinishedAsyncUncompression, &FinishedAsyncUncompression_Params, nullptr);

	memcpy_s(&UncompressedMessageContents, sizeof(UncompressedMessageContents), &FinishedAsyncUncompression_Params.UncompressedMessageContents, sizeof(FinishedAsyncUncompression_Params.UncompressedMessageContents));
};

// Function IpDrv.McpMessageManager.StartAsyncUncompression
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33091])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MessageId                      (CPF_Parm | CPF_NeedCtorLink)
// EMcpMessageCompressionType     MessageCompressionType         (CPF_Parm)
// class TArray<uint8_t>          MessageContent                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::StartAsyncUncompression(const class FString& MessageId, EMcpMessageCompressionType MessageCompressionType, class TArray<uint8_t>& MessageContent)
{
	static UFunction* uFnStartAsyncUncompression = nullptr;

	if (!uFnStartAsyncUncompression)
	{
		uFnStartAsyncUncompression = UFunction::FindFunction("Function IpDrv.McpMessageManager.StartAsyncUncompression");
	}

	UMcpMessageManager_execStartAsyncUncompression_Params StartAsyncUncompression_Params;
	memset(&StartAsyncUncompression_Params, 0, sizeof(StartAsyncUncompression_Params));
	memcpy_s(&StartAsyncUncompression_Params.MessageId, sizeof(StartAsyncUncompression_Params.MessageId), &MessageId, sizeof(MessageId));
	memcpy_s(&StartAsyncUncompression_Params.MessageCompressionType, sizeof(StartAsyncUncompression_Params.MessageCompressionType), &MessageCompressionType, sizeof(MessageCompressionType));
	memcpy_s(&StartAsyncUncompression_Params.MessageContent, sizeof(StartAsyncUncompression_Params.MessageContent), &MessageContent, sizeof(MessageContent));

	this->ProcessEvent(uFnStartAsyncUncompression, &StartAsyncUncompression_Params, nullptr);

	memcpy_s(&MessageContent, sizeof(MessageContent), &StartAsyncUncompression_Params.MessageContent, sizeof(StartAsyncUncompression_Params.MessageContent));

	return StartAsyncUncompression_Params.ReturnValue;
};

// Function IpDrv.McpMessageManager.StartAsyncCompression
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33090])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// EMcpMessageCompressionType     MessageCompressionType         (CPF_Parm)
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class TArray<uint8_t>          MessageContent                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpMessageManager::StartAsyncCompression(EMcpMessageCompressionType MessageCompressionType, class UHttpRequestInterface* Request, class TArray<uint8_t>& MessageContent)
{
	static UFunction* uFnStartAsyncCompression = nullptr;

	if (!uFnStartAsyncCompression)
	{
		uFnStartAsyncCompression = UFunction::FindFunction("Function IpDrv.McpMessageManager.StartAsyncCompression");
	}

	UMcpMessageManager_execStartAsyncCompression_Params StartAsyncCompression_Params;
	memset(&StartAsyncCompression_Params, 0, sizeof(StartAsyncCompression_Params));
	memcpy_s(&StartAsyncCompression_Params.MessageCompressionType, sizeof(StartAsyncCompression_Params.MessageCompressionType), &MessageCompressionType, sizeof(MessageCompressionType));
	StartAsyncCompression_Params.Request = Request;
	memcpy_s(&StartAsyncCompression_Params.MessageContent, sizeof(StartAsyncCompression_Params.MessageContent), &MessageContent, sizeof(MessageContent));

	this->ProcessEvent(uFnStartAsyncCompression, &StartAsyncCompression_Params, nullptr);

	memcpy_s(&MessageContent, sizeof(MessageContent), &StartAsyncCompression_Params.MessageContent, sizeof(StartAsyncCompression_Params.MessageContent));

	return StartAsyncCompression_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMcpUserCloudFileDownload::ClearAllDelegates()
{
	static UFunction* uFnClearAllDelegates = nullptr;

	if (!uFnClearAllDelegates)
	{
		uFnClearAllDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates");
	}

	UMcpUserCloudFileDownload_execClearAllDelegates_Params ClearAllDelegates_Params;
	memset(&ClearAllDelegates_Params, 0, sizeof(ClearAllDelegates_Params));

	this->ProcessEvent(uFnClearAllDelegates, &ClearAllDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteUserFileCompleteDelegate)
	{
		uFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execClearDeleteUserFileCompleteDelegate_Params ClearDeleteUserFileCompleteDelegate_Params;
	memset(&ClearDeleteUserFileCompleteDelegate_Params, 0, sizeof(ClearDeleteUserFileCompleteDelegate_Params));
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteUserFileCompleteDelegate)
	{
		uFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execAddDeleteUserFileCompleteDelegate_Params AddDeleteUserFileCompleteDelegate_Params;
	memset(&AddDeleteUserFileCompleteDelegate_Params, 0, sizeof(AddDeleteUserFileCompleteDelegate_Params));
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallDeleteUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnCallDeleteUserFileCompleteDelegates = nullptr;

	if (!uFnCallDeleteUserFileCompleteDelegates)
	{
		uFnCallDeleteUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates");
	}

	UMcpUserCloudFileDownload_execCallDeleteUserFileCompleteDelegates_Params CallDeleteUserFileCompleteDelegates_Params;
	memset(&CallDeleteUserFileCompleteDelegates_Params, 0, sizeof(CallDeleteUserFileCompleteDelegates_Params));
	CallDeleteUserFileCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallDeleteUserFileCompleteDelegates_Params.UserId, sizeof(CallDeleteUserFileCompleteDelegates_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&CallDeleteUserFileCompleteDelegates_Params.Filename, sizeof(CallDeleteUserFileCompleteDelegates_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnCallDeleteUserFileCompleteDelegates, &CallDeleteUserFileCompleteDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnDeleteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnOnDeleteUserFileComplete = nullptr;

	if (!uFnOnDeleteUserFileComplete)
	{
		uFnOnDeleteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnDeleteUserFileComplete_Params OnDeleteUserFileComplete_Params;
	memset(&OnDeleteUserFileComplete_Params, 0, sizeof(OnDeleteUserFileComplete_Params));
	OnDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Params.UserId, sizeof(OnDeleteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnDeleteUserFileComplete_Params.Filename, sizeof(OnDeleteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnHTTPRequestDeleteUserFileComplete = nullptr;

	if (!uFnOnHTTPRequestDeleteUserFileComplete)
	{
		uFnOnHTTPRequestDeleteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnHTTPRequestDeleteUserFileComplete_Params OnHTTPRequestDeleteUserFileComplete_Params;
	memset(&OnHTTPRequestDeleteUserFileComplete_Params, 0, sizeof(OnHTTPRequestDeleteUserFileComplete_Params));
	OnHTTPRequestDeleteUserFileComplete_Params.Request = Request;
	OnHTTPRequestDeleteUserFileComplete_Params.Response = Response;
	OnHTTPRequestDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnHTTPRequestDeleteUserFileComplete, &OnHTTPRequestDeleteUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bShouldCloudDelete             (CPF_Parm)
// uint32_t                       bShouldLocallyDelete           (CPF_Parm)

bool UMcpUserCloudFileDownload::DeleteUserFile(const class FString& UserId, const class FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static UFunction* uFnDeleteUserFile = nullptr;

	if (!uFnDeleteUserFile)
	{
		uFnDeleteUserFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.DeleteUserFile");
	}

	UMcpUserCloudFileDownload_execDeleteUserFile_Params DeleteUserFile_Params;
	memset(&DeleteUserFile_Params, 0, sizeof(DeleteUserFile_Params));
	memcpy_s(&DeleteUserFile_Params.UserId, sizeof(DeleteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&DeleteUserFile_Params.Filename, sizeof(DeleteUserFile_Params.Filename), &Filename, sizeof(Filename));
	DeleteUserFile_Params.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Params.bShouldLocallyDelete = bShouldLocallyDelete;

	this->ProcessEvent(uFnDeleteUserFile, &DeleteUserFile_Params, nullptr);

	return DeleteUserFile_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static UFunction* uFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!uFnClearWriteUserFileCompleteDelegate)
	{
		uFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execClearWriteUserFileCompleteDelegate_Params ClearWriteUserFileCompleteDelegate_Params;
	memset(&ClearWriteUserFileCompleteDelegate_Params, 0, sizeof(ClearWriteUserFileCompleteDelegate_Params));
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static UFunction* uFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!uFnAddWriteUserFileCompleteDelegate)
	{
		uFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execAddWriteUserFileCompleteDelegate_Params AddWriteUserFileCompleteDelegate_Params;
	memset(&AddWriteUserFileCompleteDelegate_Params, 0, sizeof(AddWriteUserFileCompleteDelegate_Params));
	memcpy_s(&AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallWriteUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnCallWriteUserFileCompleteDelegates = nullptr;

	if (!uFnCallWriteUserFileCompleteDelegates)
	{
		uFnCallWriteUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates");
	}

	UMcpUserCloudFileDownload_execCallWriteUserFileCompleteDelegates_Params CallWriteUserFileCompleteDelegates_Params;
	memset(&CallWriteUserFileCompleteDelegates_Params, 0, sizeof(CallWriteUserFileCompleteDelegates_Params));
	CallWriteUserFileCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallWriteUserFileCompleteDelegates_Params.UserId, sizeof(CallWriteUserFileCompleteDelegates_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&CallWriteUserFileCompleteDelegates_Params.Filename, sizeof(CallWriteUserFileCompleteDelegates_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnCallWriteUserFileCompleteDelegates, &CallWriteUserFileCompleteDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnWriteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnOnWriteUserFileComplete = nullptr;

	if (!uFnOnWriteUserFileComplete)
	{
		uFnOnWriteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnWriteUserFileComplete_Params OnWriteUserFileComplete_Params;
	memset(&OnWriteUserFileComplete_Params, 0, sizeof(OnWriteUserFileComplete_Params));
	OnWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Params.UserId, sizeof(OnWriteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnWriteUserFileComplete_Params.Filename, sizeof(OnWriteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnHTTPRequestWriteUserFileComplete = nullptr;

	if (!uFnOnHTTPRequestWriteUserFileComplete)
	{
		uFnOnHTTPRequestWriteUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnHTTPRequestWriteUserFileComplete_Params OnHTTPRequestWriteUserFileComplete_Params;
	memset(&OnHTTPRequestWriteUserFileComplete_Params, 0, sizeof(OnHTTPRequestWriteUserFileComplete_Params));
	OnHTTPRequestWriteUserFileComplete_Params.Request = Request;
	OnHTTPRequestWriteUserFileComplete_Params.Response = Response;
	OnHTTPRequestWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnHTTPRequestWriteUserFileComplete, &OnHTTPRequestWriteUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// [0x00440003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// int32_t                        UserIdx                        (CPF_Parm | CPF_OutParm)
// int32_t                        FileIdx                        (CPF_Parm | CPF_OutParm)

void UMcpUserCloudFileDownload::GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int32_t& UserIdx, int32_t& FileIdx)
{
	static UFunction* uFnGetUserFileIndexForRequest = nullptr;

	if (!uFnGetUserFileIndexForRequest)
	{
		uFnGetUserFileIndexForRequest = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest");
	}

	UMcpUserCloudFileDownload_execGetUserFileIndexForRequest_Params GetUserFileIndexForRequest_Params;
	memset(&GetUserFileIndexForRequest_Params, 0, sizeof(GetUserFileIndexForRequest_Params));
	GetUserFileIndexForRequest_Params.Request = Request;
	memcpy_s(&GetUserFileIndexForRequest_Params.UserIdx, sizeof(GetUserFileIndexForRequest_Params.UserIdx), &UserIdx, sizeof(UserIdx));
	memcpy_s(&GetUserFileIndexForRequest_Params.FileIdx, sizeof(GetUserFileIndexForRequest_Params.FileIdx), &FileIdx, sizeof(FileIdx));

	this->ProcessEvent(uFnGetUserFileIndexForRequest, &GetUserFileIndexForRequest_Params, nullptr);

	memcpy_s(&UserIdx, sizeof(UserIdx), &GetUserFileIndexForRequest_Params.UserIdx, sizeof(GetUserFileIndexForRequest_Params.UserIdx));
	memcpy_s(&FileIdx, sizeof(FileIdx), &GetUserFileIndexForRequest_Params.FileIdx, sizeof(GetUserFileIndexForRequest_Params.FileIdx));
};

// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::WriteUserFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFile = nullptr;

	if (!uFnWriteUserFile)
	{
		uFnWriteUserFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.WriteUserFile");
	}

	UMcpUserCloudFileDownload_execWriteUserFile_Params WriteUserFile_Params;
	memset(&WriteUserFile_Params, 0, sizeof(WriteUserFile_Params));
	memcpy_s(&WriteUserFile_Params.UserId, sizeof(WriteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteUserFile_Params.Filename, sizeof(WriteUserFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents), &FileContents, sizeof(FileContents));

	this->ProcessEvent(uFnWriteUserFile, &WriteUserFile_Params, nullptr);

	memcpy_s(&FileContents, sizeof(FileContents), &WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents));

	return WriteUserFile_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static UFunction* uFnClearReadUserFileCompleteDelegate = nullptr;

	if (!uFnClearReadUserFileCompleteDelegate)
	{
		uFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execClearReadUserFileCompleteDelegate_Params ClearReadUserFileCompleteDelegate_Params;
	memset(&ClearReadUserFileCompleteDelegate_Params, 0, sizeof(ClearReadUserFileCompleteDelegate_Params));
	memcpy_s(&ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static UFunction* uFnAddReadUserFileCompleteDelegate = nullptr;

	if (!uFnAddReadUserFileCompleteDelegate)
	{
		uFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execAddReadUserFileCompleteDelegate_Params AddReadUserFileCompleteDelegate_Params;
	memset(&AddReadUserFileCompleteDelegate_Params, 0, sizeof(AddReadUserFileCompleteDelegate_Params));
	memcpy_s(&AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallReadUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnCallReadUserFileCompleteDelegates = nullptr;

	if (!uFnCallReadUserFileCompleteDelegates)
	{
		uFnCallReadUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates");
	}

	UMcpUserCloudFileDownload_execCallReadUserFileCompleteDelegates_Params CallReadUserFileCompleteDelegates_Params;
	memset(&CallReadUserFileCompleteDelegates_Params, 0, sizeof(CallReadUserFileCompleteDelegates_Params));
	CallReadUserFileCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallReadUserFileCompleteDelegates_Params.UserId, sizeof(CallReadUserFileCompleteDelegates_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&CallReadUserFileCompleteDelegates_Params.Filename, sizeof(CallReadUserFileCompleteDelegates_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnCallReadUserFileCompleteDelegates, &CallReadUserFileCompleteDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnReadUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnOnReadUserFileComplete = nullptr;

	if (!uFnOnReadUserFileComplete)
	{
		uFnOnReadUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnReadUserFileComplete_Params OnReadUserFileComplete_Params;
	memset(&OnReadUserFileComplete_Params, 0, sizeof(OnReadUserFileComplete_Params));
	OnReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Params.UserId, sizeof(OnReadUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnReadUserFileComplete_Params.Filename, sizeof(OnReadUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadUserFileComplete, &OnReadUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnHTTPRequestReadUserFileComplete = nullptr;

	if (!uFnOnHTTPRequestReadUserFileComplete)
	{
		uFnOnHTTPRequestReadUserFileComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete");
	}

	UMcpUserCloudFileDownload_execOnHTTPRequestReadUserFileComplete_Params OnHTTPRequestReadUserFileComplete_Params;
	memset(&OnHTTPRequestReadUserFileComplete_Params, 0, sizeof(OnHTTPRequestReadUserFileComplete_Params));
	OnHTTPRequestReadUserFileComplete_Params.Request = Request;
	OnHTTPRequestReadUserFileComplete_Params.Response = Response;
	OnHTTPRequestReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnHTTPRequestReadUserFileComplete, &OnHTTPRequestReadUserFileComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::ReadUserFile(const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnReadUserFile = nullptr;

	if (!uFnReadUserFile)
	{
		uFnReadUserFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ReadUserFile");
	}

	UMcpUserCloudFileDownload_execReadUserFile_Params ReadUserFile_Params;
	memset(&ReadUserFile_Params, 0, sizeof(ReadUserFile_Params));
	memcpy_s(&ReadUserFile_Params.UserId, sizeof(ReadUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ReadUserFile_Params.Filename, sizeof(ReadUserFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnReadUserFile, &ReadUserFile_Params, nullptr);

	return ReadUserFile_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FEmsFile>  UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::GetUserFileList(const class FString& UserId, class TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* uFnGetUserFileList = nullptr;

	if (!uFnGetUserFileList)
	{
		uFnGetUserFileList = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.GetUserFileList");
	}

	UMcpUserCloudFileDownload_execGetUserFileList_Params GetUserFileList_Params;
	memset(&GetUserFileList_Params, 0, sizeof(GetUserFileList_Params));
	memcpy_s(&GetUserFileList_Params.UserId, sizeof(GetUserFileList_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles), &UserFiles, sizeof(UserFiles));

	this->ProcessEvent(uFnGetUserFileList, &GetUserFileList_Params, nullptr);

	memcpy_s(&UserFiles, sizeof(UserFiles), &GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles));
};

// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnClearEnumerateUserFileCompleteDelegate)
	{
		uFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execClearEnumerateUserFileCompleteDelegate_Params ClearEnumerateUserFileCompleteDelegate_Params;
	memset(&ClearEnumerateUserFileCompleteDelegate_Params, 0, sizeof(ClearEnumerateUserFileCompleteDelegate_Params));
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnAddEnumerateUserFileCompleteDelegate)
	{
		uFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate");
	}

	UMcpUserCloudFileDownload_execAddEnumerateUserFileCompleteDelegate_Params AddEnumerateUserFileCompleteDelegate_Params;
	memset(&AddEnumerateUserFileCompleteDelegate_Params, 0, sizeof(AddEnumerateUserFileCompleteDelegate_Params));
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::CallEnumerateUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId)
{
	static UFunction* uFnCallEnumerateUserFileCompleteDelegates = nullptr;

	if (!uFnCallEnumerateUserFileCompleteDelegates)
	{
		uFnCallEnumerateUserFileCompleteDelegates = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates");
	}

	UMcpUserCloudFileDownload_execCallEnumerateUserFileCompleteDelegates_Params CallEnumerateUserFileCompleteDelegates_Params;
	memset(&CallEnumerateUserFileCompleteDelegates_Params, 0, sizeof(CallEnumerateUserFileCompleteDelegates_Params));
	CallEnumerateUserFileCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&CallEnumerateUserFileCompleteDelegates_Params.UserId, sizeof(CallEnumerateUserFileCompleteDelegates_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnCallEnumerateUserFileCompleteDelegates, &CallEnumerateUserFileCompleteDelegates_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::OnEnumerateUserFilesComplete(bool bWasSuccessful, const class FString& UserId)
{
	static UFunction* uFnOnEnumerateUserFilesComplete = nullptr;

	if (!uFnOnEnumerateUserFilesComplete)
	{
		uFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete");
	}

	UMcpUserCloudFileDownload_execOnEnumerateUserFilesComplete_Params OnEnumerateUserFilesComplete_Params;
	memset(&OnEnumerateUserFilesComplete_Params, 0, sizeof(OnEnumerateUserFilesComplete_Params));
	OnEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Params.UserId, sizeof(OnEnumerateUserFilesComplete_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnHTTPRequestEnumerateUserFilesComplete = nullptr;

	if (!uFnOnHTTPRequestEnumerateUserFilesComplete)
	{
		uFnOnHTTPRequestEnumerateUserFilesComplete = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete");
	}

	UMcpUserCloudFileDownload_execOnHTTPRequestEnumerateUserFilesComplete_Params OnHTTPRequestEnumerateUserFilesComplete_Params;
	memset(&OnHTTPRequestEnumerateUserFilesComplete_Params, 0, sizeof(OnHTTPRequestEnumerateUserFilesComplete_Params));
	OnHTTPRequestEnumerateUserFilesComplete_Params.Request = Request;
	OnHTTPRequestEnumerateUserFilesComplete_Params.Response = Response;
	OnHTTPRequestEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnHTTPRequestEnumerateUserFilesComplete, &OnHTTPRequestEnumerateUserFilesComplete_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserCloudFileDownload::EnumerateUserFiles(const class FString& UserId)
{
	static UFunction* uFnEnumerateUserFiles = nullptr;

	if (!uFnEnumerateUserFiles)
	{
		uFnEnumerateUserFiles = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles");
	}

	UMcpUserCloudFileDownload_execEnumerateUserFiles_Params EnumerateUserFiles_Params;
	memset(&EnumerateUserFiles_Params, 0, sizeof(EnumerateUserFiles_Params));
	memcpy_s(&EnumerateUserFiles_Params.UserId, sizeof(EnumerateUserFiles_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnEnumerateUserFiles, &EnumerateUserFiles_Params, nullptr);
};

// Function IpDrv.McpUserCloudFileDownload.ClearFile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::ClearFile(const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnClearFile = nullptr;

	if (!uFnClearFile)
	{
		uFnClearFile = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearFile");
	}

	UMcpUserCloudFileDownload_execClearFile_Params ClearFile_Params;
	memset(&ClearFile_Params, 0, sizeof(ClearFile_Params));
	memcpy_s(&ClearFile_Params.UserId, sizeof(ClearFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ClearFile_Params.Filename, sizeof(ClearFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnClearFile, &ClearFile_Params, nullptr);

	return ClearFile_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::ClearFiles(const class FString& UserId)
{
	static UFunction* uFnClearFiles = nullptr;

	if (!uFnClearFiles)
	{
		uFnClearFiles = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.ClearFiles");
	}

	UMcpUserCloudFileDownload_execClearFiles_Params ClearFiles_Params;
	memset(&ClearFiles_Params, 0, sizeof(ClearFiles_Params));
	memcpy_s(&ClearFiles_Params.UserId, sizeof(ClearFiles_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnClearFiles, &ClearFiles_Params, nullptr);

	return ClearFiles_Params.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMcpUserCloudFileDownload::GetFileContents(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetFileContents = nullptr;

	if (!uFnGetFileContents)
	{
		uFnGetFileContents = UFunction::FindFunction("Function IpDrv.McpUserCloudFileDownload.GetFileContents");
	}

	UMcpUserCloudFileDownload_execGetFileContents_Params GetFileContents_Params;
	memset(&GetFileContents_Params, 0, sizeof(GetFileContents_Params));
	memcpy_s(&GetFileContents_Params.UserId, sizeof(GetFileContents_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetFileContents_Params.Filename, sizeof(GetFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	this->ProcessEvent(uFnGetFileContents, &GetFileContents_Params, nullptr);

	memcpy_s(&FileContents, sizeof(FileContents), &GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents));

	return GetFileContents_Params.ReturnValue;
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13147])
// Parameter Info:

void UMeshBeacon::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.MeshBeacon.DestroyBeacon");
	}

	UMeshBeacon_eventDestroyBeacon_Params DestroyBeacon_Params;
	memset(&DestroyBeacon_Params, 0, sizeof(DestroyBeacon_Params));

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33069])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bSuccess                       (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

bool UMeshBeaconClient::SendHostNewGameSessionResponse(bool bSuccess, const class FName& SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnSendHostNewGameSessionResponse = nullptr;

	if (!uFnSendHostNewGameSessionResponse)
	{
		uFnSendHostNewGameSessionResponse = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse");
	}

	UMeshBeaconClient_execSendHostNewGameSessionResponse_Params SendHostNewGameSessionResponse_Params;
	memset(&SendHostNewGameSessionResponse_Params, 0, sizeof(SendHostNewGameSessionResponse_Params));
	SendHostNewGameSessionResponse_Params.bSuccess = bSuccess;
	memcpy_s(&SendHostNewGameSessionResponse_Params.SessionName, sizeof(SendHostNewGameSessionResponse_Params.SessionName), &SessionName, sizeof(SessionName));
	SendHostNewGameSessionResponse_Params.SearchClass = SearchClass;
	memcpy_s(&SendHostNewGameSessionResponse_Params.PlatformSpecificInfo, sizeof(SendHostNewGameSessionResponse_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnSendHostNewGameSessionResponse, &SendHostNewGameSessionResponse_Params, nullptr);

	memcpy_s(&PlatformSpecificInfo, sizeof(PlatformSpecificInfo), &SendHostNewGameSessionResponse_Params.PlatformSpecificInfo, sizeof(SendHostNewGameSessionResponse_Params.PlatformSpecificInfo));

	return SendHostNewGameSessionResponse_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// class TArray<struct FPlayerMember> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMeshBeaconClient::OnCreateNewSessionRequestReceived(const class FName& SessionName, class UClass* SearchClass, class TArray<struct FPlayerMember>& Players)
{
	static UFunction* uFnOnCreateNewSessionRequestReceived = nullptr;

	if (!uFnOnCreateNewSessionRequestReceived)
	{
		uFnOnCreateNewSessionRequestReceived = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived");
	}

	UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Params OnCreateNewSessionRequestReceived_Params;
	memset(&OnCreateNewSessionRequestReceived_Params, 0, sizeof(OnCreateNewSessionRequestReceived_Params));
	memcpy_s(&OnCreateNewSessionRequestReceived_Params.SessionName, sizeof(OnCreateNewSessionRequestReceived_Params.SessionName), &SessionName, sizeof(SessionName));
	OnCreateNewSessionRequestReceived_Params.SearchClass = SearchClass;
	memcpy_s(&OnCreateNewSessionRequestReceived_Params.Players, sizeof(OnCreateNewSessionRequestReceived_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnOnCreateNewSessionRequestReceived, &OnCreateNewSessionRequestReceived_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &OnCreateNewSessionRequestReceived_Params.Players, sizeof(OnCreateNewSessionRequestReceived_Params.Players));
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconClient::OnTravelRequestReceived(const class FName& SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnOnTravelRequestReceived = nullptr;

	if (!uFnOnTravelRequestReceived)
	{
		uFnOnTravelRequestReceived = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnTravelRequestReceived");
	}

	UMeshBeaconClient_execOnTravelRequestReceived_Params OnTravelRequestReceived_Params;
	memset(&OnTravelRequestReceived_Params, 0, sizeof(OnTravelRequestReceived_Params));
	memcpy_s(&OnTravelRequestReceived_Params.SessionName, sizeof(OnTravelRequestReceived_Params.SessionName), &SessionName, sizeof(SessionName));
	OnTravelRequestReceived_Params.SearchClass = SearchClass;
	memcpy_s(&OnTravelRequestReceived_Params.PlatformSpecificInfo, sizeof(OnTravelRequestReceived_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnOnTravelRequestReceived, &OnTravelRequestReceived_Params, nullptr);

	memcpy_s(&PlatformSpecificInfo, sizeof(PlatformSpecificInfo), &OnTravelRequestReceived_Params.PlatformSpecificInfo, sizeof(OnTravelRequestReceived_Params.PlatformSpecificInfo));
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EMeshBeaconBandwidthTestType   TestType                       (CPF_Parm)
// EMeshBeaconBandwidthTestResult TestResult                     (CPF_Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconClient::OnReceivedBandwidthTestResults(EMeshBeaconBandwidthTestType TestType, EMeshBeaconBandwidthTestResult TestResult, struct FConnectionBandwidthStats& BandwidthStats)
{
	static UFunction* uFnOnReceivedBandwidthTestResults = nullptr;

	if (!uFnOnReceivedBandwidthTestResults)
	{
		uFnOnReceivedBandwidthTestResults = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults");
	}

	UMeshBeaconClient_execOnReceivedBandwidthTestResults_Params OnReceivedBandwidthTestResults_Params;
	memset(&OnReceivedBandwidthTestResults_Params, 0, sizeof(OnReceivedBandwidthTestResults_Params));
	memcpy_s(&OnReceivedBandwidthTestResults_Params.TestType, sizeof(OnReceivedBandwidthTestResults_Params.TestType), &TestType, sizeof(TestType));
	memcpy_s(&OnReceivedBandwidthTestResults_Params.TestResult, sizeof(OnReceivedBandwidthTestResults_Params.TestResult), &TestResult, sizeof(TestResult));
	memcpy_s(&OnReceivedBandwidthTestResults_Params.BandwidthStats, sizeof(OnReceivedBandwidthTestResults_Params.BandwidthStats), &BandwidthStats, sizeof(BandwidthStats));

	this->ProcessEvent(uFnOnReceivedBandwidthTestResults, &OnReceivedBandwidthTestResults_Params, nullptr);

	memcpy_s(&BandwidthStats, sizeof(BandwidthStats), &OnReceivedBandwidthTestResults_Params.BandwidthStats, sizeof(OnReceivedBandwidthTestResults_Params.BandwidthStats));
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EMeshBeaconBandwidthTestType   TestType                       (CPF_Parm)

void UMeshBeaconClient::OnReceivedBandwidthTestRequest(EMeshBeaconBandwidthTestType TestType)
{
	static UFunction* uFnOnReceivedBandwidthTestRequest = nullptr;

	if (!uFnOnReceivedBandwidthTestRequest)
	{
		uFnOnReceivedBandwidthTestRequest = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest");
	}

	UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Params OnReceivedBandwidthTestRequest_Params;
	memset(&OnReceivedBandwidthTestRequest_Params, 0, sizeof(OnReceivedBandwidthTestRequest_Params));
	memcpy_s(&OnReceivedBandwidthTestRequest_Params.TestType, sizeof(OnReceivedBandwidthTestRequest_Params.TestType), &TestType, sizeof(TestType));

	this->ProcessEvent(uFnOnReceivedBandwidthTestRequest, &OnReceivedBandwidthTestRequest_Params, nullptr);
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EMeshBeaconConnectionResult    ConnectionResult               (CPF_Parm)

void UMeshBeaconClient::OnConnectionRequestResult(EMeshBeaconConnectionResult ConnectionResult)
{
	static UFunction* uFnOnConnectionRequestResult = nullptr;

	if (!uFnOnConnectionRequestResult)
	{
		uFnOnConnectionRequestResult = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.OnConnectionRequestResult");
	}

	UMeshBeaconClient_execOnConnectionRequestResult_Params OnConnectionRequestResult_Params;
	memset(&OnConnectionRequestResult_Params, 0, sizeof(OnConnectionRequestResult_Params));
	memcpy_s(&OnConnectionRequestResult_Params.ConnectionResult, sizeof(OnConnectionRequestResult_Params.ConnectionResult), &ConnectionResult, sizeof(ConnectionResult));

	this->ProcessEvent(uFnOnConnectionRequestResult, &OnConnectionRequestResult_Params, nullptr);
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32280])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// EMeshBeaconBandwidthTestType   TestType                       (CPF_Parm)
// int32_t                        TestBufferSize                 (CPF_Parm)

bool UMeshBeaconClient::BeginBandwidthTest(EMeshBeaconBandwidthTestType TestType, int32_t TestBufferSize)
{
	static UFunction* uFnBeginBandwidthTest = nullptr;

	if (!uFnBeginBandwidthTest)
	{
		uFnBeginBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.BeginBandwidthTest");
	}

	UMeshBeaconClient_execBeginBandwidthTest_Params BeginBandwidthTest_Params;
	memset(&BeginBandwidthTest_Params, 0, sizeof(BeginBandwidthTest_Params));
	memcpy_s(&BeginBandwidthTest_Params.TestType, sizeof(BeginBandwidthTest_Params.TestType), &TestType, sizeof(TestType));
	memcpy_s(&BeginBandwidthTest_Params.TestBufferSize, sizeof(BeginBandwidthTest_Params.TestBufferSize), &TestBufferSize, sizeof(TestBufferSize));

	this->ProcessEvent(uFnBeginBandwidthTest, &BeginBandwidthTest_Params, nullptr);

	return BeginBandwidthTest_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33029])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bRegisterSecureAddress         (CPF_Parm)
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FClientConnectionRequest ClientRequest                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMeshBeaconClient::RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult& DesiredHost, struct FClientConnectionRequest& ClientRequest)
{
	static UFunction* uFnRequestConnection = nullptr;

	if (!uFnRequestConnection)
	{
		uFnRequestConnection = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.RequestConnection");
	}

	UMeshBeaconClient_execRequestConnection_Params RequestConnection_Params;
	memset(&RequestConnection_Params, 0, sizeof(RequestConnection_Params));
	RequestConnection_Params.bRegisterSecureAddress = bRegisterSecureAddress;
	memcpy_s(&RequestConnection_Params.DesiredHost, sizeof(RequestConnection_Params.DesiredHost), &DesiredHost, sizeof(DesiredHost));
	memcpy_s(&RequestConnection_Params.ClientRequest, sizeof(RequestConnection_Params.ClientRequest), &ClientRequest, sizeof(ClientRequest));

	this->ProcessEvent(uFnRequestConnection, &RequestConnection_Params, nullptr);

	memcpy_s(&DesiredHost, sizeof(DesiredHost), &RequestConnection_Params.DesiredHost, sizeof(RequestConnection_Params.DesiredHost));
	memcpy_s(&ClientRequest, sizeof(ClientRequest), &RequestConnection_Params.ClientRequest, sizeof(RequestConnection_Params.ClientRequest));

	return RequestConnection_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13147])
// Parameter Info:

void UMeshBeaconClient::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.MeshBeaconClient.DestroyBeacon");
	}

	UMeshBeaconClient_eventDestroyBeacon_Params DestroyBeacon_Params;
	memset(&DestroyBeacon_Params, 0, sizeof(DestroyBeacon_Params));

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bSucceeded                     (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult(bool bSucceeded, const class FName& SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnOnReceivedClientCreateNewSessionResult = nullptr;

	if (!uFnOnReceivedClientCreateNewSessionResult)
	{
		uFnOnReceivedClientCreateNewSessionResult = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult");
	}

	UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Params OnReceivedClientCreateNewSessionResult_Params;
	memset(&OnReceivedClientCreateNewSessionResult_Params, 0, sizeof(OnReceivedClientCreateNewSessionResult_Params));
	OnReceivedClientCreateNewSessionResult_Params.bSucceeded = bSucceeded;
	memcpy_s(&OnReceivedClientCreateNewSessionResult_Params.SessionName, sizeof(OnReceivedClientCreateNewSessionResult_Params.SessionName), &SessionName, sizeof(SessionName));
	OnReceivedClientCreateNewSessionResult_Params.SearchClass = SearchClass;
	memcpy_s(&OnReceivedClientCreateNewSessionResult_Params.PlatformSpecificInfo, sizeof(OnReceivedClientCreateNewSessionResult_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnOnReceivedClientCreateNewSessionResult, &OnReceivedClientCreateNewSessionResult_Params, nullptr);

	memcpy_s(&PlatformSpecificInfo, sizeof(PlatformSpecificInfo), &OnReceivedClientCreateNewSessionResult_Params.PlatformSpecificInfo, sizeof(OnReceivedClientCreateNewSessionResult_Params.PlatformSpecificInfo));
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33028])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// class TArray<struct FPlayerMember> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMeshBeaconHost::RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const class FName& SessionName, class UClass* SearchClass, class TArray<struct FPlayerMember>& Players)
{
	static UFunction* uFnRequestClientCreateNewSession = nullptr;

	if (!uFnRequestClientCreateNewSession)
	{
		uFnRequestClientCreateNewSession = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession");
	}

	UMeshBeaconHost_execRequestClientCreateNewSession_Params RequestClientCreateNewSession_Params;
	memset(&RequestClientCreateNewSession_Params, 0, sizeof(RequestClientCreateNewSession_Params));
	memcpy_s(&RequestClientCreateNewSession_Params.PlayerNetId, sizeof(RequestClientCreateNewSession_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	memcpy_s(&RequestClientCreateNewSession_Params.SessionName, sizeof(RequestClientCreateNewSession_Params.SessionName), &SessionName, sizeof(SessionName));
	RequestClientCreateNewSession_Params.SearchClass = SearchClass;
	memcpy_s(&RequestClientCreateNewSession_Params.Players, sizeof(RequestClientCreateNewSession_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnRequestClientCreateNewSession, &RequestClientCreateNewSession_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &RequestClientCreateNewSession_Params.Players, sizeof(RequestClientCreateNewSession_Params.Players));

	return RequestClientCreateNewSession_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33114])
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconHost::TellClientsToTravel(const class FName& SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnTellClientsToTravel = nullptr;

	if (!uFnTellClientsToTravel)
	{
		uFnTellClientsToTravel = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.TellClientsToTravel");
	}

	UMeshBeaconHost_execTellClientsToTravel_Params TellClientsToTravel_Params;
	memset(&TellClientsToTravel_Params, 0, sizeof(TellClientsToTravel_Params));
	memcpy_s(&TellClientsToTravel_Params.SessionName, sizeof(TellClientsToTravel_Params.SessionName), &SessionName, sizeof(SessionName));
	TellClientsToTravel_Params.SearchClass = SearchClass;
	memcpy_s(&TellClientsToTravel_Params.PlatformSpecificInfo, sizeof(TellClientsToTravel_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnTellClientsToTravel, &TellClientsToTravel_Params, nullptr);

	memcpy_s(&PlatformSpecificInfo, sizeof(PlatformSpecificInfo), &TellClientsToTravel_Params.PlatformSpecificInfo, sizeof(TellClientsToTravel_Params.PlatformSpecificInfo));
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UMeshBeaconHost::OnAllPendingPlayersConnected()
{
	static UFunction* uFnOnAllPendingPlayersConnected = nullptr;

	if (!uFnOnAllPendingPlayersConnected)
	{
		uFnOnAllPendingPlayersConnected = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected");
	}

	UMeshBeaconHost_execOnAllPendingPlayersConnected_Params OnAllPendingPlayersConnected_Params;
	memset(&OnAllPendingPlayersConnected_Params, 0, sizeof(OnAllPendingPlayersConnected_Params));

	this->ProcessEvent(uFnOnAllPendingPlayersConnected, &OnAllPendingPlayersConnected_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32248])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UMeshBeaconHost::AllPlayersConnected(class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnAllPlayersConnected = nullptr;

	if (!uFnAllPlayersConnected)
	{
		uFnAllPlayersConnected = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.AllPlayersConnected");
	}

	UMeshBeaconHost_execAllPlayersConnected_Params AllPlayersConnected_Params;
	memset(&AllPlayersConnected_Params, 0, sizeof(AllPlayersConnected_Params));
	memcpy_s(&AllPlayersConnected_Params.Players, sizeof(AllPlayersConnected_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnAllPlayersConnected, &AllPlayersConnected_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &AllPlayersConnected_Params.Players, sizeof(AllPlayersConnected_Params.Players));

	return AllPlayersConnected_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32541])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)

int32_t UMeshBeaconHost::GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId)
{
	static UFunction* uFnGetConnectionIndexForPlayer = nullptr;

	if (!uFnGetConnectionIndexForPlayer)
	{
		uFnGetConnectionIndexForPlayer = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer");
	}

	UMeshBeaconHost_execGetConnectionIndexForPlayer_Params GetConnectionIndexForPlayer_Params;
	memset(&GetConnectionIndexForPlayer_Params, 0, sizeof(GetConnectionIndexForPlayer_Params));
	memcpy_s(&GetConnectionIndexForPlayer_Params.PlayerNetId, sizeof(GetConnectionIndexForPlayer_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));

	this->ProcessEvent(uFnGetConnectionIndexForPlayer, &GetConnectionIndexForPlayer_Params, nullptr);

	return GetConnectionIndexForPlayer_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMeshBeaconHost::SetPendingPlayerConnections(class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnSetPendingPlayerConnections = nullptr;

	if (!uFnSetPendingPlayerConnections)
	{
		uFnSetPendingPlayerConnections = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections");
	}

	UMeshBeaconHost_execSetPendingPlayerConnections_Params SetPendingPlayerConnections_Params;
	memset(&SetPendingPlayerConnections_Params, 0, sizeof(SetPendingPlayerConnections_Params));
	memcpy_s(&SetPendingPlayerConnections_Params.Players, sizeof(SetPendingPlayerConnections_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnSetPendingPlayerConnections, &SetPendingPlayerConnections_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &SetPendingPlayerConnections_Params.Players, sizeof(SetPendingPlayerConnections_Params.Players));
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)
// EMeshBeaconBandwidthTestType   TestType                       (CPF_Parm)
// EMeshBeaconBandwidthTestResult TestResult                     (CPF_Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (CPF_Const | CPF_Parm | CPF_OutParm)

void UMeshBeaconHost::OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, EMeshBeaconBandwidthTestType TestType, EMeshBeaconBandwidthTestResult TestResult, struct FConnectionBandwidthStats& BandwidthStats)
{
	static UFunction* uFnOnFinishedBandwidthTest = nullptr;

	if (!uFnOnFinishedBandwidthTest)
	{
		uFnOnFinishedBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest");
	}

	UMeshBeaconHost_execOnFinishedBandwidthTest_Params OnFinishedBandwidthTest_Params;
	memset(&OnFinishedBandwidthTest_Params, 0, sizeof(OnFinishedBandwidthTest_Params));
	memcpy_s(&OnFinishedBandwidthTest_Params.PlayerNetId, sizeof(OnFinishedBandwidthTest_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	memcpy_s(&OnFinishedBandwidthTest_Params.TestType, sizeof(OnFinishedBandwidthTest_Params.TestType), &TestType, sizeof(TestType));
	memcpy_s(&OnFinishedBandwidthTest_Params.TestResult, sizeof(OnFinishedBandwidthTest_Params.TestResult), &TestResult, sizeof(TestResult));
	memcpy_s(&OnFinishedBandwidthTest_Params.BandwidthStats, sizeof(OnFinishedBandwidthTest_Params.BandwidthStats), &BandwidthStats, sizeof(BandwidthStats));

	this->ProcessEvent(uFnOnFinishedBandwidthTest, &OnFinishedBandwidthTest_Params, nullptr);

	memcpy_s(&BandwidthStats, sizeof(BandwidthStats), &OnFinishedBandwidthTest_Params.BandwidthStats, sizeof(OnFinishedBandwidthTest_Params.BandwidthStats));
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)
// EMeshBeaconBandwidthTestType   TestType                       (CPF_Parm)

void UMeshBeaconHost::OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, EMeshBeaconBandwidthTestType TestType)
{
	static UFunction* uFnOnStartedBandwidthTest = nullptr;

	if (!uFnOnStartedBandwidthTest)
	{
		uFnOnStartedBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest");
	}

	UMeshBeaconHost_execOnStartedBandwidthTest_Params OnStartedBandwidthTest_Params;
	memset(&OnStartedBandwidthTest_Params, 0, sizeof(OnStartedBandwidthTest_Params));
	memcpy_s(&OnStartedBandwidthTest_Params.PlayerNetId, sizeof(OnStartedBandwidthTest_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	memcpy_s(&OnStartedBandwidthTest_Params.TestType, sizeof(OnStartedBandwidthTest_Params.TestType), &TestType, sizeof(TestType));

	this->ProcessEvent(uFnOnStartedBandwidthTest, &OnStartedBandwidthTest_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FClientMeshBeaconConnection NewClientConnection            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMeshBeaconHost::OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection& NewClientConnection)
{
	static UFunction* uFnOnReceivedClientConnectionRequest = nullptr;

	if (!uFnOnReceivedClientConnectionRequest)
	{
		uFnOnReceivedClientConnectionRequest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest");
	}

	UMeshBeaconHost_execOnReceivedClientConnectionRequest_Params OnReceivedClientConnectionRequest_Params;
	memset(&OnReceivedClientConnectionRequest_Params, 0, sizeof(OnReceivedClientConnectionRequest_Params));
	memcpy_s(&OnReceivedClientConnectionRequest_Params.NewClientConnection, sizeof(OnReceivedClientConnectionRequest_Params.NewClientConnection), &NewClientConnection, sizeof(NewClientConnection));

	this->ProcessEvent(uFnOnReceivedClientConnectionRequest, &OnReceivedClientConnectionRequest_Params, nullptr);

	memcpy_s(&NewClientConnection, sizeof(NewClientConnection), &OnReceivedClientConnectionRequest_Params.NewClientConnection, sizeof(OnReceivedClientConnectionRequest_Params.NewClientConnection));
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bEnabled                       (CPF_Parm)

void UMeshBeaconHost::AllowBandwidthTesting(bool bEnabled)
{
	static UFunction* uFnAllowBandwidthTesting = nullptr;

	if (!uFnAllowBandwidthTesting)
	{
		uFnAllowBandwidthTesting = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.AllowBandwidthTesting");
	}

	UMeshBeaconHost_execAllowBandwidthTesting_Params AllowBandwidthTesting_Params;
	memset(&AllowBandwidthTesting_Params, 0, sizeof(AllowBandwidthTesting_Params));
	AllowBandwidthTesting_Params.bEnabled = bEnabled;

	this->ProcessEvent(uFnAllowBandwidthTesting, &AllowBandwidthTesting_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32320])
// Parameter Info:

void UMeshBeaconHost::CancelPendingBandwidthTests()
{
	static UFunction* uFnCancelPendingBandwidthTests = nullptr;

	if (!uFnCancelPendingBandwidthTests)
	{
		uFnCancelPendingBandwidthTests = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests");
	}

	UMeshBeaconHost_execCancelPendingBandwidthTests_Params CancelPendingBandwidthTests_Params;
	memset(&CancelPendingBandwidthTests_Params, 0, sizeof(CancelPendingBandwidthTests_Params));

	this->ProcessEvent(uFnCancelPendingBandwidthTests, &CancelPendingBandwidthTests_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32595])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMeshBeaconHost::HasPendingBandwidthTest()
{
	static UFunction* uFnHasPendingBandwidthTest = nullptr;

	if (!uFnHasPendingBandwidthTest)
	{
		uFnHasPendingBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest");
	}

	UMeshBeaconHost_execHasPendingBandwidthTest_Params HasPendingBandwidthTest_Params;
	memset(&HasPendingBandwidthTest_Params, 0, sizeof(HasPendingBandwidthTest_Params));

	this->ProcessEvent(uFnHasPendingBandwidthTest, &HasPendingBandwidthTest_Params, nullptr);

	return HasPendingBandwidthTest_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32318])
// Parameter Info:

void UMeshBeaconHost::CancelInProgressBandwidthTests()
{
	static UFunction* uFnCancelInProgressBandwidthTests = nullptr;

	if (!uFnCancelInProgressBandwidthTests)
	{
		uFnCancelInProgressBandwidthTests = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests");
	}

	UMeshBeaconHost_execCancelInProgressBandwidthTests_Params CancelInProgressBandwidthTests_Params;
	memset(&CancelInProgressBandwidthTests_Params, 0, sizeof(CancelInProgressBandwidthTests_Params));

	this->ProcessEvent(uFnCancelInProgressBandwidthTests, &CancelInProgressBandwidthTests_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32594])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMeshBeaconHost::HasInProgressBandwidthTest()
{
	static UFunction* uFnHasInProgressBandwidthTest = nullptr;

	if (!uFnHasInProgressBandwidthTest)
	{
		uFnHasInProgressBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest");
	}

	UMeshBeaconHost_execHasInProgressBandwidthTest_Params HasInProgressBandwidthTest_Params;
	memset(&HasInProgressBandwidthTest_Params, 0, sizeof(HasInProgressBandwidthTest_Params));

	this->ProcessEvent(uFnHasInProgressBandwidthTest, &HasInProgressBandwidthTest_Params, nullptr);

	return HasInProgressBandwidthTest_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33027])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerNetId                    (CPF_Parm)
// EMeshBeaconBandwidthTestType   TestType                       (CPF_Parm)
// int32_t                        TestBufferSize                 (CPF_Parm)

bool UMeshBeaconHost::RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, EMeshBeaconBandwidthTestType TestType, int32_t TestBufferSize)
{
	static UFunction* uFnRequestClientBandwidthTest = nullptr;

	if (!uFnRequestClientBandwidthTest)
	{
		uFnRequestClientBandwidthTest = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest");
	}

	UMeshBeaconHost_execRequestClientBandwidthTest_Params RequestClientBandwidthTest_Params;
	memset(&RequestClientBandwidthTest_Params, 0, sizeof(RequestClientBandwidthTest_Params));
	memcpy_s(&RequestClientBandwidthTest_Params.PlayerNetId, sizeof(RequestClientBandwidthTest_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	memcpy_s(&RequestClientBandwidthTest_Params.TestType, sizeof(RequestClientBandwidthTest_Params.TestType), &TestType, sizeof(TestType));
	memcpy_s(&RequestClientBandwidthTest_Params.TestBufferSize, sizeof(RequestClientBandwidthTest_Params.TestBufferSize), &TestBufferSize, sizeof(TestBufferSize));

	this->ProcessEvent(uFnRequestClientBandwidthTest, &RequestClientBandwidthTest_Params, nullptr);

	return RequestClientBandwidthTest_Params.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13147])
// Parameter Info:

void UMeshBeaconHost::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.DestroyBeacon");
	}

	UMeshBeaconHost_eventDestroyBeacon_Params DestroyBeacon_Params;
	memset(&DestroyBeacon_Params, 0, sizeof(DestroyBeacon_Params));

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32613])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            InOwningPlayerId               (CPF_Parm)

bool UMeshBeaconHost::InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId)
{
	static UFunction* uFnInitHostBeacon = nullptr;

	if (!uFnInitHostBeacon)
	{
		uFnInitHostBeacon = UFunction::FindFunction("Function IpDrv.MeshBeaconHost.InitHostBeacon");
	}

	UMeshBeaconHost_execInitHostBeacon_Params InitHostBeacon_Params;
	memset(&InitHostBeacon_Params, 0, sizeof(InitHostBeacon_Params));
	memcpy_s(&InitHostBeacon_Params.InOwningPlayerId, sizeof(InitHostBeacon_Params.InOwningPlayerId), &InOwningPlayerId, sizeof(InOwningPlayerId));

	this->ProcessEvent(uFnInitHostBeacon, &InitHostBeacon_Params, nullptr);

	return InitHostBeacon_Params.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> OutRegisteredPlayers           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& OutRegisteredPlayers)
{
	static UFunction* uFnGetRegisteredPlayers = nullptr;

	if (!uFnGetRegisteredPlayers)
	{
		uFnGetRegisteredPlayers = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers");
	}

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params GetRegisteredPlayers_Params;
	memset(&GetRegisteredPlayers_Params, 0, sizeof(GetRegisteredPlayers_Params));
	memcpy_s(&GetRegisteredPlayers_Params.SessionName, sizeof(GetRegisteredPlayers_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&GetRegisteredPlayers_Params.OutRegisteredPlayers, sizeof(GetRegisteredPlayers_Params.OutRegisteredPlayers), &OutRegisteredPlayers, sizeof(OutRegisteredPlayers));

	this->ProcessEvent(uFnGetRegisteredPlayers, &GetRegisteredPlayers_Params, nullptr);

	memcpy_s(&OutRegisteredPlayers, sizeof(OutRegisteredPlayers), &GetRegisteredPlayers_Params.OutRegisteredPlayers, sizeof(GetRegisteredPlayers_Params.OutRegisteredPlayers));
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32629])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(const class FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsPlayerInSession = nullptr;

	if (!uFnIsPlayerInSession)
	{
		uFnIsPlayerInSession = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession");
	}

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params IsPlayerInSession_Params;
	memset(&IsPlayerInSession_Params, 0, sizeof(IsPlayerInSession_Params));
	memcpy_s(&IsPlayerInSession_Params.SessionName, sizeof(IsPlayerInSession_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&IsPlayerInSession_Params.PlayerID, sizeof(IsPlayerInSession_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnIsPlayerInSession, &IsPlayerInSession_Params, nullptr);

	return IsPlayerInSession_Params.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memset(&GetPlayerNicknameFromIndex_Params, 0, sizeof(GetPlayerNicknameFromIndex_Params));
	memcpy_s(&GetPlayerNicknameFromIndex_Params.UserIndex, sizeof(GetPlayerNicknameFromIndex_Params.UserIndex), &UserIndex, sizeof(UserIndex));

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        OutServerIP                    (CPF_Parm | CPF_OutParm)
// int32_t                        OutServerPort                  (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::GetServerAddr(int32_t& OutServerIP, int32_t& OutServerPort)
{
	static UFunction* uFnGetServerAddr = nullptr;

	if (!uFnGetServerAddr)
	{
		uFnGetServerAddr = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr");
	}

	UOnlineAuthInterfaceImpl_execGetServerAddr_Params GetServerAddr_Params;
	memset(&GetServerAddr_Params, 0, sizeof(GetServerAddr_Params));
	memcpy_s(&GetServerAddr_Params.OutServerIP, sizeof(GetServerAddr_Params.OutServerIP), &OutServerIP, sizeof(OutServerIP));
	memcpy_s(&GetServerAddr_Params.OutServerPort, sizeof(GetServerAddr_Params.OutServerPort), &OutServerPort, sizeof(OutServerPort));

	this->ProcessEvent(uFnGetServerAddr, &GetServerAddr_Params, nullptr);

	memcpy_s(&OutServerIP, sizeof(OutServerIP), &GetServerAddr_Params.OutServerIP, sizeof(GetServerAddr_Params.OutServerIP));
	memcpy_s(&OutServerPort, sizeof(OutServerPort), &GetServerAddr_Params.OutServerPort, sizeof(GetServerAddr_Params.OutServerPort));

	return GetServerAddr_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            OutServerUID                   (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::GetServerUniqueId(struct FUniqueNetId& OutServerUID)
{
	static UFunction* uFnGetServerUniqueId = nullptr;

	if (!uFnGetServerUniqueId)
	{
		uFnGetServerUniqueId = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId");
	}

	UOnlineAuthInterfaceImpl_execGetServerUniqueId_Params GetServerUniqueId_Params;
	memset(&GetServerUniqueId_Params, 0, sizeof(GetServerUniqueId_Params));
	memcpy_s(&GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID), &OutServerUID, sizeof(OutServerUID));

	this->ProcessEvent(uFnGetServerUniqueId, &GetServerUniqueId_Params, nullptr);

	memcpy_s(&OutServerUID, sizeof(OutServerUID), &GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID));

	return GetServerUniqueId_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21001])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* uFnFindLocalServerAuthSession = nullptr;

	if (!uFnFindLocalServerAuthSession)
	{
		uFnFindLocalServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Params FindLocalServerAuthSession_Params;
	memset(&FindLocalServerAuthSession_Params, 0, sizeof(FindLocalServerAuthSession_Params));
	FindLocalServerAuthSession_Params.ClientConnection = ClientConnection;
	memcpy_s(&FindLocalServerAuthSession_Params.OutSessionInfo, sizeof(FindLocalServerAuthSession_Params.OutSessionInfo), &OutSessionInfo, sizeof(OutSessionInfo));

	this->ProcessEvent(uFnFindLocalServerAuthSession, &FindLocalServerAuthSession_Params, nullptr);

	memcpy_s(&OutSessionInfo, sizeof(OutSessionInfo), &FindLocalServerAuthSession_Params.OutSessionInfo, sizeof(FindLocalServerAuthSession_Params.OutSessionInfo));

	return FindLocalServerAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21027])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession& OutSessionInfo)
{
	static UFunction* uFnFindServerAuthSession = nullptr;

	if (!uFnFindServerAuthSession)
	{
		uFnFindServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindServerAuthSession_Params FindServerAuthSession_Params;
	memset(&FindServerAuthSession_Params, 0, sizeof(FindServerAuthSession_Params));
	FindServerAuthSession_Params.ServerConnection = ServerConnection;
	memcpy_s(&FindServerAuthSession_Params.OutSessionInfo, sizeof(FindServerAuthSession_Params.OutSessionInfo), &OutSessionInfo, sizeof(OutSessionInfo));

	this->ProcessEvent(uFnFindServerAuthSession, &FindServerAuthSession_Params, nullptr);

	memcpy_s(&OutSessionInfo, sizeof(OutSessionInfo), &FindServerAuthSession_Params.OutSessionInfo, sizeof(FindServerAuthSession_Params.OutSessionInfo));

	return FindServerAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[20999])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* uFnFindLocalClientAuthSession = nullptr;

	if (!uFnFindLocalClientAuthSession)
	{
		uFnFindLocalClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Params FindLocalClientAuthSession_Params;
	memset(&FindLocalClientAuthSession_Params, 0, sizeof(FindLocalClientAuthSession_Params));
	FindLocalClientAuthSession_Params.ServerConnection = ServerConnection;
	memcpy_s(&FindLocalClientAuthSession_Params.OutSessionInfo, sizeof(FindLocalClientAuthSession_Params.OutSessionInfo), &OutSessionInfo, sizeof(OutSessionInfo));

	this->ProcessEvent(uFnFindLocalClientAuthSession, &FindLocalClientAuthSession_Params, nullptr);

	memcpy_s(&OutSessionInfo, sizeof(OutSessionInfo), &FindLocalClientAuthSession_Params.OutSessionInfo, sizeof(FindLocalClientAuthSession_Params.OutSessionInfo));

	return FindLocalClientAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[20974])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession& OutSessionInfo)
{
	static UFunction* uFnFindClientAuthSession = nullptr;

	if (!uFnFindClientAuthSession)
	{
		uFnFindClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindClientAuthSession_Params FindClientAuthSession_Params;
	memset(&FindClientAuthSession_Params, 0, sizeof(FindClientAuthSession_Params));
	FindClientAuthSession_Params.ClientConnection = ClientConnection;
	memcpy_s(&FindClientAuthSession_Params.OutSessionInfo, sizeof(FindClientAuthSession_Params.OutSessionInfo), &OutSessionInfo, sizeof(OutSessionInfo));

	this->ProcessEvent(uFnFindClientAuthSession, &FindClientAuthSession_Params, nullptr);

	memcpy_s(&OutSessionInfo, sizeof(OutSessionInfo), &FindClientAuthSession_Params.OutSessionInfo, sizeof(FindClientAuthSession_Params.OutSessionInfo));

	return FindClientAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420404] (FUNC_Iterator | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[14794])
// Parameter Info:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllLocalServerAuthSessions(struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* uFnAllLocalServerAuthSessions = nullptr;

	if (!uFnAllLocalServerAuthSessions)
	{
		uFnAllLocalServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Params AllLocalServerAuthSessions_Params;
	memset(&AllLocalServerAuthSessions_Params, 0, sizeof(AllLocalServerAuthSessions_Params));
	memcpy_s(&AllLocalServerAuthSessions_Params.OutSessionInfo, sizeof(AllLocalServerAuthSessions_Params.OutSessionInfo), &OutSessionInfo, sizeof(OutSessionInfo));

	this->ProcessEvent(uFnAllLocalServerAuthSessions, &AllLocalServerAuthSessions_Params, nullptr);

	memcpy_s(&OutSessionInfo, sizeof(OutSessionInfo), &AllLocalServerAuthSessions_Params.OutSessionInfo, sizeof(AllLocalServerAuthSessions_Params.OutSessionInfo));
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420404] (FUNC_Iterator | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[14818])
// Parameter Info:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllServerAuthSessions(struct FAuthSession& OutSessionInfo)
{
	static UFunction* uFnAllServerAuthSessions = nullptr;

	if (!uFnAllServerAuthSessions)
	{
		uFnAllServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Params AllServerAuthSessions_Params;
	memset(&AllServerAuthSessions_Params, 0, sizeof(AllServerAuthSessions_Params));
	memcpy_s(&AllServerAuthSessions_Params.OutSessionInfo, sizeof(AllServerAuthSessions_Params.OutSessionInfo), &OutSessionInfo, sizeof(OutSessionInfo));

	this->ProcessEvent(uFnAllServerAuthSessions, &AllServerAuthSessions_Params, nullptr);

	memcpy_s(&OutSessionInfo, sizeof(OutSessionInfo), &AllServerAuthSessions_Params.OutSessionInfo, sizeof(AllServerAuthSessions_Params.OutSessionInfo));
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420404] (FUNC_Iterator | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[14793])
// Parameter Info:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllLocalClientAuthSessions(struct FLocalAuthSession& OutSessionInfo)
{
	static UFunction* uFnAllLocalClientAuthSessions = nullptr;

	if (!uFnAllLocalClientAuthSessions)
	{
		uFnAllLocalClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Params AllLocalClientAuthSessions_Params;
	memset(&AllLocalClientAuthSessions_Params, 0, sizeof(AllLocalClientAuthSessions_Params));
	memcpy_s(&AllLocalClientAuthSessions_Params.OutSessionInfo, sizeof(AllLocalClientAuthSessions_Params.OutSessionInfo), &OutSessionInfo, sizeof(OutSessionInfo));

	this->ProcessEvent(uFnAllLocalClientAuthSessions, &AllLocalClientAuthSessions_Params, nullptr);

	memcpy_s(&OutSessionInfo, sizeof(OutSessionInfo), &AllLocalClientAuthSessions_Params.OutSessionInfo, sizeof(AllLocalClientAuthSessions_Params.OutSessionInfo));
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420404] (FUNC_Iterator | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[14786])
// Parameter Info:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllClientAuthSessions(struct FAuthSession& OutSessionInfo)
{
	static UFunction* uFnAllClientAuthSessions = nullptr;

	if (!uFnAllClientAuthSessions)
	{
		uFnAllClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Params AllClientAuthSessions_Params;
	memset(&AllClientAuthSessions_Params, 0, sizeof(AllClientAuthSessions_Params));
	memcpy_s(&AllClientAuthSessions_Params.OutSessionInfo, sizeof(AllClientAuthSessions_Params.OutSessionInfo), &OutSessionInfo, sizeof(OutSessionInfo));

	this->ProcessEvent(uFnAllClientAuthSessions, &AllClientAuthSessions_Params, nullptr);

	memcpy_s(&OutSessionInfo, sizeof(OutSessionInfo), &AllClientAuthSessions_Params.OutSessionInfo, sizeof(AllClientAuthSessions_Params.OutSessionInfo));
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20360])
// Parameter Info:

void UOnlineAuthInterfaceImpl::EndAllRemoteServerAuthSessions()
{
	static UFunction* uFnEndAllRemoteServerAuthSessions = nullptr;

	if (!uFnEndAllRemoteServerAuthSessions)
	{
		uFnEndAllRemoteServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Params EndAllRemoteServerAuthSessions_Params;
	memset(&EndAllRemoteServerAuthSessions_Params, 0, sizeof(EndAllRemoteServerAuthSessions_Params));

	this->ProcessEvent(uFnEndAllRemoteServerAuthSessions, &EndAllRemoteServerAuthSessions_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20358])
// Parameter Info:

void UOnlineAuthInterfaceImpl::EndAllLocalServerAuthSessions()
{
	static UFunction* uFnEndAllLocalServerAuthSessions = nullptr;

	if (!uFnEndAllLocalServerAuthSessions)
	{
		uFnEndAllLocalServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Params EndAllLocalServerAuthSessions_Params;
	memset(&EndAllLocalServerAuthSessions_Params, 0, sizeof(EndAllLocalServerAuthSessions_Params));

	this->ProcessEvent(uFnEndAllLocalServerAuthSessions, &EndAllLocalServerAuthSessions_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20386])
// Parameter Info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP)
{
	static UFunction* uFnEndRemoteServerAuthSession = nullptr;

	if (!uFnEndRemoteServerAuthSession)
	{
		uFnEndRemoteServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Params EndRemoteServerAuthSession_Params;
	memset(&EndRemoteServerAuthSession_Params, 0, sizeof(EndRemoteServerAuthSession_Params));
	memcpy_s(&EndRemoteServerAuthSession_Params.ServerUID, sizeof(EndRemoteServerAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&EndRemoteServerAuthSession_Params.ServerIP, sizeof(EndRemoteServerAuthSession_Params.ServerIP), &ServerIP, sizeof(ServerIP));

	this->ProcessEvent(uFnEndRemoteServerAuthSession, &EndRemoteServerAuthSession_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20370])
// Parameter Info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP)
{
	static UFunction* uFnEndLocalServerAuthSession = nullptr;

	if (!uFnEndLocalServerAuthSession)
	{
		uFnEndLocalServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Params EndLocalServerAuthSession_Params;
	memset(&EndLocalServerAuthSession_Params, 0, sizeof(EndLocalServerAuthSession_Params));
	memcpy_s(&EndLocalServerAuthSession_Params.ClientUID, sizeof(EndLocalServerAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&EndLocalServerAuthSession_Params.ClientIP, sizeof(EndLocalServerAuthSession_Params.ClientIP), &ClientIP, sizeof(ClientIP));

	this->ProcessEvent(uFnEndLocalServerAuthSession, &EndLocalServerAuthSession_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyServerAuthSession = nullptr;

	if (!uFnVerifyServerAuthSession)
	{
		uFnVerifyServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Params VerifyServerAuthSession_Params;
	memset(&VerifyServerAuthSession_Params, 0, sizeof(VerifyServerAuthSession_Params));
	memcpy_s(&VerifyServerAuthSession_Params.ServerUID, sizeof(VerifyServerAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&VerifyServerAuthSession_Params.ServerIP, sizeof(VerifyServerAuthSession_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&VerifyServerAuthSession_Params.AuthTicketUID, sizeof(VerifyServerAuthSession_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	this->ProcessEvent(uFnVerifyServerAuthSession, &VerifyServerAuthSession_Params, nullptr);

	return VerifyServerAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::CreateServerAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateServerAuthSession = nullptr;

	if (!uFnCreateServerAuthSession)
	{
		uFnCreateServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Params CreateServerAuthSession_Params;
	memset(&CreateServerAuthSession_Params, 0, sizeof(CreateServerAuthSession_Params));
	memcpy_s(&CreateServerAuthSession_Params.ClientUID, sizeof(CreateServerAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&CreateServerAuthSession_Params.ClientIP, sizeof(CreateServerAuthSession_Params.ClientIP), &ClientIP, sizeof(ClientIP));
	memcpy_s(&CreateServerAuthSession_Params.ClientPort, sizeof(CreateServerAuthSession_Params.ClientPort), &ClientPort, sizeof(ClientPort));
	memcpy_s(&CreateServerAuthSession_Params.OutAuthTicketUID, sizeof(CreateServerAuthSession_Params.OutAuthTicketUID), &OutAuthTicketUID, sizeof(OutAuthTicketUID));

	this->ProcessEvent(uFnCreateServerAuthSession, &CreateServerAuthSession_Params, nullptr);

	memcpy_s(&OutAuthTicketUID, sizeof(OutAuthTicketUID), &CreateServerAuthSession_Params.OutAuthTicketUID, sizeof(CreateServerAuthSession_Params.OutAuthTicketUID));

	return CreateServerAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20359])
// Parameter Info:

void UOnlineAuthInterfaceImpl::EndAllRemoteClientAuthSessions()
{
	static UFunction* uFnEndAllRemoteClientAuthSessions = nullptr;

	if (!uFnEndAllRemoteClientAuthSessions)
	{
		uFnEndAllRemoteClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Params EndAllRemoteClientAuthSessions_Params;
	memset(&EndAllRemoteClientAuthSessions_Params, 0, sizeof(EndAllRemoteClientAuthSessions_Params));

	this->ProcessEvent(uFnEndAllRemoteClientAuthSessions, &EndAllRemoteClientAuthSessions_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20357])
// Parameter Info:

void UOnlineAuthInterfaceImpl::EndAllLocalClientAuthSessions()
{
	static UFunction* uFnEndAllLocalClientAuthSessions = nullptr;

	if (!uFnEndAllLocalClientAuthSessions)
	{
		uFnEndAllLocalClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Params EndAllLocalClientAuthSessions_Params;
	memset(&EndAllLocalClientAuthSessions_Params, 0, sizeof(EndAllLocalClientAuthSessions_Params));

	this->ProcessEvent(uFnEndAllLocalClientAuthSessions, &EndAllLocalClientAuthSessions_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20385])
// Parameter Info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP)
{
	static UFunction* uFnEndRemoteClientAuthSession = nullptr;

	if (!uFnEndRemoteClientAuthSession)
	{
		uFnEndRemoteClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Params EndRemoteClientAuthSession_Params;
	memset(&EndRemoteClientAuthSession_Params, 0, sizeof(EndRemoteClientAuthSession_Params));
	memcpy_s(&EndRemoteClientAuthSession_Params.ClientUID, sizeof(EndRemoteClientAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&EndRemoteClientAuthSession_Params.ClientIP, sizeof(EndRemoteClientAuthSession_Params.ClientIP), &ClientIP, sizeof(ClientIP));

	this->ProcessEvent(uFnEndRemoteClientAuthSession, &EndRemoteClientAuthSession_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20369])
// Parameter Info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort)
{
	static UFunction* uFnEndLocalClientAuthSession = nullptr;

	if (!uFnEndLocalClientAuthSession)
	{
		uFnEndLocalClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Params EndLocalClientAuthSession_Params;
	memset(&EndLocalClientAuthSession_Params, 0, sizeof(EndLocalClientAuthSession_Params));
	memcpy_s(&EndLocalClientAuthSession_Params.ServerUID, sizeof(EndLocalClientAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&EndLocalClientAuthSession_Params.ServerIP, sizeof(EndLocalClientAuthSession_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&EndLocalClientAuthSession_Params.ServerPort, sizeof(EndLocalClientAuthSession_Params.ServerPort), &ServerPort, sizeof(ServerPort));

	this->ProcessEvent(uFnEndLocalClientAuthSession, &EndLocalClientAuthSession_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyClientAuthSession = nullptr;

	if (!uFnVerifyClientAuthSession)
	{
		uFnVerifyClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Params VerifyClientAuthSession_Params;
	memset(&VerifyClientAuthSession_Params, 0, sizeof(VerifyClientAuthSession_Params));
	memcpy_s(&VerifyClientAuthSession_Params.ClientUID, sizeof(VerifyClientAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&VerifyClientAuthSession_Params.ClientIP, sizeof(VerifyClientAuthSession_Params.ClientIP), &ClientIP, sizeof(ClientIP));
	memcpy_s(&VerifyClientAuthSession_Params.ClientPort, sizeof(VerifyClientAuthSession_Params.ClientPort), &ClientPort, sizeof(ClientPort));
	memcpy_s(&VerifyClientAuthSession_Params.AuthTicketUID, sizeof(VerifyClientAuthSession_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	this->ProcessEvent(uFnVerifyClientAuthSession, &VerifyClientAuthSession_Params, nullptr);

	return VerifyClientAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// uint32_t                       bSecure                        (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::CreateClientAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort, bool bSecure, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateClientAuthSession = nullptr;

	if (!uFnCreateClientAuthSession)
	{
		uFnCreateClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Params CreateClientAuthSession_Params;
	memset(&CreateClientAuthSession_Params, 0, sizeof(CreateClientAuthSession_Params));
	memcpy_s(&CreateClientAuthSession_Params.ServerUID, sizeof(CreateClientAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&CreateClientAuthSession_Params.ServerIP, sizeof(CreateClientAuthSession_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&CreateClientAuthSession_Params.ServerPort, sizeof(CreateClientAuthSession_Params.ServerPort), &ServerPort, sizeof(ServerPort));
	CreateClientAuthSession_Params.bSecure = bSecure;
	memcpy_s(&CreateClientAuthSession_Params.OutAuthTicketUID, sizeof(CreateClientAuthSession_Params.OutAuthTicketUID), &OutAuthTicketUID, sizeof(OutAuthTicketUID));

	this->ProcessEvent(uFnCreateClientAuthSession, &CreateClientAuthSession_Params, nullptr);

	memcpy_s(&OutAuthTicketUID, sizeof(OutAuthTicketUID), &CreateClientAuthSession_Params.OutAuthTicketUID, sizeof(CreateClientAuthSession_Params.OutAuthTicketUID));

	return CreateClientAuthSession_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27685])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRetryRequest()
{
	static UFunction* uFnSendServerAuthRetryRequest = nullptr;

	if (!uFnSendServerAuthRetryRequest)
	{
		uFnSendServerAuthRetryRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest");
	}

	UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Params SendServerAuthRetryRequest_Params;
	memset(&SendServerAuthRetryRequest_Params, 0, sizeof(SendServerAuthRetryRequest_Params));

	this->ProcessEvent(uFnSendServerAuthRetryRequest, &SendServerAuthRetryRequest_Params, nullptr);

	return SendServerAuthRetryRequest_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27665])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthEndSessionRequest(class UPlayer* ClientConnection)
{
	static UFunction* uFnSendClientAuthEndSessionRequest = nullptr;

	if (!uFnSendClientAuthEndSessionRequest)
	{
		uFnSendClientAuthEndSessionRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest");
	}

	UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Params SendClientAuthEndSessionRequest_Params;
	memset(&SendClientAuthEndSessionRequest_Params, 0, sizeof(SendClientAuthEndSessionRequest_Params));
	SendClientAuthEndSessionRequest_Params.ClientConnection = ClientConnection;

	this->ProcessEvent(uFnSendClientAuthEndSessionRequest, &SendClientAuthEndSessionRequest_Params, nullptr);

	return SendClientAuthEndSessionRequest_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27684])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendServerAuthResponse(class UPlayer* ClientConnection, int32_t AuthTicketUID)
{
	static UFunction* uFnSendServerAuthResponse = nullptr;

	if (!uFnSendServerAuthResponse)
	{
		uFnSendServerAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Params SendServerAuthResponse_Params;
	memset(&SendServerAuthResponse_Params, 0, sizeof(SendServerAuthResponse_Params));
	SendServerAuthResponse_Params.ClientConnection = ClientConnection;
	memcpy_s(&SendServerAuthResponse_Params.AuthTicketUID, sizeof(SendServerAuthResponse_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	this->ProcessEvent(uFnSendServerAuthResponse, &SendServerAuthResponse_Params, nullptr);

	return SendServerAuthResponse_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27667])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthResponse(int32_t AuthTicketUID)
{
	static UFunction* uFnSendClientAuthResponse = nullptr;

	if (!uFnSendClientAuthResponse)
	{
		uFnSendClientAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Params SendClientAuthResponse_Params;
	memset(&SendClientAuthResponse_Params, 0, sizeof(SendClientAuthResponse_Params));
	memcpy_s(&SendClientAuthResponse_Params.AuthTicketUID, sizeof(SendClientAuthResponse_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	this->ProcessEvent(uFnSendClientAuthResponse, &SendClientAuthResponse_Params, nullptr);

	return SendClientAuthResponse_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRequest(const struct FUniqueNetId& ServerUID)
{
	static UFunction* uFnSendServerAuthRequest = nullptr;

	if (!uFnSendServerAuthRequest)
	{
		uFnSendServerAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Params SendServerAuthRequest_Params;
	memset(&SendServerAuthRequest_Params, 0, sizeof(SendServerAuthRequest_Params));
	memcpy_s(&SendServerAuthRequest_Params.ServerUID, sizeof(SendServerAuthRequest_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	this->ProcessEvent(uFnSendServerAuthRequest, &SendServerAuthRequest_Params, nullptr);

	return SendServerAuthRequest_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID)
{
	static UFunction* uFnSendClientAuthRequest = nullptr;

	if (!uFnSendClientAuthRequest)
	{
		uFnSendClientAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Params SendClientAuthRequest_Params;
	memset(&SendClientAuthRequest_Params, 0, sizeof(SendClientAuthRequest_Params));
	SendClientAuthRequest_Params.ClientConnection = ClientConnection;
	memcpy_s(&SendClientAuthRequest_Params.ClientUID, sizeof(SendClientAuthRequest_Params.ClientUID), &ClientUID, sizeof(ClientUID));

	this->ProcessEvent(uFnSendClientAuthRequest, &SendClientAuthRequest_Params, nullptr);

	return SendClientAuthRequest_Params.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static UFunction* uFnClearServerConnectionCloseDelegate = nullptr;

	if (!uFnClearServerConnectionCloseDelegate)
	{
		uFnClearServerConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Params ClearServerConnectionCloseDelegate_Params;
	memset(&ClearServerConnectionCloseDelegate_Params, 0, sizeof(ClearServerConnectionCloseDelegate_Params));
	memcpy_s(&ClearServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate, sizeof(ClearServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate), &ServerConnectionCloseDelegate, sizeof(ServerConnectionCloseDelegate));

	this->ProcessEvent(uFnClearServerConnectionCloseDelegate, &ClearServerConnectionCloseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static UFunction* uFnAddServerConnectionCloseDelegate = nullptr;

	if (!uFnAddServerConnectionCloseDelegate)
	{
		uFnAddServerConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Params AddServerConnectionCloseDelegate_Params;
	memset(&AddServerConnectionCloseDelegate_Params, 0, sizeof(AddServerConnectionCloseDelegate_Params));
	memcpy_s(&AddServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate, sizeof(AddServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate), &ServerConnectionCloseDelegate, sizeof(ServerConnectionCloseDelegate));

	this->ProcessEvent(uFnAddServerConnectionCloseDelegate, &AddServerConnectionCloseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerConnectionClose(class UPlayer* ServerConnection)
{
	static UFunction* uFnOnServerConnectionClose = nullptr;

	if (!uFnOnServerConnectionClose)
	{
		uFnOnServerConnectionClose = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose");
	}

	UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Params OnServerConnectionClose_Params;
	memset(&OnServerConnectionClose_Params, 0, sizeof(OnServerConnectionClose_Params));
	OnServerConnectionClose_Params.ServerConnection = ServerConnection;

	this->ProcessEvent(uFnOnServerConnectionClose, &OnServerConnectionClose_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static UFunction* uFnClearClientConnectionCloseDelegate = nullptr;

	if (!uFnClearClientConnectionCloseDelegate)
	{
		uFnClearClientConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Params ClearClientConnectionCloseDelegate_Params;
	memset(&ClearClientConnectionCloseDelegate_Params, 0, sizeof(ClearClientConnectionCloseDelegate_Params));
	memcpy_s(&ClearClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate, sizeof(ClearClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate), &ClientConnectionCloseDelegate, sizeof(ClientConnectionCloseDelegate));

	this->ProcessEvent(uFnClearClientConnectionCloseDelegate, &ClearClientConnectionCloseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static UFunction* uFnAddClientConnectionCloseDelegate = nullptr;

	if (!uFnAddClientConnectionCloseDelegate)
	{
		uFnAddClientConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Params AddClientConnectionCloseDelegate_Params;
	memset(&AddClientConnectionCloseDelegate_Params, 0, sizeof(AddClientConnectionCloseDelegate_Params));
	memcpy_s(&AddClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate, sizeof(AddClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate), &ClientConnectionCloseDelegate, sizeof(ClientConnectionCloseDelegate));

	this->ProcessEvent(uFnAddClientConnectionCloseDelegate, &AddClientConnectionCloseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientConnectionClose(class UPlayer* ClientConnection)
{
	static UFunction* uFnOnClientConnectionClose = nullptr;

	if (!uFnOnClientConnectionClose)
	{
		uFnOnClientConnectionClose = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose");
	}

	UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Params OnClientConnectionClose_Params;
	memset(&OnClientConnectionClose_Params, 0, sizeof(OnClientConnectionClose_Params));
	OnClientConnectionClose_Params.ClientConnection = ClientConnection;

	this->ProcessEvent(uFnOnClientConnectionClose, &OnClientConnectionClose_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate)
{
	static UFunction* uFnClearServerAuthRetryRequestDelegate = nullptr;

	if (!uFnClearServerAuthRetryRequestDelegate)
	{
		uFnClearServerAuthRetryRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Params ClearServerAuthRetryRequestDelegate_Params;
	memset(&ClearServerAuthRetryRequestDelegate_Params, 0, sizeof(ClearServerAuthRetryRequestDelegate_Params));
	memcpy_s(&ClearServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate, sizeof(ClearServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate), &ServerAuthRetryRequestDelegate, sizeof(ServerAuthRetryRequestDelegate));

	this->ProcessEvent(uFnClearServerAuthRetryRequestDelegate, &ClearServerAuthRetryRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate)
{
	static UFunction* uFnAddServerAuthRetryRequestDelegate = nullptr;

	if (!uFnAddServerAuthRetryRequestDelegate)
	{
		uFnAddServerAuthRetryRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Params AddServerAuthRetryRequestDelegate_Params;
	memset(&AddServerAuthRetryRequestDelegate_Params, 0, sizeof(AddServerAuthRetryRequestDelegate_Params));
	memcpy_s(&AddServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate, sizeof(AddServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate), &ServerAuthRetryRequestDelegate, sizeof(ServerAuthRetryRequestDelegate));

	this->ProcessEvent(uFnAddServerAuthRetryRequestDelegate, &AddServerAuthRetryRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRetryRequest(class UPlayer* ClientConnection)
{
	static UFunction* uFnOnServerAuthRetryRequest = nullptr;

	if (!uFnOnServerAuthRetryRequest)
	{
		uFnOnServerAuthRetryRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Params OnServerAuthRetryRequest_Params;
	memset(&OnServerAuthRetryRequest_Params, 0, sizeof(OnServerAuthRetryRequest_Params));
	OnServerAuthRetryRequest_Params.ClientConnection = ClientConnection;

	this->ProcessEvent(uFnOnServerAuthRetryRequest, &OnServerAuthRetryRequest_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate)
{
	static UFunction* uFnClearClientAuthEndSessionRequestDelegate = nullptr;

	if (!uFnClearClientAuthEndSessionRequestDelegate)
	{
		uFnClearClientAuthEndSessionRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Params ClearClientAuthEndSessionRequestDelegate_Params;
	memset(&ClearClientAuthEndSessionRequestDelegate_Params, 0, sizeof(ClearClientAuthEndSessionRequestDelegate_Params));
	memcpy_s(&ClearClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate, sizeof(ClearClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate), &ClientAuthEndSessionRequestDelegate, sizeof(ClientAuthEndSessionRequestDelegate));

	this->ProcessEvent(uFnClearClientAuthEndSessionRequestDelegate, &ClearClientAuthEndSessionRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate)
{
	static UFunction* uFnAddClientAuthEndSessionRequestDelegate = nullptr;

	if (!uFnAddClientAuthEndSessionRequestDelegate)
	{
		uFnAddClientAuthEndSessionRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Params AddClientAuthEndSessionRequestDelegate_Params;
	memset(&AddClientAuthEndSessionRequestDelegate_Params, 0, sizeof(AddClientAuthEndSessionRequestDelegate_Params));
	memcpy_s(&AddClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate, sizeof(AddClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate), &ClientAuthEndSessionRequestDelegate, sizeof(ClientAuthEndSessionRequestDelegate));

	this->ProcessEvent(uFnAddClientAuthEndSessionRequestDelegate, &AddClientAuthEndSessionRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthEndSessionRequest(class UPlayer* ServerConnection)
{
	static UFunction* uFnOnClientAuthEndSessionRequest = nullptr;

	if (!uFnOnClientAuthEndSessionRequest)
	{
		uFnOnClientAuthEndSessionRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Params OnClientAuthEndSessionRequest_Params;
	memset(&OnClientAuthEndSessionRequest_Params, 0, sizeof(OnClientAuthEndSessionRequest_Params));
	OnClientAuthEndSessionRequest_Params.ServerConnection = ServerConnection;

	this->ProcessEvent(uFnOnClientAuthEndSessionRequest, &OnClientAuthEndSessionRequest_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate)
{
	static UFunction* uFnClearServerAuthCompleteDelegate = nullptr;

	if (!uFnClearServerAuthCompleteDelegate)
	{
		uFnClearServerAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Params ClearServerAuthCompleteDelegate_Params;
	memset(&ClearServerAuthCompleteDelegate_Params, 0, sizeof(ClearServerAuthCompleteDelegate_Params));
	memcpy_s(&ClearServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate, sizeof(ClearServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate), &ServerAuthCompleteDelegate, sizeof(ServerAuthCompleteDelegate));

	this->ProcessEvent(uFnClearServerAuthCompleteDelegate, &ClearServerAuthCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate)
{
	static UFunction* uFnAddServerAuthCompleteDelegate = nullptr;

	if (!uFnAddServerAuthCompleteDelegate)
	{
		uFnAddServerAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Params AddServerAuthCompleteDelegate_Params;
	memset(&AddServerAuthCompleteDelegate_Params, 0, sizeof(AddServerAuthCompleteDelegate_Params));
	memcpy_s(&AddServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate, sizeof(AddServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate), &ServerAuthCompleteDelegate, sizeof(ServerAuthCompleteDelegate));

	this->ProcessEvent(uFnAddServerAuthCompleteDelegate, &AddServerAuthCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// class FString                  ExtraInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const class FString& ExtraInfo)
{
	static UFunction* uFnOnServerAuthComplete = nullptr;

	if (!uFnOnServerAuthComplete)
	{
		uFnOnServerAuthComplete = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Params OnServerAuthComplete_Params;
	memset(&OnServerAuthComplete_Params, 0, sizeof(OnServerAuthComplete_Params));
	OnServerAuthComplete_Params.bSuccess = bSuccess;
	memcpy_s(&OnServerAuthComplete_Params.ServerUID, sizeof(OnServerAuthComplete_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	OnServerAuthComplete_Params.ServerConnection = ServerConnection;
	memcpy_s(&OnServerAuthComplete_Params.ExtraInfo, sizeof(OnServerAuthComplete_Params.ExtraInfo), &ExtraInfo, sizeof(ExtraInfo));

	this->ProcessEvent(uFnOnServerAuthComplete, &OnServerAuthComplete_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate)
{
	static UFunction* uFnClearClientAuthCompleteDelegate = nullptr;

	if (!uFnClearClientAuthCompleteDelegate)
	{
		uFnClearClientAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Params ClearClientAuthCompleteDelegate_Params;
	memset(&ClearClientAuthCompleteDelegate_Params, 0, sizeof(ClearClientAuthCompleteDelegate_Params));
	memcpy_s(&ClearClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate, sizeof(ClearClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate), &ClientAuthCompleteDelegate, sizeof(ClientAuthCompleteDelegate));

	this->ProcessEvent(uFnClearClientAuthCompleteDelegate, &ClearClientAuthCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate)
{
	static UFunction* uFnAddClientAuthCompleteDelegate = nullptr;

	if (!uFnAddClientAuthCompleteDelegate)
	{
		uFnAddClientAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Params AddClientAuthCompleteDelegate_Params;
	memset(&AddClientAuthCompleteDelegate_Params, 0, sizeof(AddClientAuthCompleteDelegate_Params));
	memcpy_s(&AddClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate, sizeof(AddClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate), &ClientAuthCompleteDelegate, sizeof(ClientAuthCompleteDelegate));

	this->ProcessEvent(uFnAddClientAuthCompleteDelegate, &AddClientAuthCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// class FString                  ExtraInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const class FString& ExtraInfo)
{
	static UFunction* uFnOnClientAuthComplete = nullptr;

	if (!uFnOnClientAuthComplete)
	{
		uFnOnClientAuthComplete = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Params OnClientAuthComplete_Params;
	memset(&OnClientAuthComplete_Params, 0, sizeof(OnClientAuthComplete_Params));
	OnClientAuthComplete_Params.bSuccess = bSuccess;
	memcpy_s(&OnClientAuthComplete_Params.ClientUID, sizeof(OnClientAuthComplete_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	OnClientAuthComplete_Params.ClientConnection = ClientConnection;
	memcpy_s(&OnClientAuthComplete_Params.ExtraInfo, sizeof(OnClientAuthComplete_Params.ExtraInfo), &ExtraInfo, sizeof(ExtraInfo));

	this->ProcessEvent(uFnOnClientAuthComplete, &OnClientAuthComplete_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate)
{
	static UFunction* uFnClearServerAuthResponseDelegate = nullptr;

	if (!uFnClearServerAuthResponseDelegate)
	{
		uFnClearServerAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Params ClearServerAuthResponseDelegate_Params;
	memset(&ClearServerAuthResponseDelegate_Params, 0, sizeof(ClearServerAuthResponseDelegate_Params));
	memcpy_s(&ClearServerAuthResponseDelegate_Params.ServerAuthResponseDelegate, sizeof(ClearServerAuthResponseDelegate_Params.ServerAuthResponseDelegate), &ServerAuthResponseDelegate, sizeof(ServerAuthResponseDelegate));

	this->ProcessEvent(uFnClearServerAuthResponseDelegate, &ClearServerAuthResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate)
{
	static UFunction* uFnAddServerAuthResponseDelegate = nullptr;

	if (!uFnAddServerAuthResponseDelegate)
	{
		uFnAddServerAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Params AddServerAuthResponseDelegate_Params;
	memset(&AddServerAuthResponseDelegate_Params, 0, sizeof(AddServerAuthResponseDelegate_Params));
	memcpy_s(&AddServerAuthResponseDelegate_Params.ServerAuthResponseDelegate, sizeof(AddServerAuthResponseDelegate_Params.ServerAuthResponseDelegate), &ServerAuthResponseDelegate, sizeof(ServerAuthResponseDelegate));

	this->ProcessEvent(uFnAddServerAuthResponseDelegate, &AddServerAuthResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthResponse(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnOnServerAuthResponse = nullptr;

	if (!uFnOnServerAuthResponse)
	{
		uFnOnServerAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Params OnServerAuthResponse_Params;
	memset(&OnServerAuthResponse_Params, 0, sizeof(OnServerAuthResponse_Params));
	memcpy_s(&OnServerAuthResponse_Params.ServerUID, sizeof(OnServerAuthResponse_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&OnServerAuthResponse_Params.ServerIP, sizeof(OnServerAuthResponse_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&OnServerAuthResponse_Params.AuthTicketUID, sizeof(OnServerAuthResponse_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	this->ProcessEvent(uFnOnServerAuthResponse, &OnServerAuthResponse_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate)
{
	static UFunction* uFnClearClientAuthResponseDelegate = nullptr;

	if (!uFnClearClientAuthResponseDelegate)
	{
		uFnClearClientAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Params ClearClientAuthResponseDelegate_Params;
	memset(&ClearClientAuthResponseDelegate_Params, 0, sizeof(ClearClientAuthResponseDelegate_Params));
	memcpy_s(&ClearClientAuthResponseDelegate_Params.ClientAuthResponseDelegate, sizeof(ClearClientAuthResponseDelegate_Params.ClientAuthResponseDelegate), &ClientAuthResponseDelegate, sizeof(ClientAuthResponseDelegate));

	this->ProcessEvent(uFnClearClientAuthResponseDelegate, &ClearClientAuthResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate)
{
	static UFunction* uFnAddClientAuthResponseDelegate = nullptr;

	if (!uFnAddClientAuthResponseDelegate)
	{
		uFnAddClientAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Params AddClientAuthResponseDelegate_Params;
	memset(&AddClientAuthResponseDelegate_Params, 0, sizeof(AddClientAuthResponseDelegate_Params));
	memcpy_s(&AddClientAuthResponseDelegate_Params.ClientAuthResponseDelegate, sizeof(AddClientAuthResponseDelegate_Params.ClientAuthResponseDelegate), &ClientAuthResponseDelegate, sizeof(ClientAuthResponseDelegate));

	this->ProcessEvent(uFnAddClientAuthResponseDelegate, &AddClientAuthResponseDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthResponse(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t AuthTicketUID)
{
	static UFunction* uFnOnClientAuthResponse = nullptr;

	if (!uFnOnClientAuthResponse)
	{
		uFnOnClientAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Params OnClientAuthResponse_Params;
	memset(&OnClientAuthResponse_Params, 0, sizeof(OnClientAuthResponse_Params));
	memcpy_s(&OnClientAuthResponse_Params.ClientUID, sizeof(OnClientAuthResponse_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&OnClientAuthResponse_Params.ClientIP, sizeof(OnClientAuthResponse_Params.ClientIP), &ClientIP, sizeof(ClientIP));
	memcpy_s(&OnClientAuthResponse_Params.AuthTicketUID, sizeof(OnClientAuthResponse_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	this->ProcessEvent(uFnOnClientAuthResponse, &OnClientAuthResponse_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate)
{
	static UFunction* uFnClearServerAuthRequestDelegate = nullptr;

	if (!uFnClearServerAuthRequestDelegate)
	{
		uFnClearServerAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Params ClearServerAuthRequestDelegate_Params;
	memset(&ClearServerAuthRequestDelegate_Params, 0, sizeof(ClearServerAuthRequestDelegate_Params));
	memcpy_s(&ClearServerAuthRequestDelegate_Params.ServerAuthRequestDelegate, sizeof(ClearServerAuthRequestDelegate_Params.ServerAuthRequestDelegate), &ServerAuthRequestDelegate, sizeof(ServerAuthRequestDelegate));

	this->ProcessEvent(uFnClearServerAuthRequestDelegate, &ClearServerAuthRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate)
{
	static UFunction* uFnAddServerAuthRequestDelegate = nullptr;

	if (!uFnAddServerAuthRequestDelegate)
	{
		uFnAddServerAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Params AddServerAuthRequestDelegate_Params;
	memset(&AddServerAuthRequestDelegate_Params, 0, sizeof(AddServerAuthRequestDelegate_Params));
	memcpy_s(&AddServerAuthRequestDelegate_Params.ServerAuthRequestDelegate, sizeof(AddServerAuthRequestDelegate_Params.ServerAuthRequestDelegate), &ServerAuthRequestDelegate, sizeof(ServerAuthRequestDelegate));

	this->ProcessEvent(uFnAddServerAuthRequestDelegate, &AddServerAuthRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort)
{
	static UFunction* uFnOnServerAuthRequest = nullptr;

	if (!uFnOnServerAuthRequest)
	{
		uFnOnServerAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Params OnServerAuthRequest_Params;
	memset(&OnServerAuthRequest_Params, 0, sizeof(OnServerAuthRequest_Params));
	OnServerAuthRequest_Params.ClientConnection = ClientConnection;
	memcpy_s(&OnServerAuthRequest_Params.ClientUID, sizeof(OnServerAuthRequest_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&OnServerAuthRequest_Params.ClientIP, sizeof(OnServerAuthRequest_Params.ClientIP), &ClientIP, sizeof(ClientIP));
	memcpy_s(&OnServerAuthRequest_Params.ClientPort, sizeof(OnServerAuthRequest_Params.ClientPort), &ClientPort, sizeof(ClientPort));

	this->ProcessEvent(uFnOnServerAuthRequest, &OnServerAuthRequest_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate)
{
	static UFunction* uFnClearClientAuthRequestDelegate = nullptr;

	if (!uFnClearClientAuthRequestDelegate)
	{
		uFnClearClientAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Params ClearClientAuthRequestDelegate_Params;
	memset(&ClearClientAuthRequestDelegate_Params, 0, sizeof(ClearClientAuthRequestDelegate_Params));
	memcpy_s(&ClearClientAuthRequestDelegate_Params.ClientAuthRequestDelegate, sizeof(ClearClientAuthRequestDelegate_Params.ClientAuthRequestDelegate), &ClientAuthRequestDelegate, sizeof(ClientAuthRequestDelegate));

	this->ProcessEvent(uFnClearClientAuthRequestDelegate, &ClearClientAuthRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate)
{
	static UFunction* uFnAddClientAuthRequestDelegate = nullptr;

	if (!uFnAddClientAuthRequestDelegate)
	{
		uFnAddClientAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Params AddClientAuthRequestDelegate_Params;
	memset(&AddClientAuthRequestDelegate_Params, 0, sizeof(AddClientAuthRequestDelegate_Params));
	memcpy_s(&AddClientAuthRequestDelegate_Params.ClientAuthRequestDelegate, sizeof(AddClientAuthRequestDelegate_Params.ClientAuthRequestDelegate), &ClientAuthRequestDelegate, sizeof(ClientAuthRequestDelegate));

	this->ProcessEvent(uFnAddClientAuthRequestDelegate, &AddClientAuthRequestDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// uint32_t                       bSecure                        (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthRequest(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort, bool bSecure)
{
	static UFunction* uFnOnClientAuthRequest = nullptr;

	if (!uFnOnClientAuthRequest)
	{
		uFnOnClientAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Params OnClientAuthRequest_Params;
	memset(&OnClientAuthRequest_Params, 0, sizeof(OnClientAuthRequest_Params));
	memcpy_s(&OnClientAuthRequest_Params.ServerUID, sizeof(OnClientAuthRequest_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&OnClientAuthRequest_Params.ServerIP, sizeof(OnClientAuthRequest_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&OnClientAuthRequest_Params.ServerPort, sizeof(OnClientAuthRequest_Params.ServerPort), &ServerPort, sizeof(ServerPort));
	OnClientAuthRequest_Params.bSecure = bSecure;

	this->ProcessEvent(uFnOnClientAuthRequest, &OnClientAuthRequest_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static UFunction* uFnClearAuthReadyDelegate = nullptr;

	if (!uFnClearAuthReadyDelegate)
	{
		uFnClearAuthReadyDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Params ClearAuthReadyDelegate_Params;
	memset(&ClearAuthReadyDelegate_Params, 0, sizeof(ClearAuthReadyDelegate_Params));
	memcpy_s(&ClearAuthReadyDelegate_Params.AuthReadyDelegate, sizeof(ClearAuthReadyDelegate_Params.AuthReadyDelegate), &AuthReadyDelegate, sizeof(AuthReadyDelegate));

	this->ProcessEvent(uFnClearAuthReadyDelegate, &ClearAuthReadyDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static UFunction* uFnAddAuthReadyDelegate = nullptr;

	if (!uFnAddAuthReadyDelegate)
	{
		uFnAddAuthReadyDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Params AddAuthReadyDelegate_Params;
	memset(&AddAuthReadyDelegate_Params, 0, sizeof(AddAuthReadyDelegate_Params));
	memcpy_s(&AddAuthReadyDelegate_Params.AuthReadyDelegate, sizeof(AddAuthReadyDelegate_Params.AuthReadyDelegate), &AuthReadyDelegate, sizeof(AuthReadyDelegate));

	this->ProcessEvent(uFnAddAuthReadyDelegate, &AddAuthReadyDelegate_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineAuthInterfaceImpl::OnAuthReady()
{
	static UFunction* uFnOnAuthReady = nullptr;

	if (!uFnOnAuthReady)
	{
		uFnOnAuthReady = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady");
	}

	UOnlineAuthInterfaceImpl_execOnAuthReady_Params OnAuthReady_Params;
	memset(&OnAuthReady_Params, 0, sizeof(OnAuthReady_Params));

	this->ProcessEvent(uFnOnAuthReady, &OnAuthReady_Params, nullptr);
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::IsReady()
{
	static UFunction* uFnIsReady = nullptr;

	if (!uFnIsReady)
	{
		uFnIsReady = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.IsReady");
	}

	UOnlineAuthInterfaceImpl_execIsReady_Params IsReady_Params;
	memset(&IsReady_Params, 0, sizeof(IsReady_Params));

	this->ProcessEvent(uFnIsReady, &IsReady_Params, nullptr);

	return IsReady_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RunBandwidthTest
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineGameInterfaceImpl::RunBandwidthTest()
{
	static UFunction* uFnRunBandwidthTest = nullptr;

	if (!uFnRunBandwidthTest)
	{
		uFnRunBandwidthTest = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RunBandwidthTest");
	}

	UOnlineGameInterfaceImpl_execRunBandwidthTest_Params RunBandwidthTest_Params;
	memset(&RunBandwidthTest_Params, 0, sizeof(RunBandwidthTest_Params));

	this->ProcessEvent(uFnRunBandwidthTest, &RunBandwidthTest_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.IsAllowedToNetworkHost
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::IsAllowedToNetworkHost()
{
	static UFunction* uFnIsAllowedToNetworkHost = nullptr;

	if (!uFnIsAllowedToNetworkHost)
	{
		uFnIsAllowedToNetworkHost = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.IsAllowedToNetworkHost");
	}

	UOnlineGameInterfaceImpl_execIsAllowedToNetworkHost_Params IsAllowedToNetworkHost_Params;
	memset(&IsAllowedToNetworkHost_Params, 0, sizeof(IsAllowedToNetworkHost_Params));

	this->ProcessEvent(uFnIsAllowedToNetworkHost, &IsAllowedToNetworkHost_Params, nullptr);

	return IsAllowedToNetworkHost_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGetRoomIdFromTitleServiceDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGetRoomIdFromTitleServiceDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction* uFnClearGetRoomIdFromTitleServiceDelegate = nullptr;

	if (!uFnClearGetRoomIdFromTitleServiceDelegate)
	{
		uFnClearGetRoomIdFromTitleServiceDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearGetRoomIdFromTitleServiceDelegate");
	}

	UOnlineGameInterfaceImpl_execClearGetRoomIdFromTitleServiceDelegate_Params ClearGetRoomIdFromTitleServiceDelegate_Params;
	memset(&ClearGetRoomIdFromTitleServiceDelegate_Params, 0, sizeof(ClearGetRoomIdFromTitleServiceDelegate_Params));
	memcpy_s(&ClearGetRoomIdFromTitleServiceDelegate_Params.InDelegate, sizeof(ClearGetRoomIdFromTitleServiceDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnClearGetRoomIdFromTitleServiceDelegate, &ClearGetRoomIdFromTitleServiceDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGetRoomIdFromTitleServiceDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGetRoomIdFromTitleServiceDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction* uFnAddGetRoomIdFromTitleServiceDelegate = nullptr;

	if (!uFnAddGetRoomIdFromTitleServiceDelegate)
	{
		uFnAddGetRoomIdFromTitleServiceDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddGetRoomIdFromTitleServiceDelegate");
	}

	UOnlineGameInterfaceImpl_execAddGetRoomIdFromTitleServiceDelegate_Params AddGetRoomIdFromTitleServiceDelegate_Params;
	memset(&AddGetRoomIdFromTitleServiceDelegate_Params, 0, sizeof(AddGetRoomIdFromTitleServiceDelegate_Params));
	memcpy_s(&AddGetRoomIdFromTitleServiceDelegate_Params.InDelegate, sizeof(AddGetRoomIdFromTitleServiceDelegate_Params.InDelegate), &InDelegate, sizeof(InDelegate));

	this->ProcessEvent(uFnAddGetRoomIdFromTitleServiceDelegate, &AddGetRoomIdFromTitleServiceDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromSessionId
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  SessionId                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::GetRoomIdFromSessionId(const class FString& SessionId)
{
	static UFunction* uFnGetRoomIdFromSessionId = nullptr;

	if (!uFnGetRoomIdFromSessionId)
	{
		uFnGetRoomIdFromSessionId = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromSessionId");
	}

	UOnlineGameInterfaceImpl_execGetRoomIdFromSessionId_Params GetRoomIdFromSessionId_Params;
	memset(&GetRoomIdFromSessionId_Params, 0, sizeof(GetRoomIdFromSessionId_Params));
	memcpy_s(&GetRoomIdFromSessionId_Params.SessionId, sizeof(GetRoomIdFromSessionId_Params.SessionId), &SessionId, sizeof(SessionId));

	this->ProcessEvent(uFnGetRoomIdFromSessionId, &GetRoomIdFromSessionId_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromTitleService
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FQWord                  DataId                         (CPF_Parm)

void UOnlineGameInterfaceImpl::GetRoomIdFromTitleService(const struct FQWord& DataId)
{
	static UFunction* uFnGetRoomIdFromTitleService = nullptr;

	if (!uFnGetRoomIdFromTitleService)
	{
		uFnGetRoomIdFromTitleService = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromTitleService");
	}

	UOnlineGameInterfaceImpl_execGetRoomIdFromTitleService_Params GetRoomIdFromTitleService_Params;
	memset(&GetRoomIdFromTitleService_Params, 0, sizeof(GetRoomIdFromTitleService_Params));
	memcpy_s(&GetRoomIdFromTitleService_Params.DataId, sizeof(GetRoomIdFromTitleService_Params.DataId), &DataId, sizeof(DataId));

	this->ProcessEvent(uFnGetRoomIdFromTitleService, &GetRoomIdFromTitleService_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGetRoomIdFromTitleService
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FQWord                  RoomId                         (CPF_Parm)

void UOnlineGameInterfaceImpl::OnGetRoomIdFromTitleService(const struct FQWord& RoomId)
{
	static UFunction* uFnOnGetRoomIdFromTitleService = nullptr;

	if (!uFnOnGetRoomIdFromTitleService)
	{
		uFnOnGetRoomIdFromTitleService = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGetRoomIdFromTitleService");
	}

	UOnlineGameInterfaceImpl_execOnGetRoomIdFromTitleService_Params OnGetRoomIdFromTitleService_Params;
	memset(&OnGetRoomIdFromTitleService_Params, 0, sizeof(OnGetRoomIdFromTitleService_Params));
	memcpy_s(&OnGetRoomIdFromTitleService_Params.RoomId, sizeof(OnGetRoomIdFromTitleService_Params.RoomId), &RoomId, sizeof(RoomId));

	this->ProcessEvent(uFnOnGetRoomIdFromTitleService, &OnGetRoomIdFromTitleService_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.GetRoomId
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineGameInterfaceImpl::GetRoomId()
{
	static UFunction* uFnGetRoomId = nullptr;

	if (!uFnGetRoomId)
	{
		uFnGetRoomId = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetRoomId");
	}

	UOnlineGameInterfaceImpl_execGetRoomId_Params GetRoomId_Params;
	memset(&GetRoomId_Params, 0, sizeof(GetRoomId_Params));

	this->ProcessEvent(uFnGetRoomId, &GetRoomId_Params, nullptr);

	return GetRoomId_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.SendPlayerList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<class APlayerReplicationInfo*> Players                        (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::SendPlayerList(const class TArray<class APlayerReplicationInfo*>& Players)
{
	static UFunction* uFnSendPlayerList = nullptr;

	if (!uFnSendPlayerList)
	{
		uFnSendPlayerList = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.SendPlayerList");
	}

	UOnlineGameInterfaceImpl_execSendPlayerList_Params SendPlayerList_Params;
	memset(&SendPlayerList_Params, 0, sizeof(SendPlayerList_Params));
	memcpy_s(&SendPlayerList_Params.Players, sizeof(SendPlayerList_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnSendPlayerList, &SendPlayerList_Params, nullptr);

	return SendPlayerList_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnClearGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnClearGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnClearGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearGetNumberOfCurrentPlayersCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params ClearGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memset(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Params, 0, sizeof(ClearGetNumberOfCurrentPlayersCompleteDelegate_Params));
	memcpy_s(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, sizeof(ClearGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate), &GetNumberOfCurrentPlayersCompleteDelegate, sizeof(GetNumberOfCurrentPlayersCompleteDelegate));

	this->ProcessEvent(uFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnAddGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnAddGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnAddGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddGetNumberOfCurrentPlayersCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params AddGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memset(&AddGetNumberOfCurrentPlayersCompleteDelegate_Params, 0, sizeof(AddGetNumberOfCurrentPlayersCompleteDelegate_Params));
	memcpy_s(&AddGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, sizeof(AddGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate), &GetNumberOfCurrentPlayersCompleteDelegate, sizeof(GetNumberOfCurrentPlayersCompleteDelegate));

	this->ProcessEvent(uFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TotalPlayers                   (CPF_Parm)

void UOnlineGameInterfaceImpl::OnGetNumberOfCurrentPlayersComplete(int32_t TotalPlayers)
{
	static UFunction* uFnOnGetNumberOfCurrentPlayersComplete = nullptr;

	if (!uFnOnGetNumberOfCurrentPlayersComplete)
	{
		uFnOnGetNumberOfCurrentPlayersComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGetNumberOfCurrentPlayersComplete");
	}

	UOnlineGameInterfaceImpl_execOnGetNumberOfCurrentPlayersComplete_Params OnGetNumberOfCurrentPlayersComplete_Params;
	memset(&OnGetNumberOfCurrentPlayersComplete_Params, 0, sizeof(OnGetNumberOfCurrentPlayersComplete_Params));
	memcpy_s(&OnGetNumberOfCurrentPlayersComplete_Params.TotalPlayers, sizeof(OnGetNumberOfCurrentPlayersComplete_Params.TotalPlayers), &TotalPlayers, sizeof(TotalPlayers));

	this->ProcessEvent(uFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayersCached
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOnlineGameInterfaceImpl::GetNumberOfCurrentPlayersCached()
{
	static UFunction* uFnGetNumberOfCurrentPlayersCached = nullptr;

	if (!uFnGetNumberOfCurrentPlayersCached)
	{
		uFnGetNumberOfCurrentPlayersCached = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayersCached");
	}

	UOnlineGameInterfaceImpl_execGetNumberOfCurrentPlayersCached_Params GetNumberOfCurrentPlayersCached_Params;
	memset(&GetNumberOfCurrentPlayersCached_Params, 0, sizeof(GetNumberOfCurrentPlayersCached_Params));

	this->ProcessEvent(uFnGetNumberOfCurrentPlayersCached, &GetNumberOfCurrentPlayersCached_Params, nullptr);

	return GetNumberOfCurrentPlayersCached_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayers
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::GetNumberOfCurrentPlayers()
{
	static UFunction* uFnGetNumberOfCurrentPlayers = nullptr;

	if (!uFnGetNumberOfCurrentPlayers)
	{
		uFnGetNumberOfCurrentPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayers");
	}

	UOnlineGameInterfaceImpl_execGetNumberOfCurrentPlayers_Params GetNumberOfCurrentPlayers_Params;
	memset(&GetNumberOfCurrentPlayers_Params, 0, sizeof(GetNumberOfCurrentPlayers_Params));

	this->ProcessEvent(uFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Params, nullptr);

	return GetNumberOfCurrentPlayers_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static UFunction* uFnClearQosStatusChangedDelegate = nullptr;

	if (!uFnClearQosStatusChangedDelegate)
	{
		uFnClearQosStatusChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate");
	}

	UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Params ClearQosStatusChangedDelegate_Params;
	memset(&ClearQosStatusChangedDelegate_Params, 0, sizeof(ClearQosStatusChangedDelegate_Params));
	memcpy_s(&ClearQosStatusChangedDelegate_Params.QosStatusChangedDelegate, sizeof(ClearQosStatusChangedDelegate_Params.QosStatusChangedDelegate), &QosStatusChangedDelegate, sizeof(QosStatusChangedDelegate));

	this->ProcessEvent(uFnClearQosStatusChangedDelegate, &ClearQosStatusChangedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static UFunction* uFnAddQosStatusChangedDelegate = nullptr;

	if (!uFnAddQosStatusChangedDelegate)
	{
		uFnAddQosStatusChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate");
	}

	UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Params AddQosStatusChangedDelegate_Params;
	memset(&AddQosStatusChangedDelegate_Params, 0, sizeof(AddQosStatusChangedDelegate_Params));
	memcpy_s(&AddQosStatusChangedDelegate_Params.QosStatusChangedDelegate, sizeof(AddQosStatusChangedDelegate_Params.QosStatusChangedDelegate), &QosStatusChangedDelegate, sizeof(QosStatusChangedDelegate));

	this->ProcessEvent(uFnAddQosStatusChangedDelegate, &AddQosStatusChangedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        NumComplete                    (CPF_Parm)
// int32_t                        NumTotal                       (CPF_Parm)

void UOnlineGameInterfaceImpl::OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal)
{
	static UFunction* uFnOnQosStatusChanged = nullptr;

	if (!uFnOnQosStatusChanged)
	{
		uFnOnQosStatusChanged = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged");
	}

	UOnlineGameInterfaceImpl_execOnQosStatusChanged_Params OnQosStatusChanged_Params;
	memset(&OnQosStatusChanged_Params, 0, sizeof(OnQosStatusChanged_Params));
	memcpy_s(&OnQosStatusChanged_Params.NumComplete, sizeof(OnQosStatusChanged_Params.NumComplete), &NumComplete, sizeof(NumComplete));
	memcpy_s(&OnQosStatusChanged_Params.NumTotal, sizeof(OnQosStatusChanged_Params.NumTotal), &NumTotal, sizeof(NumTotal));

	this->ProcessEvent(uFnOnQosStatusChanged, &OnQosStatusChanged_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[16282])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm)

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, uint8_t PlatformSpecificInfo[80])
{
	static UFunction* uFnBindPlatformSpecificSessionToSearch = nullptr;

	if (!uFnBindPlatformSpecificSessionToSearch)
	{
		uFnBindPlatformSpecificSessionToSearch = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch");
	}

	UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Params BindPlatformSpecificSessionToSearch_Params;
	memset(&BindPlatformSpecificSessionToSearch_Params, 0, sizeof(BindPlatformSpecificSessionToSearch_Params));
	memcpy_s(&BindPlatformSpecificSessionToSearch_Params.SearchingPlayerNum, sizeof(BindPlatformSpecificSessionToSearch_Params.SearchingPlayerNum), &SearchingPlayerNum, sizeof(SearchingPlayerNum));
	BindPlatformSpecificSessionToSearch_Params.SearchSettings = SearchSettings;
	memcpy_s(&BindPlatformSpecificSessionToSearch_Params.PlatformSpecificInfo, sizeof(BindPlatformSpecificSessionToSearch_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Params, nullptr);

	return BindPlatformSpecificSessionToSearch_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[26874])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName(const class FName& SessionName, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnReadPlatformSpecificSessionInfoBySessionName = nullptr;

	if (!uFnReadPlatformSpecificSessionInfoBySessionName)
	{
		uFnReadPlatformSpecificSessionInfoBySessionName = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName");
	}

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Params ReadPlatformSpecificSessionInfoBySessionName_Params;
	memset(&ReadPlatformSpecificSessionInfoBySessionName_Params, 0, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params));
	memcpy_s(&ReadPlatformSpecificSessionInfoBySessionName_Params.SessionName, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Params, nullptr);

	memcpy_s(&PlatformSpecificInfo, sizeof(PlatformSpecificInfo), &ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo));

	return ReadPlatformSpecificSessionInfoBySessionName_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[26873])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult& DesiredGame, uint8_t& PlatformSpecificInfo)
{
	static UFunction* uFnReadPlatformSpecificSessionInfo = nullptr;

	if (!uFnReadPlatformSpecificSessionInfo)
	{
		uFnReadPlatformSpecificSessionInfo = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo");
	}

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Params ReadPlatformSpecificSessionInfo_Params;
	memset(&ReadPlatformSpecificSessionInfo_Params, 0, sizeof(ReadPlatformSpecificSessionInfo_Params));
	memcpy_s(&ReadPlatformSpecificSessionInfo_Params.DesiredGame, sizeof(ReadPlatformSpecificSessionInfo_Params.DesiredGame), &DesiredGame, sizeof(DesiredGame));
	memcpy_s(&ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo, sizeof(ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Params, nullptr);

	memcpy_s(&DesiredGame, sizeof(DesiredGame), &ReadPlatformSpecificSessionInfo_Params.DesiredGame, sizeof(ReadPlatformSpecificSessionInfo_Params.DesiredGame));
	memcpy_s(&PlatformSpecificInfo, sizeof(PlatformSpecificInfo), &ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo, sizeof(ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo));

	return ReadPlatformSpecificSessionInfo_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StartAt                        (CPF_Parm)
// int32_t                        NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery)
{
	static UFunction* uFnQueryNonAdvertisedData = nullptr;

	if (!uFnQueryNonAdvertisedData)
	{
		uFnQueryNonAdvertisedData = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData");
	}

	UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Params QueryNonAdvertisedData_Params;
	memset(&QueryNonAdvertisedData_Params, 0, sizeof(QueryNonAdvertisedData_Params));
	memcpy_s(&QueryNonAdvertisedData_Params.StartAt, sizeof(QueryNonAdvertisedData_Params.StartAt), &StartAt, sizeof(StartAt));
	memcpy_s(&QueryNonAdvertisedData_Params.NumberToQuery, sizeof(QueryNonAdvertisedData_Params.NumberToQuery), &NumberToQuery, sizeof(NumberToQuery));

	this->ProcessEvent(uFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Params, nullptr);

	return QueryNonAdvertisedData_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearJoinMigratedOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearJoinMigratedOnlineGameCompleteDelegate)
	{
		uFnClearJoinMigratedOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Params ClearJoinMigratedOnlineGameCompleteDelegate_Params;
	memset(&ClearJoinMigratedOnlineGameCompleteDelegate_Params, 0, sizeof(ClearJoinMigratedOnlineGameCompleteDelegate_Params));
	memcpy_s(&ClearJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate, sizeof(ClearJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate), &JoinMigratedOnlineGameCompleteDelegate, sizeof(JoinMigratedOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearJoinMigratedOnlineGameCompleteDelegate, &ClearJoinMigratedOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddJoinMigratedOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddJoinMigratedOnlineGameCompleteDelegate)
	{
		uFnAddJoinMigratedOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Params AddJoinMigratedOnlineGameCompleteDelegate_Params;
	memset(&AddJoinMigratedOnlineGameCompleteDelegate_Params, 0, sizeof(AddJoinMigratedOnlineGameCompleteDelegate_Params));
	memcpy_s(&AddJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate, sizeof(AddJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate), &JoinMigratedOnlineGameCompleteDelegate, sizeof(JoinMigratedOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddJoinMigratedOnlineGameCompleteDelegate, &AddJoinMigratedOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnJoinMigratedOnlineGameComplete = nullptr;

	if (!uFnOnJoinMigratedOnlineGameComplete)
	{
		uFnOnJoinMigratedOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Params OnJoinMigratedOnlineGameComplete_Params;
	memset(&OnJoinMigratedOnlineGameComplete_Params, 0, sizeof(OnJoinMigratedOnlineGameComplete_Params));
	memcpy_s(&OnJoinMigratedOnlineGameComplete_Params.SessionName, sizeof(OnJoinMigratedOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnJoinMigratedOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinMigratedOnlineGameComplete, &OnJoinMigratedOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::JoinMigratedOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& DesiredGame)
{
	static UFunction* uFnJoinMigratedOnlineGame = nullptr;

	if (!uFnJoinMigratedOnlineGame)
	{
		uFnJoinMigratedOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame");
	}

	UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Params JoinMigratedOnlineGame_Params;
	memset(&JoinMigratedOnlineGame_Params, 0, sizeof(JoinMigratedOnlineGame_Params));
	memcpy_s(&JoinMigratedOnlineGame_Params.PlayerNum, sizeof(JoinMigratedOnlineGame_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&JoinMigratedOnlineGame_Params.SessionName, sizeof(JoinMigratedOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&JoinMigratedOnlineGame_Params.DesiredGame, sizeof(JoinMigratedOnlineGame_Params.DesiredGame), &DesiredGame, sizeof(DesiredGame));

	this->ProcessEvent(uFnJoinMigratedOnlineGame, &JoinMigratedOnlineGame_Params, nullptr);

	memcpy_s(&DesiredGame, sizeof(DesiredGame), &JoinMigratedOnlineGame_Params.DesiredGame, sizeof(JoinMigratedOnlineGame_Params.DesiredGame));

	return JoinMigratedOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearMigrateOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearMigrateOnlineGameCompleteDelegate)
	{
		uFnClearMigrateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Params ClearMigrateOnlineGameCompleteDelegate_Params;
	memset(&ClearMigrateOnlineGameCompleteDelegate_Params, 0, sizeof(ClearMigrateOnlineGameCompleteDelegate_Params));
	memcpy_s(&ClearMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate, sizeof(ClearMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate), &MigrateOnlineGameCompleteDelegate, sizeof(MigrateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearMigrateOnlineGameCompleteDelegate, &ClearMigrateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddMigrateOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddMigrateOnlineGameCompleteDelegate)
	{
		uFnAddMigrateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Params AddMigrateOnlineGameCompleteDelegate_Params;
	memset(&AddMigrateOnlineGameCompleteDelegate_Params, 0, sizeof(AddMigrateOnlineGameCompleteDelegate_Params));
	memcpy_s(&AddMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate, sizeof(AddMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate), &MigrateOnlineGameCompleteDelegate, sizeof(MigrateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddMigrateOnlineGameCompleteDelegate, &AddMigrateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnMigrateOnlineGameComplete = nullptr;

	if (!uFnOnMigrateOnlineGameComplete)
	{
		uFnOnMigrateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Params OnMigrateOnlineGameComplete_Params;
	memset(&OnMigrateOnlineGameComplete_Params, 0, sizeof(OnMigrateOnlineGameComplete_Params));
	memcpy_s(&OnMigrateOnlineGameComplete_Params.SessionName, sizeof(OnMigrateOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnMigrateOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnMigrateOnlineGameComplete, &OnMigrateOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        HostingPlayerNum               (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::MigrateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName)
{
	static UFunction* uFnMigrateOnlineGame = nullptr;

	if (!uFnMigrateOnlineGame)
	{
		uFnMigrateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame");
	}

	UOnlineGameInterfaceImpl_execMigrateOnlineGame_Params MigrateOnlineGame_Params;
	memset(&MigrateOnlineGame_Params, 0, sizeof(MigrateOnlineGame_Params));
	memcpy_s(&MigrateOnlineGame_Params.HostingPlayerNum, sizeof(MigrateOnlineGame_Params.HostingPlayerNum), &HostingPlayerNum, sizeof(HostingPlayerNum));
	memcpy_s(&MigrateOnlineGame_Params.SessionName, sizeof(MigrateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnMigrateOnlineGame, &MigrateOnlineGame_Params, nullptr);

	return MigrateOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate)
{
	static UFunction* uFnClearRecalculateSkillRatingCompleteDelegate = nullptr;

	if (!uFnClearRecalculateSkillRatingCompleteDelegate)
	{
		uFnClearRecalculateSkillRatingCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Params ClearRecalculateSkillRatingCompleteDelegate_Params;
	memset(&ClearRecalculateSkillRatingCompleteDelegate_Params, 0, sizeof(ClearRecalculateSkillRatingCompleteDelegate_Params));
	memcpy_s(&ClearRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingGameCompleteDelegate, sizeof(ClearRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingGameCompleteDelegate), &RecalculateSkillRatingGameCompleteDelegate, sizeof(RecalculateSkillRatingGameCompleteDelegate));

	this->ProcessEvent(uFnClearRecalculateSkillRatingCompleteDelegate, &ClearRecalculateSkillRatingCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate)
{
	static UFunction* uFnAddRecalculateSkillRatingCompleteDelegate = nullptr;

	if (!uFnAddRecalculateSkillRatingCompleteDelegate)
	{
		uFnAddRecalculateSkillRatingCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Params AddRecalculateSkillRatingCompleteDelegate_Params;
	memset(&AddRecalculateSkillRatingCompleteDelegate_Params, 0, sizeof(AddRecalculateSkillRatingCompleteDelegate_Params));
	memcpy_s(&AddRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingCompleteDelegate, sizeof(AddRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingCompleteDelegate), &RecalculateSkillRatingCompleteDelegate, sizeof(RecalculateSkillRatingCompleteDelegate));

	this->ProcessEvent(uFnAddRecalculateSkillRatingCompleteDelegate, &AddRecalculateSkillRatingCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnRecalculateSkillRatingComplete = nullptr;

	if (!uFnOnRecalculateSkillRatingComplete)
	{
		uFnOnRecalculateSkillRatingComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete");
	}

	UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Params OnRecalculateSkillRatingComplete_Params;
	memset(&OnRecalculateSkillRatingComplete_Params, 0, sizeof(OnRecalculateSkillRatingComplete_Params));
	memcpy_s(&OnRecalculateSkillRatingComplete_Params.SessionName, sizeof(OnRecalculateSkillRatingComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnRecalculateSkillRatingComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRecalculateSkillRatingComplete, &OnRecalculateSkillRatingComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::RecalculateSkillRating(const class FName& SessionName, class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnRecalculateSkillRating = nullptr;

	if (!uFnRecalculateSkillRating)
	{
		uFnRecalculateSkillRating = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating");
	}

	UOnlineGameInterfaceImpl_execRecalculateSkillRating_Params RecalculateSkillRating_Params;
	memset(&RecalculateSkillRating_Params, 0, sizeof(RecalculateSkillRating_Params));
	memcpy_s(&RecalculateSkillRating_Params.SessionName, sizeof(RecalculateSkillRating_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RecalculateSkillRating_Params.Players, sizeof(RecalculateSkillRating_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnRecalculateSkillRating, &RecalculateSkillRating_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &RecalculateSkillRating_Params.Players, sizeof(RecalculateSkillRating_Params.Players));

	return RecalculateSkillRating_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::AcceptGameInvite(uint8_t LocalUserNum, const class FName& SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite");
	}

	UOnlineGameInterfaceImpl_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memset(&AcceptGameInvite_Params, 0, sizeof(AcceptGameInvite_Params));
	memcpy_s(&AcceptGameInvite_Params.LocalUserNum, sizeof(AcceptGameInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AcceptGameInvite_Params.SessionName, sizeof(AcceptGameInvite_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);

	return AcceptGameInvite_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static UFunction* uFnClearGameInviteAcceptedDelegate = nullptr;

	if (!uFnClearGameInviteAcceptedDelegate)
	{
		uFnClearGameInviteAcceptedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate");
	}

	UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Params ClearGameInviteAcceptedDelegate_Params;
	memset(&ClearGameInviteAcceptedDelegate_Params, 0, sizeof(ClearGameInviteAcceptedDelegate_Params));
	memcpy_s(&ClearGameInviteAcceptedDelegate_Params.LocalUserNum, sizeof(ClearGameInviteAcceptedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, sizeof(ClearGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate), &GameInviteAcceptedDelegate, sizeof(GameInviteAcceptedDelegate));

	this->ProcessEvent(uFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static UFunction* uFnAddGameInviteAcceptedDelegate = nullptr;

	if (!uFnAddGameInviteAcceptedDelegate)
	{
		uFnAddGameInviteAcceptedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate");
	}

	UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Params AddGameInviteAcceptedDelegate_Params;
	memset(&AddGameInviteAcceptedDelegate_Params, 0, sizeof(AddGameInviteAcceptedDelegate_Params));
	memcpy_s(&AddGameInviteAcceptedDelegate_Params.LocalUserNum, sizeof(AddGameInviteAcceptedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, sizeof(AddGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate), &GameInviteAcceptedDelegate, sizeof(GameInviteAcceptedDelegate));

	this->ProcessEvent(uFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceImpl::OnGameInviteAccepted(struct FOnlineGameSearchResult& InviteResult)
{
	static UFunction* uFnOnGameInviteAccepted = nullptr;

	if (!uFnOnGameInviteAccepted)
	{
		uFnOnGameInviteAccepted = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted");
	}

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Params OnGameInviteAccepted_Params;
	memset(&OnGameInviteAccepted_Params, 0, sizeof(OnGameInviteAccepted_Params));
	memcpy_s(&OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult), &InviteResult, sizeof(InviteResult));

	this->ProcessEvent(uFnOnGameInviteAccepted, &OnGameInviteAccepted_Params, nullptr);

	memcpy_s(&InviteResult, sizeof(InviteResult), &OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult));
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FName                    SessionName                    (CPF_Parm)

class TArray<struct FOnlineArbitrationRegistrant> UOnlineGameInterfaceImpl::GetArbitratedPlayers(const class FName& SessionName)
{
	static UFunction* uFnGetArbitratedPlayers = nullptr;

	if (!uFnGetArbitratedPlayers)
	{
		uFnGetArbitratedPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers");
	}

	UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Params GetArbitratedPlayers_Params;
	memset(&GetArbitratedPlayers_Params, 0, sizeof(GetArbitratedPlayers_Params));
	memcpy_s(&GetArbitratedPlayers_Params.SessionName, sizeof(GetArbitratedPlayers_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnGetArbitratedPlayers, &GetArbitratedPlayers_Params, nullptr);

	return GetArbitratedPlayers_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* uFnClearArbitrationRegistrationCompleteDelegate = nullptr;

	if (!uFnClearArbitrationRegistrationCompleteDelegate)
	{
		uFnClearArbitrationRegistrationCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Params ClearArbitrationRegistrationCompleteDelegate_Params;
	memset(&ClearArbitrationRegistrationCompleteDelegate_Params, 0, sizeof(ClearArbitrationRegistrationCompleteDelegate_Params));
	memcpy_s(&ClearArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate, sizeof(ClearArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate), &ArbitrationRegistrationCompleteDelegate, sizeof(ArbitrationRegistrationCompleteDelegate));

	this->ProcessEvent(uFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* uFnAddArbitrationRegistrationCompleteDelegate = nullptr;

	if (!uFnAddArbitrationRegistrationCompleteDelegate)
	{
		uFnAddArbitrationRegistrationCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Params AddArbitrationRegistrationCompleteDelegate_Params;
	memset(&AddArbitrationRegistrationCompleteDelegate_Params, 0, sizeof(AddArbitrationRegistrationCompleteDelegate_Params));
	memcpy_s(&AddArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate, sizeof(AddArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate), &ArbitrationRegistrationCompleteDelegate, sizeof(ArbitrationRegistrationCompleteDelegate));

	this->ProcessEvent(uFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnArbitrationRegistrationComplete = nullptr;

	if (!uFnOnArbitrationRegistrationComplete)
	{
		uFnOnArbitrationRegistrationComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete");
	}

	UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Params OnArbitrationRegistrationComplete_Params;
	memset(&OnArbitrationRegistrationComplete_Params, 0, sizeof(OnArbitrationRegistrationComplete_Params));
	memcpy_s(&OnArbitrationRegistrationComplete_Params.SessionName, sizeof(OnArbitrationRegistrationComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnArbitrationRegistrationComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::RegisterForArbitration(const class FName& SessionName)
{
	static UFunction* uFnRegisterForArbitration = nullptr;

	if (!uFnRegisterForArbitration)
	{
		uFnRegisterForArbitration = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration");
	}

	UOnlineGameInterfaceImpl_execRegisterForArbitration_Params RegisterForArbitration_Params;
	memset(&RegisterForArbitration_Params, 0, sizeof(RegisterForArbitration_Params));
	memcpy_s(&RegisterForArbitration_Params.SessionName, sizeof(RegisterForArbitration_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnRegisterForArbitration, &RegisterForArbitration_Params, nullptr);

	return RegisterForArbitration_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearEndOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearEndOnlineGameCompleteDelegate)
	{
		uFnClearEndOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Params ClearEndOnlineGameCompleteDelegate_Params;
	memset(&ClearEndOnlineGameCompleteDelegate_Params, 0, sizeof(ClearEndOnlineGameCompleteDelegate_Params));
	memcpy_s(&ClearEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate, sizeof(ClearEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate), &EndOnlineGameCompleteDelegate, sizeof(EndOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddEndOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddEndOnlineGameCompleteDelegate)
	{
		uFnAddEndOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Params AddEndOnlineGameCompleteDelegate_Params;
	memset(&AddEndOnlineGameCompleteDelegate_Params, 0, sizeof(AddEndOnlineGameCompleteDelegate_Params));
	memcpy_s(&AddEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate, sizeof(AddEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate), &EndOnlineGameCompleteDelegate, sizeof(EndOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnEndOnlineGameComplete = nullptr;

	if (!uFnOnEndOnlineGameComplete)
	{
		uFnOnEndOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Params OnEndOnlineGameComplete_Params;
	memset(&OnEndOnlineGameComplete_Params, 0, sizeof(OnEndOnlineGameComplete_Params));
	memcpy_s(&OnEndOnlineGameComplete_Params.SessionName, sizeof(OnEndOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnEndOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20374])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::EndOnlineGame(const class FName& SessionName)
{
	static UFunction* uFnEndOnlineGame = nullptr;

	if (!uFnEndOnlineGame)
	{
		uFnEndOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame");
	}

	UOnlineGameInterfaceImpl_execEndOnlineGame_Params EndOnlineGame_Params;
	memset(&EndOnlineGame_Params, 0, sizeof(EndOnlineGame_Params));
	memcpy_s(&EndOnlineGame_Params.SessionName, sizeof(EndOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnEndOnlineGame, &EndOnlineGame_Params, nullptr);

	return EndOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearStartOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearStartOnlineGameCompleteDelegate)
	{
		uFnClearStartOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Params ClearStartOnlineGameCompleteDelegate_Params;
	memset(&ClearStartOnlineGameCompleteDelegate_Params, 0, sizeof(ClearStartOnlineGameCompleteDelegate_Params));
	memcpy_s(&ClearStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate, sizeof(ClearStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate), &StartOnlineGameCompleteDelegate, sizeof(StartOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddStartOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddStartOnlineGameCompleteDelegate)
	{
		uFnAddStartOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Params AddStartOnlineGameCompleteDelegate_Params;
	memset(&AddStartOnlineGameCompleteDelegate_Params, 0, sizeof(AddStartOnlineGameCompleteDelegate_Params));
	memcpy_s(&AddStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate, sizeof(AddStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate), &StartOnlineGameCompleteDelegate, sizeof(StartOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnStartOnlineGameComplete = nullptr;

	if (!uFnOnStartOnlineGameComplete)
	{
		uFnOnStartOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Params OnStartOnlineGameComplete_Params;
	memset(&OnStartOnlineGameComplete_Params, 0, sizeof(OnStartOnlineGameComplete_Params));
	memcpy_s(&OnStartOnlineGameComplete_Params.SessionName, sizeof(OnStartOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnStartOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28818])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::StartOnlineGame(const class FName& SessionName)
{
	static UFunction* uFnStartOnlineGame = nullptr;

	if (!uFnStartOnlineGame)
	{
		uFnStartOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame");
	}

	UOnlineGameInterfaceImpl_execStartOnlineGame_Params StartOnlineGame_Params;
	memset(&StartOnlineGame_Params, 0, sizeof(StartOnlineGame_Params));
	memcpy_s(&StartOnlineGame_Params.SessionName, sizeof(StartOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnStartOnlineGame, &StartOnlineGame_Params, nullptr);

	return StartOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RetrieveGameSettingsForIP
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  IPAddress                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::RetrieveGameSettingsForIP(const class FString& IPAddress)
{
	static UFunction* uFnRetrieveGameSettingsForIP = nullptr;

	if (!uFnRetrieveGameSettingsForIP)
	{
		uFnRetrieveGameSettingsForIP = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RetrieveGameSettingsForIP");
	}

	UOnlineGameInterfaceImpl_execRetrieveGameSettingsForIP_Params RetrieveGameSettingsForIP_Params;
	memset(&RetrieveGameSettingsForIP_Params, 0, sizeof(RetrieveGameSettingsForIP_Params));
	memcpy_s(&RetrieveGameSettingsForIP_Params.IPAddress, sizeof(RetrieveGameSettingsForIP_Params.IPAddress), &IPAddress, sizeof(IPAddress));

	this->ProcessEvent(uFnRetrieveGameSettingsForIP, &RetrieveGameSettingsForIP_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearOnRetrieveGameSettingsForIPDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RetrieveIPDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearOnRetrieveGameSettingsForIPDelegate(const struct FScriptDelegate& RetrieveIPDelegate)
{
	static UFunction* uFnClearOnRetrieveGameSettingsForIPDelegate = nullptr;

	if (!uFnClearOnRetrieveGameSettingsForIPDelegate)
	{
		uFnClearOnRetrieveGameSettingsForIPDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearOnRetrieveGameSettingsForIPDelegate");
	}

	UOnlineGameInterfaceImpl_execClearOnRetrieveGameSettingsForIPDelegate_Params ClearOnRetrieveGameSettingsForIPDelegate_Params;
	memset(&ClearOnRetrieveGameSettingsForIPDelegate_Params, 0, sizeof(ClearOnRetrieveGameSettingsForIPDelegate_Params));
	memcpy_s(&ClearOnRetrieveGameSettingsForIPDelegate_Params.RetrieveIPDelegate, sizeof(ClearOnRetrieveGameSettingsForIPDelegate_Params.RetrieveIPDelegate), &RetrieveIPDelegate, sizeof(RetrieveIPDelegate));

	this->ProcessEvent(uFnClearOnRetrieveGameSettingsForIPDelegate, &ClearOnRetrieveGameSettingsForIPDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddOnRetrieveGameSettingsForIPDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         NewRetrieveIPDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddOnRetrieveGameSettingsForIPDelegate(const struct FScriptDelegate& NewRetrieveIPDelegate)
{
	static UFunction* uFnAddOnRetrieveGameSettingsForIPDelegate = nullptr;

	if (!uFnAddOnRetrieveGameSettingsForIPDelegate)
	{
		uFnAddOnRetrieveGameSettingsForIPDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddOnRetrieveGameSettingsForIPDelegate");
	}

	UOnlineGameInterfaceImpl_execAddOnRetrieveGameSettingsForIPDelegate_Params AddOnRetrieveGameSettingsForIPDelegate_Params;
	memset(&AddOnRetrieveGameSettingsForIPDelegate_Params, 0, sizeof(AddOnRetrieveGameSettingsForIPDelegate_Params));
	memcpy_s(&AddOnRetrieveGameSettingsForIPDelegate_Params.NewRetrieveIPDelegate, sizeof(AddOnRetrieveGameSettingsForIPDelegate_Params.NewRetrieveIPDelegate), &NewRetrieveIPDelegate, sizeof(NewRetrieveIPDelegate));

	this->ProcessEvent(uFnAddOnRetrieveGameSettingsForIPDelegate, &AddOnRetrieveGameSettingsForIPDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRetrievedGameSettingsForIP
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bSuccessful                    (CPF_Parm)
// struct FOnlineGameSearchResult ConnectResult                  (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceImpl::OnRetrievedGameSettingsForIP(bool bSuccessful, struct FOnlineGameSearchResult& ConnectResult)
{
	static UFunction* uFnOnRetrievedGameSettingsForIP = nullptr;

	if (!uFnOnRetrievedGameSettingsForIP)
	{
		uFnOnRetrievedGameSettingsForIP = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRetrievedGameSettingsForIP");
	}

	UOnlineGameInterfaceImpl_execOnRetrievedGameSettingsForIP_Params OnRetrievedGameSettingsForIP_Params;
	memset(&OnRetrievedGameSettingsForIP_Params, 0, sizeof(OnRetrievedGameSettingsForIP_Params));
	OnRetrievedGameSettingsForIP_Params.bSuccessful = bSuccessful;
	memcpy_s(&OnRetrievedGameSettingsForIP_Params.ConnectResult, sizeof(OnRetrievedGameSettingsForIP_Params.ConnectResult), &ConnectResult, sizeof(ConnectResult));

	this->ProcessEvent(uFnOnRetrievedGameSettingsForIP, &OnRetrievedGameSettingsForIP_Params, nullptr);

	memcpy_s(&ConnectResult, sizeof(ConnectResult), &OnRetrievedGameSettingsForIP_Params.ConnectResult, sizeof(OnRetrievedGameSettingsForIP_Params.ConnectResult));
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		uFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Params ClearUnregisterPlayerCompleteDelegate_Params;
	memset(&ClearUnregisterPlayerCompleteDelegate_Params, 0, sizeof(ClearUnregisterPlayerCompleteDelegate_Params));
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		uFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Params AddUnregisterPlayerCompleteDelegate_Params;
	memset(&AddUnregisterPlayerCompleteDelegate_Params, 0, sizeof(AddUnregisterPlayerCompleteDelegate_Params));
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete");
	}

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
	memset(&OnUnregisterPlayerComplete_Params, 0, sizeof(OnUnregisterPlayerComplete_Params));
	memcpy_s(&OnUnregisterPlayerComplete_Params.SessionName, sizeof(OnUnregisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnUnregisterPlayerComplete_Params.PlayerID, sizeof(OnUnregisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnUnregisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::UnregisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnUnregisterPlayers = nullptr;

	if (!uFnUnregisterPlayers)
	{
		uFnUnregisterPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers");
	}

	UOnlineGameInterfaceImpl_execUnregisterPlayers_Params UnregisterPlayers_Params;
	memset(&UnregisterPlayers_Params, 0, sizeof(UnregisterPlayers_Params));
	memcpy_s(&UnregisterPlayers_Params.SessionName, sizeof(UnregisterPlayers_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UnregisterPlayers_Params.Players, sizeof(UnregisterPlayers_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnUnregisterPlayers, &UnregisterPlayers_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &UnregisterPlayers_Params.Players, sizeof(UnregisterPlayers_Params.Players));

	return UnregisterPlayers_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineGameInterfaceImpl::UnregisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnUnregisterPlayer = nullptr;

	if (!uFnUnregisterPlayer)
	{
		uFnUnregisterPlayer = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer");
	}

	UOnlineGameInterfaceImpl_execUnregisterPlayer_Params UnregisterPlayer_Params;
	memset(&UnregisterPlayer_Params, 0, sizeof(UnregisterPlayer_Params));
	memcpy_s(&UnregisterPlayer_Params.SessionName, sizeof(UnregisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UnregisterPlayer_Params.PlayerID, sizeof(UnregisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnUnregisterPlayer, &UnregisterPlayer_Params, nullptr);

	return UnregisterPlayer_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		uFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Params ClearRegisterPlayerCompleteDelegate_Params;
	memset(&ClearRegisterPlayerCompleteDelegate_Params, 0, sizeof(ClearRegisterPlayerCompleteDelegate_Params));
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		uFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Params AddRegisterPlayerCompleteDelegate_Params;
	memset(&AddRegisterPlayerCompleteDelegate_Params, 0, sizeof(AddRegisterPlayerCompleteDelegate_Params));
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete");
	}

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
	memset(&OnRegisterPlayerComplete_Params, 0, sizeof(OnRegisterPlayerComplete_Params));
	memcpy_s(&OnRegisterPlayerComplete_Params.SessionName, sizeof(OnRegisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnRegisterPlayerComplete_Params.PlayerID, sizeof(OnRegisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnRegisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::RegisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnRegisterPlayers = nullptr;

	if (!uFnRegisterPlayers)
	{
		uFnRegisterPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers");
	}

	UOnlineGameInterfaceImpl_execRegisterPlayers_Params RegisterPlayers_Params;
	memset(&RegisterPlayers_Params, 0, sizeof(RegisterPlayers_Params));
	memcpy_s(&RegisterPlayers_Params.SessionName, sizeof(RegisterPlayers_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RegisterPlayers_Params.Players, sizeof(RegisterPlayers_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnRegisterPlayers, &RegisterPlayers_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &RegisterPlayers_Params.Players, sizeof(RegisterPlayers_Params.Players));

	return RegisterPlayers_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::RegisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static UFunction* uFnRegisterPlayer = nullptr;

	if (!uFnRegisterPlayer)
	{
		uFnRegisterPlayer = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer");
	}

	UOnlineGameInterfaceImpl_execRegisterPlayer_Params RegisterPlayer_Params;
	memset(&RegisterPlayer_Params, 0, sizeof(RegisterPlayer_Params));
	memcpy_s(&RegisterPlayer_Params.SessionName, sizeof(RegisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RegisterPlayer_Params.PlayerID, sizeof(RegisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	RegisterPlayer_Params.bWasInvited = bWasInvited;

	this->ProcessEvent(uFnRegisterPlayer, &RegisterPlayer_Params, nullptr);

	return RegisterPlayer_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21950])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class FString                  ConnectInfo                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::GetResolvedConnectString(const class FName& SessionName, class FString& ConnectInfo)
{
	static UFunction* uFnGetResolvedConnectString = nullptr;

	if (!uFnGetResolvedConnectString)
	{
		uFnGetResolvedConnectString = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString");
	}

	UOnlineGameInterfaceImpl_execGetResolvedConnectString_Params GetResolvedConnectString_Params;
	memset(&GetResolvedConnectString_Params, 0, sizeof(GetResolvedConnectString_Params));
	memcpy_s(&GetResolvedConnectString_Params.SessionName, sizeof(GetResolvedConnectString_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&GetResolvedConnectString_Params.ConnectInfo, sizeof(GetResolvedConnectString_Params.ConnectInfo), &ConnectInfo, sizeof(ConnectInfo));

	this->ProcessEvent(uFnGetResolvedConnectString, &GetResolvedConnectString_Params, nullptr);

	memcpy_s(&ConnectInfo, sizeof(ConnectInfo), &GetResolvedConnectString_Params.ConnectInfo, sizeof(GetResolvedConnectString_Params.ConnectInfo));

	return GetResolvedConnectString_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearJoinOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearJoinOnlineGameCompleteDelegate)
	{
		uFnClearJoinOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Params ClearJoinOnlineGameCompleteDelegate_Params;
	memset(&ClearJoinOnlineGameCompleteDelegate_Params, 0, sizeof(ClearJoinOnlineGameCompleteDelegate_Params));
	memcpy_s(&ClearJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate, sizeof(ClearJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate), &JoinOnlineGameCompleteDelegate, sizeof(JoinOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddJoinOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddJoinOnlineGameCompleteDelegate)
	{
		uFnAddJoinOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Params AddJoinOnlineGameCompleteDelegate_Params;
	memset(&AddJoinOnlineGameCompleteDelegate_Params, 0, sizeof(AddJoinOnlineGameCompleteDelegate_Params));
	memcpy_s(&AddJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate, sizeof(AddJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate), &JoinOnlineGameCompleteDelegate, sizeof(JoinOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnJoinOnlineGameComplete = nullptr;

	if (!uFnOnJoinOnlineGameComplete)
	{
		uFnOnJoinOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Params OnJoinOnlineGameComplete_Params;
	memset(&OnJoinOnlineGameComplete_Params, 0, sizeof(OnJoinOnlineGameComplete_Params));
	memcpy_s(&OnJoinOnlineGameComplete_Params.SessionName, sizeof(OnJoinOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnJoinOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.IsCurrentRoomOwner
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::IsCurrentRoomOwner()
{
	static UFunction* uFnIsCurrentRoomOwner = nullptr;

	if (!uFnIsCurrentRoomOwner)
	{
		uFnIsCurrentRoomOwner = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.IsCurrentRoomOwner");
	}

	UOnlineGameInterfaceImpl_execIsCurrentRoomOwner_Params IsCurrentRoomOwner_Params;
	memset(&IsCurrentRoomOwner_Params, 0, sizeof(IsCurrentRoomOwner_Params));

	this->ProcessEvent(uFnIsCurrentRoomOwner, &IsCurrentRoomOwner_Params, nullptr);

	return IsCurrentRoomOwner_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.SetRankedReadyStatus
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bReady                         (CPF_Parm)

bool UOnlineGameInterfaceImpl::SetRankedReadyStatus(bool bReady)
{
	static UFunction* uFnSetRankedReadyStatus = nullptr;

	if (!uFnSetRankedReadyStatus)
	{
		uFnSetRankedReadyStatus = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.SetRankedReadyStatus");
	}

	UOnlineGameInterfaceImpl_execSetRankedReadyStatus_Params SetRankedReadyStatus_Params;
	memset(&SetRankedReadyStatus_Params, 0, sizeof(SetRankedReadyStatus_Params));
	SetRankedReadyStatus_Params.bReady = bReady;

	this->ProcessEvent(uFnSetRankedReadyStatus, &SetRankedReadyStatus_Params, nullptr);

	return SetRankedReadyStatus_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.IsJoinOperationInProgress
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::IsJoinOperationInProgress()
{
	static UFunction* uFnIsJoinOperationInProgress = nullptr;

	if (!uFnIsJoinOperationInProgress)
	{
		uFnIsJoinOperationInProgress = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.IsJoinOperationInProgress");
	}

	UOnlineGameInterfaceImpl_execIsJoinOperationInProgress_Params IsJoinOperationInProgress_Params;
	memset(&IsJoinOperationInProgress_Params, 0, sizeof(IsJoinOperationInProgress_Params));

	this->ProcessEvent(uFnIsJoinOperationInProgress, &IsJoinOperationInProgress_Params, nullptr);

	return IsJoinOperationInProgress_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGameByMatchingParams
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQWord                  RoomId                         (CPF_Parm)
// class UOnlineGameSettings*     JoinedGameSettings             (CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::JoinOnlineGameByMatchingParams(const struct FQWord& RoomId, class UOnlineGameSettings*& JoinedGameSettings)
{
	static UFunction* uFnJoinOnlineGameByMatchingParams = nullptr;

	if (!uFnJoinOnlineGameByMatchingParams)
	{
		uFnJoinOnlineGameByMatchingParams = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGameByMatchingParams");
	}

	UOnlineGameInterfaceImpl_execJoinOnlineGameByMatchingParams_Params JoinOnlineGameByMatchingParams_Params;
	memset(&JoinOnlineGameByMatchingParams_Params, 0, sizeof(JoinOnlineGameByMatchingParams_Params));
	memcpy_s(&JoinOnlineGameByMatchingParams_Params.RoomId, sizeof(JoinOnlineGameByMatchingParams_Params.RoomId), &RoomId, sizeof(RoomId));
	JoinOnlineGameByMatchingParams_Params.JoinedGameSettings = JoinedGameSettings;

	this->ProcessEvent(uFnJoinOnlineGameByMatchingParams, &JoinOnlineGameByMatchingParams_Params, nullptr);

	JoinedGameSettings = JoinOnlineGameByMatchingParams_Params.JoinedGameSettings;

	return JoinOnlineGameByMatchingParams_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[23009])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::JoinOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& DesiredGame)
{
	static UFunction* uFnJoinOnlineGame = nullptr;

	if (!uFnJoinOnlineGame)
	{
		uFnJoinOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame");
	}

	UOnlineGameInterfaceImpl_execJoinOnlineGame_Params JoinOnlineGame_Params;
	memset(&JoinOnlineGame_Params, 0, sizeof(JoinOnlineGame_Params));
	memcpy_s(&JoinOnlineGame_Params.PlayerNum, sizeof(JoinOnlineGame_Params.PlayerNum), &PlayerNum, sizeof(PlayerNum));
	memcpy_s(&JoinOnlineGame_Params.SessionName, sizeof(JoinOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&JoinOnlineGame_Params.DesiredGame, sizeof(JoinOnlineGame_Params.DesiredGame), &DesiredGame, sizeof(DesiredGame));

	this->ProcessEvent(uFnJoinOnlineGame, &JoinOnlineGame_Params, nullptr);

	memcpy_s(&DesiredGame, sizeof(DesiredGame), &JoinOnlineGame_Params.DesiredGame, sizeof(JoinOnlineGame_Params.DesiredGame));

	return JoinOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21359])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineGameSearch*       Search                         (CPF_Parm)

bool UOnlineGameInterfaceImpl::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static UFunction* uFnFreeSearchResults = nullptr;

	if (!uFnFreeSearchResults)
	{
		uFnFreeSearchResults = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults");
	}

	UOnlineGameInterfaceImpl_execFreeSearchResults_Params FreeSearchResults_Params;
	memset(&FreeSearchResults_Params, 0, sizeof(FreeSearchResults_Params));
	FreeSearchResults_Params.Search = Search;

	this->ProcessEvent(uFnFreeSearchResults, &FreeSearchResults_Params, nullptr);

	return FreeSearchResults_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnClearCancelFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnClearCancelFindOnlineGamesCompleteDelegate)
	{
		uFnClearCancelFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Params ClearCancelFindOnlineGamesCompleteDelegate_Params;
	memset(&ClearCancelFindOnlineGamesCompleteDelegate_Params, 0, sizeof(ClearCancelFindOnlineGamesCompleteDelegate_Params));
	memcpy_s(&ClearCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate, sizeof(ClearCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate), &CancelFindOnlineGamesCompleteDelegate, sizeof(CancelFindOnlineGamesCompleteDelegate));

	this->ProcessEvent(uFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnAddCancelFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnAddCancelFindOnlineGamesCompleteDelegate)
	{
		uFnAddCancelFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Params AddCancelFindOnlineGamesCompleteDelegate_Params;
	memset(&AddCancelFindOnlineGamesCompleteDelegate_Params, 0, sizeof(AddCancelFindOnlineGamesCompleteDelegate_Params));
	memcpy_s(&AddCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate, sizeof(AddCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate), &CancelFindOnlineGamesCompleteDelegate, sizeof(CancelFindOnlineGamesCompleteDelegate));

	this->ProcessEvent(uFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnCancelFindOnlineGamesComplete = nullptr;

	if (!uFnOnCancelFindOnlineGamesComplete)
	{
		uFnOnCancelFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete");
	}

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Params OnCancelFindOnlineGamesComplete_Params;
	memset(&OnCancelFindOnlineGamesComplete_Params, 0, sizeof(OnCancelFindOnlineGamesComplete_Params));
	OnCancelFindOnlineGamesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18098])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames()
{
	static UFunction* uFnCancelFindOnlineGames = nullptr;

	if (!uFnCancelFindOnlineGames)
	{
		uFnCancelFindOnlineGames = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames");
	}

	UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Params CancelFindOnlineGames_Params;
	memset(&CancelFindOnlineGames_Params, 0, sizeof(CancelFindOnlineGames_Params));

	this->ProcessEvent(uFnCancelFindOnlineGames, &CancelFindOnlineGames_Params, nullptr);

	return CancelFindOnlineGames_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnClearFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnClearFindOnlineGamesCompleteDelegate)
	{
		uFnClearFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Params ClearFindOnlineGamesCompleteDelegate_Params;
	memset(&ClearFindOnlineGamesCompleteDelegate_Params, 0, sizeof(ClearFindOnlineGamesCompleteDelegate_Params));
	memcpy_s(&ClearFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate, sizeof(ClearFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate), &FindOnlineGamesCompleteDelegate, sizeof(FindOnlineGamesCompleteDelegate));

	this->ProcessEvent(uFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnAddFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnAddFindOnlineGamesCompleteDelegate)
	{
		uFnAddFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Params AddFindOnlineGamesCompleteDelegate_Params;
	memset(&AddFindOnlineGamesCompleteDelegate_Params, 0, sizeof(AddFindOnlineGamesCompleteDelegate_Params));
	memcpy_s(&AddFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate, sizeof(AddFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate), &FindOnlineGamesCompleteDelegate, sizeof(FindOnlineGamesCompleteDelegate));

	this->ProcessEvent(uFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21006])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)

bool UOnlineGameInterfaceImpl::FindOnlineGames(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static UFunction* uFnFindOnlineGames = nullptr;

	if (!uFnFindOnlineGames)
	{
		uFnFindOnlineGames = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames");
	}

	UOnlineGameInterfaceImpl_execFindOnlineGames_Params FindOnlineGames_Params;
	memset(&FindOnlineGames_Params, 0, sizeof(FindOnlineGames_Params));
	memcpy_s(&FindOnlineGames_Params.SearchingPlayerNum, sizeof(FindOnlineGames_Params.SearchingPlayerNum), &SearchingPlayerNum, sizeof(SearchingPlayerNum));
	FindOnlineGames_Params.SearchSettings = SearchSettings;

	this->ProcessEvent(uFnFindOnlineGames, &FindOnlineGames_Params, nullptr);

	return FindOnlineGames_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearDestroyOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearDestroyOnlineGameCompleteDelegate)
	{
		uFnClearDestroyOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Params ClearDestroyOnlineGameCompleteDelegate_Params;
	memset(&ClearDestroyOnlineGameCompleteDelegate_Params, 0, sizeof(ClearDestroyOnlineGameCompleteDelegate_Params));
	memcpy_s(&ClearDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate, sizeof(ClearDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate), &DestroyOnlineGameCompleteDelegate, sizeof(DestroyOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddDestroyOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddDestroyOnlineGameCompleteDelegate)
	{
		uFnAddDestroyOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Params AddDestroyOnlineGameCompleteDelegate_Params;
	memset(&AddDestroyOnlineGameCompleteDelegate_Params, 0, sizeof(AddDestroyOnlineGameCompleteDelegate_Params));
	memcpy_s(&AddDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate, sizeof(AddDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate), &DestroyOnlineGameCompleteDelegate, sizeof(DestroyOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnDestroyOnlineGameComplete = nullptr;

	if (!uFnOnDestroyOnlineGameComplete)
	{
		uFnOnDestroyOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Params OnDestroyOnlineGameComplete_Params;
	memset(&OnDestroyOnlineGameComplete_Params, 0, sizeof(OnDestroyOnlineGameComplete_Params));
	memcpy_s(&OnDestroyOnlineGameComplete_Params.SessionName, sizeof(OnDestroyOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnDestroyOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19620])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::DestroyOnlineGame(const class FName& SessionName)
{
	static UFunction* uFnDestroyOnlineGame = nullptr;

	if (!uFnDestroyOnlineGame)
	{
		uFnDestroyOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame");
	}

	UOnlineGameInterfaceImpl_execDestroyOnlineGame_Params DestroyOnlineGame_Params;
	memset(&DestroyOnlineGame_Params, 0, sizeof(DestroyOnlineGame_Params));
	memcpy_s(&DestroyOnlineGame_Params.SessionName, sizeof(DestroyOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnDestroyOnlineGame, &DestroyOnlineGame_Params, nullptr);

	return DestroyOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearUpdateOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearUpdateOnlineGameCompleteDelegate)
	{
		uFnClearUpdateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Params ClearUpdateOnlineGameCompleteDelegate_Params;
	memset(&ClearUpdateOnlineGameCompleteDelegate_Params, 0, sizeof(ClearUpdateOnlineGameCompleteDelegate_Params));
	memcpy_s(&ClearUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate, sizeof(ClearUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate), &UpdateOnlineGameCompleteDelegate, sizeof(UpdateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddUpdateOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddUpdateOnlineGameCompleteDelegate)
	{
		uFnAddUpdateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Params AddUpdateOnlineGameCompleteDelegate_Params;
	memset(&AddUpdateOnlineGameCompleteDelegate_Params, 0, sizeof(AddUpdateOnlineGameCompleteDelegate_Params));
	memcpy_s(&AddUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate, sizeof(AddUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate), &UpdateOnlineGameCompleteDelegate, sizeof(UpdateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnUpdateOnlineGameComplete = nullptr;

	if (!uFnOnUpdateOnlineGameComplete)
	{
		uFnOnUpdateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Params OnUpdateOnlineGameComplete_Params;
	memset(&OnUpdateOnlineGameComplete_Params, 0, sizeof(OnUpdateOnlineGameComplete_Params));
	memcpy_s(&OnUpdateOnlineGameComplete_Params.SessionName, sizeof(OnUpdateOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnUpdateOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// uint32_t                       bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceImpl::UpdateOnlineGame(const class FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame");
	}

	UOnlineGameInterfaceImpl_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memset(&UpdateOnlineGame_Params, 0, sizeof(UpdateOnlineGame_Params));
	memcpy_s(&UpdateOnlineGame_Params.SessionName, sizeof(UpdateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	UpdateOnlineGame_Params.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);

	return UpdateOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearCreateOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearCreateOnlineGameCompleteDelegate)
	{
		uFnClearCreateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Params ClearCreateOnlineGameCompleteDelegate_Params;
	memset(&ClearCreateOnlineGameCompleteDelegate_Params, 0, sizeof(ClearCreateOnlineGameCompleteDelegate_Params));
	memcpy_s(&ClearCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate, sizeof(ClearCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate), &CreateOnlineGameCompleteDelegate, sizeof(CreateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddCreateOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddCreateOnlineGameCompleteDelegate)
	{
		uFnAddCreateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Params AddCreateOnlineGameCompleteDelegate_Params;
	memset(&AddCreateOnlineGameCompleteDelegate_Params, 0, sizeof(AddCreateOnlineGameCompleteDelegate_Params));
	memcpy_s(&AddCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate, sizeof(AddCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate), &CreateOnlineGameCompleteDelegate, sizeof(CreateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnCreateOnlineGameComplete = nullptr;

	if (!uFnOnCreateOnlineGameComplete)
	{
		uFnOnCreateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Params OnCreateOnlineGameComplete_Params;
	memset(&OnCreateOnlineGameComplete_Params, 0, sizeof(OnCreateOnlineGameComplete_Params));
	memcpy_s(&OnCreateOnlineGameComplete_Params.SessionName, sizeof(OnCreateOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnCreateOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18985])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        HostingPlayerNum               (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     NewGameSettings                (CPF_Parm)

bool UOnlineGameInterfaceImpl::CreateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static UFunction* uFnCreateOnlineGame = nullptr;

	if (!uFnCreateOnlineGame)
	{
		uFnCreateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame");
	}

	UOnlineGameInterfaceImpl_execCreateOnlineGame_Params CreateOnlineGame_Params;
	memset(&CreateOnlineGame_Params, 0, sizeof(CreateOnlineGame_Params));
	memcpy_s(&CreateOnlineGame_Params.HostingPlayerNum, sizeof(CreateOnlineGame_Params.HostingPlayerNum), &HostingPlayerNum, sizeof(HostingPlayerNum));
	memcpy_s(&CreateOnlineGame_Params.SessionName, sizeof(CreateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	CreateOnlineGame_Params.NewGameSettings = NewGameSettings;

	this->ProcessEvent(uFnCreateOnlineGame, &CreateOnlineGame_Params, nullptr);

	return CreateOnlineGame_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineGameSearch*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch()
{
	static UFunction* uFnGetGameSearch = nullptr;

	if (!uFnGetGameSearch)
	{
		uFnGetGameSearch = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch");
	}

	UOnlineGameInterfaceImpl_execGetGameSearch_Params GetGameSearch_Params;
	memset(&GetGameSearch_Params, 0, sizeof(GetGameSearch_Params));

	this->ProcessEvent(uFnGetGameSearch, &GetGameSearch_Params, nullptr);

	return GetGameSearch_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineGameSettings*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings(const class FName& SessionName)
{
	static UFunction* uFnGetGameSettings = nullptr;

	if (!uFnGetGameSettings)
	{
		uFnGetGameSettings = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings");
	}

	UOnlineGameInterfaceImpl_execGetGameSettings_Params GetGameSettings_Params;
	memset(&GetGameSettings_Params, 0, sizeof(GetGameSettings_Params));
	memcpy_s(&GetGameSettings_Params.SessionName, sizeof(GetGameSettings_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnGetGameSettings, &GetGameSettings_Params, nullptr);

	return GetGameSettings_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnFindOnlineGamesComplete = nullptr;

	if (!uFnOnFindOnlineGamesComplete)
	{
		uFnOnFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete");
	}

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Params OnFindOnlineGamesComplete_Params;
	memset(&OnFindOnlineGamesComplete_Params, 0, sizeof(OnFindOnlineGamesComplete_Params));
	OnFindOnlineGamesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32896])
// Parameter Info:
// class TArray<uint8_t>          Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::ParseDataCenterId(class TArray<uint8_t>& Data)
{
	static UFunction* uFnParseDataCenterId = nullptr;

	if (!uFnParseDataCenterId)
	{
		uFnParseDataCenterId = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ParseDataCenterId");
	}

	UOnlinePlaylistManager_execParseDataCenterId_Params ParseDataCenterId_Params;
	memset(&ParseDataCenterId_Params, 0, sizeof(ParseDataCenterId_Params));
	memcpy_s(&ParseDataCenterId_Params.Data, sizeof(ParseDataCenterId_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnParseDataCenterId, &ParseDataCenterId_Params, nullptr);

	memcpy_s(&Data, sizeof(Data), &ParseDataCenterId_Params.Data, sizeof(ParseDataCenterId_Params.Data));
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadDataCenterIdComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnReadDataCenterIdComplete = nullptr;

	if (!uFnOnReadDataCenterIdComplete)
	{
		uFnOnReadDataCenterIdComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete");
	}

	UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Params OnReadDataCenterIdComplete_Params;
	memset(&OnReadDataCenterIdComplete_Params, 0, sizeof(OnReadDataCenterIdComplete_Params));
	OnReadDataCenterIdComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadDataCenterIdComplete_Params.Filename, sizeof(OnReadDataCenterIdComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadDataCenterIdComplete, &OnReadDataCenterIdComplete_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlaylistManager::ReadDataCenterId()
{
	static UFunction* uFnReadDataCenterId = nullptr;

	if (!uFnReadDataCenterId)
	{
		uFnReadDataCenterId = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ReadDataCenterId");
	}

	UOnlinePlaylistManager_execReadDataCenterId_Params ReadDataCenterId_Params;
	memset(&ReadDataCenterId_Params, 0, sizeof(ReadDataCenterId_Params));

	this->ProcessEvent(uFnReadDataCenterId, &ReadDataCenterId_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        NumPlayers                     (CPF_Parm)

void UOnlinePlaylistManager::eventSendPlaylistPopulationUpdate(int32_t NumPlayers)
{
	static UFunction* uFnSendPlaylistPopulationUpdate = nullptr;

	if (!uFnSendPlaylistPopulationUpdate)
	{
		uFnSendPlaylistPopulationUpdate = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate");
	}

	UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Params SendPlaylistPopulationUpdate_Params;
	memset(&SendPlaylistPopulationUpdate_Params, 0, sizeof(SendPlaylistPopulationUpdate_Params));
	memcpy_s(&SendPlaylistPopulationUpdate_Params.NumPlayers, sizeof(SendPlaylistPopulationUpdate_Params.NumPlayers), &NumPlayers, sizeof(NumPlayers));

	this->ProcessEvent(uFnSendPlaylistPopulationUpdate, &SendPlaylistPopulationUpdate_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        WorldwideTotal                 (CPF_Parm | CPF_OutParm)
// int32_t                        RegionTotal                    (CPF_Parm | CPF_OutParm)

void UOnlinePlaylistManager::GetPopulationInfoFromPlaylist(int32_t PlaylistId, int32_t& WorldwideTotal, int32_t& RegionTotal)
{
	static UFunction* uFnGetPopulationInfoFromPlaylist = nullptr;

	if (!uFnGetPopulationInfoFromPlaylist)
	{
		uFnGetPopulationInfoFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist");
	}

	UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Params GetPopulationInfoFromPlaylist_Params;
	memset(&GetPopulationInfoFromPlaylist_Params, 0, sizeof(GetPopulationInfoFromPlaylist_Params));
	memcpy_s(&GetPopulationInfoFromPlaylist_Params.PlaylistId, sizeof(GetPopulationInfoFromPlaylist_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));
	memcpy_s(&GetPopulationInfoFromPlaylist_Params.WorldwideTotal, sizeof(GetPopulationInfoFromPlaylist_Params.WorldwideTotal), &WorldwideTotal, sizeof(WorldwideTotal));
	memcpy_s(&GetPopulationInfoFromPlaylist_Params.RegionTotal, sizeof(GetPopulationInfoFromPlaylist_Params.RegionTotal), &RegionTotal, sizeof(RegionTotal));

	this->ProcessEvent(uFnGetPopulationInfoFromPlaylist, &GetPopulationInfoFromPlaylist_Params, nullptr);

	memcpy_s(&WorldwideTotal, sizeof(WorldwideTotal), &GetPopulationInfoFromPlaylist_Params.WorldwideTotal, sizeof(GetPopulationInfoFromPlaylist_Params.WorldwideTotal));
	memcpy_s(&RegionTotal, sizeof(RegionTotal), &GetPopulationInfoFromPlaylist_Params.RegionTotal, sizeof(GetPopulationInfoFromPlaylist_Params.RegionTotal));
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32898])
// Parameter Info:
// class TArray<uint8_t>          Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::ParsePlaylistPopulationData(class TArray<uint8_t>& Data)
{
	static UFunction* uFnParsePlaylistPopulationData = nullptr;

	if (!uFnParsePlaylistPopulationData)
	{
		uFnParsePlaylistPopulationData = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData");
	}

	UOnlinePlaylistManager_execParsePlaylistPopulationData_Params ParsePlaylistPopulationData_Params;
	memset(&ParsePlaylistPopulationData_Params, 0, sizeof(ParsePlaylistPopulationData_Params));
	memcpy_s(&ParsePlaylistPopulationData_Params.Data, sizeof(ParsePlaylistPopulationData_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnParsePlaylistPopulationData, &ParsePlaylistPopulationData_Params, nullptr);

	memcpy_s(&Data, sizeof(Data), &ParsePlaylistPopulationData_Params.Data, sizeof(ParsePlaylistPopulationData_Params.Data));
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlaylistManager::OnPlaylistPopulationDataUpdated()
{
	static UFunction* uFnOnPlaylistPopulationDataUpdated = nullptr;

	if (!uFnOnPlaylistPopulationDataUpdated)
	{
		uFnOnPlaylistPopulationDataUpdated = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated");
	}

	UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Params OnPlaylistPopulationDataUpdated_Params;
	memset(&OnPlaylistPopulationDataUpdated_Params, 0, sizeof(OnPlaylistPopulationDataUpdated_Params));

	this->ProcessEvent(uFnOnPlaylistPopulationDataUpdated, &OnPlaylistPopulationDataUpdated_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadPlaylistPopulationComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnReadPlaylistPopulationComplete = nullptr;

	if (!uFnOnReadPlaylistPopulationComplete)
	{
		uFnOnReadPlaylistPopulationComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete");
	}

	UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Params OnReadPlaylistPopulationComplete_Params;
	memset(&OnReadPlaylistPopulationComplete_Params, 0, sizeof(OnReadPlaylistPopulationComplete_Params));
	OnReadPlaylistPopulationComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadPlaylistPopulationComplete_Params.Filename, sizeof(OnReadPlaylistPopulationComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadPlaylistPopulationComplete, &OnReadPlaylistPopulationComplete_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlaylistManager::ReadPlaylistPopulation()
{
	static UFunction* uFnReadPlaylistPopulation = nullptr;

	if (!uFnReadPlaylistPopulation)
	{
		uFnReadPlaylistPopulation = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation");
	}

	UOnlinePlaylistManager_execReadPlaylistPopulation_Params ReadPlaylistPopulation_Params;
	memset(&ReadPlaylistPopulation_Params, 0, sizeof(ReadPlaylistPopulation_Params));

	this->ProcessEvent(uFnReadPlaylistPopulation, &ReadPlaylistPopulation_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlaylistManager::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.Reset");
	}

	UOnlinePlaylistManager_execReset_Params Reset_Params;
	memset(&Reset_Params, 0, sizeof(Reset_Params));

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlaylistId                     (CPF_Parm)
// class TArray<int32_t>          ContentIds                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::GetContentIdsFromPlaylist(int32_t PlaylistId, class TArray<int32_t>& ContentIds)
{
	static UFunction* uFnGetContentIdsFromPlaylist = nullptr;

	if (!uFnGetContentIdsFromPlaylist)
	{
		uFnGetContentIdsFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist");
	}

	UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Params GetContentIdsFromPlaylist_Params;
	memset(&GetContentIdsFromPlaylist_Params, 0, sizeof(GetContentIdsFromPlaylist_Params));
	memcpy_s(&GetContentIdsFromPlaylist_Params.PlaylistId, sizeof(GetContentIdsFromPlaylist_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));
	memcpy_s(&GetContentIdsFromPlaylist_Params.ContentIds, sizeof(GetContentIdsFromPlaylist_Params.ContentIds), &ContentIds, sizeof(ContentIds));

	this->ProcessEvent(uFnGetContentIdsFromPlaylist, &GetContentIdsFromPlaylist_Params, nullptr);

	memcpy_s(&ContentIds, sizeof(ContentIds), &GetContentIdsFromPlaylist_Params.ContentIds, sizeof(GetContentIdsFromPlaylist_Params.ContentIds));
};

// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)
// class UClass*                  SourceInventory                (CPF_Parm)

class UClass* UOnlinePlaylistManager::GetInventorySwapFromPlaylist(int32_t PlaylistId, class UClass* SourceInventory)
{
	static UFunction* uFnGetInventorySwapFromPlaylist = nullptr;

	if (!uFnGetInventorySwapFromPlaylist)
	{
		uFnGetInventorySwapFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist");
	}

	UOnlinePlaylistManager_execGetInventorySwapFromPlaylist_Params GetInventorySwapFromPlaylist_Params;
	memset(&GetInventorySwapFromPlaylist_Params, 0, sizeof(GetInventorySwapFromPlaylist_Params));
	memcpy_s(&GetInventorySwapFromPlaylist_Params.PlaylistId, sizeof(GetInventorySwapFromPlaylist_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));
	GetInventorySwapFromPlaylist_Params.SourceInventory = SourceInventory;

	this->ProcessEvent(uFnGetInventorySwapFromPlaylist, &GetInventorySwapFromPlaylist_Params, nullptr);

	return GetInventorySwapFromPlaylist_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlaylistId                     (CPF_Parm)
// class TArray<class FName>      MapCycle                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::GetMapCycleFromPlaylist(int32_t PlaylistId, class TArray<class FName>& MapCycle)
{
	static UFunction* uFnGetMapCycleFromPlaylist = nullptr;

	if (!uFnGetMapCycleFromPlaylist)
	{
		uFnGetMapCycleFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist");
	}

	UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Params GetMapCycleFromPlaylist_Params;
	memset(&GetMapCycleFromPlaylist_Params, 0, sizeof(GetMapCycleFromPlaylist_Params));
	memcpy_s(&GetMapCycleFromPlaylist_Params.PlaylistId, sizeof(GetMapCycleFromPlaylist_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));
	memcpy_s(&GetMapCycleFromPlaylist_Params.MapCycle, sizeof(GetMapCycleFromPlaylist_Params.MapCycle), &MapCycle, sizeof(MapCycle));

	this->ProcessEvent(uFnGetMapCycleFromPlaylist, &GetMapCycleFromPlaylist_Params, nullptr);

	memcpy_s(&MapCycle, sizeof(MapCycle), &GetMapCycleFromPlaylist_Params.MapCycle, sizeof(GetMapCycleFromPlaylist_Params.MapCycle));
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        PlaylistId                     (CPF_Parm)

class FString UOnlinePlaylistManager::GetUrlFromPlaylist(int32_t PlaylistId)
{
	static UFunction* uFnGetUrlFromPlaylist = nullptr;

	if (!uFnGetUrlFromPlaylist)
	{
		uFnGetUrlFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist");
	}

	UOnlinePlaylistManager_execGetUrlFromPlaylist_Params GetUrlFromPlaylist_Params;
	memset(&GetUrlFromPlaylist_Params, 0, sizeof(GetUrlFromPlaylist_Params));
	memcpy_s(&GetUrlFromPlaylist_Params.PlaylistId, sizeof(GetUrlFromPlaylist_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));

	this->ProcessEvent(uFnGetUrlFromPlaylist, &GetUrlFromPlaylist_Params, nullptr);

	return GetUrlFromPlaylist_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

int32_t UOnlinePlaylistManager::GetMatchType(int32_t PlaylistId)
{
	static UFunction* uFnGetMatchType = nullptr;

	if (!uFnGetMatchType)
	{
		uFnGetMatchType = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetMatchType");
	}

	UOnlinePlaylistManager_execGetMatchType_Params GetMatchType_Params;
	memset(&GetMatchType_Params, 0, sizeof(GetMatchType_Params));
	memcpy_s(&GetMatchType_Params.PlaylistId, sizeof(GetMatchType_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));

	this->ProcessEvent(uFnGetMatchType, &GetMatchType_Params, nullptr);

	return GetMatchType_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

bool UOnlinePlaylistManager::IsPlaylistArbitrated(int32_t PlaylistId)
{
	static UFunction* uFnIsPlaylistArbitrated = nullptr;

	if (!uFnIsPlaylistArbitrated)
	{
		uFnIsPlaylistArbitrated = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated");
	}

	UOnlinePlaylistManager_execIsPlaylistArbitrated_Params IsPlaylistArbitrated_Params;
	memset(&IsPlaylistArbitrated_Params, 0, sizeof(IsPlaylistArbitrated_Params));
	memcpy_s(&IsPlaylistArbitrated_Params.PlaylistId, sizeof(IsPlaylistArbitrated_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));

	this->ProcessEvent(uFnIsPlaylistArbitrated, &IsPlaylistArbitrated_Params, nullptr);

	return IsPlaylistArbitrated_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        LoadBalanceId                  (CPF_Parm | CPF_OutParm)

void UOnlinePlaylistManager::GetLoadBalanceIdFromPlaylist(int32_t PlaylistId, int32_t& LoadBalanceId)
{
	static UFunction* uFnGetLoadBalanceIdFromPlaylist = nullptr;

	if (!uFnGetLoadBalanceIdFromPlaylist)
	{
		uFnGetLoadBalanceIdFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist");
	}

	UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Params GetLoadBalanceIdFromPlaylist_Params;
	memset(&GetLoadBalanceIdFromPlaylist_Params, 0, sizeof(GetLoadBalanceIdFromPlaylist_Params));
	memcpy_s(&GetLoadBalanceIdFromPlaylist_Params.PlaylistId, sizeof(GetLoadBalanceIdFromPlaylist_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));
	memcpy_s(&GetLoadBalanceIdFromPlaylist_Params.LoadBalanceId, sizeof(GetLoadBalanceIdFromPlaylist_Params.LoadBalanceId), &LoadBalanceId, sizeof(LoadBalanceId));

	this->ProcessEvent(uFnGetLoadBalanceIdFromPlaylist, &GetLoadBalanceIdFromPlaylist_Params, nullptr);

	memcpy_s(&LoadBalanceId, sizeof(LoadBalanceId), &GetLoadBalanceIdFromPlaylist_Params.LoadBalanceId, sizeof(GetLoadBalanceIdFromPlaylist_Params.LoadBalanceId));
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        TeamSize                       (CPF_Parm | CPF_OutParm)
// int32_t                        TeamCount                      (CPF_Parm | CPF_OutParm)
// int32_t                        MaxPartySize                   (CPF_Parm | CPF_OutParm)

void UOnlinePlaylistManager::GetTeamInfoFromPlaylist(int32_t PlaylistId, int32_t& TeamSize, int32_t& TeamCount, int32_t& MaxPartySize)
{
	static UFunction* uFnGetTeamInfoFromPlaylist = nullptr;

	if (!uFnGetTeamInfoFromPlaylist)
	{
		uFnGetTeamInfoFromPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist");
	}

	UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Params GetTeamInfoFromPlaylist_Params;
	memset(&GetTeamInfoFromPlaylist_Params, 0, sizeof(GetTeamInfoFromPlaylist_Params));
	memcpy_s(&GetTeamInfoFromPlaylist_Params.PlaylistId, sizeof(GetTeamInfoFromPlaylist_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));
	memcpy_s(&GetTeamInfoFromPlaylist_Params.TeamSize, sizeof(GetTeamInfoFromPlaylist_Params.TeamSize), &TeamSize, sizeof(TeamSize));
	memcpy_s(&GetTeamInfoFromPlaylist_Params.TeamCount, sizeof(GetTeamInfoFromPlaylist_Params.TeamCount), &TeamCount, sizeof(TeamCount));
	memcpy_s(&GetTeamInfoFromPlaylist_Params.MaxPartySize, sizeof(GetTeamInfoFromPlaylist_Params.MaxPartySize), &MaxPartySize, sizeof(MaxPartySize));

	this->ProcessEvent(uFnGetTeamInfoFromPlaylist, &GetTeamInfoFromPlaylist_Params, nullptr);

	memcpy_s(&TeamSize, sizeof(TeamSize), &GetTeamInfoFromPlaylist_Params.TeamSize, sizeof(GetTeamInfoFromPlaylist_Params.TeamSize));
	memcpy_s(&TeamCount, sizeof(TeamCount), &GetTeamInfoFromPlaylist_Params.TeamCount, sizeof(GetTeamInfoFromPlaylist_Params.TeamCount));
	memcpy_s(&MaxPartySize, sizeof(MaxPartySize), &GetTeamInfoFromPlaylist_Params.MaxPartySize, sizeof(GetTeamInfoFromPlaylist_Params.MaxPartySize));
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

bool UOnlinePlaylistManager::PlaylistSupportsDedicatedServers(int32_t PlaylistId)
{
	static UFunction* uFnPlaylistSupportsDedicatedServers = nullptr;

	if (!uFnPlaylistSupportsDedicatedServers)
	{
		uFnPlaylistSupportsDedicatedServers = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers");
	}

	UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Params PlaylistSupportsDedicatedServers_Params;
	memset(&PlaylistSupportsDedicatedServers_Params, 0, sizeof(PlaylistSupportsDedicatedServers_Params));
	memcpy_s(&PlaylistSupportsDedicatedServers_Params.PlaylistId, sizeof(PlaylistSupportsDedicatedServers_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));

	this->ProcessEvent(uFnPlaylistSupportsDedicatedServers, &PlaylistSupportsDedicatedServers_Params, nullptr);

	return PlaylistSupportsDedicatedServers_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

bool UOnlinePlaylistManager::HasAnyGameSettings(int32_t PlaylistId)
{
	static UFunction* uFnHasAnyGameSettings = nullptr;

	if (!uFnHasAnyGameSettings)
	{
		uFnHasAnyGameSettings = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings");
	}

	UOnlinePlaylistManager_execHasAnyGameSettings_Params HasAnyGameSettings_Params;
	memset(&HasAnyGameSettings_Params, 0, sizeof(HasAnyGameSettings_Params));
	memcpy_s(&HasAnyGameSettings_Params.PlaylistId, sizeof(HasAnyGameSettings_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));

	this->ProcessEvent(uFnHasAnyGameSettings, &HasAnyGameSettings_Params, nullptr);

	return HasAnyGameSettings_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineGameSettings*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        GameSettingsId                 (CPF_Parm)

class UOnlineGameSettings* UOnlinePlaylistManager::GetGameSettings(int32_t PlaylistId, int32_t GameSettingsId)
{
	static UFunction* uFnGetGameSettings = nullptr;

	if (!uFnGetGameSettings)
	{
		uFnGetGameSettings = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.GetGameSettings");
	}

	UOnlinePlaylistManager_execGetGameSettings_Params GetGameSettings_Params;
	memset(&GetGameSettings_Params, 0, sizeof(GetGameSettings_Params));
	memcpy_s(&GetGameSettings_Params.PlaylistId, sizeof(GetGameSettings_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));
	memcpy_s(&GetGameSettings_Params.GameSettingsId, sizeof(GetGameSettings_Params.GameSettingsId), &GameSettingsId, sizeof(GameSettingsId));

	this->ProcessEvent(uFnGetGameSettings, &GetGameSettings_Params, nullptr);

	return GetGameSettings_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32523])
// Parameter Info:

void UOnlinePlaylistManager::FinalizePlaylistObjects()
{
	static UFunction* uFnFinalizePlaylistObjects = nullptr;

	if (!uFnFinalizePlaylistObjects)
	{
		uFnFinalizePlaylistObjects = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects");
	}

	UOnlinePlaylistManager_execFinalizePlaylistObjects_Params FinalizePlaylistObjects_Params;
	memset(&FinalizePlaylistObjects_Params, 0, sizeof(FinalizePlaylistObjects_Params));

	this->ProcessEvent(uFnFinalizePlaylistObjects, &FinalizePlaylistObjects_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePlaylistManager::OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnReadTitleFileComplete = nullptr;

	if (!uFnOnReadTitleFileComplete)
	{
		uFnOnReadTitleFileComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete");
	}

	UOnlinePlaylistManager_execOnReadTitleFileComplete_Params OnReadTitleFileComplete_Params;
	memset(&OnReadTitleFileComplete_Params, 0, sizeof(OnReadTitleFileComplete_Params));
	OnReadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Params.Filename, sizeof(OnReadTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33081])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlinePlaylistManager::ShouldRefreshPlaylists()
{
	static UFunction* uFnShouldRefreshPlaylists = nullptr;

	if (!uFnShouldRefreshPlaylists)
	{
		uFnShouldRefreshPlaylists = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists");
	}

	UOnlinePlaylistManager_execShouldRefreshPlaylists_Params ShouldRefreshPlaylists_Params;
	memset(&ShouldRefreshPlaylists_Params, 0, sizeof(ShouldRefreshPlaylists_Params));

	this->ProcessEvent(uFnShouldRefreshPlaylists, &ShouldRefreshPlaylists_Params, nullptr);

	return ShouldRefreshPlaylists_Params.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32430])
// Parameter Info:

void UOnlinePlaylistManager::DetermineFilesToDownload()
{
	static UFunction* uFnDetermineFilesToDownload = nullptr;

	if (!uFnDetermineFilesToDownload)
	{
		uFnDetermineFilesToDownload = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload");
	}

	UOnlinePlaylistManager_execDetermineFilesToDownload_Params DetermineFilesToDownload_Params;
	memset(&DetermineFilesToDownload_Params, 0, sizeof(DetermineFilesToDownload_Params));

	this->ProcessEvent(uFnDetermineFilesToDownload, &DetermineFilesToDownload_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlinePlaylistManager::DownloadPlaylist()
{
	static UFunction* uFnDownloadPlaylist = nullptr;

	if (!uFnDownloadPlaylist)
	{
		uFnDownloadPlaylist = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.DownloadPlaylist");
	}

	UOnlinePlaylistManager_execDownloadPlaylist_Params DownloadPlaylist_Params;
	memset(&DownloadPlaylist_Params, 0, sizeof(DownloadPlaylist_Params));

	this->ProcessEvent(uFnDownloadPlaylist, &DownloadPlaylist_Params, nullptr);
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlinePlaylistManager::OnReadPlaylistComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlaylistComplete = nullptr;

	if (!uFnOnReadPlaylistComplete)
	{
		uFnOnReadPlaylistComplete = UFunction::FindFunction("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete");
	}

	UOnlinePlaylistManager_execOnReadPlaylistComplete_Params OnReadPlaylistComplete_Params;
	memset(&OnReadPlaylistComplete_Params, 0, sizeof(OnReadPlaylistComplete_Params));
	OnReadPlaylistComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlaylistComplete, &OnReadPlaylistComplete_Params, nullptr);
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeacon::OnDestroyComplete()
{
	static UFunction* uFnOnDestroyComplete = nullptr;

	if (!uFnOnDestroyComplete)
	{
		uFnOnDestroyComplete = UFunction::FindFunction("Function IpDrv.PartyBeacon.OnDestroyComplete");
	}

	UPartyBeacon_execOnDestroyComplete_Params OnDestroyComplete_Params;
	memset(&OnDestroyComplete_Params, 0, sizeof(OnDestroyComplete_Params));

	this->ProcessEvent(uFnOnDestroyComplete, &OnDestroyComplete_Params, nullptr);
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13147])
// Parameter Info:

void UPartyBeacon::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.PartyBeacon.DestroyBeacon");
	}

	UPartyBeacon_eventDestroyBeacon_Params DestroyBeacon_Params;
	memset(&DestroyBeacon_Params, 0, sizeof(DestroyBeacon_Params));

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13147])
// Parameter Info:

void UPartyBeaconClient::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.DestroyBeacon");
	}

	UPartyBeaconClient_eventDestroyBeacon_Params DestroyBeacon_Params;
	memset(&DestroyBeacon_Params, 0, sizeof(DestroyBeacon_Params));

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32321])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            CancellingPartyLeader          (CPF_Parm)

bool UPartyBeaconClient::CancelReservation(const struct FUniqueNetId& CancellingPartyLeader)
{
	static UFunction* uFnCancelReservation = nullptr;

	if (!uFnCancelReservation)
	{
		uFnCancelReservation = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.CancelReservation");
	}

	UPartyBeaconClient_execCancelReservation_Params CancelReservation_Params;
	memset(&CancelReservation_Params, 0, sizeof(CancelReservation_Params));
	memcpy_s(&CancelReservation_Params.CancellingPartyLeader, sizeof(CancelReservation_Params.CancellingPartyLeader), &CancellingPartyLeader, sizeof(CancellingPartyLeader));

	this->ProcessEvent(uFnCancelReservation, &CancelReservation_Params, nullptr);

	return CancelReservation_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33034])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            RequestingPartyLeader          (CPF_Parm)
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const | CPF_Parm | CPF_OutParm)
// class TArray<struct FPlayerReservation> PlayersToAdd                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UPartyBeaconClient::RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, class TArray<struct FPlayerReservation>& PlayersToAdd)
{
	static UFunction* uFnRequestReservationUpdate = nullptr;

	if (!uFnRequestReservationUpdate)
	{
		uFnRequestReservationUpdate = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.RequestReservationUpdate");
	}

	UPartyBeaconClient_execRequestReservationUpdate_Params RequestReservationUpdate_Params;
	memset(&RequestReservationUpdate_Params, 0, sizeof(RequestReservationUpdate_Params));
	memcpy_s(&RequestReservationUpdate_Params.RequestingPartyLeader, sizeof(RequestReservationUpdate_Params.RequestingPartyLeader), &RequestingPartyLeader, sizeof(RequestingPartyLeader));
	memcpy_s(&RequestReservationUpdate_Params.DesiredHost, sizeof(RequestReservationUpdate_Params.DesiredHost), &DesiredHost, sizeof(DesiredHost));
	memcpy_s(&RequestReservationUpdate_Params.PlayersToAdd, sizeof(RequestReservationUpdate_Params.PlayersToAdd), &PlayersToAdd, sizeof(PlayersToAdd));

	this->ProcessEvent(uFnRequestReservationUpdate, &RequestReservationUpdate_Params, nullptr);

	memcpy_s(&DesiredHost, sizeof(DesiredHost), &RequestReservationUpdate_Params.DesiredHost, sizeof(RequestReservationUpdate_Params.DesiredHost));
	memcpy_s(&PlayersToAdd, sizeof(PlayersToAdd), &RequestReservationUpdate_Params.PlayersToAdd, sizeof(RequestReservationUpdate_Params.PlayersToAdd));

	return RequestReservationUpdate_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33033])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            RequestingPartyLeader          (CPF_Parm)
// struct FOnlineGameSearchResult DesiredHost                    (CPF_Const | CPF_Parm | CPF_OutParm)
// class TArray<struct FPlayerReservation> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UPartyBeaconClient::RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, class TArray<struct FPlayerReservation>& Players)
{
	static UFunction* uFnRequestReservation = nullptr;

	if (!uFnRequestReservation)
	{
		uFnRequestReservation = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.RequestReservation");
	}

	UPartyBeaconClient_execRequestReservation_Params RequestReservation_Params;
	memset(&RequestReservation_Params, 0, sizeof(RequestReservation_Params));
	memcpy_s(&RequestReservation_Params.RequestingPartyLeader, sizeof(RequestReservation_Params.RequestingPartyLeader), &RequestingPartyLeader, sizeof(RequestingPartyLeader));
	memcpy_s(&RequestReservation_Params.DesiredHost, sizeof(RequestReservation_Params.DesiredHost), &DesiredHost, sizeof(DesiredHost));
	memcpy_s(&RequestReservation_Params.Players, sizeof(RequestReservation_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnRequestReservation, &RequestReservation_Params, nullptr);

	memcpy_s(&DesiredHost, sizeof(DesiredHost), &RequestReservation_Params.DesiredHost, sizeof(RequestReservation_Params.DesiredHost));
	memcpy_s(&Players, sizeof(Players), &RequestReservation_Params.Players, sizeof(RequestReservation_Params.Players));

	return RequestReservation_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconClient::OnHostHasCancelled()
{
	static UFunction* uFnOnHostHasCancelled = nullptr;

	if (!uFnOnHostHasCancelled)
	{
		uFnOnHostHasCancelled = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostHasCancelled");
	}

	UPartyBeaconClient_execOnHostHasCancelled_Params OnHostHasCancelled_Params;
	memset(&OnHostHasCancelled_Params, 0, sizeof(OnHostHasCancelled_Params));

	this->ProcessEvent(uFnOnHostHasCancelled, &OnHostHasCancelled_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconClient::OnHostIsReady()
{
	static UFunction* uFnOnHostIsReady = nullptr;

	if (!uFnOnHostIsReady)
	{
		uFnOnHostIsReady = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostIsReady");
	}

	UPartyBeaconClient_execOnHostIsReady_Params OnHostIsReady_Params;
	memset(&OnHostIsReady_Params, 0, sizeof(OnHostIsReady_Params));

	this->ProcessEvent(uFnOnHostIsReady, &OnHostIsReady_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm)

void UPartyBeaconClient::OnTravelRequestReceived(const class FName& SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo[80])
{
	static UFunction* uFnOnTravelRequestReceived = nullptr;

	if (!uFnOnTravelRequestReceived)
	{
		uFnOnTravelRequestReceived = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnTravelRequestReceived");
	}

	UPartyBeaconClient_execOnTravelRequestReceived_Params OnTravelRequestReceived_Params;
	memset(&OnTravelRequestReceived_Params, 0, sizeof(OnTravelRequestReceived_Params));
	memcpy_s(&OnTravelRequestReceived_Params.SessionName, sizeof(OnTravelRequestReceived_Params.SessionName), &SessionName, sizeof(SessionName));
	OnTravelRequestReceived_Params.SearchClass = SearchClass;
	memcpy_s(&OnTravelRequestReceived_Params.PlatformSpecificInfo, sizeof(OnTravelRequestReceived_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnOnTravelRequestReceived, &OnTravelRequestReceived_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReservationRemaining           (CPF_Parm)

void UPartyBeaconClient::OnReservationCountUpdated(int32_t ReservationRemaining)
{
	static UFunction* uFnOnReservationCountUpdated = nullptr;

	if (!uFnOnReservationCountUpdated)
	{
		uFnOnReservationCountUpdated = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnReservationCountUpdated");
	}

	UPartyBeaconClient_execOnReservationCountUpdated_Params OnReservationCountUpdated_Params;
	memset(&OnReservationCountUpdated_Params, 0, sizeof(OnReservationCountUpdated_Params));
	memcpy_s(&OnReservationCountUpdated_Params.ReservationRemaining, sizeof(OnReservationCountUpdated_Params.ReservationRemaining), &ReservationRemaining, sizeof(ReservationRemaining));

	this->ProcessEvent(uFnOnReservationCountUpdated, &OnReservationCountUpdated_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EPartyReservationResult        ReservationResult              (CPF_Parm)

void UPartyBeaconClient::OnReservationRequestComplete(EPartyReservationResult ReservationResult)
{
	static UFunction* uFnOnReservationRequestComplete = nullptr;

	if (!uFnOnReservationRequestComplete)
	{
		uFnOnReservationRequestComplete = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnReservationRequestComplete");
	}

	UPartyBeaconClient_execOnReservationRequestComplete_Params OnReservationRequestComplete_Params;
	memset(&OnReservationRequestComplete_Params, 0, sizeof(OnReservationRequestComplete_Params));
	memcpy_s(&OnReservationRequestComplete_Params.ReservationResult, sizeof(OnReservationRequestComplete_Params.ReservationResult), &ReservationResult, sizeof(ReservationResult));

	this->ProcessEvent(uFnOnReservationRequestComplete, &OnReservationRequestComplete_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32557])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UPartyBeaconHost::GetMaxAvailableTeamSize()
{
	static UFunction* uFnGetMaxAvailableTeamSize = nullptr;

	if (!uFnGetMaxAvailableTeamSize)
	{
		uFnGetMaxAvailableTeamSize = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize");
	}

	UPartyBeaconHost_execGetMaxAvailableTeamSize_Params GetMaxAvailableTeamSize_Params;
	memset(&GetMaxAvailableTeamSize_Params, 0, sizeof(GetMaxAvailableTeamSize_Params));

	this->ProcessEvent(uFnGetMaxAvailableTeamSize, &GetMaxAvailableTeamSize_Params, nullptr);

	return GetMaxAvailableTeamSize_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FUniqueNetId> PartyLeaders                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UPartyBeaconHost::GetPartyLeaders(class TArray<struct FUniqueNetId>& PartyLeaders)
{
	static UFunction* uFnGetPartyLeaders = nullptr;

	if (!uFnGetPartyLeaders)
	{
		uFnGetPartyLeaders = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetPartyLeaders");
	}

	UPartyBeaconHost_execGetPartyLeaders_Params GetPartyLeaders_Params;
	memset(&GetPartyLeaders_Params, 0, sizeof(GetPartyLeaders_Params));
	memcpy_s(&GetPartyLeaders_Params.PartyLeaders, sizeof(GetPartyLeaders_Params.PartyLeaders), &PartyLeaders, sizeof(PartyLeaders));

	this->ProcessEvent(uFnGetPartyLeaders, &GetPartyLeaders_Params, nullptr);

	memcpy_s(&PartyLeaders, sizeof(PartyLeaders), &GetPartyLeaders_Params.PartyLeaders, sizeof(GetPartyLeaders_Params.PartyLeaders));
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FUniqueNetId> Players                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UPartyBeaconHost::GetPlayers(class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnGetPlayers = nullptr;

	if (!uFnGetPlayers)
	{
		uFnGetPlayers = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetPlayers");
	}

	UPartyBeaconHost_execGetPlayers_Params GetPlayers_Params;
	memset(&GetPlayers_Params, 0, sizeof(GetPlayers_Params));
	memcpy_s(&GetPlayers_Params.Players, sizeof(GetPlayers_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnGetPlayers, &GetPlayers_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &GetPlayers_Params.Players, sizeof(GetPlayers_Params.Players));
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32249])
// Parameter Info:
// class UOnlineGameSearch*       Search                         (CPF_Parm)

void UPartyBeaconHost::AppendReservationSkillsToSearch(class UOnlineGameSearch* Search)
{
	static UFunction* uFnAppendReservationSkillsToSearch = nullptr;

	if (!uFnAppendReservationSkillsToSearch)
	{
		uFnAppendReservationSkillsToSearch = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch");
	}

	UPartyBeaconHost_execAppendReservationSkillsToSearch_Params AppendReservationSkillsToSearch_Params;
	memset(&AppendReservationSkillsToSearch_Params, 0, sizeof(AppendReservationSkillsToSearch_Params));
	AppendReservationSkillsToSearch_Params.Search = Search;

	this->ProcessEvent(uFnAppendReservationSkillsToSearch, &AppendReservationSkillsToSearch_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm)

void UPartyBeaconHost::eventUnregisterParty(const struct FUniqueNetId& PartyLeader)
{
	static UFunction* uFnUnregisterParty = nullptr;

	if (!uFnUnregisterParty)
	{
		uFnUnregisterParty = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.UnregisterParty");
	}

	UPartyBeaconHost_eventUnregisterParty_Params UnregisterParty_Params;
	memset(&UnregisterParty_Params, 0, sizeof(UnregisterParty_Params));
	memcpy_s(&UnregisterParty_Params.PartyLeader, sizeof(UnregisterParty_Params.PartyLeader), &PartyLeader, sizeof(PartyLeader));

	this->ProcessEvent(uFnUnregisterParty, &UnregisterParty_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconHost::eventUnregisterPartyMembers()
{
	static UFunction* uFnUnregisterPartyMembers = nullptr;

	if (!uFnUnregisterPartyMembers)
	{
		uFnUnregisterPartyMembers = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.UnregisterPartyMembers");
	}

	UPartyBeaconHost_eventUnregisterPartyMembers_Params UnregisterPartyMembers_Params;
	memset(&UnregisterPartyMembers_Params, 0, sizeof(UnregisterPartyMembers_Params));

	this->ProcessEvent(uFnUnregisterPartyMembers, &UnregisterPartyMembers_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconHost::eventRegisterPartyMembers()
{
	static UFunction* uFnRegisterPartyMembers = nullptr;

	if (!uFnRegisterPartyMembers)
	{
		uFnRegisterPartyMembers = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.RegisterPartyMembers");
	}

	UPartyBeaconHost_eventRegisterPartyMembers_Params RegisterPartyMembers_Params;
	memset(&RegisterPartyMembers_Params, 0, sizeof(RegisterPartyMembers_Params));

	this->ProcessEvent(uFnRegisterPartyMembers, &RegisterPartyMembers_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UPartyBeaconHost::AreReservationsFull()
{
	static UFunction* uFnAreReservationsFull = nullptr;

	if (!uFnAreReservationsFull)
	{
		uFnAreReservationsFull = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.AreReservationsFull");
	}

	UPartyBeaconHost_execAreReservationsFull_Params AreReservationsFull_Params;
	memset(&AreReservationsFull_Params, 0, sizeof(AreReservationsFull_Params));

	this->ProcessEvent(uFnAreReservationsFull, &AreReservationsFull_Params, nullptr);

	return AreReservationsFull_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33112])
// Parameter Info:

void UPartyBeaconHost::TellClientsHostHasCancelled()
{
	static UFunction* uFnTellClientsHostHasCancelled = nullptr;

	if (!uFnTellClientsHostHasCancelled)
	{
		uFnTellClientsHostHasCancelled = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled");
	}

	UPartyBeaconHost_execTellClientsHostHasCancelled_Params TellClientsHostHasCancelled_Params;
	memset(&TellClientsHostHasCancelled_Params, 0, sizeof(TellClientsHostHasCancelled_Params));

	this->ProcessEvent(uFnTellClientsHostHasCancelled, &TellClientsHostHasCancelled_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33113])
// Parameter Info:

void UPartyBeaconHost::TellClientsHostIsReady()
{
	static UFunction* uFnTellClientsHostIsReady = nullptr;

	if (!uFnTellClientsHostIsReady)
	{
		uFnTellClientsHostIsReady = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.TellClientsHostIsReady");
	}

	UPartyBeaconHost_execTellClientsHostIsReady_Params TellClientsHostIsReady_Params;
	memset(&TellClientsHostIsReady_Params, 0, sizeof(TellClientsHostIsReady_Params));

	this->ProcessEvent(uFnTellClientsHostIsReady, &TellClientsHostIsReady_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33114])
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm)

void UPartyBeaconHost::TellClientsToTravel(const class FName& SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo[80])
{
	static UFunction* uFnTellClientsToTravel = nullptr;

	if (!uFnTellClientsToTravel)
	{
		uFnTellClientsToTravel = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.TellClientsToTravel");
	}

	UPartyBeaconHost_execTellClientsToTravel_Params TellClientsToTravel_Params;
	memset(&TellClientsToTravel_Params, 0, sizeof(TellClientsToTravel_Params));
	memcpy_s(&TellClientsToTravel_Params.SessionName, sizeof(TellClientsToTravel_Params.SessionName), &SessionName, sizeof(SessionName));
	TellClientsToTravel_Params.SearchClass = SearchClass;
	memcpy_s(&TellClientsToTravel_Params.PlatformSpecificInfo, sizeof(TellClientsToTravel_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnTellClientsToTravel, &TellClientsToTravel_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13147])
// Parameter Info:

void UPartyBeaconHost::eventDestroyBeacon()
{
	static UFunction* uFnDestroyBeacon = nullptr;

	if (!uFnDestroyBeacon)
	{
		uFnDestroyBeacon = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.DestroyBeacon");
	}

	UPartyBeaconHost_eventDestroyBeacon_Params DestroyBeacon_Params;
	memset(&DestroyBeacon_Params, 0, sizeof(DestroyBeacon_Params));

	this->ProcessEvent(uFnDestroyBeacon, &DestroyBeacon_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PartyLeader                    (CPF_Parm)

void UPartyBeaconHost::OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader)
{
	static UFunction* uFnOnClientCancellationReceived = nullptr;

	if (!uFnOnClientCancellationReceived)
	{
		uFnOnClientCancellationReceived = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnClientCancellationReceived");
	}

	UPartyBeaconHost_execOnClientCancellationReceived_Params OnClientCancellationReceived_Params;
	memset(&OnClientCancellationReceived_Params, 0, sizeof(OnClientCancellationReceived_Params));
	memcpy_s(&OnClientCancellationReceived_Params.PartyLeader, sizeof(OnClientCancellationReceived_Params.PartyLeader), &PartyLeader, sizeof(PartyLeader));

	this->ProcessEvent(uFnOnClientCancellationReceived, &OnClientCancellationReceived_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconHost::OnReservationsFull()
{
	static UFunction* uFnOnReservationsFull = nullptr;

	if (!uFnOnReservationsFull)
	{
		uFnOnReservationsFull = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnReservationsFull");
	}

	UPartyBeaconHost_execOnReservationsFull_Params OnReservationsFull_Params;
	memset(&OnReservationsFull_Params, 0, sizeof(OnReservationsFull_Params));

	this->ProcessEvent(uFnOnReservationsFull, &OnReservationsFull_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconHost::OnReservationChange()
{
	static UFunction* uFnOnReservationChange = nullptr;

	if (!uFnOnReservationChange)
	{
		uFnOnReservationChange = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnReservationChange");
	}

	UPartyBeaconHost_execOnReservationChange_Params OnReservationChange_Params;
	memset(&OnReservationChange_Params, 0, sizeof(OnReservationChange_Params));

	this->ProcessEvent(uFnOnReservationChange, &OnReservationChange_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32589])
// Parameter Info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bMaintainParty                 (CPF_Parm)

void UPartyBeaconHost::HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty)
{
	static UFunction* uFnHandlePlayerLogout = nullptr;

	if (!uFnHandlePlayerLogout)
	{
		uFnHandlePlayerLogout = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.HandlePlayerLogout");
	}

	UPartyBeaconHost_execHandlePlayerLogout_Params HandlePlayerLogout_Params;
	memset(&HandlePlayerLogout_Params, 0, sizeof(HandlePlayerLogout_Params));
	memcpy_s(&HandlePlayerLogout_Params.PlayerID, sizeof(HandlePlayerLogout_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	HandlePlayerLogout_Params.bMaintainParty = bMaintainParty;

	this->ProcessEvent(uFnHandlePlayerLogout, &HandlePlayerLogout_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32543])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PartyLeader                    (CPF_Const | CPF_Parm | CPF_OutParm)

int32_t UPartyBeaconHost::GetExistingReservation(struct FUniqueNetId& PartyLeader)
{
	static UFunction* uFnGetExistingReservation = nullptr;

	if (!uFnGetExistingReservation)
	{
		uFnGetExistingReservation = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.GetExistingReservation");
	}

	UPartyBeaconHost_execGetExistingReservation_Params GetExistingReservation_Params;
	memset(&GetExistingReservation_Params, 0, sizeof(GetExistingReservation_Params));
	memcpy_s(&GetExistingReservation_Params.PartyLeader, sizeof(GetExistingReservation_Params.PartyLeader), &PartyLeader, sizeof(PartyLeader));

	this->ProcessEvent(uFnGetExistingReservation, &GetExistingReservation_Params, nullptr);

	memcpy_s(&PartyLeader, sizeof(PartyLeader), &GetExistingReservation_Params.PartyLeader, sizeof(GetExistingReservation_Params.PartyLeader));

	return GetExistingReservation_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33158])
// Parameter Info:
// EPartyReservationResult        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PartyLeader                    (CPF_Parm)
// class TArray<struct FPlayerReservation> PlayerMembers                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EPartyReservationResult UPartyBeaconHost::UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, class TArray<struct FPlayerReservation>& PlayerMembers)
{
	static UFunction* uFnUpdatePartyReservationEntry = nullptr;

	if (!uFnUpdatePartyReservationEntry)
	{
		uFnUpdatePartyReservationEntry = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry");
	}

	UPartyBeaconHost_execUpdatePartyReservationEntry_Params UpdatePartyReservationEntry_Params;
	memset(&UpdatePartyReservationEntry_Params, 0, sizeof(UpdatePartyReservationEntry_Params));
	memcpy_s(&UpdatePartyReservationEntry_Params.PartyLeader, sizeof(UpdatePartyReservationEntry_Params.PartyLeader), &PartyLeader, sizeof(PartyLeader));
	memcpy_s(&UpdatePartyReservationEntry_Params.PlayerMembers, sizeof(UpdatePartyReservationEntry_Params.PlayerMembers), &PlayerMembers, sizeof(PlayerMembers));

	this->ProcessEvent(uFnUpdatePartyReservationEntry, &UpdatePartyReservationEntry_Params, nullptr);

	memcpy_s(&PlayerMembers, sizeof(PlayerMembers), &UpdatePartyReservationEntry_Params.PlayerMembers, sizeof(UpdatePartyReservationEntry_Params.PlayerMembers));

	return static_cast<EPartyReservationResult>(UpdatePartyReservationEntry_Params.ReturnValue);
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32244])
// Parameter Info:
// EPartyReservationResult        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PartyLeader                    (CPF_Parm)
// int32_t                        TeamNum                        (CPF_Parm)
// uint32_t                       bIsHost                        (CPF_Parm)
// class TArray<struct FPlayerReservation> PlayerMembers                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EPartyReservationResult UPartyBeaconHost::AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int32_t TeamNum, bool bIsHost, class TArray<struct FPlayerReservation>& PlayerMembers)
{
	static UFunction* uFnAddPartyReservationEntry = nullptr;

	if (!uFnAddPartyReservationEntry)
	{
		uFnAddPartyReservationEntry = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.AddPartyReservationEntry");
	}

	UPartyBeaconHost_execAddPartyReservationEntry_Params AddPartyReservationEntry_Params;
	memset(&AddPartyReservationEntry_Params, 0, sizeof(AddPartyReservationEntry_Params));
	memcpy_s(&AddPartyReservationEntry_Params.PartyLeader, sizeof(AddPartyReservationEntry_Params.PartyLeader), &PartyLeader, sizeof(PartyLeader));
	memcpy_s(&AddPartyReservationEntry_Params.TeamNum, sizeof(AddPartyReservationEntry_Params.TeamNum), &TeamNum, sizeof(TeamNum));
	AddPartyReservationEntry_Params.bIsHost = bIsHost;
	memcpy_s(&AddPartyReservationEntry_Params.PlayerMembers, sizeof(AddPartyReservationEntry_Params.PlayerMembers), &PlayerMembers, sizeof(PlayerMembers));

	this->ProcessEvent(uFnAddPartyReservationEntry, &AddPartyReservationEntry_Params, nullptr);

	memcpy_s(&PlayerMembers, sizeof(PlayerMembers), &AddPartyReservationEntry_Params.PlayerMembers, sizeof(AddPartyReservationEntry_Params.PlayerMembers));

	return static_cast<EPartyReservationResult>(AddPartyReservationEntry_Params.ReturnValue);
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[32613])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        InNumTeams                     (CPF_Parm)
// int32_t                        InNumPlayersPerTeam            (CPF_Parm)
// int32_t                        InNumReservations              (CPF_Parm)
// class FName                    InSessionName                  (CPF_Parm)
// int32_t                        InForceTeamNum                 (CPF_OptionalParm | CPF_Parm)

bool UPartyBeaconHost::InitHostBeacon(int32_t InNumTeams, int32_t InNumPlayersPerTeam, int32_t InNumReservations, const class FName& InSessionName, int32_t InForceTeamNum)
{
	static UFunction* uFnInitHostBeacon = nullptr;

	if (!uFnInitHostBeacon)
	{
		uFnInitHostBeacon = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.InitHostBeacon");
	}

	UPartyBeaconHost_execInitHostBeacon_Params InitHostBeacon_Params;
	memset(&InitHostBeacon_Params, 0, sizeof(InitHostBeacon_Params));
	memcpy_s(&InitHostBeacon_Params.InNumTeams, sizeof(InitHostBeacon_Params.InNumTeams), &InNumTeams, sizeof(InNumTeams));
	memcpy_s(&InitHostBeacon_Params.InNumPlayersPerTeam, sizeof(InitHostBeacon_Params.InNumPlayersPerTeam), &InNumPlayersPerTeam, sizeof(InNumPlayersPerTeam));
	memcpy_s(&InitHostBeacon_Params.InNumReservations, sizeof(InitHostBeacon_Params.InNumReservations), &InNumReservations, sizeof(InNumReservations));
	memcpy_s(&InitHostBeacon_Params.InSessionName, sizeof(InitHostBeacon_Params.InSessionName), &InSessionName, sizeof(InSessionName));
	memcpy_s(&InitHostBeacon_Params.InForceTeamNum, sizeof(InitHostBeacon_Params.InForceTeamNum), &InForceTeamNum, sizeof(InForceTeamNum));

	this->ProcessEvent(uFnInitHostBeacon, &InitHostBeacon_Params, nullptr);

	return InitHostBeacon_Params.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32904])
// Parameter Info:
// uint32_t                       bPause                         (CPF_Parm)

void UPartyBeaconHost::PauseReservationRequests(bool bPause)
{
	static UFunction* uFnPauseReservationRequests = nullptr;

	if (!uFnPauseReservationRequests)
	{
		uFnPauseReservationRequests = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.PauseReservationRequests");
	}

	UPartyBeaconHost_execPauseReservationRequests_Params PauseReservationRequests_Params;
	memset(&PauseReservationRequests_Params, 0, sizeof(PauseReservationRequests_Params));
	PauseReservationRequests_Params.bPause = bPause;

	this->ProcessEvent(uFnPauseReservationRequests, &PauseReservationRequests_Params, nullptr);
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  D                              (CPF_Parm | CPF_NeedCtorLink)

int32_t UWebRequest::GetHexDigit(const class FString& D)
{
	static UFunction* uFnGetHexDigit = nullptr;

	if (!uFnGetHexDigit)
	{
		uFnGetHexDigit = UFunction::FindFunction("Function IpDrv.WebRequest.GetHexDigit");
	}

	UWebRequest_execGetHexDigit_Params GetHexDigit_Params;
	memset(&GetHexDigit_Params, 0, sizeof(GetHexDigit_Params));
	memcpy_s(&GetHexDigit_Params.D, sizeof(GetHexDigit_Params.D), &D, sizeof(D));

	this->ProcessEvent(uFnGetHexDigit, &GetHexDigit_Params, nullptr);

	return GetHexDigit_Params.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Data                           (CPF_Parm | CPF_NeedCtorLink)

void UWebRequest::DecodeFormData(const class FString& Data)
{
	static UFunction* uFnDecodeFormData = nullptr;

	if (!uFnDecodeFormData)
	{
		uFnDecodeFormData = UFunction::FindFunction("Function IpDrv.WebRequest.DecodeFormData");
	}

	UWebRequest_execDecodeFormData_Params DecodeFormData_Params;
	memset(&DecodeFormData_Params, 0, sizeof(DecodeFormData_Params));
	memcpy_s(&DecodeFormData_Params.Data, sizeof(DecodeFormData_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnDecodeFormData, &DecodeFormData_Params, nullptr);
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UWebRequest::ProcessHeaderString(const class FString& S)
{
	static UFunction* uFnProcessHeaderString = nullptr;

	if (!uFnProcessHeaderString)
	{
		uFnProcessHeaderString = UFunction::FindFunction("Function IpDrv.WebRequest.ProcessHeaderString");
	}

	UWebRequest_execProcessHeaderString_Params ProcessHeaderString_Params;
	memset(&ProcessHeaderString_Params, 0, sizeof(ProcessHeaderString_Params));
	memcpy_s(&ProcessHeaderString_Params.S, sizeof(ProcessHeaderString_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnProcessHeaderString, &ProcessHeaderString_Params, nullptr);
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32441])
// Parameter Info:

void UWebRequest::Dump()
{
	static UFunction* uFnDump = nullptr;

	if (!uFnDump)
	{
		uFnDump = UFunction::FindFunction("Function IpDrv.WebRequest.Dump");
	}

	UWebRequest_execDump_Params Dump_Params;
	memset(&Dump_Params, 0, sizeof(Dump_Params));

	this->ProcessEvent(uFnDump, &Dump_Params, nullptr);
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32575])
// Parameter Info:
// class TArray<class FString>    varNames                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UWebRequest::GetVariables(class TArray<class FString>& varNames)
{
	static UFunction* uFnGetVariables = nullptr;

	if (!uFnGetVariables)
	{
		uFnGetVariables = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariables");
	}

	UWebRequest_execGetVariables_Params GetVariables_Params;
	memset(&GetVariables_Params, 0, sizeof(GetVariables_Params));
	memcpy_s(&GetVariables_Params.varNames, sizeof(GetVariables_Params.varNames), &varNames, sizeof(varNames));

	this->ProcessEvent(uFnGetVariables, &GetVariables_Params, nullptr);

	memcpy_s(&varNames, sizeof(varNames), &GetVariables_Params.varNames, sizeof(GetVariables_Params.varNames));
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[31970])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Number                         (CPF_Parm)
// class FString                  DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::GetVariableNumber(const class FString& VariableName, int32_t Number, const class FString& DefaultValue)
{
	static UFunction* uFnGetVariableNumber = nullptr;

	if (!uFnGetVariableNumber)
	{
		uFnGetVariableNumber = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariableNumber");
	}

	UWebRequest_execGetVariableNumber_Params GetVariableNumber_Params;
	memset(&GetVariableNumber_Params, 0, sizeof(GetVariableNumber_Params));
	memcpy_s(&GetVariableNumber_Params.VariableName, sizeof(GetVariableNumber_Params.VariableName), &VariableName, sizeof(VariableName));
	memcpy_s(&GetVariableNumber_Params.Number, sizeof(GetVariableNumber_Params.Number), &Number, sizeof(Number));
	memcpy_s(&GetVariableNumber_Params.DefaultValue, sizeof(GetVariableNumber_Params.DefaultValue), &DefaultValue, sizeof(DefaultValue));

	this->ProcessEvent(uFnGetVariableNumber, &GetVariableNumber_Params, nullptr);

	return GetVariableNumber_Params.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32574])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  VariableName                   (CPF_Parm | CPF_NeedCtorLink)

int32_t UWebRequest::GetVariableCount(const class FString& VariableName)
{
	static UFunction* uFnGetVariableCount = nullptr;

	if (!uFnGetVariableCount)
	{
		uFnGetVariableCount = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariableCount");
	}

	UWebRequest_execGetVariableCount_Params GetVariableCount_Params;
	memset(&GetVariableCount_Params, 0, sizeof(GetVariableCount_Params));
	memcpy_s(&GetVariableCount_Params.VariableName, sizeof(GetVariableCount_Params.VariableName), &VariableName, sizeof(VariableName));

	this->ProcessEvent(uFnGetVariableCount, &GetVariableCount_Params, nullptr);

	return GetVariableCount_Params.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[31964])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::GetVariable(const class FString& VariableName, const class FString& DefaultValue)
{
	static UFunction* uFnGetVariable = nullptr;

	if (!uFnGetVariable)
	{
		uFnGetVariable = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariable");
	}

	UWebRequest_execGetVariable_Params GetVariable_Params;
	memset(&GetVariable_Params, 0, sizeof(GetVariable_Params));
	memcpy_s(&GetVariable_Params.VariableName, sizeof(GetVariable_Params.VariableName), &VariableName, sizeof(VariableName));
	memcpy_s(&GetVariable_Params.DefaultValue, sizeof(GetVariable_Params.DefaultValue), &DefaultValue, sizeof(DefaultValue));

	this->ProcessEvent(uFnGetVariable, &GetVariable_Params, nullptr);

	return GetVariable_Params.ReturnValue;
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32246])
// Parameter Info:
// class FString                  VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UWebRequest::AddVariable(const class FString& VariableName, const class FString& Value)
{
	static UFunction* uFnAddVariable = nullptr;

	if (!uFnAddVariable)
	{
		uFnAddVariable = UFunction::FindFunction("Function IpDrv.WebRequest.AddVariable");
	}

	UWebRequest_execAddVariable_Params AddVariable_Params;
	memset(&AddVariable_Params, 0, sizeof(AddVariable_Params));
	memcpy_s(&AddVariable_Params.VariableName, sizeof(AddVariable_Params.VariableName), &VariableName, sizeof(VariableName));
	memcpy_s(&AddVariable_Params.Value, sizeof(AddVariable_Params.Value), &Value, sizeof(Value));

	this->ProcessEvent(uFnAddVariable, &AddVariable_Params, nullptr);
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21774])
// Parameter Info:
// class TArray<class FString>    Headers                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UWebRequest::GetHeaders(class TArray<class FString>& Headers)
{
	static UFunction* uFnGetHeaders = nullptr;

	if (!uFnGetHeaders)
	{
		uFnGetHeaders = UFunction::FindFunction("Function IpDrv.WebRequest.GetHeaders");
	}

	UWebRequest_execGetHeaders_Params GetHeaders_Params;
	memset(&GetHeaders_Params, 0, sizeof(GetHeaders_Params));
	memcpy_s(&GetHeaders_Params.Headers, sizeof(GetHeaders_Params.Headers), &Headers, sizeof(Headers));

	this->ProcessEvent(uFnGetHeaders, &GetHeaders_Params, nullptr);

	memcpy_s(&Headers, sizeof(Headers), &GetHeaders_Params.Headers, sizeof(GetHeaders_Params.Headers));
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[21773])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::GetHeader(const class FString& HeaderName, const class FString& DefaultValue)
{
	static UFunction* uFnGetHeader = nullptr;

	if (!uFnGetHeader)
	{
		uFnGetHeader = UFunction::FindFunction("Function IpDrv.WebRequest.GetHeader");
	}

	UWebRequest_execGetHeader_Params GetHeader_Params;
	memset(&GetHeader_Params, 0, sizeof(GetHeader_Params));
	memcpy_s(&GetHeader_Params.HeaderName, sizeof(GetHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));
	memcpy_s(&GetHeader_Params.DefaultValue, sizeof(GetHeader_Params.DefaultValue), &DefaultValue, sizeof(DefaultValue));

	this->ProcessEvent(uFnGetHeader, &GetHeader_Params, nullptr);

	return GetHeader_Params.ReturnValue;
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32240])
// Parameter Info:
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UWebRequest::AddHeader(const class FString& HeaderName, const class FString& Value)
{
	static UFunction* uFnAddHeader = nullptr;

	if (!uFnAddHeader)
	{
		uFnAddHeader = UFunction::FindFunction("Function IpDrv.WebRequest.AddHeader");
	}

	UWebRequest_execAddHeader_Params AddHeader_Params;
	memset(&AddHeader_Params, 0, sizeof(AddHeader_Params));
	memcpy_s(&AddHeader_Params.HeaderName, sizeof(AddHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));
	memcpy_s(&AddHeader_Params.Value, sizeof(AddHeader_Params.Value), &Value, sizeof(Value));

	this->ProcessEvent(uFnAddHeader, &AddHeader_Params, nullptr);
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32460])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Decoded                        (CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::EncodeBase64(const class FString& Decoded)
{
	static UFunction* uFnEncodeBase64 = nullptr;

	if (!uFnEncodeBase64)
	{
		uFnEncodeBase64 = UFunction::FindFunction("Function IpDrv.WebRequest.EncodeBase64");
	}

	UWebRequest_execEncodeBase64_Params EncodeBase64_Params;
	memset(&EncodeBase64_Params, 0, sizeof(EncodeBase64_Params));
	memcpy_s(&EncodeBase64_Params.Decoded, sizeof(EncodeBase64_Params.Decoded), &Decoded, sizeof(Decoded));

	this->ProcessEvent(uFnEncodeBase64, &EncodeBase64_Params, nullptr);

	return EncodeBase64_Params.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32395])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Encoded                        (CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::DecodeBase64(const class FString& Encoded)
{
	static UFunction* uFnDecodeBase64 = nullptr;

	if (!uFnDecodeBase64)
	{
		uFnDecodeBase64 = UFunction::FindFunction("Function IpDrv.WebRequest.DecodeBase64");
	}

	UWebRequest_execDecodeBase64_Params DecodeBase64_Params;
	memset(&DecodeBase64_Params, 0, sizeof(DecodeBase64_Params));
	memcpy_s(&DecodeBase64_Params.Encoded, sizeof(DecodeBase64_Params.Encoded), &Encoded, sizeof(Encoded));

	this->ProcessEvent(uFnDecodeBase64, &DecodeBase64_Params, nullptr);

	return DecodeBase64_Params.ReturnValue;
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UWebResponse::SentResponse()
{
	static UFunction* uFnSentResponse = nullptr;

	if (!uFnSentResponse)
	{
		uFnSentResponse = UFunction::FindFunction("Function IpDrv.WebResponse.SentResponse");
	}

	UWebResponse_execSentResponse_Params SentResponse_Params;
	memset(&SentResponse_Params, 0, sizeof(SentResponse_Params));

	this->ProcessEvent(uFnSentResponse, &SentResponse_Params, nullptr);

	return SentResponse_Params.ReturnValue;
};

// Function IpDrv.WebResponse.SentText
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UWebResponse::SentText()
{
	static UFunction* uFnSentText = nullptr;

	if (!uFnSentText)
	{
		uFnSentText = UFunction::FindFunction("Function IpDrv.WebResponse.SentText");
	}

	UWebResponse_execSentText_Params SentText_Params;
	memset(&SentText_Params, 0, sizeof(SentText_Params));

	this->ProcessEvent(uFnSentText, &SentText_Params, nullptr);

	return SentText_Params.ReturnValue;
};

// Function IpDrv.WebResponse.Redirect
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::Redirect(const class FString& URL)
{
	static UFunction* uFnRedirect = nullptr;

	if (!uFnRedirect)
	{
		uFnRedirect = UFunction::FindFunction("Function IpDrv.WebResponse.Redirect");
	}

	UWebResponse_execRedirect_Params Redirect_Params;
	memset(&Redirect_Params, 0, sizeof(Redirect_Params));
	memcpy_s(&Redirect_Params.URL, sizeof(Redirect_Params.URL), &URL, sizeof(URL));

	this->ProcessEvent(uFnRedirect, &Redirect_Params, nullptr);
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ContentType                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bCache                         (CPF_OptionalParm | CPF_Parm)

void UWebResponse::SendStandardHeaders(const class FString& ContentType, bool bCache)
{
	static UFunction* uFnSendStandardHeaders = nullptr;

	if (!uFnSendStandardHeaders)
	{
		uFnSendStandardHeaders = UFunction::FindFunction("Function IpDrv.WebResponse.SendStandardHeaders");
	}

	UWebResponse_execSendStandardHeaders_Params SendStandardHeaders_Params;
	memset(&SendStandardHeaders_Params, 0, sizeof(SendStandardHeaders_Params));
	memcpy_s(&SendStandardHeaders_Params.ContentType, sizeof(SendStandardHeaders_Params.ContentType), &ContentType, sizeof(ContentType));
	SendStandardHeaders_Params.bCache = bCache;

	this->ProcessEvent(uFnSendStandardHeaders, &SendStandardHeaders_Params, nullptr);
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ErrorNum                       (CPF_Parm)
// class FString                  Data                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HTTPError(int32_t ErrorNum, const class FString& Data)
{
	static UFunction* uFnHTTPError = nullptr;

	if (!uFnHTTPError)
	{
		uFnHTTPError = UFunction::FindFunction("Function IpDrv.WebResponse.HTTPError");
	}

	UWebResponse_execHTTPError_Params HTTPError_Params;
	memset(&HTTPError_Params, 0, sizeof(HTTPError_Params));
	memcpy_s(&HTTPError_Params.ErrorNum, sizeof(HTTPError_Params.ErrorNum), &ErrorNum, sizeof(ErrorNum));
	memcpy_s(&HTTPError_Params.Data, sizeof(HTTPError_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnHTTPError, &HTTPError_Params, nullptr);
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UWebResponse::SendHeaders()
{
	static UFunction* uFnSendHeaders = nullptr;

	if (!uFnSendHeaders)
	{
		uFnSendHeaders = UFunction::FindFunction("Function IpDrv.WebResponse.SendHeaders");
	}

	UWebResponse_execSendHeaders_Params SendHeaders_Params;
	memset(&SendHeaders_Params, 0, sizeof(SendHeaders_Params));

	this->ProcessEvent(uFnSendHeaders, &SendHeaders_Params, nullptr);
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Header                         (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bReplace                       (CPF_OptionalParm | CPF_Parm)

void UWebResponse::AddHeader(const class FString& Header, bool bReplace)
{
	static UFunction* uFnAddHeader = nullptr;

	if (!uFnAddHeader)
	{
		uFnAddHeader = UFunction::FindFunction("Function IpDrv.WebResponse.AddHeader");
	}

	UWebResponse_execAddHeader_Params AddHeader_Params;
	memset(&AddHeader_Params, 0, sizeof(AddHeader_Params));
	memcpy_s(&AddHeader_Params.Header, sizeof(AddHeader_Params.Header), &Header, sizeof(Header));
	AddHeader_Params.bReplace = bReplace;

	this->ProcessEvent(uFnAddHeader, &AddHeader_Params, nullptr);
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Header                         (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HTTPHeader(const class FString& Header)
{
	static UFunction* uFnHTTPHeader = nullptr;

	if (!uFnHTTPHeader)
	{
		uFnHTTPHeader = UFunction::FindFunction("Function IpDrv.WebResponse.HTTPHeader");
	}

	UWebResponse_execHTTPHeader_Params HTTPHeader_Params;
	memset(&HTTPHeader_Params, 0, sizeof(HTTPHeader_Params));
	memcpy_s(&HTTPHeader_Params.Header, sizeof(HTTPHeader_Params.Header), &Header, sizeof(Header));

	this->ProcessEvent(uFnHTTPHeader, &HTTPHeader_Params, nullptr);
};

// Function IpDrv.WebResponse.HttpResponse
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Header                         (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HttpResponse(const class FString& Header)
{
	static UFunction* uFnHttpResponse = nullptr;

	if (!uFnHttpResponse)
	{
		uFnHttpResponse = UFunction::FindFunction("Function IpDrv.WebResponse.HttpResponse");
	}

	UWebResponse_execHttpResponse_Params HttpResponse_Params;
	memset(&HttpResponse_Params, 0, sizeof(HttpResponse_Params));
	memcpy_s(&HttpResponse_Params.Header, sizeof(HttpResponse_Params.Header), &Header, sizeof(Header));

	this->ProcessEvent(uFnHttpResponse, &HttpResponse_Params, nullptr);
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Realm                          (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::FailAuthentication(const class FString& Realm)
{
	static UFunction* uFnFailAuthentication = nullptr;

	if (!uFnFailAuthentication)
	{
		uFnFailAuthentication = UFunction::FindFunction("Function IpDrv.WebResponse.FailAuthentication");
	}

	UWebResponse_execFailAuthentication_Params FailAuthentication_Params;
	memset(&FailAuthentication_Params, 0, sizeof(FailAuthentication_Params));
	memcpy_s(&FailAuthentication_Params.Realm, sizeof(FailAuthentication_Params.Realm), &Realm, sizeof(Realm));

	this->ProcessEvent(uFnFailAuthentication, &FailAuthentication_Params, nullptr);
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ContentType                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::SendCachedFile(const class FString& Filename, const class FString& ContentType)
{
	static UFunction* uFnSendCachedFile = nullptr;

	if (!uFnSendCachedFile)
	{
		uFnSendCachedFile = UFunction::FindFunction("Function IpDrv.WebResponse.SendCachedFile");
	}

	UWebResponse_execSendCachedFile_Params SendCachedFile_Params;
	memset(&SendCachedFile_Params, 0, sizeof(SendCachedFile_Params));
	memcpy_s(&SendCachedFile_Params.Filename, sizeof(SendCachedFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&SendCachedFile_Params.ContentType, sizeof(SendCachedFile_Params.ContentType), &ContentType, sizeof(ContentType));

	this->ProcessEvent(uFnSendCachedFile, &SendCachedFile_Params, nullptr);

	return SendCachedFile_Params.ReturnValue;
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void UWebResponse::eventSendBinary(int32_t Count, uint8_t B[255])
{
	static UFunction* uFnSendBinary = nullptr;

	if (!uFnSendBinary)
	{
		uFnSendBinary = UFunction::FindFunction("Function IpDrv.WebResponse.SendBinary");
	}

	UWebResponse_eventSendBinary_Params SendBinary_Params;
	memset(&SendBinary_Params, 0, sizeof(SendBinary_Params));
	memcpy_s(&SendBinary_Params.Count, sizeof(SendBinary_Params.Count), &Count, sizeof(Count));
	memcpy_s(&SendBinary_Params.B, sizeof(SendBinary_Params.B), &B, sizeof(B));

	this->ProcessEvent(uFnSendBinary, &SendBinary_Params, nullptr);
};

// Function IpDrv.WebResponse.SendText
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bNoCRLF                        (CPF_OptionalParm | CPF_Parm)

void UWebResponse::eventSendText(const class FString& Text, bool bNoCRLF)
{
	static UFunction* uFnSendText = nullptr;

	if (!uFnSendText)
	{
		uFnSendText = UFunction::FindFunction("Function IpDrv.WebResponse.SendText");
	}

	UWebResponse_eventSendText_Params SendText_Params;
	memset(&SendText_Params, 0, sizeof(SendText_Params));
	memcpy_s(&SendText_Params.Text, sizeof(SendText_Params.Text), &Text, sizeof(Text));
	SendText_Params.bNoCRLF = bNoCRLF;

	this->ProcessEvent(uFnSendText, &SendText_Params, nullptr);
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32441])
// Parameter Info:

void UWebResponse::Dump()
{
	static UFunction* uFnDump = nullptr;

	if (!uFnDump)
	{
		uFnDump = UFunction::FindFunction("Function IpDrv.WebResponse.Dump");
	}

	UWebResponse_execDump_Params Dump_Params;
	memset(&Dump_Params, 0, sizeof(Dump_Params));

	this->ProcessEvent(uFnDump, &Dump_Params, nullptr);
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[32548])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        OffsetSeconds                  (CPF_OptionalParm | CPF_Parm)

class FString UWebResponse::GetHTTPExpiration(int32_t OffsetSeconds)
{
	static UFunction* uFnGetHTTPExpiration = nullptr;

	if (!uFnGetHTTPExpiration)
	{
		uFnGetHTTPExpiration = UFunction::FindFunction("Function IpDrv.WebResponse.GetHTTPExpiration");
	}

	UWebResponse_execGetHTTPExpiration_Params GetHTTPExpiration_Params;
	memset(&GetHTTPExpiration_Params, 0, sizeof(GetHTTPExpiration_Params));
	memcpy_s(&GetHTTPExpiration_Params.OffsetSeconds, sizeof(GetHTTPExpiration_Params.OffsetSeconds), &OffsetSeconds, sizeof(OffsetSeconds));

	this->ProcessEvent(uFnGetHTTPExpiration, &GetHTTPExpiration_Params, nullptr);

	return GetHTTPExpiration_Params.ReturnValue;
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32660])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UWebResponse::LoadParsedUHTM(const class FString& Filename)
{
	static UFunction* uFnLoadParsedUHTM = nullptr;

	if (!uFnLoadParsedUHTM)
	{
		uFnLoadParsedUHTM = UFunction::FindFunction("Function IpDrv.WebResponse.LoadParsedUHTM");
	}

	UWebResponse_execLoadParsedUHTM_Params LoadParsedUHTM_Params;
	memset(&LoadParsedUHTM_Params, 0, sizeof(LoadParsedUHTM_Params));
	memcpy_s(&LoadParsedUHTM_Params.Filename, sizeof(LoadParsedUHTM_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnLoadParsedUHTM, &LoadParsedUHTM_Params, nullptr);

	return LoadParsedUHTM_Params.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32610])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::IncludeBinaryFile(const class FString& Filename)
{
	static UFunction* uFnIncludeBinaryFile = nullptr;

	if (!uFnIncludeBinaryFile)
	{
		uFnIncludeBinaryFile = UFunction::FindFunction("Function IpDrv.WebResponse.IncludeBinaryFile");
	}

	UWebResponse_execIncludeBinaryFile_Params IncludeBinaryFile_Params;
	memset(&IncludeBinaryFile_Params, 0, sizeof(IncludeBinaryFile_Params));
	memcpy_s(&IncludeBinaryFile_Params.Filename, sizeof(IncludeBinaryFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnIncludeBinaryFile, &IncludeBinaryFile_Params, nullptr);

	return IncludeBinaryFile_Params.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32611])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::IncludeUHTM(const class FString& Filename)
{
	static UFunction* uFnIncludeUHTM = nullptr;

	if (!uFnIncludeUHTM)
	{
		uFnIncludeUHTM = UFunction::FindFunction("Function IpDrv.WebResponse.IncludeUHTM");
	}

	UWebResponse_execIncludeUHTM_Params IncludeUHTM_Params;
	memset(&IncludeUHTM_Params, 0, sizeof(IncludeUHTM_Params));
	memcpy_s(&IncludeUHTM_Params.Filename, sizeof(IncludeUHTM_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnIncludeUHTM, &IncludeUHTM_Params, nullptr);

	return IncludeUHTM_Params.ReturnValue;
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32339])
// Parameter Info:

void UWebResponse::ClearSubst()
{
	static UFunction* uFnClearSubst = nullptr;

	if (!uFnClearSubst)
	{
		uFnClearSubst = UFunction::FindFunction("Function IpDrv.WebResponse.ClearSubst");
	}

	UWebResponse_execClearSubst_Params ClearSubst_Params;
	memset(&ClearSubst_Params, 0, sizeof(ClearSubst_Params));

	this->ProcessEvent(uFnClearSubst, &ClearSubst_Params, nullptr);
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[33105])
// Parameter Info:
// class FString                  Variable                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// uint32_t                       bClear                         (CPF_OptionalParm | CPF_Parm)

void UWebResponse::Subst(const class FString& Variable, const class FString& Value, bool bClear)
{
	static UFunction* uFnSubst = nullptr;

	if (!uFnSubst)
	{
		uFnSubst = UFunction::FindFunction("Function IpDrv.WebResponse.Subst");
	}

	UWebResponse_execSubst_Params Subst_Params;
	memset(&Subst_Params, 0, sizeof(Subst_Params));
	memcpy_s(&Subst_Params.Variable, sizeof(Subst_Params.Variable), &Variable, sizeof(Variable));
	memcpy_s(&Subst_Params.Value, sizeof(Subst_Params.Value), &Value, sizeof(Value));
	Subst_Params.bClear = bClear;

	this->ProcessEvent(uFnSubst, &Subst_Params, nullptr);
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32516])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::FileExists(const class FString& Filename)
{
	static UFunction* uFnFileExists = nullptr;

	if (!uFnFileExists)
	{
		uFnFileExists = UFunction::FindFunction("Function IpDrv.WebResponse.FileExists");
	}

	UWebResponse_execFileExists_Params FileExists_Params;
	memset(&FileExists_Params, 0, sizeof(FileExists_Params));
	memcpy_s(&FileExists_Params.Filename, sizeof(FileExists_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnFileExists, &FileExists_Params, nullptr);

	return FileExists_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)

int32_t UUIDataStore_OnlinePlaylists::eventGetMatchTypeForPlaylistId(int32_t PlaylistId)
{
	static UFunction* uFnGetMatchTypeForPlaylistId = nullptr;

	if (!uFnGetMatchTypeForPlaylistId)
	{
		uFnGetMatchTypeForPlaylistId = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId");
	}

	UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Params GetMatchTypeForPlaylistId_Params;
	memset(&GetMatchTypeForPlaylistId_Params, 0, sizeof(GetMatchTypeForPlaylistId_Params));
	memcpy_s(&GetMatchTypeForPlaylistId_Params.PlaylistId, sizeof(GetMatchTypeForPlaylistId_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));

	this->ProcessEvent(uFnGetMatchTypeForPlaylistId, &GetMatchTypeForPlaylistId_Params, nullptr);

	return GetMatchTypeForPlaylistId_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00426002] (FUNC_Defined | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UOnlinePlaylistProvider* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    ProviderTag                    (CPF_Parm)
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        ProviderIndex                  (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

class UOnlinePlaylistProvider* UUIDataStore_OnlinePlaylists::GetOnlinePlaylistProvider(const class FName& ProviderTag, int32_t PlaylistId, int32_t& ProviderIndex)
{
	static UFunction* uFnGetOnlinePlaylistProvider = nullptr;

	if (!uFnGetOnlinePlaylistProvider)
	{
		uFnGetOnlinePlaylistProvider = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider");
	}

	UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Params GetOnlinePlaylistProvider_Params;
	memset(&GetOnlinePlaylistProvider_Params, 0, sizeof(GetOnlinePlaylistProvider_Params));
	memcpy_s(&GetOnlinePlaylistProvider_Params.ProviderTag, sizeof(GetOnlinePlaylistProvider_Params.ProviderTag), &ProviderTag, sizeof(ProviderTag));
	memcpy_s(&GetOnlinePlaylistProvider_Params.PlaylistId, sizeof(GetOnlinePlaylistProvider_Params.PlaylistId), &PlaylistId, sizeof(PlaylistId));
	memcpy_s(&GetOnlinePlaylistProvider_Params.ProviderIndex, sizeof(GetOnlinePlaylistProvider_Params.ProviderIndex), &ProviderIndex, sizeof(ProviderIndex));

	UUIDataStore_OnlinePlaylists::StaticClass()->ProcessEvent(uFnGetOnlinePlaylistProvider, &GetOnlinePlaylistProvider_Params, nullptr);

	memcpy_s(&ProviderIndex, sizeof(ProviderIndex), &GetOnlinePlaylistProvider_Params.ProviderIndex, sizeof(GetOnlinePlaylistProvider_Params.ProviderIndex));

	return GetOnlinePlaylistProvider_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32566])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    ProviderTag                    (CPF_Parm)
// int32_t                        ProviderIndex                  (CPF_Parm)
// class UUIResourceDataProvider* out_Provider                   (CPF_Parm | CPF_OutParm)

bool UUIDataStore_OnlinePlaylists::GetPlaylistProvider(const class FName& ProviderTag, int32_t ProviderIndex, class UUIResourceDataProvider*& out_Provider)
{
	static UFunction* uFnGetPlaylistProvider = nullptr;

	if (!uFnGetPlaylistProvider)
	{
		uFnGetPlaylistProvider = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider");
	}

	UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Params GetPlaylistProvider_Params;
	memset(&GetPlaylistProvider_Params, 0, sizeof(GetPlaylistProvider_Params));
	memcpy_s(&GetPlaylistProvider_Params.ProviderTag, sizeof(GetPlaylistProvider_Params.ProviderTag), &ProviderTag, sizeof(ProviderTag));
	memcpy_s(&GetPlaylistProvider_Params.ProviderIndex, sizeof(GetPlaylistProvider_Params.ProviderIndex), &ProviderIndex, sizeof(ProviderIndex));
	GetPlaylistProvider_Params.out_Provider = out_Provider;

	this->ProcessEvent(uFnGetPlaylistProvider, &GetPlaylistProvider_Params, nullptr);

	out_Provider = GetPlaylistProvider_Params.out_Provider;

	return GetPlaylistProvider_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21951])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    ProviderTag                    (CPF_Parm)
// class TArray<class UUIResourceDataProvider*> out_Providers                  (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UUIDataStore_OnlinePlaylists::GetResourceProviders(const class FName& ProviderTag, class TArray<class UUIResourceDataProvider*>& out_Providers)
{
	static UFunction* uFnGetResourceProviders = nullptr;

	if (!uFnGetResourceProviders)
	{
		uFnGetResourceProviders = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders");
	}

	UUIDataStore_OnlinePlaylists_execGetResourceProviders_Params GetResourceProviders_Params;
	memset(&GetResourceProviders_Params, 0, sizeof(GetResourceProviders_Params));
	memcpy_s(&GetResourceProviders_Params.ProviderTag, sizeof(GetResourceProviders_Params.ProviderTag), &ProviderTag, sizeof(ProviderTag));
	memcpy_s(&GetResourceProviders_Params.out_Providers, sizeof(GetResourceProviders_Params.out_Providers), &out_Providers, sizeof(out_Providers));

	this->ProcessEvent(uFnGetResourceProviders, &GetResourceProviders_Params, nullptr);

	memcpy_s(&out_Providers, sizeof(out_Providers), &GetResourceProviders_Params.out_Providers, sizeof(GetResourceProviders_Params.out_Providers));

	return GetResourceProviders_Params.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUIDataStore_OnlinePlaylists::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.UIDataStore_OnlinePlaylists.Init");
	}

	UUIDataStore_OnlinePlaylists_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::PostQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnPostQuery = nullptr;

	if (!uFnPostQuery)
	{
		uFnPostQuery = UFunction::FindFunction("Function IpDrv.WebApplication.PostQuery");
	}

	UWebApplication_execPostQuery_Params PostQuery_Params;
	memset(&PostQuery_Params, 0, sizeof(PostQuery_Params));
	PostQuery_Params.Request = Request;
	PostQuery_Params.Response = Response;

	this->ProcessEvent(uFnPostQuery, &PostQuery_Params, nullptr);
};

// Function IpDrv.WebApplication.Query
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnQuery = nullptr;

	if (!uFnQuery)
	{
		uFnQuery = UFunction::FindFunction("Function IpDrv.WebApplication.Query");
	}

	UWebApplication_execQuery_Params Query_Params;
	memset(&Query_Params, 0, sizeof(Query_Params));
	Query_Params.Request = Request;
	Query_Params.Response = Response;

	this->ProcessEvent(uFnQuery, &Query_Params, nullptr);
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

bool UWebApplication::PreQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnPreQuery = nullptr;

	if (!uFnPreQuery)
	{
		uFnPreQuery = UFunction::FindFunction("Function IpDrv.WebApplication.PreQuery");
	}

	UWebApplication_execPreQuery_Params PreQuery_Params;
	memset(&PreQuery_Params, 0, sizeof(PreQuery_Params));
	PreQuery_Params.Request = Request;
	PreQuery_Params.Response = Response;

	this->ProcessEvent(uFnPreQuery, &PreQuery_Params, nullptr);

	return PreQuery_Params.ReturnValue;
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UWebApplication::CleanupApp()
{
	static UFunction* uFnCleanupApp = nullptr;

	if (!uFnCleanupApp)
	{
		uFnCleanupApp = UFunction::FindFunction("Function IpDrv.WebApplication.CleanupApp");
	}

	UWebApplication_execCleanupApp_Params CleanupApp_Params;
	memset(&CleanupApp_Params, 0, sizeof(CleanupApp_Params));

	this->ProcessEvent(uFnCleanupApp, &CleanupApp_Params, nullptr);
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UWebApplication::Cleanup()
{
	static UFunction* uFnCleanup = nullptr;

	if (!uFnCleanup)
	{
		uFnCleanup = UFunction::FindFunction("Function IpDrv.WebApplication.Cleanup");
	}

	UWebApplication_execCleanup_Params Cleanup_Params;
	memset(&Cleanup_Params, 0, sizeof(Cleanup_Params));

	this->ProcessEvent(uFnCleanup, &Cleanup_Params, nullptr);
};

// Function IpDrv.WebApplication.Init
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UWebApplication::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.WebApplication.Init");
	}

	UWebApplication_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.WebServer.GetApplication
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UWebApplication*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URI                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SubURI                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UWebApplication* AWebServer::GetApplication(const class FString& URI, class FString& SubURI)
{
	static UFunction* uFnGetApplication = nullptr;

	if (!uFnGetApplication)
	{
		uFnGetApplication = UFunction::FindFunction("Function IpDrv.WebServer.GetApplication");
	}

	AWebServer_execGetApplication_Params GetApplication_Params;
	memset(&GetApplication_Params, 0, sizeof(GetApplication_Params));
	memcpy_s(&GetApplication_Params.URI, sizeof(GetApplication_Params.URI), &URI, sizeof(URI));
	memcpy_s(&GetApplication_Params.SubURI, sizeof(GetApplication_Params.SubURI), &SubURI, sizeof(SubURI));

	this->ProcessEvent(uFnGetApplication, &GetApplication_Params, nullptr);

	memcpy_s(&SubURI, sizeof(SubURI), &GetApplication_Params.SubURI, sizeof(GetApplication_Params.SubURI));

	return GetApplication_Params.ReturnValue;
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::eventLostChild(class AActor* C)
{
	static UFunction* uFnLostChild = nullptr;

	if (!uFnLostChild)
	{
		uFnLostChild = UFunction::FindFunction("Function IpDrv.WebServer.LostChild");
	}

	AWebServer_eventLostChild_Params LostChild_Params;
	memset(&LostChild_Params, 0, sizeof(LostChild_Params));
	LostChild_Params.C = C;

	this->ProcessEvent(uFnLostChild, &LostChild_Params, nullptr);
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::eventGainedChild(class AActor* C)
{
	static UFunction* uFnGainedChild = nullptr;

	if (!uFnGainedChild)
	{
		uFnGainedChild = UFunction::FindFunction("Function IpDrv.WebServer.GainedChild");
	}

	AWebServer_eventGainedChild_Params GainedChild_Params;
	memset(&GainedChild_Params, 0, sizeof(GainedChild_Params));
	GainedChild_Params.C = C;

	this->ProcessEvent(uFnGainedChild, &GainedChild_Params, nullptr);
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AWebServer::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function IpDrv.WebServer.Destroyed");
	}

	AWebServer_eventDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void AWebServer::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function IpDrv.WebServer.PostBeginPlay");
	}

	AWebServer_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function IpDrv.HelloWeb.Query
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UHelloWeb::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnQuery = nullptr;

	if (!uFnQuery)
	{
		uFnQuery = UFunction::FindFunction("Function IpDrv.HelloWeb.Query");
	}

	UHelloWeb_eventQuery_Params Query_Params;
	memset(&Query_Params, 0, sizeof(Query_Params));
	Query_Params.Request = Request;
	Query_Params.Response = Response;

	this->ProcessEvent(uFnQuery, &Query_Params, nullptr);
};

// Function IpDrv.HelloWeb.Init
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UHelloWeb::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.HelloWeb.Init");
	}

	UHelloWeb_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.ImageServer.Query
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UImageServer::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnQuery = nullptr;

	if (!uFnQuery)
	{
		uFnQuery = UFunction::FindFunction("Function IpDrv.ImageServer.Query");
	}

	UImageServer_eventQuery_Params Query_Params;
	memset(&Query_Params, 0, sizeof(Query_Params));
	Query_Params.Request = Request;
	Query_Params.Response = Response;

	this->ProcessEvent(uFnQuery, &Query_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        UserReward                     (CPF_Parm)

void UMcpClashMobBase::UpdateChallengeUserReward(const class FString& UniqueChallengeId, const class FString& UniqueUserId, int32_t UserReward)
{
	static UFunction* uFnUpdateChallengeUserReward = nullptr;

	if (!uFnUpdateChallengeUserReward)
	{
		uFnUpdateChallengeUserReward = UFunction::FindFunction("Function IpDrv.McpClashMobBase.UpdateChallengeUserReward");
	}

	UMcpClashMobBase_execUpdateChallengeUserReward_Params UpdateChallengeUserReward_Params;
	memset(&UpdateChallengeUserReward_Params, 0, sizeof(UpdateChallengeUserReward_Params));
	memcpy_s(&UpdateChallengeUserReward_Params.UniqueChallengeId, sizeof(UpdateChallengeUserReward_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&UpdateChallengeUserReward_Params.UniqueUserId, sizeof(UpdateChallengeUserReward_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&UpdateChallengeUserReward_Params.UserReward, sizeof(UpdateChallengeUserReward_Params.UserReward), &UserReward, sizeof(UserReward));

	this->ProcessEvent(uFnUpdateChallengeUserReward, &UpdateChallengeUserReward_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserRewardComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error)
{
	static UFunction* uFnOnUpdateChallengeUserRewardComplete = nullptr;

	if (!uFnOnUpdateChallengeUserRewardComplete)
	{
		uFnOnUpdateChallengeUserRewardComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete");
	}

	UMcpClashMobBase_execOnUpdateChallengeUserRewardComplete_Params OnUpdateChallengeUserRewardComplete_Params;
	memset(&OnUpdateChallengeUserRewardComplete_Params, 0, sizeof(OnUpdateChallengeUserRewardComplete_Params));
	OnUpdateChallengeUserRewardComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUpdateChallengeUserRewardComplete_Params.UniqueChallengeId, sizeof(OnUpdateChallengeUserRewardComplete_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&OnUpdateChallengeUserRewardComplete_Params.UniqueUserId, sizeof(OnUpdateChallengeUserRewardComplete_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&OnUpdateChallengeUserRewardComplete_Params.Error, sizeof(OnUpdateChallengeUserRewardComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnUpdateChallengeUserRewardComplete, &OnUpdateChallengeUserRewardComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bDidComplete                   (CPF_Parm)
// int32_t                        GoalProgress                   (CPF_Parm)

void UMcpClashMobBase::UpdateChallengeUserProgress(const class FString& UniqueChallengeId, const class FString& UniqueUserId, bool bDidComplete, int32_t GoalProgress)
{
	static UFunction* uFnUpdateChallengeUserProgress = nullptr;

	if (!uFnUpdateChallengeUserProgress)
	{
		uFnUpdateChallengeUserProgress = UFunction::FindFunction("Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress");
	}

	UMcpClashMobBase_execUpdateChallengeUserProgress_Params UpdateChallengeUserProgress_Params;
	memset(&UpdateChallengeUserProgress_Params, 0, sizeof(UpdateChallengeUserProgress_Params));
	memcpy_s(&UpdateChallengeUserProgress_Params.UniqueChallengeId, sizeof(UpdateChallengeUserProgress_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&UpdateChallengeUserProgress_Params.UniqueUserId, sizeof(UpdateChallengeUserProgress_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	UpdateChallengeUserProgress_Params.bDidComplete = bDidComplete;
	memcpy_s(&UpdateChallengeUserProgress_Params.GoalProgress, sizeof(UpdateChallengeUserProgress_Params.GoalProgress), &GoalProgress, sizeof(GoalProgress));

	this->ProcessEvent(uFnUpdateChallengeUserProgress, &UpdateChallengeUserProgress_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserProgressComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error)
{
	static UFunction* uFnOnUpdateChallengeUserProgressComplete = nullptr;

	if (!uFnOnUpdateChallengeUserProgressComplete)
	{
		uFnOnUpdateChallengeUserProgressComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete");
	}

	UMcpClashMobBase_execOnUpdateChallengeUserProgressComplete_Params OnUpdateChallengeUserProgressComplete_Params;
	memset(&OnUpdateChallengeUserProgressComplete_Params, 0, sizeof(OnUpdateChallengeUserProgressComplete_Params));
	OnUpdateChallengeUserProgressComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUpdateChallengeUserProgressComplete_Params.UniqueChallengeId, sizeof(OnUpdateChallengeUserProgressComplete_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&OnUpdateChallengeUserProgressComplete_Params.UniqueUserId, sizeof(OnUpdateChallengeUserProgressComplete_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&OnUpdateChallengeUserProgressComplete_Params.Error, sizeof(OnUpdateChallengeUserProgressComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnUpdateChallengeUserProgressComplete, &OnUpdateChallengeUserProgressComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus& OutChallengeUserStatus)
{
	static UFunction* uFnGetChallengeUserStatus = nullptr;

	if (!uFnGetChallengeUserStatus)
	{
		uFnGetChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeUserStatus");
	}

	UMcpClashMobBase_execGetChallengeUserStatus_Params GetChallengeUserStatus_Params;
	memset(&GetChallengeUserStatus_Params, 0, sizeof(GetChallengeUserStatus_Params));
	memcpy_s(&GetChallengeUserStatus_Params.UniqueChallengeId, sizeof(GetChallengeUserStatus_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&GetChallengeUserStatus_Params.UniqueUserId, sizeof(GetChallengeUserStatus_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&GetChallengeUserStatus_Params.OutChallengeUserStatus, sizeof(GetChallengeUserStatus_Params.OutChallengeUserStatus), &OutChallengeUserStatus, sizeof(OutChallengeUserStatus));

	this->ProcessEvent(uFnGetChallengeUserStatus, &GetChallengeUserStatus_Params, nullptr);

	memcpy_s(&OutChallengeUserStatus, sizeof(OutChallengeUserStatus), &GetChallengeUserStatus_Params.OutChallengeUserStatus, sizeof(GetChallengeUserStatus_Params.OutChallengeUserStatus));
};

// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    UserIdsToRead                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::QueryChallengeMultiUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, class TArray<class FString>& UserIdsToRead)
{
	static UFunction* uFnQueryChallengeMultiUserStatus = nullptr;

	if (!uFnQueryChallengeMultiUserStatus)
	{
		uFnQueryChallengeMultiUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus");
	}

	UMcpClashMobBase_execQueryChallengeMultiUserStatus_Params QueryChallengeMultiUserStatus_Params;
	memset(&QueryChallengeMultiUserStatus_Params, 0, sizeof(QueryChallengeMultiUserStatus_Params));
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UniqueChallengeId, sizeof(QueryChallengeMultiUserStatus_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UniqueUserId, sizeof(QueryChallengeMultiUserStatus_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UserIdsToRead, sizeof(QueryChallengeMultiUserStatus_Params.UserIdsToRead), &UserIdsToRead, sizeof(UserIdsToRead));

	this->ProcessEvent(uFnQueryChallengeMultiUserStatus, &QueryChallengeMultiUserStatus_Params, nullptr);

	memcpy_s(&UserIdsToRead, sizeof(UserIdsToRead), &QueryChallengeMultiUserStatus_Params.UserIdsToRead, sizeof(QueryChallengeMultiUserStatus_Params.UserIdsToRead));
};

// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::QueryChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId)
{
	static UFunction* uFnQueryChallengeUserStatus = nullptr;

	if (!uFnQueryChallengeUserStatus)
	{
		uFnQueryChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobBase.QueryChallengeUserStatus");
	}

	UMcpClashMobBase_execQueryChallengeUserStatus_Params QueryChallengeUserStatus_Params;
	memset(&QueryChallengeUserStatus_Params, 0, sizeof(QueryChallengeUserStatus_Params));
	memcpy_s(&QueryChallengeUserStatus_Params.UniqueChallengeId, sizeof(QueryChallengeUserStatus_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&QueryChallengeUserStatus_Params.UniqueUserId, sizeof(QueryChallengeUserStatus_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));

	this->ProcessEvent(uFnQueryChallengeUserStatus, &QueryChallengeUserStatus_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeUserStatusComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error)
{
	static UFunction* uFnOnQueryChallengeUserStatusComplete = nullptr;

	if (!uFnOnQueryChallengeUserStatusComplete)
	{
		uFnOnQueryChallengeUserStatusComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete");
	}

	UMcpClashMobBase_execOnQueryChallengeUserStatusComplete_Params OnQueryChallengeUserStatusComplete_Params;
	memset(&OnQueryChallengeUserStatusComplete_Params, 0, sizeof(OnQueryChallengeUserStatusComplete_Params));
	OnQueryChallengeUserStatusComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryChallengeUserStatusComplete_Params.UniqueChallengeId, sizeof(OnQueryChallengeUserStatusComplete_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&OnQueryChallengeUserStatusComplete_Params.UniqueUserId, sizeof(OnQueryChallengeUserStatusComplete_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&OnQueryChallengeUserStatusComplete_Params.Error, sizeof(OnQueryChallengeUserStatusComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryChallengeUserStatusComplete, &OnQueryChallengeUserStatusComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.AcceptChallenge
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::AcceptChallenge(const class FString& UniqueChallengeId, const class FString& UniqueUserId)
{
	static UFunction* uFnAcceptChallenge = nullptr;

	if (!uFnAcceptChallenge)
	{
		uFnAcceptChallenge = UFunction::FindFunction("Function IpDrv.McpClashMobBase.AcceptChallenge");
	}

	UMcpClashMobBase_execAcceptChallenge_Params AcceptChallenge_Params;
	memset(&AcceptChallenge_Params, 0, sizeof(AcceptChallenge_Params));
	memcpy_s(&AcceptChallenge_Params.UniqueChallengeId, sizeof(AcceptChallenge_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&AcceptChallenge_Params.UniqueUserId, sizeof(AcceptChallenge_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));

	this->ProcessEvent(uFnAcceptChallenge, &AcceptChallenge_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnAcceptChallengeComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error)
{
	static UFunction* uFnOnAcceptChallengeComplete = nullptr;

	if (!uFnOnAcceptChallengeComplete)
	{
		uFnOnAcceptChallengeComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete");
	}

	UMcpClashMobBase_execOnAcceptChallengeComplete_Params OnAcceptChallengeComplete_Params;
	memset(&OnAcceptChallengeComplete_Params, 0, sizeof(OnAcceptChallengeComplete_Params));
	OnAcceptChallengeComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAcceptChallengeComplete_Params.UniqueChallengeId, sizeof(OnAcceptChallengeComplete_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&OnAcceptChallengeComplete_Params.UniqueUserId, sizeof(OnAcceptChallengeComplete_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&OnAcceptChallengeComplete_Params.Error, sizeof(OnAcceptChallengeComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnAcceptChallengeComplete, &OnAcceptChallengeComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::DeleteCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName)
{
	static UFunction* uFnDeleteCachedChallengeFile = nullptr;

	if (!uFnDeleteCachedChallengeFile)
	{
		uFnDeleteCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile");
	}

	UMcpClashMobBase_execDeleteCachedChallengeFile_Params DeleteCachedChallengeFile_Params;
	memset(&DeleteCachedChallengeFile_Params, 0, sizeof(DeleteCachedChallengeFile_Params));
	memcpy_s(&DeleteCachedChallengeFile_Params.UniqueChallengeId, sizeof(DeleteCachedChallengeFile_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&DeleteCachedChallengeFile_Params.DLName, sizeof(DeleteCachedChallengeFile_Params.DLName), &DLName, sizeof(DLName));

	this->ProcessEvent(uFnDeleteCachedChallengeFile, &DeleteCachedChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::ClearCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName)
{
	static UFunction* uFnClearCachedChallengeFile = nullptr;

	if (!uFnClearCachedChallengeFile)
	{
		uFnClearCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobBase.ClearCachedChallengeFile");
	}

	UMcpClashMobBase_execClearCachedChallengeFile_Params ClearCachedChallengeFile_Params;
	memset(&ClearCachedChallengeFile_Params, 0, sizeof(ClearCachedChallengeFile_Params));
	memcpy_s(&ClearCachedChallengeFile_Params.UniqueChallengeId, sizeof(ClearCachedChallengeFile_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&ClearCachedChallengeFile_Params.DLName, sizeof(ClearCachedChallengeFile_Params.DLName), &DLName, sizeof(DLName));

	this->ProcessEvent(uFnClearCachedChallengeFile, &ClearCachedChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          OutFileContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileContents(const class FString& UniqueChallengeId, const class FString& DLName, class TArray<uint8_t>& OutFileContents)
{
	static UFunction* uFnGetChallengeFileContents = nullptr;

	if (!uFnGetChallengeFileContents)
	{
		uFnGetChallengeFileContents = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeFileContents");
	}

	UMcpClashMobBase_execGetChallengeFileContents_Params GetChallengeFileContents_Params;
	memset(&GetChallengeFileContents_Params, 0, sizeof(GetChallengeFileContents_Params));
	memcpy_s(&GetChallengeFileContents_Params.UniqueChallengeId, sizeof(GetChallengeFileContents_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&GetChallengeFileContents_Params.DLName, sizeof(GetChallengeFileContents_Params.DLName), &DLName, sizeof(DLName));
	memcpy_s(&GetChallengeFileContents_Params.OutFileContents, sizeof(GetChallengeFileContents_Params.OutFileContents), &OutFileContents, sizeof(OutFileContents));

	this->ProcessEvent(uFnGetChallengeFileContents, &GetChallengeFileContents_Params, nullptr);

	memcpy_s(&OutFileContents, sizeof(OutFileContents), &GetChallengeFileContents_Params.OutFileContents, sizeof(GetChallengeFileContents_Params.OutFileContents));
};

// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::DownloadChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName)
{
	static UFunction* uFnDownloadChallengeFile = nullptr;

	if (!uFnDownloadChallengeFile)
	{
		uFnDownloadChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobBase.DownloadChallengeFile");
	}

	UMcpClashMobBase_execDownloadChallengeFile_Params DownloadChallengeFile_Params;
	memset(&DownloadChallengeFile_Params, 0, sizeof(DownloadChallengeFile_Params));
	memcpy_s(&DownloadChallengeFile_Params.UniqueChallengeId, sizeof(DownloadChallengeFile_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&DownloadChallengeFile_Params.DLName, sizeof(DownloadChallengeFile_Params.DLName), &DLName, sizeof(DLName));

	this->ProcessEvent(uFnDownloadChallengeFile, &DownloadChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeFileList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileList(const class FString& UniqueChallengeId, class TArray<struct FMcpClashMobChallengeFile>& OutChallengeFiles)
{
	static UFunction* uFnGetChallengeFileList = nullptr;

	if (!uFnGetChallengeFileList)
	{
		uFnGetChallengeFileList = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeFileList");
	}

	UMcpClashMobBase_execGetChallengeFileList_Params GetChallengeFileList_Params;
	memset(&GetChallengeFileList_Params, 0, sizeof(GetChallengeFileList_Params));
	memcpy_s(&GetChallengeFileList_Params.UniqueChallengeId, sizeof(GetChallengeFileList_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&GetChallengeFileList_Params.OutChallengeFiles, sizeof(GetChallengeFileList_Params.OutChallengeFiles), &OutChallengeFiles, sizeof(OutChallengeFiles));

	this->ProcessEvent(uFnGetChallengeFileList, &GetChallengeFileList_Params, nullptr);

	memcpy_s(&OutChallengeFiles, sizeof(OutChallengeFiles), &GetChallengeFileList_Params.OutChallengeFiles, sizeof(GetChallengeFileList_Params.OutChallengeFiles));
};

// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnDownloadChallengeFileComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& DLName, const class FString& Filename, const class FString& Error)
{
	static UFunction* uFnOnDownloadChallengeFileComplete = nullptr;

	if (!uFnOnDownloadChallengeFileComplete)
	{
		uFnOnDownloadChallengeFileComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete");
	}

	UMcpClashMobBase_execOnDownloadChallengeFileComplete_Params OnDownloadChallengeFileComplete_Params;
	memset(&OnDownloadChallengeFileComplete_Params, 0, sizeof(OnDownloadChallengeFileComplete_Params));
	OnDownloadChallengeFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDownloadChallengeFileComplete_Params.UniqueChallengeId, sizeof(OnDownloadChallengeFileComplete_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&OnDownloadChallengeFileComplete_Params.DLName, sizeof(OnDownloadChallengeFileComplete_Params.DLName), &DLName, sizeof(DLName));
	memcpy_s(&OnDownloadChallengeFileComplete_Params.Filename, sizeof(OnDownloadChallengeFileComplete_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&OnDownloadChallengeFileComplete_Params.Error, sizeof(OnDownloadChallengeFileComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnDownloadChallengeFileComplete, &OnDownloadChallengeFileComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.GetChallengeList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobBase::GetChallengeList(class TArray<struct FMcpClashMobChallengeEvent>& OutChallengeEvents)
{
	static UFunction* uFnGetChallengeList = nullptr;

	if (!uFnGetChallengeList)
	{
		uFnGetChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobBase.GetChallengeList");
	}

	UMcpClashMobBase_execGetChallengeList_Params GetChallengeList_Params;
	memset(&GetChallengeList_Params, 0, sizeof(GetChallengeList_Params));
	memcpy_s(&GetChallengeList_Params.OutChallengeEvents, sizeof(GetChallengeList_Params.OutChallengeEvents), &OutChallengeEvents, sizeof(OutChallengeEvents));

	this->ProcessEvent(uFnGetChallengeList, &GetChallengeList_Params, nullptr);

	memcpy_s(&OutChallengeEvents, sizeof(OutChallengeEvents), &GetChallengeList_Params.OutChallengeEvents, sizeof(GetChallengeList_Params.OutChallengeEvents));
};

// Function IpDrv.McpClashMobBase.QueryChallengeList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMcpClashMobBase::QueryChallengeList()
{
	static UFunction* uFnQueryChallengeList = nullptr;

	if (!uFnQueryChallengeList)
	{
		uFnQueryChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobBase.QueryChallengeList");
	}

	UMcpClashMobBase_execQueryChallengeList_Params QueryChallengeList_Params;
	memset(&QueryChallengeList_Params, 0, sizeof(QueryChallengeList_Params));

	this->ProcessEvent(uFnQueryChallengeList, &QueryChallengeList_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeListComplete(bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnQueryChallengeListComplete = nullptr;

	if (!uFnOnQueryChallengeListComplete)
	{
		uFnOnQueryChallengeListComplete = UFunction::FindFunction("Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete");
	}

	UMcpClashMobBase_execOnQueryChallengeListComplete_Params OnQueryChallengeListComplete_Params;
	memset(&OnQueryChallengeListComplete_Params, 0, sizeof(OnQueryChallengeListComplete_Params));
	OnQueryChallengeListComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryChallengeListComplete_Params.Error, sizeof(OnQueryChallengeListComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryChallengeListComplete, &OnQueryChallengeListComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMcpClashMobBase*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpClashMobBase* UMcpClashMobBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpClashMobBase.CreateInstance");
	}

	UMcpClashMobBase_execCreateInstance_Params CreateInstance_Params;
	memset(&CreateInstance_Params, 0, sizeof(CreateInstance_Params));

	UMcpClashMobBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UMcpClashMobFileDownload::GetUrlForFile(const class FString& Filename)
{
	static UFunction* uFnGetUrlForFile = nullptr;

	if (!uFnGetUrlForFile)
	{
		uFnGetUrlForFile = UFunction::FindFunction("Function IpDrv.McpClashMobFileDownload.GetUrlForFile");
	}

	UMcpClashMobFileDownload_execGetUrlForFile_Params GetUrlForFile_Params;
	memset(&GetUrlForFile_Params, 0, sizeof(GetUrlForFile_Params));
	memcpy_s(&GetUrlForFile_Params.Filename, sizeof(GetUrlForFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetUrlForFile, &GetUrlForFile_Params, nullptr);

	return GetUrlForFile_Params.ReturnValue;
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnUpdateChallengeUserRewardHTTPRequestComplete = nullptr;

	if (!uFnOnUpdateChallengeUserRewardHTTPRequestComplete)
	{
		uFnOnUpdateChallengeUserRewardHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnUpdateChallengeUserRewardHTTPRequestComplete_Params OnUpdateChallengeUserRewardHTTPRequestComplete_Params;
	memset(&OnUpdateChallengeUserRewardHTTPRequestComplete_Params, 0, sizeof(OnUpdateChallengeUserRewardHTTPRequestComplete_Params));
	OnUpdateChallengeUserRewardHTTPRequestComplete_Params.Request = Request;
	OnUpdateChallengeUserRewardHTTPRequestComplete_Params.Response = Response;
	OnUpdateChallengeUserRewardHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUpdateChallengeUserRewardHTTPRequestComplete, &OnUpdateChallengeUserRewardHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        UserReward                     (CPF_Parm)

void UMcpClashMobManager::UpdateChallengeUserReward(const class FString& UniqueChallengeId, const class FString& UniqueUserId, int32_t UserReward)
{
	static UFunction* uFnUpdateChallengeUserReward = nullptr;

	if (!uFnUpdateChallengeUserReward)
	{
		uFnUpdateChallengeUserReward = UFunction::FindFunction("Function IpDrv.McpClashMobManager.UpdateChallengeUserReward");
	}

	UMcpClashMobManager_execUpdateChallengeUserReward_Params UpdateChallengeUserReward_Params;
	memset(&UpdateChallengeUserReward_Params, 0, sizeof(UpdateChallengeUserReward_Params));
	memcpy_s(&UpdateChallengeUserReward_Params.UniqueChallengeId, sizeof(UpdateChallengeUserReward_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&UpdateChallengeUserReward_Params.UniqueUserId, sizeof(UpdateChallengeUserReward_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&UpdateChallengeUserReward_Params.UserReward, sizeof(UpdateChallengeUserReward_Params.UserReward), &UserReward, sizeof(UserReward));

	this->ProcessEvent(uFnUpdateChallengeUserReward, &UpdateChallengeUserReward_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnUpdateChallengeUserProgressHTTPRequestComplete = nullptr;

	if (!uFnOnUpdateChallengeUserProgressHTTPRequestComplete)
	{
		uFnOnUpdateChallengeUserProgressHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnUpdateChallengeUserProgressHTTPRequestComplete_Params OnUpdateChallengeUserProgressHTTPRequestComplete_Params;
	memset(&OnUpdateChallengeUserProgressHTTPRequestComplete_Params, 0, sizeof(OnUpdateChallengeUserProgressHTTPRequestComplete_Params));
	OnUpdateChallengeUserProgressHTTPRequestComplete_Params.Request = Request;
	OnUpdateChallengeUserProgressHTTPRequestComplete_Params.Response = Response;
	OnUpdateChallengeUserProgressHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUpdateChallengeUserProgressHTTPRequestComplete, &OnUpdateChallengeUserProgressHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bDidComplete                   (CPF_Parm)
// int32_t                        GoalProgress                   (CPF_Parm)

void UMcpClashMobManager::UpdateChallengeUserProgress(const class FString& UniqueChallengeId, const class FString& UniqueUserId, bool bDidComplete, int32_t GoalProgress)
{
	static UFunction* uFnUpdateChallengeUserProgress = nullptr;

	if (!uFnUpdateChallengeUserProgress)
	{
		uFnUpdateChallengeUserProgress = UFunction::FindFunction("Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress");
	}

	UMcpClashMobManager_execUpdateChallengeUserProgress_Params UpdateChallengeUserProgress_Params;
	memset(&UpdateChallengeUserProgress_Params, 0, sizeof(UpdateChallengeUserProgress_Params));
	memcpy_s(&UpdateChallengeUserProgress_Params.UniqueChallengeId, sizeof(UpdateChallengeUserProgress_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&UpdateChallengeUserProgress_Params.UniqueUserId, sizeof(UpdateChallengeUserProgress_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	UpdateChallengeUserProgress_Params.bDidComplete = bDidComplete;
	memcpy_s(&UpdateChallengeUserProgress_Params.GoalProgress, sizeof(UpdateChallengeUserProgress_Params.GoalProgress), &GoalProgress, sizeof(GoalProgress));

	this->ProcessEvent(uFnUpdateChallengeUserProgress, &UpdateChallengeUserProgress_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus& OutChallengeUserStatus)
{
	static UFunction* uFnGetChallengeUserStatus = nullptr;

	if (!uFnGetChallengeUserStatus)
	{
		uFnGetChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeUserStatus");
	}

	UMcpClashMobManager_execGetChallengeUserStatus_Params GetChallengeUserStatus_Params;
	memset(&GetChallengeUserStatus_Params, 0, sizeof(GetChallengeUserStatus_Params));
	memcpy_s(&GetChallengeUserStatus_Params.UniqueChallengeId, sizeof(GetChallengeUserStatus_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&GetChallengeUserStatus_Params.UniqueUserId, sizeof(GetChallengeUserStatus_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&GetChallengeUserStatus_Params.OutChallengeUserStatus, sizeof(GetChallengeUserStatus_Params.OutChallengeUserStatus), &OutChallengeUserStatus, sizeof(OutChallengeUserStatus));

	this->ProcessEvent(uFnGetChallengeUserStatus, &GetChallengeUserStatus_Params, nullptr);

	memcpy_s(&OutChallengeUserStatus, sizeof(OutChallengeUserStatus), &GetChallengeUserStatus_Params.OutChallengeUserStatus, sizeof(GetChallengeUserStatus_Params.OutChallengeUserStatus));
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryChallengeMultiStatusHTTPRequestComplete = nullptr;

	if (!uFnOnQueryChallengeMultiStatusHTTPRequestComplete)
	{
		uFnOnQueryChallengeMultiStatusHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnQueryChallengeMultiStatusHTTPRequestComplete_Params OnQueryChallengeMultiStatusHTTPRequestComplete_Params;
	memset(&OnQueryChallengeMultiStatusHTTPRequestComplete_Params, 0, sizeof(OnQueryChallengeMultiStatusHTTPRequestComplete_Params));
	OnQueryChallengeMultiStatusHTTPRequestComplete_Params.Request = Request;
	OnQueryChallengeMultiStatusHTTPRequestComplete_Params.Response = Response;
	OnQueryChallengeMultiStatusHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryChallengeMultiStatusHTTPRequestComplete, &OnQueryChallengeMultiStatusHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    UserIdsToRead                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::QueryChallengeMultiUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, class TArray<class FString>& UserIdsToRead)
{
	static UFunction* uFnQueryChallengeMultiUserStatus = nullptr;

	if (!uFnQueryChallengeMultiUserStatus)
	{
		uFnQueryChallengeMultiUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus");
	}

	UMcpClashMobManager_execQueryChallengeMultiUserStatus_Params QueryChallengeMultiUserStatus_Params;
	memset(&QueryChallengeMultiUserStatus_Params, 0, sizeof(QueryChallengeMultiUserStatus_Params));
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UniqueChallengeId, sizeof(QueryChallengeMultiUserStatus_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UniqueUserId, sizeof(QueryChallengeMultiUserStatus_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&QueryChallengeMultiUserStatus_Params.UserIdsToRead, sizeof(QueryChallengeMultiUserStatus_Params.UserIdsToRead), &UserIdsToRead, sizeof(UserIdsToRead));

	this->ProcessEvent(uFnQueryChallengeMultiUserStatus, &QueryChallengeMultiUserStatus_Params, nullptr);

	memcpy_s(&UserIdsToRead, sizeof(UserIdsToRead), &QueryChallengeMultiUserStatus_Params.UserIdsToRead, sizeof(QueryChallengeMultiUserStatus_Params.UserIdsToRead));
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryChallengeStatusHTTPRequestComplete = nullptr;

	if (!uFnOnQueryChallengeStatusHTTPRequestComplete)
	{
		uFnOnQueryChallengeStatusHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnQueryChallengeStatusHTTPRequestComplete_Params OnQueryChallengeStatusHTTPRequestComplete_Params;
	memset(&OnQueryChallengeStatusHTTPRequestComplete_Params, 0, sizeof(OnQueryChallengeStatusHTTPRequestComplete_Params));
	OnQueryChallengeStatusHTTPRequestComplete_Params.Request = Request;
	OnQueryChallengeStatusHTTPRequestComplete_Params.Response = Response;
	OnQueryChallengeStatusHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryChallengeStatusHTTPRequestComplete, &OnQueryChallengeStatusHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::QueryChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId)
{
	static UFunction* uFnQueryChallengeUserStatus = nullptr;

	if (!uFnQueryChallengeUserStatus)
	{
		uFnQueryChallengeUserStatus = UFunction::FindFunction("Function IpDrv.McpClashMobManager.QueryChallengeUserStatus");
	}

	UMcpClashMobManager_execQueryChallengeUserStatus_Params QueryChallengeUserStatus_Params;
	memset(&QueryChallengeUserStatus_Params, 0, sizeof(QueryChallengeUserStatus_Params));
	memcpy_s(&QueryChallengeUserStatus_Params.UniqueChallengeId, sizeof(QueryChallengeUserStatus_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&QueryChallengeUserStatus_Params.UniqueUserId, sizeof(QueryChallengeUserStatus_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));

	this->ProcessEvent(uFnQueryChallengeUserStatus, &QueryChallengeUserStatus_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnAcceptChallengeHTTPRequestComplete = nullptr;

	if (!uFnOnAcceptChallengeHTTPRequestComplete)
	{
		uFnOnAcceptChallengeHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnAcceptChallengeHTTPRequestComplete_Params OnAcceptChallengeHTTPRequestComplete_Params;
	memset(&OnAcceptChallengeHTTPRequestComplete_Params, 0, sizeof(OnAcceptChallengeHTTPRequestComplete_Params));
	OnAcceptChallengeHTTPRequestComplete_Params.Request = Request;
	OnAcceptChallengeHTTPRequestComplete_Params.Response = Response;
	OnAcceptChallengeHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAcceptChallengeHTTPRequestComplete, &OnAcceptChallengeHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.AcceptChallenge
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::AcceptChallenge(const class FString& UniqueChallengeId, const class FString& UniqueUserId)
{
	static UFunction* uFnAcceptChallenge = nullptr;

	if (!uFnAcceptChallenge)
	{
		uFnAcceptChallenge = UFunction::FindFunction("Function IpDrv.McpClashMobManager.AcceptChallenge");
	}

	UMcpClashMobManager_execAcceptChallenge_Params AcceptChallenge_Params;
	memset(&AcceptChallenge_Params, 0, sizeof(AcceptChallenge_Params));
	memcpy_s(&AcceptChallenge_Params.UniqueChallengeId, sizeof(AcceptChallenge_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&AcceptChallenge_Params.UniqueUserId, sizeof(AcceptChallenge_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));

	this->ProcessEvent(uFnAcceptChallenge, &AcceptChallenge_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::DeleteCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName)
{
	static UFunction* uFnDeleteCachedChallengeFile = nullptr;

	if (!uFnDeleteCachedChallengeFile)
	{
		uFnDeleteCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile");
	}

	UMcpClashMobManager_execDeleteCachedChallengeFile_Params DeleteCachedChallengeFile_Params;
	memset(&DeleteCachedChallengeFile_Params, 0, sizeof(DeleteCachedChallengeFile_Params));
	memcpy_s(&DeleteCachedChallengeFile_Params.UniqueChallengeId, sizeof(DeleteCachedChallengeFile_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&DeleteCachedChallengeFile_Params.DLName, sizeof(DeleteCachedChallengeFile_Params.DLName), &DLName, sizeof(DLName));

	this->ProcessEvent(uFnDeleteCachedChallengeFile, &DeleteCachedChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::ClearCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName)
{
	static UFunction* uFnClearCachedChallengeFile = nullptr;

	if (!uFnClearCachedChallengeFile)
	{
		uFnClearCachedChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobManager.ClearCachedChallengeFile");
	}

	UMcpClashMobManager_execClearCachedChallengeFile_Params ClearCachedChallengeFile_Params;
	memset(&ClearCachedChallengeFile_Params, 0, sizeof(ClearCachedChallengeFile_Params));
	memcpy_s(&ClearCachedChallengeFile_Params.UniqueChallengeId, sizeof(ClearCachedChallengeFile_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&ClearCachedChallengeFile_Params.DLName, sizeof(ClearCachedChallengeFile_Params.DLName), &DLName, sizeof(DLName));

	this->ProcessEvent(uFnClearCachedChallengeFile, &ClearCachedChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          OutFileContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileContents(const class FString& UniqueChallengeId, const class FString& DLName, class TArray<uint8_t>& OutFileContents)
{
	static UFunction* uFnGetChallengeFileContents = nullptr;

	if (!uFnGetChallengeFileContents)
	{
		uFnGetChallengeFileContents = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeFileContents");
	}

	UMcpClashMobManager_execGetChallengeFileContents_Params GetChallengeFileContents_Params;
	memset(&GetChallengeFileContents_Params, 0, sizeof(GetChallengeFileContents_Params));
	memcpy_s(&GetChallengeFileContents_Params.UniqueChallengeId, sizeof(GetChallengeFileContents_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&GetChallengeFileContents_Params.DLName, sizeof(GetChallengeFileContents_Params.DLName), &DLName, sizeof(DLName));
	memcpy_s(&GetChallengeFileContents_Params.OutFileContents, sizeof(GetChallengeFileContents_Params.OutFileContents), &OutFileContents, sizeof(OutFileContents));

	this->ProcessEvent(uFnGetChallengeFileContents, &GetChallengeFileContents_Params, nullptr);

	memcpy_s(&OutFileContents, sizeof(OutFileContents), &GetChallengeFileContents_Params.OutFileContents, sizeof(GetChallengeFileContents_Params.OutFileContents));
};

// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::OnDownloadMcpFileComplete(bool bWasSuccessful, const class FString& DLName)
{
	static UFunction* uFnOnDownloadMcpFileComplete = nullptr;

	if (!uFnOnDownloadMcpFileComplete)
	{
		uFnOnDownloadMcpFileComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete");
	}

	UMcpClashMobManager_execOnDownloadMcpFileComplete_Params OnDownloadMcpFileComplete_Params;
	memset(&OnDownloadMcpFileComplete_Params, 0, sizeof(OnDownloadMcpFileComplete_Params));
	OnDownloadMcpFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDownloadMcpFileComplete_Params.DLName, sizeof(OnDownloadMcpFileComplete_Params.DLName), &DLName, sizeof(DLName));

	this->ProcessEvent(uFnOnDownloadMcpFileComplete, &OnDownloadMcpFileComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::OnLoadCachedFileComplete(bool bWasSuccessful, const class FString& DLName)
{
	static UFunction* uFnOnLoadCachedFileComplete = nullptr;

	if (!uFnOnLoadCachedFileComplete)
	{
		uFnOnLoadCachedFileComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete");
	}

	UMcpClashMobManager_execOnLoadCachedFileComplete_Params OnLoadCachedFileComplete_Params;
	memset(&OnLoadCachedFileComplete_Params, 0, sizeof(OnLoadCachedFileComplete_Params));
	OnLoadCachedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnLoadCachedFileComplete_Params.DLName, sizeof(OnLoadCachedFileComplete_Params.DLName), &DLName, sizeof(DLName));

	this->ProcessEvent(uFnOnLoadCachedFileComplete, &OnLoadCachedFileComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DLName                         (CPF_Parm | CPF_NeedCtorLink)

void UMcpClashMobManager::DownloadChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName)
{
	static UFunction* uFnDownloadChallengeFile = nullptr;

	if (!uFnDownloadChallengeFile)
	{
		uFnDownloadChallengeFile = UFunction::FindFunction("Function IpDrv.McpClashMobManager.DownloadChallengeFile");
	}

	UMcpClashMobManager_execDownloadChallengeFile_Params DownloadChallengeFile_Params;
	memset(&DownloadChallengeFile_Params, 0, sizeof(DownloadChallengeFile_Params));
	memcpy_s(&DownloadChallengeFile_Params.UniqueChallengeId, sizeof(DownloadChallengeFile_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&DownloadChallengeFile_Params.DLName, sizeof(DownloadChallengeFile_Params.DLName), &DLName, sizeof(DLName));

	this->ProcessEvent(uFnDownloadChallengeFile, &DownloadChallengeFile_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.GetChallengeFileList
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueChallengeId              (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileList(const class FString& UniqueChallengeId, class TArray<struct FMcpClashMobChallengeFile>& OutChallengeFiles)
{
	static UFunction* uFnGetChallengeFileList = nullptr;

	if (!uFnGetChallengeFileList)
	{
		uFnGetChallengeFileList = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeFileList");
	}

	UMcpClashMobManager_execGetChallengeFileList_Params GetChallengeFileList_Params;
	memset(&GetChallengeFileList_Params, 0, sizeof(GetChallengeFileList_Params));
	memcpy_s(&GetChallengeFileList_Params.UniqueChallengeId, sizeof(GetChallengeFileList_Params.UniqueChallengeId), &UniqueChallengeId, sizeof(UniqueChallengeId));
	memcpy_s(&GetChallengeFileList_Params.OutChallengeFiles, sizeof(GetChallengeFileList_Params.OutChallengeFiles), &OutChallengeFiles, sizeof(OutChallengeFiles));

	this->ProcessEvent(uFnGetChallengeFileList, &GetChallengeFileList_Params, nullptr);

	memcpy_s(&OutChallengeFiles, sizeof(OutChallengeFiles), &GetChallengeFileList_Params.OutChallengeFiles, sizeof(GetChallengeFileList_Params.OutChallengeFiles));
};

// Function IpDrv.McpClashMobManager.GetChallengeList
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpClashMobManager::GetChallengeList(class TArray<struct FMcpClashMobChallengeEvent>& OutChallengeEvents)
{
	static UFunction* uFnGetChallengeList = nullptr;

	if (!uFnGetChallengeList)
	{
		uFnGetChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobManager.GetChallengeList");
	}

	UMcpClashMobManager_execGetChallengeList_Params GetChallengeList_Params;
	memset(&GetChallengeList_Params, 0, sizeof(GetChallengeList_Params));
	memcpy_s(&GetChallengeList_Params.OutChallengeEvents, sizeof(GetChallengeList_Params.OutChallengeEvents), &OutChallengeEvents, sizeof(OutChallengeEvents));

	this->ProcessEvent(uFnGetChallengeList, &GetChallengeList_Params, nullptr);

	memcpy_s(&OutChallengeEvents, sizeof(OutChallengeEvents), &GetChallengeList_Params.OutChallengeEvents, sizeof(GetChallengeList_Params.OutChallengeEvents));
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpClashMobManager::OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryChallengeListHTTPRequestComplete = nullptr;

	if (!uFnOnQueryChallengeListHTTPRequestComplete)
	{
		uFnOnQueryChallengeListHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete");
	}

	UMcpClashMobManager_execOnQueryChallengeListHTTPRequestComplete_Params OnQueryChallengeListHTTPRequestComplete_Params;
	memset(&OnQueryChallengeListHTTPRequestComplete_Params, 0, sizeof(OnQueryChallengeListHTTPRequestComplete_Params));
	OnQueryChallengeListHTTPRequestComplete_Params.Request = Request;
	OnQueryChallengeListHTTPRequestComplete_Params.Response = Response;
	OnQueryChallengeListHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryChallengeListHTTPRequestComplete, &OnQueryChallengeListHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.QueryChallengeList
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMcpClashMobManager::QueryChallengeList()
{
	static UFunction* uFnQueryChallengeList = nullptr;

	if (!uFnQueryChallengeList)
	{
		uFnQueryChallengeList = UFunction::FindFunction("Function IpDrv.McpClashMobManager.QueryChallengeList");
	}

	UMcpClashMobManager_execQueryChallengeList_Params QueryChallengeList_Params;
	memset(&QueryChallengeList_Params, 0, sizeof(QueryChallengeList_Params));

	this->ProcessEvent(uFnQueryChallengeList, &QueryChallengeList_Params, nullptr);
};

// Function IpDrv.McpClashMobManager.Init
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMcpClashMobManager::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.McpClashMobManager.Init");
	}

	UMcpClashMobManager_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnAcceptGroupInviteComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnAcceptGroupInviteComplete = nullptr;

	if (!uFnOnAcceptGroupInviteComplete)
	{
		uFnOnAcceptGroupInviteComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete");
	}

	UMcpGroupsBase_execOnAcceptGroupInviteComplete_Params OnAcceptGroupInviteComplete_Params;
	memset(&OnAcceptGroupInviteComplete_Params, 0, sizeof(OnAcceptGroupInviteComplete_Params));
	memcpy_s(&OnAcceptGroupInviteComplete_Params.GroupID, sizeof(OnAcceptGroupInviteComplete_Params.GroupID), &GroupID, sizeof(GroupID));
	OnAcceptGroupInviteComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAcceptGroupInviteComplete_Params.Error, sizeof(OnAcceptGroupInviteComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnAcceptGroupInviteComplete, &OnAcceptGroupInviteComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bShouldAccept                  (CPF_Parm)

void UMcpGroupsBase::AcceptGroupInvite(const class FString& UniqueUserId, const class FString& GroupID, bool bShouldAccept)
{
	static UFunction* uFnAcceptGroupInvite = nullptr;

	if (!uFnAcceptGroupInvite)
	{
		uFnAcceptGroupInvite = UFunction::FindFunction("Function IpDrv.McpGroupsBase.AcceptGroupInvite");
	}

	UMcpGroupsBase_execAcceptGroupInvite_Params AcceptGroupInvite_Params;
	memset(&AcceptGroupInvite_Params, 0, sizeof(AcceptGroupInvite_Params));
	memcpy_s(&AcceptGroupInvite_Params.UniqueUserId, sizeof(AcceptGroupInvite_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&AcceptGroupInvite_Params.GroupID, sizeof(AcceptGroupInvite_Params.GroupID), &GroupID, sizeof(GroupID));
	AcceptGroupInvite_Params.bShouldAccept = bShouldAccept;

	this->ProcessEvent(uFnAcceptGroupInvite, &AcceptGroupInvite_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.GetGroupInviteList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroupList           InviteList                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupInviteList(const class FString& UserId, struct FMcpGroupList& InviteList)
{
	static UFunction* uFnGetGroupInviteList = nullptr;

	if (!uFnGetGroupInviteList)
	{
		uFnGetGroupInviteList = UFunction::FindFunction("Function IpDrv.McpGroupsBase.GetGroupInviteList");
	}

	UMcpGroupsBase_execGetGroupInviteList_Params GetGroupInviteList_Params;
	memset(&GetGroupInviteList_Params, 0, sizeof(GetGroupInviteList_Params));
	memcpy_s(&GetGroupInviteList_Params.UserId, sizeof(GetGroupInviteList_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetGroupInviteList_Params.InviteList, sizeof(GetGroupInviteList_Params.InviteList), &InviteList, sizeof(InviteList));

	this->ProcessEvent(uFnGetGroupInviteList, &GetGroupInviteList_Params, nullptr);

	memcpy_s(&InviteList, sizeof(InviteList), &GetGroupInviteList_Params.InviteList, sizeof(GetGroupInviteList_Params.InviteList));
};

// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupInvitesComplete(bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnQueryGroupInvitesComplete = nullptr;

	if (!uFnOnQueryGroupInvitesComplete)
	{
		uFnOnQueryGroupInvitesComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete");
	}

	UMcpGroupsBase_execOnQueryGroupInvitesComplete_Params OnQueryGroupInvitesComplete_Params;
	memset(&OnQueryGroupInvitesComplete_Params, 0, sizeof(OnQueryGroupInvitesComplete_Params));
	OnQueryGroupInvitesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryGroupInvitesComplete_Params.Error, sizeof(OnQueryGroupInvitesComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryGroupInvitesComplete, &OnQueryGroupInvitesComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.QueryGroupInvites
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroupInvites(const class FString& UniqueUserId)
{
	static UFunction* uFnQueryGroupInvites = nullptr;

	if (!uFnQueryGroupInvites)
	{
		uFnQueryGroupInvites = UFunction::FindFunction("Function IpDrv.McpGroupsBase.QueryGroupInvites");
	}

	UMcpGroupsBase_execQueryGroupInvites_Params QueryGroupInvites_Params;
	memset(&QueryGroupInvites_Params, 0, sizeof(QueryGroupInvites_Params));
	memcpy_s(&QueryGroupInvites_Params.UniqueUserId, sizeof(QueryGroupInvites_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));

	this->ProcessEvent(uFnQueryGroupInvites, &QueryGroupInvites_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  RequesterId                    (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnDeleteAllGroupsComplete(const class FString& RequesterId, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnDeleteAllGroupsComplete = nullptr;

	if (!uFnOnDeleteAllGroupsComplete)
	{
		uFnOnDeleteAllGroupsComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete");
	}

	UMcpGroupsBase_execOnDeleteAllGroupsComplete_Params OnDeleteAllGroupsComplete_Params;
	memset(&OnDeleteAllGroupsComplete_Params, 0, sizeof(OnDeleteAllGroupsComplete_Params));
	memcpy_s(&OnDeleteAllGroupsComplete_Params.RequesterId, sizeof(OnDeleteAllGroupsComplete_Params.RequesterId), &RequesterId, sizeof(RequesterId));
	OnDeleteAllGroupsComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteAllGroupsComplete_Params.Error, sizeof(OnDeleteAllGroupsComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnDeleteAllGroupsComplete, &OnDeleteAllGroupsComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.DeleteAllGroups
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  OwnerId                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::DeleteAllGroups(const class FString& OwnerId)
{
	static UFunction* uFnDeleteAllGroups = nullptr;

	if (!uFnDeleteAllGroups)
	{
		uFnDeleteAllGroups = UFunction::FindFunction("Function IpDrv.McpGroupsBase.DeleteAllGroups");
	}

	UMcpGroupsBase_execDeleteAllGroups_Params DeleteAllGroups_Params;
	memset(&DeleteAllGroups_Params, 0, sizeof(DeleteAllGroups_Params));
	memcpy_s(&DeleteAllGroups_Params.OwnerId, sizeof(DeleteAllGroups_Params.OwnerId), &OwnerId, sizeof(OwnerId));

	this->ProcessEvent(uFnDeleteAllGroups, &DeleteAllGroups_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnRemoveGroupMembersComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnRemoveGroupMembersComplete = nullptr;

	if (!uFnOnRemoveGroupMembersComplete)
	{
		uFnOnRemoveGroupMembersComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete");
	}

	UMcpGroupsBase_execOnRemoveGroupMembersComplete_Params OnRemoveGroupMembersComplete_Params;
	memset(&OnRemoveGroupMembersComplete_Params, 0, sizeof(OnRemoveGroupMembersComplete_Params));
	memcpy_s(&OnRemoveGroupMembersComplete_Params.GroupID, sizeof(OnRemoveGroupMembersComplete_Params.GroupID), &GroupID, sizeof(GroupID));
	OnRemoveGroupMembersComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRemoveGroupMembersComplete_Params.Error, sizeof(OnRemoveGroupMembersComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnRemoveGroupMembersComplete, &OnRemoveGroupMembersComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  OwnerId                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::RemoveGroupMembers(const class FString& OwnerId, const class FString& GroupID, class TArray<class FString>& MemberIds)
{
	static UFunction* uFnRemoveGroupMembers = nullptr;

	if (!uFnRemoveGroupMembers)
	{
		uFnRemoveGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.RemoveGroupMembers");
	}

	UMcpGroupsBase_execRemoveGroupMembers_Params RemoveGroupMembers_Params;
	memset(&RemoveGroupMembers_Params, 0, sizeof(RemoveGroupMembers_Params));
	memcpy_s(&RemoveGroupMembers_Params.OwnerId, sizeof(RemoveGroupMembers_Params.OwnerId), &OwnerId, sizeof(OwnerId));
	memcpy_s(&RemoveGroupMembers_Params.GroupID, sizeof(RemoveGroupMembers_Params.GroupID), &GroupID, sizeof(GroupID));
	memcpy_s(&RemoveGroupMembers_Params.MemberIds, sizeof(RemoveGroupMembers_Params.MemberIds), &MemberIds, sizeof(MemberIds));

	this->ProcessEvent(uFnRemoveGroupMembers, &RemoveGroupMembers_Params, nullptr);

	memcpy_s(&MemberIds, sizeof(MemberIds), &RemoveGroupMembers_Params.MemberIds, sizeof(RemoveGroupMembers_Params.MemberIds));
};

// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnAddGroupMembersComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnAddGroupMembersComplete = nullptr;

	if (!uFnOnAddGroupMembersComplete)
	{
		uFnOnAddGroupMembersComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete");
	}

	UMcpGroupsBase_execOnAddGroupMembersComplete_Params OnAddGroupMembersComplete_Params;
	memset(&OnAddGroupMembersComplete_Params, 0, sizeof(OnAddGroupMembersComplete_Params));
	memcpy_s(&OnAddGroupMembersComplete_Params.GroupID, sizeof(OnAddGroupMembersComplete_Params.GroupID), &GroupID, sizeof(GroupID));
	OnAddGroupMembersComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAddGroupMembersComplete_Params.Error, sizeof(OnAddGroupMembersComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnAddGroupMembersComplete, &OnAddGroupMembersComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.AddGroupMembers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  OwnerId                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bRequiresAcceptance            (CPF_Parm)
// class TArray<class FString>    MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::AddGroupMembers(const class FString& OwnerId, const class FString& GroupID, bool bRequiresAcceptance, class TArray<class FString>& MemberIds)
{
	static UFunction* uFnAddGroupMembers = nullptr;

	if (!uFnAddGroupMembers)
	{
		uFnAddGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.AddGroupMembers");
	}

	UMcpGroupsBase_execAddGroupMembers_Params AddGroupMembers_Params;
	memset(&AddGroupMembers_Params, 0, sizeof(AddGroupMembers_Params));
	memcpy_s(&AddGroupMembers_Params.OwnerId, sizeof(AddGroupMembers_Params.OwnerId), &OwnerId, sizeof(OwnerId));
	memcpy_s(&AddGroupMembers_Params.GroupID, sizeof(AddGroupMembers_Params.GroupID), &GroupID, sizeof(GroupID));
	AddGroupMembers_Params.bRequiresAcceptance = bRequiresAcceptance;
	memcpy_s(&AddGroupMembers_Params.MemberIds, sizeof(AddGroupMembers_Params.MemberIds), &MemberIds, sizeof(MemberIds));

	this->ProcessEvent(uFnAddGroupMembers, &AddGroupMembers_Params, nullptr);

	memcpy_s(&MemberIds, sizeof(MemberIds), &AddGroupMembers_Params.MemberIds, sizeof(AddGroupMembers_Params.MemberIds));
};

// Function IpDrv.McpGroupsBase.GetGroupMembers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FMcpGroupMember> GroupMembers                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupMembers(const class FString& GroupID, class TArray<struct FMcpGroupMember>& GroupMembers)
{
	static UFunction* uFnGetGroupMembers = nullptr;

	if (!uFnGetGroupMembers)
	{
		uFnGetGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.GetGroupMembers");
	}

	UMcpGroupsBase_execGetGroupMembers_Params GetGroupMembers_Params;
	memset(&GetGroupMembers_Params, 0, sizeof(GetGroupMembers_Params));
	memcpy_s(&GetGroupMembers_Params.GroupID, sizeof(GetGroupMembers_Params.GroupID), &GroupID, sizeof(GroupID));
	memcpy_s(&GetGroupMembers_Params.GroupMembers, sizeof(GetGroupMembers_Params.GroupMembers), &GroupMembers, sizeof(GroupMembers));

	this->ProcessEvent(uFnGetGroupMembers, &GetGroupMembers_Params, nullptr);

	memcpy_s(&GroupMembers, sizeof(GroupMembers), &GetGroupMembers_Params.GroupMembers, sizeof(GetGroupMembers_Params.GroupMembers));
};

// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupMembersComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnQueryGroupMembersComplete = nullptr;

	if (!uFnOnQueryGroupMembersComplete)
	{
		uFnOnQueryGroupMembersComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete");
	}

	UMcpGroupsBase_execOnQueryGroupMembersComplete_Params OnQueryGroupMembersComplete_Params;
	memset(&OnQueryGroupMembersComplete_Params, 0, sizeof(OnQueryGroupMembersComplete_Params));
	memcpy_s(&OnQueryGroupMembersComplete_Params.GroupID, sizeof(OnQueryGroupMembersComplete_Params.GroupID), &GroupID, sizeof(GroupID));
	OnQueryGroupMembersComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryGroupMembersComplete_Params.Error, sizeof(OnQueryGroupMembersComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryGroupMembersComplete, &OnQueryGroupMembersComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.QueryGroupMembers
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroupMembers(const class FString& UniqueUserId, const class FString& GroupID)
{
	static UFunction* uFnQueryGroupMembers = nullptr;

	if (!uFnQueryGroupMembers)
	{
		uFnQueryGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsBase.QueryGroupMembers");
	}

	UMcpGroupsBase_execQueryGroupMembers_Params QueryGroupMembers_Params;
	memset(&QueryGroupMembers_Params, 0, sizeof(QueryGroupMembers_Params));
	memcpy_s(&QueryGroupMembers_Params.UniqueUserId, sizeof(QueryGroupMembers_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&QueryGroupMembers_Params.GroupID, sizeof(QueryGroupMembers_Params.GroupID), &GroupID, sizeof(GroupID));

	this->ProcessEvent(uFnQueryGroupMembers, &QueryGroupMembers_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.GetGroupList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroupList           GroupList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsBase::GetGroupList(const class FString& UserId, struct FMcpGroupList& GroupList)
{
	static UFunction* uFnGetGroupList = nullptr;

	if (!uFnGetGroupList)
	{
		uFnGetGroupList = UFunction::FindFunction("Function IpDrv.McpGroupsBase.GetGroupList");
	}

	UMcpGroupsBase_execGetGroupList_Params GetGroupList_Params;
	memset(&GetGroupList_Params, 0, sizeof(GetGroupList_Params));
	memcpy_s(&GetGroupList_Params.UserId, sizeof(GetGroupList_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetGroupList_Params.GroupList, sizeof(GetGroupList_Params.GroupList), &GroupList, sizeof(GroupList));

	this->ProcessEvent(uFnGetGroupList, &GetGroupList_Params, nullptr);

	memcpy_s(&GroupList, sizeof(GroupList), &GetGroupList_Params.GroupList, sizeof(GetGroupList_Params.GroupList));
};

// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupsComplete(const class FString& UserId, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnQueryGroupsComplete = nullptr;

	if (!uFnOnQueryGroupsComplete)
	{
		uFnOnQueryGroupsComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnQueryGroupsComplete");
	}

	UMcpGroupsBase_execOnQueryGroupsComplete_Params OnQueryGroupsComplete_Params;
	memset(&OnQueryGroupsComplete_Params, 0, sizeof(OnQueryGroupsComplete_Params));
	memcpy_s(&OnQueryGroupsComplete_Params.UserId, sizeof(OnQueryGroupsComplete_Params.UserId), &UserId, sizeof(UserId));
	OnQueryGroupsComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryGroupsComplete_Params.Error, sizeof(OnQueryGroupsComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryGroupsComplete, &OnQueryGroupsComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.QueryGroups
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  RequesterId                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::QueryGroups(const class FString& RequesterId)
{
	static UFunction* uFnQueryGroups = nullptr;

	if (!uFnQueryGroups)
	{
		uFnQueryGroups = UFunction::FindFunction("Function IpDrv.McpGroupsBase.QueryGroups");
	}

	UMcpGroupsBase_execQueryGroups_Params QueryGroups_Params;
	memset(&QueryGroups_Params, 0, sizeof(QueryGroups_Params));
	memcpy_s(&QueryGroups_Params.RequesterId, sizeof(QueryGroups_Params.RequesterId), &RequesterId, sizeof(RequesterId));

	this->ProcessEvent(uFnQueryGroups, &QueryGroups_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnDeleteGroupComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnDeleteGroupComplete = nullptr;

	if (!uFnOnDeleteGroupComplete)
	{
		uFnOnDeleteGroupComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnDeleteGroupComplete");
	}

	UMcpGroupsBase_execOnDeleteGroupComplete_Params OnDeleteGroupComplete_Params;
	memset(&OnDeleteGroupComplete_Params, 0, sizeof(OnDeleteGroupComplete_Params));
	memcpy_s(&OnDeleteGroupComplete_Params.GroupID, sizeof(OnDeleteGroupComplete_Params.GroupID), &GroupID, sizeof(GroupID));
	OnDeleteGroupComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteGroupComplete_Params.Error, sizeof(OnDeleteGroupComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnDeleteGroupComplete, &OnDeleteGroupComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.DeleteGroup
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::DeleteGroup(const class FString& UniqueUserId, const class FString& GroupID)
{
	static UFunction* uFnDeleteGroup = nullptr;

	if (!uFnDeleteGroup)
	{
		uFnDeleteGroup = UFunction::FindFunction("Function IpDrv.McpGroupsBase.DeleteGroup");
	}

	UMcpGroupsBase_execDeleteGroup_Params DeleteGroup_Params;
	memset(&DeleteGroup_Params, 0, sizeof(DeleteGroup_Params));
	memcpy_s(&DeleteGroup_Params.UniqueUserId, sizeof(DeleteGroup_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&DeleteGroup_Params.GroupID, sizeof(DeleteGroup_Params.GroupID), &GroupID, sizeof(GroupID));

	this->ProcessEvent(uFnDeleteGroup, &DeleteGroup_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FMcpGroup               Group                          (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::OnCreateGroupComplete(const struct FMcpGroup& Group, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnCreateGroupComplete = nullptr;

	if (!uFnOnCreateGroupComplete)
	{
		uFnOnCreateGroupComplete = UFunction::FindFunction("Function IpDrv.McpGroupsBase.OnCreateGroupComplete");
	}

	UMcpGroupsBase_execOnCreateGroupComplete_Params OnCreateGroupComplete_Params;
	memset(&OnCreateGroupComplete_Params, 0, sizeof(OnCreateGroupComplete_Params));
	memcpy_s(&OnCreateGroupComplete_Params.Group, sizeof(OnCreateGroupComplete_Params.Group), &Group, sizeof(Group));
	OnCreateGroupComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateGroupComplete_Params.Error, sizeof(OnCreateGroupComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnCreateGroupComplete, &OnCreateGroupComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.CreateGroup
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  OwnerId                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsBase::CreateGroup(const class FString& OwnerId, const class FString& GroupName)
{
	static UFunction* uFnCreateGroup = nullptr;

	if (!uFnCreateGroup)
	{
		uFnCreateGroup = UFunction::FindFunction("Function IpDrv.McpGroupsBase.CreateGroup");
	}

	UMcpGroupsBase_execCreateGroup_Params CreateGroup_Params;
	memset(&CreateGroup_Params, 0, sizeof(CreateGroup_Params));
	memcpy_s(&CreateGroup_Params.OwnerId, sizeof(CreateGroup_Params.OwnerId), &OwnerId, sizeof(OwnerId));
	memcpy_s(&CreateGroup_Params.GroupName, sizeof(CreateGroup_Params.GroupName), &GroupName, sizeof(GroupName));

	this->ProcessEvent(uFnCreateGroup, &CreateGroup_Params, nullptr);
};

// Function IpDrv.McpGroupsBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMcpGroupsBase*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpGroupsBase* UMcpGroupsBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpGroupsBase.CreateInstance");
	}

	UMcpGroupsBase_execCreateInstance_Params CreateInstance_Params;
	memset(&CreateInstance_Params, 0, sizeof(CreateInstance_Params));

	UMcpGroupsBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpGroupsManager.CacheGroupMember
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  MemberId                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// EMcpGroupAcceptState           AcceptState                    (CPF_Parm)

void UMcpGroupsManager::CacheGroupMember(const class FString& MemberId, const class FString& GroupID, EMcpGroupAcceptState AcceptState)
{
	static UFunction* uFnCacheGroupMember = nullptr;

	if (!uFnCacheGroupMember)
	{
		uFnCacheGroupMember = UFunction::FindFunction("Function IpDrv.McpGroupsManager.CacheGroupMember");
	}

	UMcpGroupsManager_execCacheGroupMember_Params CacheGroupMember_Params;
	memset(&CacheGroupMember_Params, 0, sizeof(CacheGroupMember_Params));
	memcpy_s(&CacheGroupMember_Params.MemberId, sizeof(CacheGroupMember_Params.MemberId), &MemberId, sizeof(MemberId));
	memcpy_s(&CacheGroupMember_Params.GroupID, sizeof(CacheGroupMember_Params.GroupID), &GroupID, sizeof(GroupID));
	memcpy_s(&CacheGroupMember_Params.AcceptState, sizeof(CacheGroupMember_Params.AcceptState), &AcceptState, sizeof(AcceptState));

	this->ProcessEvent(uFnCacheGroupMember, &CacheGroupMember_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.CacheGroup
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  RequesterId                    (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroup               Group                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::CacheGroup(const class FString& RequesterId, const struct FMcpGroup& Group)
{
	static UFunction* uFnCacheGroup = nullptr;

	if (!uFnCacheGroup)
	{
		uFnCacheGroup = UFunction::FindFunction("Function IpDrv.McpGroupsManager.CacheGroup");
	}

	UMcpGroupsManager_execCacheGroup_Params CacheGroup_Params;
	memset(&CacheGroup_Params, 0, sizeof(CacheGroup_Params));
	memcpy_s(&CacheGroup_Params.RequesterId, sizeof(CacheGroup_Params.RequesterId), &RequesterId, sizeof(RequesterId));
	memcpy_s(&CacheGroup_Params.Group, sizeof(CacheGroup_Params.Group), &Group, sizeof(Group));

	this->ProcessEvent(uFnCacheGroup, &CacheGroup_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnAcceptGroupInviteRequestComplete = nullptr;

	if (!uFnOnAcceptGroupInviteRequestComplete)
	{
		uFnOnAcceptGroupInviteRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete");
	}

	UMcpGroupsManager_execOnAcceptGroupInviteRequestComplete_Params OnAcceptGroupInviteRequestComplete_Params;
	memset(&OnAcceptGroupInviteRequestComplete_Params, 0, sizeof(OnAcceptGroupInviteRequestComplete_Params));
	OnAcceptGroupInviteRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnAcceptGroupInviteRequestComplete_Params.HttpResponse = HttpResponse;
	OnAcceptGroupInviteRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAcceptGroupInviteRequestComplete, &OnAcceptGroupInviteRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bShouldAccept                  (CPF_Parm)

void UMcpGroupsManager::AcceptGroupInvite(const class FString& UniqueUserId, const class FString& GroupID, bool bShouldAccept)
{
	static UFunction* uFnAcceptGroupInvite = nullptr;

	if (!uFnAcceptGroupInvite)
	{
		uFnAcceptGroupInvite = UFunction::FindFunction("Function IpDrv.McpGroupsManager.AcceptGroupInvite");
	}

	UMcpGroupsManager_execAcceptGroupInvite_Params AcceptGroupInvite_Params;
	memset(&AcceptGroupInvite_Params, 0, sizeof(AcceptGroupInvite_Params));
	memcpy_s(&AcceptGroupInvite_Params.UniqueUserId, sizeof(AcceptGroupInvite_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&AcceptGroupInvite_Params.GroupID, sizeof(AcceptGroupInvite_Params.GroupID), &GroupID, sizeof(GroupID));
	AcceptGroupInvite_Params.bShouldAccept = bShouldAccept;

	this->ProcessEvent(uFnAcceptGroupInvite, &AcceptGroupInvite_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnDeleteAllGroupsRequestComplete = nullptr;

	if (!uFnOnDeleteAllGroupsRequestComplete)
	{
		uFnOnDeleteAllGroupsRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete");
	}

	UMcpGroupsManager_execOnDeleteAllGroupsRequestComplete_Params OnDeleteAllGroupsRequestComplete_Params;
	memset(&OnDeleteAllGroupsRequestComplete_Params, 0, sizeof(OnDeleteAllGroupsRequestComplete_Params));
	OnDeleteAllGroupsRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnDeleteAllGroupsRequestComplete_Params.HttpResponse = HttpResponse;
	OnDeleteAllGroupsRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteAllGroupsRequestComplete, &OnDeleteAllGroupsRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.DeleteAllGroups
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::DeleteAllGroups(const class FString& UniqueUserId)
{
	static UFunction* uFnDeleteAllGroups = nullptr;

	if (!uFnDeleteAllGroups)
	{
		uFnDeleteAllGroups = UFunction::FindFunction("Function IpDrv.McpGroupsManager.DeleteAllGroups");
	}

	UMcpGroupsManager_execDeleteAllGroups_Params DeleteAllGroups_Params;
	memset(&DeleteAllGroups_Params, 0, sizeof(DeleteAllGroups_Params));
	memcpy_s(&DeleteAllGroups_Params.UniqueUserId, sizeof(DeleteAllGroups_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));

	this->ProcessEvent(uFnDeleteAllGroups, &DeleteAllGroups_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnRemoveGroupMembersRequestComplete = nullptr;

	if (!uFnOnRemoveGroupMembersRequestComplete)
	{
		uFnOnRemoveGroupMembersRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete");
	}

	UMcpGroupsManager_execOnRemoveGroupMembersRequestComplete_Params OnRemoveGroupMembersRequestComplete_Params;
	memset(&OnRemoveGroupMembersRequestComplete_Params, 0, sizeof(OnRemoveGroupMembersRequestComplete_Params));
	OnRemoveGroupMembersRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnRemoveGroupMembersRequestComplete_Params.HttpResponse = HttpResponse;
	OnRemoveGroupMembersRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRemoveGroupMembersRequestComplete, &OnRemoveGroupMembersRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::RemoveGroupMembers(const class FString& UniqueUserId, const class FString& GroupID, class TArray<class FString>& MemberIds)
{
	static UFunction* uFnRemoveGroupMembers = nullptr;

	if (!uFnRemoveGroupMembers)
	{
		uFnRemoveGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.RemoveGroupMembers");
	}

	UMcpGroupsManager_execRemoveGroupMembers_Params RemoveGroupMembers_Params;
	memset(&RemoveGroupMembers_Params, 0, sizeof(RemoveGroupMembers_Params));
	memcpy_s(&RemoveGroupMembers_Params.UniqueUserId, sizeof(RemoveGroupMembers_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&RemoveGroupMembers_Params.GroupID, sizeof(RemoveGroupMembers_Params.GroupID), &GroupID, sizeof(GroupID));
	memcpy_s(&RemoveGroupMembers_Params.MemberIds, sizeof(RemoveGroupMembers_Params.MemberIds), &MemberIds, sizeof(MemberIds));

	this->ProcessEvent(uFnRemoveGroupMembers, &RemoveGroupMembers_Params, nullptr);

	memcpy_s(&MemberIds, sizeof(MemberIds), &RemoveGroupMembers_Params.MemberIds, sizeof(RemoveGroupMembers_Params.MemberIds));
};

// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnAddGroupMembersRequestComplete = nullptr;

	if (!uFnOnAddGroupMembersRequestComplete)
	{
		uFnOnAddGroupMembersRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete");
	}

	UMcpGroupsManager_execOnAddGroupMembersRequestComplete_Params OnAddGroupMembersRequestComplete_Params;
	memset(&OnAddGroupMembersRequestComplete_Params, 0, sizeof(OnAddGroupMembersRequestComplete_Params));
	OnAddGroupMembersRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnAddGroupMembersRequestComplete_Params.HttpResponse = HttpResponse;
	OnAddGroupMembersRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddGroupMembersRequestComplete, &OnAddGroupMembersRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.AddGroupMembers
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bRequiresAcceptance            (CPF_Parm)
// class TArray<class FString>    MemberIds                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::AddGroupMembers(const class FString& UniqueUserId, const class FString& GroupID, bool bRequiresAcceptance, class TArray<class FString>& MemberIds)
{
	static UFunction* uFnAddGroupMembers = nullptr;

	if (!uFnAddGroupMembers)
	{
		uFnAddGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.AddGroupMembers");
	}

	UMcpGroupsManager_execAddGroupMembers_Params AddGroupMembers_Params;
	memset(&AddGroupMembers_Params, 0, sizeof(AddGroupMembers_Params));
	memcpy_s(&AddGroupMembers_Params.UniqueUserId, sizeof(AddGroupMembers_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&AddGroupMembers_Params.GroupID, sizeof(AddGroupMembers_Params.GroupID), &GroupID, sizeof(GroupID));
	AddGroupMembers_Params.bRequiresAcceptance = bRequiresAcceptance;
	memcpy_s(&AddGroupMembers_Params.MemberIds, sizeof(AddGroupMembers_Params.MemberIds), &MemberIds, sizeof(MemberIds));

	this->ProcessEvent(uFnAddGroupMembers, &AddGroupMembers_Params, nullptr);

	memcpy_s(&MemberIds, sizeof(MemberIds), &AddGroupMembers_Params.MemberIds, sizeof(AddGroupMembers_Params.MemberIds));
};

// Function IpDrv.McpGroupsManager.GetGroupMembers
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FMcpGroupMember> GroupMembers                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::GetGroupMembers(const class FString& GroupID, class TArray<struct FMcpGroupMember>& GroupMembers)
{
	static UFunction* uFnGetGroupMembers = nullptr;

	if (!uFnGetGroupMembers)
	{
		uFnGetGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.GetGroupMembers");
	}

	UMcpGroupsManager_execGetGroupMembers_Params GetGroupMembers_Params;
	memset(&GetGroupMembers_Params, 0, sizeof(GetGroupMembers_Params));
	memcpy_s(&GetGroupMembers_Params.GroupID, sizeof(GetGroupMembers_Params.GroupID), &GroupID, sizeof(GroupID));
	memcpy_s(&GetGroupMembers_Params.GroupMembers, sizeof(GetGroupMembers_Params.GroupMembers), &GroupMembers, sizeof(GroupMembers));

	this->ProcessEvent(uFnGetGroupMembers, &GetGroupMembers_Params, nullptr);

	memcpy_s(&GroupMembers, sizeof(GroupMembers), &GetGroupMembers_Params.GroupMembers, sizeof(GetGroupMembers_Params.GroupMembers));
};

// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryGroupMembersRequestComplete = nullptr;

	if (!uFnOnQueryGroupMembersRequestComplete)
	{
		uFnOnQueryGroupMembersRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete");
	}

	UMcpGroupsManager_execOnQueryGroupMembersRequestComplete_Params OnQueryGroupMembersRequestComplete_Params;
	memset(&OnQueryGroupMembersRequestComplete_Params, 0, sizeof(OnQueryGroupMembersRequestComplete_Params));
	OnQueryGroupMembersRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnQueryGroupMembersRequestComplete_Params.HttpResponse = HttpResponse;
	OnQueryGroupMembersRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryGroupMembersRequestComplete, &OnQueryGroupMembersRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.QueryGroupMembers
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::QueryGroupMembers(const class FString& UniqueUserId, const class FString& GroupID)
{
	static UFunction* uFnQueryGroupMembers = nullptr;

	if (!uFnQueryGroupMembers)
	{
		uFnQueryGroupMembers = UFunction::FindFunction("Function IpDrv.McpGroupsManager.QueryGroupMembers");
	}

	UMcpGroupsManager_execQueryGroupMembers_Params QueryGroupMembers_Params;
	memset(&QueryGroupMembers_Params, 0, sizeof(QueryGroupMembers_Params));
	memcpy_s(&QueryGroupMembers_Params.UniqueUserId, sizeof(QueryGroupMembers_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&QueryGroupMembers_Params.GroupID, sizeof(QueryGroupMembers_Params.GroupID), &GroupID, sizeof(GroupID));

	this->ProcessEvent(uFnQueryGroupMembers, &QueryGroupMembers_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.GetGroupList
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FMcpGroupList           GroupList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpGroupsManager::GetGroupList(const class FString& UserId, struct FMcpGroupList& GroupList)
{
	static UFunction* uFnGetGroupList = nullptr;

	if (!uFnGetGroupList)
	{
		uFnGetGroupList = UFunction::FindFunction("Function IpDrv.McpGroupsManager.GetGroupList");
	}

	UMcpGroupsManager_execGetGroupList_Params GetGroupList_Params;
	memset(&GetGroupList_Params, 0, sizeof(GetGroupList_Params));
	memcpy_s(&GetGroupList_Params.UserId, sizeof(GetGroupList_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetGroupList_Params.GroupList, sizeof(GetGroupList_Params.GroupList), &GroupList, sizeof(GroupList));

	this->ProcessEvent(uFnGetGroupList, &GetGroupList_Params, nullptr);

	memcpy_s(&GroupList, sizeof(GroupList), &GetGroupList_Params.GroupList, sizeof(GetGroupList_Params.GroupList));
};

// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// [0x00920002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryGroupsRequestComplete = nullptr;

	if (!uFnOnQueryGroupsRequestComplete)
	{
		uFnOnQueryGroupsRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete");
	}

	UMcpGroupsManager_execOnQueryGroupsRequestComplete_Params OnQueryGroupsRequestComplete_Params;
	memset(&OnQueryGroupsRequestComplete_Params, 0, sizeof(OnQueryGroupsRequestComplete_Params));
	OnQueryGroupsRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnQueryGroupsRequestComplete_Params.HttpResponse = HttpResponse;
	OnQueryGroupsRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryGroupsRequestComplete, &OnQueryGroupsRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.QueryGroups
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  RequesterId                    (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::QueryGroups(const class FString& RequesterId)
{
	static UFunction* uFnQueryGroups = nullptr;

	if (!uFnQueryGroups)
	{
		uFnQueryGroups = UFunction::FindFunction("Function IpDrv.McpGroupsManager.QueryGroups");
	}

	UMcpGroupsManager_execQueryGroups_Params QueryGroups_Params;
	memset(&QueryGroups_Params, 0, sizeof(QueryGroups_Params));
	memcpy_s(&QueryGroups_Params.RequesterId, sizeof(QueryGroups_Params.RequesterId), &RequesterId, sizeof(RequesterId));

	this->ProcessEvent(uFnQueryGroups, &QueryGroups_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnDeleteGroupRequestComplete = nullptr;

	if (!uFnOnDeleteGroupRequestComplete)
	{
		uFnOnDeleteGroupRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete");
	}

	UMcpGroupsManager_execOnDeleteGroupRequestComplete_Params OnDeleteGroupRequestComplete_Params;
	memset(&OnDeleteGroupRequestComplete_Params, 0, sizeof(OnDeleteGroupRequestComplete_Params));
	OnDeleteGroupRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnDeleteGroupRequestComplete_Params.HttpResponse = HttpResponse;
	OnDeleteGroupRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteGroupRequestComplete, &OnDeleteGroupRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.DeleteGroup
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupID                        (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::DeleteGroup(const class FString& UniqueUserId, const class FString& GroupID)
{
	static UFunction* uFnDeleteGroup = nullptr;

	if (!uFnDeleteGroup)
	{
		uFnDeleteGroup = UFunction::FindFunction("Function IpDrv.McpGroupsManager.DeleteGroup");
	}

	UMcpGroupsManager_execDeleteGroup_Params DeleteGroup_Params;
	memset(&DeleteGroup_Params, 0, sizeof(DeleteGroup_Params));
	memcpy_s(&DeleteGroup_Params.UniqueUserId, sizeof(DeleteGroup_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&DeleteGroup_Params.GroupID, sizeof(DeleteGroup_Params.GroupID), &GroupID, sizeof(GroupID));

	this->ProcessEvent(uFnDeleteGroup, &DeleteGroup_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   CreateGroupRequest             (CPF_Parm)
// class UHttpResponseInterface*  HttpResponse                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpGroupsManager::OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static UFunction* uFnOnCreateGroupRequestComplete = nullptr;

	if (!uFnOnCreateGroupRequestComplete)
	{
		uFnOnCreateGroupRequestComplete = UFunction::FindFunction("Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete");
	}

	UMcpGroupsManager_execOnCreateGroupRequestComplete_Params OnCreateGroupRequestComplete_Params;
	memset(&OnCreateGroupRequestComplete_Params, 0, sizeof(OnCreateGroupRequestComplete_Params));
	OnCreateGroupRequestComplete_Params.CreateGroupRequest = CreateGroupRequest;
	OnCreateGroupRequestComplete_Params.HttpResponse = HttpResponse;
	OnCreateGroupRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCreateGroupRequestComplete, &OnCreateGroupRequestComplete_Params, nullptr);
};

// Function IpDrv.McpGroupsManager.CreateGroup
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  UniqueUserId                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMcpGroupsManager::CreateGroup(const class FString& UniqueUserId, const class FString& GroupName)
{
	static UFunction* uFnCreateGroup = nullptr;

	if (!uFnCreateGroup)
	{
		uFnCreateGroup = UFunction::FindFunction("Function IpDrv.McpGroupsManager.CreateGroup");
	}

	UMcpGroupsManager_execCreateGroup_Params CreateGroup_Params;
	memset(&CreateGroup_Params, 0, sizeof(CreateGroup_Params));
	memcpy_s(&CreateGroup_Params.UniqueUserId, sizeof(CreateGroup_Params.UniqueUserId), &UniqueUserId, sizeof(UniqueUserId));
	memcpy_s(&CreateGroup_Params.GroupName, sizeof(CreateGroup_Params.GroupName), &GroupName, sizeof(GroupName));

	this->ProcessEvent(uFnCreateGroup, &CreateGroup_Params, nullptr);
};

// Function IpDrv.McpIdMappingBase.GetIdMappings
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FMcpIdMapping> IDMappings                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingBase::GetIdMappings(const class FString& ExternalType, class TArray<struct FMcpIdMapping>& IDMappings)
{
	static UFunction* uFnGetIdMappings = nullptr;

	if (!uFnGetIdMappings)
	{
		uFnGetIdMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.GetIdMappings");
	}

	UMcpIdMappingBase_execGetIdMappings_Params GetIdMappings_Params;
	memset(&GetIdMappings_Params, 0, sizeof(GetIdMappings_Params));
	memcpy_s(&GetIdMappings_Params.ExternalType, sizeof(GetIdMappings_Params.ExternalType), &ExternalType, sizeof(ExternalType));
	memcpy_s(&GetIdMappings_Params.IDMappings, sizeof(GetIdMappings_Params.IDMappings), &IDMappings, sizeof(IDMappings));

	this->ProcessEvent(uFnGetIdMappings, &GetIdMappings_Params, nullptr);

	memcpy_s(&IDMappings, sizeof(IDMappings), &GetIdMappings_Params.IDMappings, sizeof(GetIdMappings_Params.IDMappings));
};

// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingBase::OnQueryMappingsComplete(const class FString& ExternalType, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnQueryMappingsComplete = nullptr;

	if (!uFnOnQueryMappingsComplete)
	{
		uFnOnQueryMappingsComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete");
	}

	UMcpIdMappingBase_execOnQueryMappingsComplete_Params OnQueryMappingsComplete_Params;
	memset(&OnQueryMappingsComplete_Params, 0, sizeof(OnQueryMappingsComplete_Params));
	memcpy_s(&OnQueryMappingsComplete_Params.ExternalType, sizeof(OnQueryMappingsComplete_Params.ExternalType), &ExternalType, sizeof(ExternalType));
	OnQueryMappingsComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryMappingsComplete_Params.Error, sizeof(OnQueryMappingsComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryMappingsComplete, &OnQueryMappingsComplete_Params, nullptr);
};

// Function IpDrv.McpIdMappingBase.QueryMappings
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    ExternalIds                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingBase::QueryMappings(const class FString& ExternalType, class TArray<class FString>& ExternalIds)
{
	static UFunction* uFnQueryMappings = nullptr;

	if (!uFnQueryMappings)
	{
		uFnQueryMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.QueryMappings");
	}

	UMcpIdMappingBase_execQueryMappings_Params QueryMappings_Params;
	memset(&QueryMappings_Params, 0, sizeof(QueryMappings_Params));
	memcpy_s(&QueryMappings_Params.ExternalType, sizeof(QueryMappings_Params.ExternalType), &ExternalType, sizeof(ExternalType));
	memcpy_s(&QueryMappings_Params.ExternalIds, sizeof(QueryMappings_Params.ExternalIds), &ExternalIds, sizeof(ExternalIds));

	this->ProcessEvent(uFnQueryMappings, &QueryMappings_Params, nullptr);

	memcpy_s(&ExternalIds, sizeof(ExternalIds), &QueryMappings_Params.ExternalIds, sizeof(QueryMappings_Params.ExternalIds));
};

// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingBase::OnAddMappingComplete(const class FString& McpId, const class FString& ExternalId, const class FString& ExternalType, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnAddMappingComplete = nullptr;

	if (!uFnOnAddMappingComplete)
	{
		uFnOnAddMappingComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.OnAddMappingComplete");
	}

	UMcpIdMappingBase_execOnAddMappingComplete_Params OnAddMappingComplete_Params;
	memset(&OnAddMappingComplete_Params, 0, sizeof(OnAddMappingComplete_Params));
	memcpy_s(&OnAddMappingComplete_Params.McpId, sizeof(OnAddMappingComplete_Params.McpId), &McpId, sizeof(McpId));
	memcpy_s(&OnAddMappingComplete_Params.ExternalId, sizeof(OnAddMappingComplete_Params.ExternalId), &ExternalId, sizeof(ExternalId));
	memcpy_s(&OnAddMappingComplete_Params.ExternalType, sizeof(OnAddMappingComplete_Params.ExternalType), &ExternalType, sizeof(ExternalType));
	OnAddMappingComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnAddMappingComplete_Params.Error, sizeof(OnAddMappingComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnAddMappingComplete, &OnAddMappingComplete_Params, nullptr);
};

// Function IpDrv.McpIdMappingBase.AddMapping
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingBase::AddMapping(const class FString& McpId, const class FString& ExternalId, const class FString& ExternalType)
{
	static UFunction* uFnAddMapping = nullptr;

	if (!uFnAddMapping)
	{
		uFnAddMapping = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.AddMapping");
	}

	UMcpIdMappingBase_execAddMapping_Params AddMapping_Params;
	memset(&AddMapping_Params, 0, sizeof(AddMapping_Params));
	memcpy_s(&AddMapping_Params.McpId, sizeof(AddMapping_Params.McpId), &McpId, sizeof(McpId));
	memcpy_s(&AddMapping_Params.ExternalId, sizeof(AddMapping_Params.ExternalId), &ExternalId, sizeof(ExternalId));
	memcpy_s(&AddMapping_Params.ExternalType, sizeof(AddMapping_Params.ExternalType), &ExternalType, sizeof(ExternalType));

	this->ProcessEvent(uFnAddMapping, &AddMapping_Params, nullptr);
};

// Function IpDrv.McpIdMappingBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMcpIdMappingBase*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpIdMappingBase* UMcpIdMappingBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpIdMappingBase.CreateInstance");
	}

	UMcpIdMappingBase_execCreateInstance_Params CreateInstance_Params;
	memset(&CreateInstance_Params, 0, sizeof(CreateInstance_Params));

	UMcpIdMappingBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpIdMappingManager.GetIdMappings
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FMcpIdMapping> IDMappings                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingManager::GetIdMappings(const class FString& ExternalType, class TArray<struct FMcpIdMapping>& IDMappings)
{
	static UFunction* uFnGetIdMappings = nullptr;

	if (!uFnGetIdMappings)
	{
		uFnGetIdMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.GetIdMappings");
	}

	UMcpIdMappingManager_execGetIdMappings_Params GetIdMappings_Params;
	memset(&GetIdMappings_Params, 0, sizeof(GetIdMappings_Params));
	memcpy_s(&GetIdMappings_Params.ExternalType, sizeof(GetIdMappings_Params.ExternalType), &ExternalType, sizeof(ExternalType));
	memcpy_s(&GetIdMappings_Params.IDMappings, sizeof(GetIdMappings_Params.IDMappings), &IDMappings, sizeof(IDMappings));

	this->ProcessEvent(uFnGetIdMappings, &GetIdMappings_Params, nullptr);

	memcpy_s(&IDMappings, sizeof(IDMappings), &GetIdMappings_Params.IDMappings, sizeof(GetIdMappings_Params.IDMappings));
};

// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpIdMappingManager::OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryMappingsRequestComplete = nullptr;

	if (!uFnOnQueryMappingsRequestComplete)
	{
		uFnOnQueryMappingsRequestComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete");
	}

	UMcpIdMappingManager_execOnQueryMappingsRequestComplete_Params OnQueryMappingsRequestComplete_Params;
	memset(&OnQueryMappingsRequestComplete_Params, 0, sizeof(OnQueryMappingsRequestComplete_Params));
	OnQueryMappingsRequestComplete_Params.Request = Request;
	OnQueryMappingsRequestComplete_Params.Response = Response;
	OnQueryMappingsRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryMappingsRequestComplete, &OnQueryMappingsRequestComplete_Params, nullptr);
};

// Function IpDrv.McpIdMappingManager.QueryMappings
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    ExternalIds                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpIdMappingManager::QueryMappings(const class FString& ExternalType, class TArray<class FString>& ExternalIds)
{
	static UFunction* uFnQueryMappings = nullptr;

	if (!uFnQueryMappings)
	{
		uFnQueryMappings = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.QueryMappings");
	}

	UMcpIdMappingManager_execQueryMappings_Params QueryMappings_Params;
	memset(&QueryMappings_Params, 0, sizeof(QueryMappings_Params));
	memcpy_s(&QueryMappings_Params.ExternalType, sizeof(QueryMappings_Params.ExternalType), &ExternalType, sizeof(ExternalType));
	memcpy_s(&QueryMappings_Params.ExternalIds, sizeof(QueryMappings_Params.ExternalIds), &ExternalIds, sizeof(ExternalIds));

	this->ProcessEvent(uFnQueryMappings, &QueryMappings_Params, nullptr);

	memcpy_s(&ExternalIds, sizeof(ExternalIds), &QueryMappings_Params.ExternalIds, sizeof(QueryMappings_Params.ExternalIds));
};

// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpIdMappingManager::OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnAddMappingRequestComplete = nullptr;

	if (!uFnOnAddMappingRequestComplete)
	{
		uFnOnAddMappingRequestComplete = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete");
	}

	UMcpIdMappingManager_execOnAddMappingRequestComplete_Params OnAddMappingRequestComplete_Params;
	memset(&OnAddMappingRequestComplete_Params, 0, sizeof(OnAddMappingRequestComplete_Params));
	OnAddMappingRequestComplete_Params.Request = Request;
	OnAddMappingRequestComplete_Params.Response = Response;
	OnAddMappingRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddMappingRequestComplete, &OnAddMappingRequestComplete_Params, nullptr);
};

// Function IpDrv.McpIdMappingManager.AddMapping
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExternalType                   (CPF_Parm | CPF_NeedCtorLink)

void UMcpIdMappingManager::AddMapping(const class FString& McpId, const class FString& ExternalId, const class FString& ExternalType)
{
	static UFunction* uFnAddMapping = nullptr;

	if (!uFnAddMapping)
	{
		uFnAddMapping = UFunction::FindFunction("Function IpDrv.McpIdMappingManager.AddMapping");
	}

	UMcpIdMappingManager_execAddMapping_Params AddMapping_Params;
	memset(&AddMapping_Params, 0, sizeof(AddMapping_Params));
	memcpy_s(&AddMapping_Params.McpId, sizeof(AddMapping_Params.McpId), &McpId, sizeof(McpId));
	memcpy_s(&AddMapping_Params.ExternalId, sizeof(AddMapping_Params.ExternalId), &ExternalId, sizeof(ExternalId));
	memcpy_s(&AddMapping_Params.ExternalType, sizeof(AddMapping_Params.ExternalType), &ExternalType, sizeof(ExternalType));

	this->ProcessEvent(uFnAddMapping, &AddMapping_Params, nullptr);
};

// Function IpDrv.McpServerTimeBase.GetLastServerTime
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServerTimeBase::GetLastServerTime()
{
	static UFunction* uFnGetLastServerTime = nullptr;

	if (!uFnGetLastServerTime)
	{
		uFnGetLastServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.GetLastServerTime");
	}

	UMcpServerTimeBase_execGetLastServerTime_Params GetLastServerTime_Params;
	memset(&GetLastServerTime_Params, 0, sizeof(GetLastServerTime_Params));

	this->ProcessEvent(uFnGetLastServerTime, &GetLastServerTime_Params, nullptr);

	return GetLastServerTime_Params.ReturnValue;
};

// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  DateTimeStr                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpServerTimeBase::OnQueryServerTimeComplete(bool bWasSuccessful, const class FString& DateTimeStr, const class FString& Error)
{
	static UFunction* uFnOnQueryServerTimeComplete = nullptr;

	if (!uFnOnQueryServerTimeComplete)
	{
		uFnOnQueryServerTimeComplete = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete");
	}

	UMcpServerTimeBase_execOnQueryServerTimeComplete_Params OnQueryServerTimeComplete_Params;
	memset(&OnQueryServerTimeComplete_Params, 0, sizeof(OnQueryServerTimeComplete_Params));
	OnQueryServerTimeComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryServerTimeComplete_Params.DateTimeStr, sizeof(OnQueryServerTimeComplete_Params.DateTimeStr), &DateTimeStr, sizeof(DateTimeStr));
	memcpy_s(&OnQueryServerTimeComplete_Params.Error, sizeof(OnQueryServerTimeComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryServerTimeComplete, &OnQueryServerTimeComplete_Params, nullptr);
};

// Function IpDrv.McpServerTimeBase.QueryServerTime
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMcpServerTimeBase::QueryServerTime()
{
	static UFunction* uFnQueryServerTime = nullptr;

	if (!uFnQueryServerTime)
	{
		uFnQueryServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.QueryServerTime");
	}

	UMcpServerTimeBase_execQueryServerTime_Params QueryServerTime_Params;
	memset(&QueryServerTime_Params, 0, sizeof(QueryServerTime_Params));

	this->ProcessEvent(uFnQueryServerTime, &QueryServerTime_Params, nullptr);
};

// Function IpDrv.McpServerTimeBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMcpServerTimeBase*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpServerTimeBase* UMcpServerTimeBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpServerTimeBase.CreateInstance");
	}

	UMcpServerTimeBase_execCreateInstance_Params CreateInstance_Params;
	memset(&CreateInstance_Params, 0, sizeof(CreateInstance_Params));

	UMcpServerTimeBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpServerTimeManager.GetLastServerTime
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServerTimeManager::GetLastServerTime()
{
	static UFunction* uFnGetLastServerTime = nullptr;

	if (!uFnGetLastServerTime)
	{
		uFnGetLastServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeManager.GetLastServerTime");
	}

	UMcpServerTimeManager_execGetLastServerTime_Params GetLastServerTime_Params;
	memset(&GetLastServerTime_Params, 0, sizeof(GetLastServerTime_Params));

	this->ProcessEvent(uFnGetLastServerTime, &GetLastServerTime_Params, nullptr);

	return GetLastServerTime_Params.ReturnValue;
};

// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpServerTimeManager::OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryServerTimeHTTPRequestComplete = nullptr;

	if (!uFnOnQueryServerTimeHTTPRequestComplete)
	{
		uFnOnQueryServerTimeHTTPRequestComplete = UFunction::FindFunction("Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete");
	}

	UMcpServerTimeManager_execOnQueryServerTimeHTTPRequestComplete_Params OnQueryServerTimeHTTPRequestComplete_Params;
	memset(&OnQueryServerTimeHTTPRequestComplete_Params, 0, sizeof(OnQueryServerTimeHTTPRequestComplete_Params));
	OnQueryServerTimeHTTPRequestComplete_Params.Request = Request;
	OnQueryServerTimeHTTPRequestComplete_Params.Response = Response;
	OnQueryServerTimeHTTPRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryServerTimeHTTPRequestComplete, &OnQueryServerTimeHTTPRequestComplete_Params, nullptr);
};

// Function IpDrv.McpServerTimeManager.QueryServerTime
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMcpServerTimeManager::QueryServerTime()
{
	static UFunction* uFnQueryServerTime = nullptr;

	if (!uFnQueryServerTime)
	{
		uFnQueryServerTime = UFunction::FindFunction("Function IpDrv.McpServerTimeManager.QueryServerTime");
	}

	UMcpServerTimeManager_execQueryServerTime_Params QueryServerTime_Params;
	memset(&QueryServerTime_Params, 0, sizeof(QueryServerTime_Params));

	this->ProcessEvent(uFnQueryServerTime, &QueryServerTime_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnDeleteUserComplete(bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnDeleteUserComplete = nullptr;

	if (!uFnOnDeleteUserComplete)
	{
		uFnOnDeleteUserComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnDeleteUserComplete");
	}

	UMcpUserManagerBase_execOnDeleteUserComplete_Params OnDeleteUserComplete_Params;
	memset(&OnDeleteUserComplete_Params, 0, sizeof(OnDeleteUserComplete_Params));
	OnDeleteUserComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserComplete_Params.Error, sizeof(OnDeleteUserComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnDeleteUserComplete, &OnDeleteUserComplete_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.DeleteUser
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::DeleteUser(const class FString& McpId)
{
	static UFunction* uFnDeleteUser = nullptr;

	if (!uFnDeleteUser)
	{
		uFnDeleteUser = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.DeleteUser");
	}

	UMcpUserManagerBase_execDeleteUser_Params DeleteUser_Params;
	memset(&DeleteUser_Params, 0, sizeof(DeleteUser_Params));
	memcpy_s(&DeleteUser_Params.McpId, sizeof(DeleteUser_Params.McpId), &McpId, sizeof(McpId));

	this->ProcessEvent(uFnDeleteUser, &DeleteUser_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.GetUsers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FMcpUserStatus> Users                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManagerBase::GetUsers(class TArray<struct FMcpUserStatus>& Users)
{
	static UFunction* uFnGetUsers = nullptr;

	if (!uFnGetUsers)
	{
		uFnGetUsers = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.GetUsers");
	}

	UMcpUserManagerBase_execGetUsers_Params GetUsers_Params;
	memset(&GetUsers_Params, 0, sizeof(GetUsers_Params));
	memcpy_s(&GetUsers_Params.Users, sizeof(GetUsers_Params.Users), &Users, sizeof(Users));

	this->ProcessEvent(uFnGetUsers, &GetUsers_Params, nullptr);

	memcpy_s(&Users, sizeof(Users), &GetUsers_Params.Users, sizeof(GetUsers_Params.Users));
};

// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnQueryUsersComplete(bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnQueryUsersComplete = nullptr;

	if (!uFnOnQueryUsersComplete)
	{
		uFnOnQueryUsersComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnQueryUsersComplete");
	}

	UMcpUserManagerBase_execOnQueryUsersComplete_Params OnQueryUsersComplete_Params;
	memset(&OnQueryUsersComplete_Params, 0, sizeof(OnQueryUsersComplete_Params));
	OnQueryUsersComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryUsersComplete_Params.Error, sizeof(OnQueryUsersComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnQueryUsersComplete, &OnQueryUsersComplete_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.QueryUsers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    McpIds                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManagerBase::QueryUsers(class TArray<class FString>& McpIds)
{
	static UFunction* uFnQueryUsers = nullptr;

	if (!uFnQueryUsers)
	{
		uFnQueryUsers = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.QueryUsers");
	}

	UMcpUserManagerBase_execQueryUsers_Params QueryUsers_Params;
	memset(&QueryUsers_Params, 0, sizeof(QueryUsers_Params));
	memcpy_s(&QueryUsers_Params.McpIds, sizeof(QueryUsers_Params.McpIds), &McpIds, sizeof(McpIds));

	this->ProcessEvent(uFnQueryUsers, &QueryUsers_Params, nullptr);

	memcpy_s(&McpIds, sizeof(McpIds), &QueryUsers_Params.McpIds, sizeof(QueryUsers_Params.McpIds));
};

// Function IpDrv.McpUserManagerBase.QueryUser
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bShouldUpdateLastActive        (CPF_OptionalParm | CPF_Parm)

void UMcpUserManagerBase::QueryUser(const class FString& McpId, bool bShouldUpdateLastActive)
{
	static UFunction* uFnQueryUser = nullptr;

	if (!uFnQueryUser)
	{
		uFnQueryUser = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.QueryUser");
	}

	UMcpUserManagerBase_execQueryUser_Params QueryUser_Params;
	memset(&QueryUser_Params, 0, sizeof(QueryUser_Params));
	memcpy_s(&QueryUser_Params.McpId, sizeof(QueryUser_Params.McpId), &McpId, sizeof(McpId));
	QueryUser_Params.bShouldUpdateLastActive = bShouldUpdateLastActive;

	this->ProcessEvent(uFnQueryUser, &QueryUser_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::OnRegisterUserComplete(const class FString& McpId, const class FString& UDID, bool bWasSuccessful, const class FString& Error)
{
	static UFunction* uFnOnRegisterUserComplete = nullptr;

	if (!uFnOnRegisterUserComplete)
	{
		uFnOnRegisterUserComplete = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.OnRegisterUserComplete");
	}

	UMcpUserManagerBase_execOnRegisterUserComplete_Params OnRegisterUserComplete_Params;
	memset(&OnRegisterUserComplete_Params, 0, sizeof(OnRegisterUserComplete_Params));
	memcpy_s(&OnRegisterUserComplete_Params.McpId, sizeof(OnRegisterUserComplete_Params.McpId), &McpId, sizeof(McpId));
	memcpy_s(&OnRegisterUserComplete_Params.UDID, sizeof(OnRegisterUserComplete_Params.UDID), &UDID, sizeof(UDID));
	OnRegisterUserComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRegisterUserComplete_Params.Error, sizeof(OnRegisterUserComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnRegisterUserComplete, &OnRegisterUserComplete_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FacebookAuthToken              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExistingMcpAuth                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::RegisterUserFacebook(const class FString& FacebookId, const class FString& FacebookAuthToken, const class FString& UDID, const class FString& ExistingMcpAuth)
{
	static UFunction* uFnRegisterUserFacebook = nullptr;

	if (!uFnRegisterUserFacebook)
	{
		uFnRegisterUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.RegisterUserFacebook");
	}

	UMcpUserManagerBase_execRegisterUserFacebook_Params RegisterUserFacebook_Params;
	memset(&RegisterUserFacebook_Params, 0, sizeof(RegisterUserFacebook_Params));
	memcpy_s(&RegisterUserFacebook_Params.FacebookId, sizeof(RegisterUserFacebook_Params.FacebookId), &FacebookId, sizeof(FacebookId));
	memcpy_s(&RegisterUserFacebook_Params.FacebookAuthToken, sizeof(RegisterUserFacebook_Params.FacebookAuthToken), &FacebookAuthToken, sizeof(FacebookAuthToken));
	memcpy_s(&RegisterUserFacebook_Params.UDID, sizeof(RegisterUserFacebook_Params.UDID), &UDID, sizeof(UDID));
	memcpy_s(&RegisterUserFacebook_Params.ExistingMcpAuth, sizeof(RegisterUserFacebook_Params.ExistingMcpAuth), &ExistingMcpAuth, sizeof(ExistingMcpAuth));

	this->ProcessEvent(uFnRegisterUserFacebook, &RegisterUserFacebook_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.RegisterUserEmail
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Email                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PasswordHash                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExistingMcpAuth                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::RegisterUserEmail(const class FString& Email, const class FString& PasswordHash, const class FString& UDID, const class FString& ExistingMcpAuth)
{
	static UFunction* uFnRegisterUserEmail = nullptr;

	if (!uFnRegisterUserEmail)
	{
		uFnRegisterUserEmail = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.RegisterUserEmail");
	}

	UMcpUserManagerBase_execRegisterUserEmail_Params RegisterUserEmail_Params;
	memset(&RegisterUserEmail_Params, 0, sizeof(RegisterUserEmail_Params));
	memcpy_s(&RegisterUserEmail_Params.Email, sizeof(RegisterUserEmail_Params.Email), &Email, sizeof(Email));
	memcpy_s(&RegisterUserEmail_Params.PasswordHash, sizeof(RegisterUserEmail_Params.PasswordHash), &PasswordHash, sizeof(PasswordHash));
	memcpy_s(&RegisterUserEmail_Params.UDID, sizeof(RegisterUserEmail_Params.UDID), &UDID, sizeof(UDID));
	memcpy_s(&RegisterUserEmail_Params.ExistingMcpAuth, sizeof(RegisterUserEmail_Params.ExistingMcpAuth), &ExistingMcpAuth, sizeof(ExistingMcpAuth));

	this->ProcessEvent(uFnRegisterUserEmail, &RegisterUserEmail_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExistingMcpAuth                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManagerBase::RegisterUserGenerated(const class FString& UDID, const class FString& ExistingMcpAuth)
{
	static UFunction* uFnRegisterUserGenerated = nullptr;

	if (!uFnRegisterUserGenerated)
	{
		uFnRegisterUserGenerated = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.RegisterUserGenerated");
	}

	UMcpUserManagerBase_execRegisterUserGenerated_Params RegisterUserGenerated_Params;
	memset(&RegisterUserGenerated_Params, 0, sizeof(RegisterUserGenerated_Params));
	memcpy_s(&RegisterUserGenerated_Params.UDID, sizeof(RegisterUserGenerated_Params.UDID), &UDID, sizeof(UDID));
	memcpy_s(&RegisterUserGenerated_Params.ExistingMcpAuth, sizeof(RegisterUserGenerated_Params.ExistingMcpAuth), &ExistingMcpAuth, sizeof(ExistingMcpAuth));

	this->ProcessEvent(uFnRegisterUserGenerated, &RegisterUserGenerated_Params, nullptr);
};

// Function IpDrv.McpUserManagerBase.CreateInstance
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMcpUserManagerBase*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMcpUserManagerBase* UMcpUserManagerBase::CreateInstance()
{
	static UFunction* uFnCreateInstance = nullptr;

	if (!uFnCreateInstance)
	{
		uFnCreateInstance = UFunction::FindFunction("Function IpDrv.McpUserManagerBase.CreateInstance");
	}

	UMcpUserManagerBase_execCreateInstance_Params CreateInstance_Params;
	memset(&CreateInstance_Params, 0, sizeof(CreateInstance_Params));

	UMcpUserManagerBase::StaticClass()->ProcessEvent(uFnCreateInstance, &CreateInstance_Params, nullptr);

	return CreateInstance_Params.ReturnValue;
};

// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnDeleteUserRequestComplete = nullptr;

	if (!uFnOnDeleteUserRequestComplete)
	{
		uFnOnDeleteUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnDeleteUserRequestComplete");
	}

	UMcpUserManager_execOnDeleteUserRequestComplete_Params OnDeleteUserRequestComplete_Params;
	memset(&OnDeleteUserRequestComplete_Params, 0, sizeof(OnDeleteUserRequestComplete_Params));
	OnDeleteUserRequestComplete_Params.Request = Request;
	OnDeleteUserRequestComplete_Params.Response = Response;
	OnDeleteUserRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeleteUserRequestComplete, &OnDeleteUserRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.DeleteUser
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::DeleteUser(const class FString& McpId)
{
	static UFunction* uFnDeleteUser = nullptr;

	if (!uFnDeleteUser)
	{
		uFnDeleteUser = UFunction::FindFunction("Function IpDrv.McpUserManager.DeleteUser");
	}

	UMcpUserManager_execDeleteUser_Params DeleteUser_Params;
	memset(&DeleteUser_Params, 0, sizeof(DeleteUser_Params));
	memcpy_s(&DeleteUser_Params.McpId, sizeof(DeleteUser_Params.McpId), &McpId, sizeof(McpId));

	this->ProcessEvent(uFnDeleteUser, &DeleteUser_Params, nullptr);
};

// Function IpDrv.McpUserManager.GetUsers
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FMcpUserStatus> Users                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManager::GetUsers(class TArray<struct FMcpUserStatus>& Users)
{
	static UFunction* uFnGetUsers = nullptr;

	if (!uFnGetUsers)
	{
		uFnGetUsers = UFunction::FindFunction("Function IpDrv.McpUserManager.GetUsers");
	}

	UMcpUserManager_execGetUsers_Params GetUsers_Params;
	memset(&GetUsers_Params, 0, sizeof(GetUsers_Params));
	memcpy_s(&GetUsers_Params.Users, sizeof(GetUsers_Params.Users), &Users, sizeof(Users));

	this->ProcessEvent(uFnGetUsers, &GetUsers_Params, nullptr);

	memcpy_s(&Users, sizeof(Users), &GetUsers_Params.Users, sizeof(GetUsers_Params.Users));
};

// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryUsersRequestComplete = nullptr;

	if (!uFnOnQueryUsersRequestComplete)
	{
		uFnOnQueryUsersRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnQueryUsersRequestComplete");
	}

	UMcpUserManager_execOnQueryUsersRequestComplete_Params OnQueryUsersRequestComplete_Params;
	memset(&OnQueryUsersRequestComplete_Params, 0, sizeof(OnQueryUsersRequestComplete_Params));
	OnQueryUsersRequestComplete_Params.Request = Request;
	OnQueryUsersRequestComplete_Params.Response = Response;
	OnQueryUsersRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryUsersRequestComplete, &OnQueryUsersRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.QueryUsers
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    McpIds                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UMcpUserManager::QueryUsers(class TArray<class FString>& McpIds)
{
	static UFunction* uFnQueryUsers = nullptr;

	if (!uFnQueryUsers)
	{
		uFnQueryUsers = UFunction::FindFunction("Function IpDrv.McpUserManager.QueryUsers");
	}

	UMcpUserManager_execQueryUsers_Params QueryUsers_Params;
	memset(&QueryUsers_Params, 0, sizeof(QueryUsers_Params));
	memcpy_s(&QueryUsers_Params.McpIds, sizeof(QueryUsers_Params.McpIds), &McpIds, sizeof(McpIds));

	this->ProcessEvent(uFnQueryUsers, &QueryUsers_Params, nullptr);

	memcpy_s(&McpIds, sizeof(McpIds), &QueryUsers_Params.McpIds, sizeof(QueryUsers_Params.McpIds));
};

// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnQueryUserRequestComplete = nullptr;

	if (!uFnOnQueryUserRequestComplete)
	{
		uFnOnQueryUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnQueryUserRequestComplete");
	}

	UMcpUserManager_execOnQueryUserRequestComplete_Params OnQueryUserRequestComplete_Params;
	memset(&OnQueryUserRequestComplete_Params, 0, sizeof(OnQueryUserRequestComplete_Params));
	OnQueryUserRequestComplete_Params.Request = Request;
	OnQueryUserRequestComplete_Params.Response = Response;
	OnQueryUserRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryUserRequestComplete, &OnQueryUserRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.QueryUser
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  McpId                          (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bShouldUpdateLastActive        (CPF_OptionalParm | CPF_Parm)

void UMcpUserManager::QueryUser(const class FString& McpId, bool bShouldUpdateLastActive)
{
	static UFunction* uFnQueryUser = nullptr;

	if (!uFnQueryUser)
	{
		uFnQueryUser = UFunction::FindFunction("Function IpDrv.McpUserManager.QueryUser");
	}

	UMcpUserManager_execQueryUser_Params QueryUser_Params;
	memset(&QueryUser_Params, 0, sizeof(QueryUser_Params));
	memcpy_s(&QueryUser_Params.McpId, sizeof(QueryUser_Params.McpId), &McpId, sizeof(McpId));
	QueryUser_Params.bShouldUpdateLastActive = bShouldUpdateLastActive;

	this->ProcessEvent(uFnQueryUser, &QueryUser_Params, nullptr);
};

// Function IpDrv.McpUserManager.OnRegisterUserFacebookRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnRegisterUserFacebookRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterUserFacebookRequestComplete = nullptr;

	if (!uFnOnRegisterUserFacebookRequestComplete)
	{
		uFnOnRegisterUserFacebookRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnRegisterUserFacebookRequestComplete");
	}

	UMcpUserManager_execOnRegisterUserFacebookRequestComplete_Params OnRegisterUserFacebookRequestComplete_Params;
	memset(&OnRegisterUserFacebookRequestComplete_Params, 0, sizeof(OnRegisterUserFacebookRequestComplete_Params));
	OnRegisterUserFacebookRequestComplete_Params.Request = Request;
	OnRegisterUserFacebookRequestComplete_Params.Response = Response;
	OnRegisterUserFacebookRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterUserFacebookRequestComplete, &OnRegisterUserFacebookRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.RegisterUserFacebook
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  FacebookId                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FacebookAuthToken              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExistingMcpAuth                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::RegisterUserFacebook(const class FString& FacebookId, const class FString& FacebookAuthToken, const class FString& UDID, const class FString& ExistingMcpAuth)
{
	static UFunction* uFnRegisterUserFacebook = nullptr;

	if (!uFnRegisterUserFacebook)
	{
		uFnRegisterUserFacebook = UFunction::FindFunction("Function IpDrv.McpUserManager.RegisterUserFacebook");
	}

	UMcpUserManager_execRegisterUserFacebook_Params RegisterUserFacebook_Params;
	memset(&RegisterUserFacebook_Params, 0, sizeof(RegisterUserFacebook_Params));
	memcpy_s(&RegisterUserFacebook_Params.FacebookId, sizeof(RegisterUserFacebook_Params.FacebookId), &FacebookId, sizeof(FacebookId));
	memcpy_s(&RegisterUserFacebook_Params.FacebookAuthToken, sizeof(RegisterUserFacebook_Params.FacebookAuthToken), &FacebookAuthToken, sizeof(FacebookAuthToken));
	memcpy_s(&RegisterUserFacebook_Params.UDID, sizeof(RegisterUserFacebook_Params.UDID), &UDID, sizeof(UDID));
	memcpy_s(&RegisterUserFacebook_Params.ExistingMcpAuth, sizeof(RegisterUserFacebook_Params.ExistingMcpAuth), &ExistingMcpAuth, sizeof(ExistingMcpAuth));

	this->ProcessEvent(uFnRegisterUserFacebook, &RegisterUserFacebook_Params, nullptr);
};

// Function IpDrv.McpUserManager.OnRegisterUserEmailRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnRegisterUserEmailRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterUserEmailRequestComplete = nullptr;

	if (!uFnOnRegisterUserEmailRequestComplete)
	{
		uFnOnRegisterUserEmailRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnRegisterUserEmailRequestComplete");
	}

	UMcpUserManager_execOnRegisterUserEmailRequestComplete_Params OnRegisterUserEmailRequestComplete_Params;
	memset(&OnRegisterUserEmailRequestComplete_Params, 0, sizeof(OnRegisterUserEmailRequestComplete_Params));
	OnRegisterUserEmailRequestComplete_Params.Request = Request;
	OnRegisterUserEmailRequestComplete_Params.Response = Response;
	OnRegisterUserEmailRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterUserEmailRequestComplete, &OnRegisterUserEmailRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.RegisterUserEmail
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Email                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PasswordHash                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExistingMcpAuth                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::RegisterUserEmail(const class FString& Email, const class FString& PasswordHash, const class FString& UDID, const class FString& ExistingMcpAuth)
{
	static UFunction* uFnRegisterUserEmail = nullptr;

	if (!uFnRegisterUserEmail)
	{
		uFnRegisterUserEmail = UFunction::FindFunction("Function IpDrv.McpUserManager.RegisterUserEmail");
	}

	UMcpUserManager_execRegisterUserEmail_Params RegisterUserEmail_Params;
	memset(&RegisterUserEmail_Params, 0, sizeof(RegisterUserEmail_Params));
	memcpy_s(&RegisterUserEmail_Params.Email, sizeof(RegisterUserEmail_Params.Email), &Email, sizeof(Email));
	memcpy_s(&RegisterUserEmail_Params.PasswordHash, sizeof(RegisterUserEmail_Params.PasswordHash), &PasswordHash, sizeof(PasswordHash));
	memcpy_s(&RegisterUserEmail_Params.UDID, sizeof(RegisterUserEmail_Params.UDID), &UDID, sizeof(UDID));
	memcpy_s(&RegisterUserEmail_Params.ExistingMcpAuth, sizeof(RegisterUserEmail_Params.ExistingMcpAuth), &ExistingMcpAuth, sizeof(ExistingMcpAuth));

	this->ProcessEvent(uFnRegisterUserEmail, &RegisterUserEmail_Params, nullptr);
};

// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UMcpUserManager::OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterUserRequestComplete = nullptr;

	if (!uFnOnRegisterUserRequestComplete)
	{
		uFnOnRegisterUserRequestComplete = UFunction::FindFunction("Function IpDrv.McpUserManager.OnRegisterUserRequestComplete");
	}

	UMcpUserManager_execOnRegisterUserRequestComplete_Params OnRegisterUserRequestComplete_Params;
	memset(&OnRegisterUserRequestComplete_Params, 0, sizeof(OnRegisterUserRequestComplete_Params));
	OnRegisterUserRequestComplete_Params.Request = Request;
	OnRegisterUserRequestComplete_Params.Response = Response;
	OnRegisterUserRequestComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterUserRequestComplete, &OnRegisterUserRequestComplete_Params, nullptr);
};

// Function IpDrv.McpUserManager.RegisterUserGenerated
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UDID                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ExistingMcpAuth                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UMcpUserManager::RegisterUserGenerated(const class FString& UDID, const class FString& ExistingMcpAuth)
{
	static UFunction* uFnRegisterUserGenerated = nullptr;

	if (!uFnRegisterUserGenerated)
	{
		uFnRegisterUserGenerated = UFunction::FindFunction("Function IpDrv.McpUserManager.RegisterUserGenerated");
	}

	UMcpUserManager_execRegisterUserGenerated_Params RegisterUserGenerated_Params;
	memset(&RegisterUserGenerated_Params, 0, sizeof(RegisterUserGenerated_Params));
	memcpy_s(&RegisterUserGenerated_Params.UDID, sizeof(RegisterUserGenerated_Params.UDID), &UDID, sizeof(UDID));
	memcpy_s(&RegisterUserGenerated_Params.ExistingMcpAuth, sizeof(RegisterUserGenerated_Params.ExistingMcpAuth), &ExistingMcpAuth, sizeof(ExistingMcpAuth));

	this->ProcessEvent(uFnRegisterUserGenerated, &RegisterUserGenerated_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UOnlineImageDownloaderWeb::DebugDraw(class UCanvas* Canvas)
{
	static UFunction* uFnDebugDraw = nullptr;

	if (!uFnDebugDraw)
	{
		uFnDebugDraw = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DebugDraw");
	}

	UOnlineImageDownloaderWeb_execDebugDraw_Params DebugDraw_Params;
	memset(&DebugDraw_Params, 0, sizeof(DebugDraw_Params));
	DebugDraw_Params.Canvas = Canvas;

	this->ProcessEvent(uFnDebugDraw, &DebugDraw_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bDidSucceed                    (CPF_Parm)

void UOnlineImageDownloaderWeb::OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnDownloadComplete = nullptr;

	if (!uFnOnDownloadComplete)
	{
		uFnOnDownloadComplete = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete");
	}

	UOnlineImageDownloaderWeb_execOnDownloadComplete_Params OnDownloadComplete_Params;
	memset(&OnDownloadComplete_Params, 0, sizeof(OnDownloadComplete_Params));
	OnDownloadComplete_Params.OriginalRequest = OriginalRequest;
	OnDownloadComplete_Params.Response = Response;
	OnDownloadComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnDownloadComplete, &OnDownloadComplete_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UOnlineImageDownloaderWeb::DownloadNextImage()
{
	static UFunction* uFnDownloadNextImage = nullptr;

	if (!uFnDownloadNextImage)
	{
		uFnDownloadNextImage = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage");
	}

	UOnlineImageDownloaderWeb_execDownloadNextImage_Params DownloadNextImage_Params;
	memset(&DownloadNextImage_Params, 0, sizeof(DownloadNextImage_Params));

	this->ProcessEvent(uFnDownloadNextImage, &DownloadNextImage_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineImageDownloaderWeb::ClearAllDownloads()
{
	static UFunction* uFnClearAllDownloads = nullptr;

	if (!uFnClearAllDownloads)
	{
		uFnClearAllDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads");
	}

	UOnlineImageDownloaderWeb_execClearAllDownloads_Params ClearAllDownloads_Params;
	memset(&ClearAllDownloads_Params, 0, sizeof(ClearAllDownloads_Params));

	this->ProcessEvent(uFnClearAllDownloads, &ClearAllDownloads_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    URLs                           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::ClearDownloads(const class TArray<class FString>& URLs)
{
	static UFunction* uFnClearDownloads = nullptr;

	if (!uFnClearDownloads)
	{
		uFnClearDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads");
	}

	UOnlineImageDownloaderWeb_execClearDownloads_Params ClearDownloads_Params;
	memset(&ClearDownloads_Params, 0, sizeof(ClearDownloads_Params));
	memcpy_s(&ClearDownloads_Params.URLs, sizeof(ClearDownloads_Params.URLs), &URLs, sizeof(URLs));

	this->ProcessEvent(uFnClearDownloads, &ClearDownloads_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOnlineImageDownloaderWeb::GetNumPendingDownloads()
{
	static UFunction* uFnGetNumPendingDownloads = nullptr;

	if (!uFnGetNumPendingDownloads)
	{
		uFnGetNumPendingDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads");
	}

	UOnlineImageDownloaderWeb_execGetNumPendingDownloads_Params GetNumPendingDownloads_Params;
	memset(&GetNumPendingDownloads_Params, 0, sizeof(GetNumPendingDownloads_Params));

	this->ProcessEvent(uFnGetNumPendingDownloads, &GetNumPendingDownloads_Params, nullptr);

	return GetNumPendingDownloads_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    URLs                           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::RequestOnlineImages(const class TArray<class FString>& URLs)
{
	static UFunction* uFnRequestOnlineImages = nullptr;

	if (!uFnRequestOnlineImages)
	{
		uFnRequestOnlineImages = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages");
	}

	UOnlineImageDownloaderWeb_execRequestOnlineImages_Params RequestOnlineImages_Params;
	memset(&RequestOnlineImages_Params, 0, sizeof(RequestOnlineImages_Params));
	memcpy_s(&RequestOnlineImages_Params.URLs, sizeof(RequestOnlineImages_Params.URLs), &URLs, sizeof(URLs));

	this->ProcessEvent(uFnRequestOnlineImages, &RequestOnlineImages_Params, nullptr);
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UTexture*                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

class UTexture* UOnlineImageDownloaderWeb::GetOnlineImageTexture(const class FString& URL)
{
	static UFunction* uFnGetOnlineImageTexture = nullptr;

	if (!uFnGetOnlineImageTexture)
	{
		uFnGetOnlineImageTexture = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture");
	}

	UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Params GetOnlineImageTexture_Params;
	memset(&GetOnlineImageTexture_Params, 0, sizeof(GetOnlineImageTexture_Params));
	memcpy_s(&GetOnlineImageTexture_Params.URL, sizeof(GetOnlineImageTexture_Params.URL), &URL, sizeof(URL));

	this->ProcessEvent(uFnGetOnlineImageTexture, &GetOnlineImageTexture_Params, nullptr);

	return GetOnlineImageTexture_Params.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FOnlineImageDownload    CachedEntry                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::OnOnlineImageDownloaded(const struct FOnlineImageDownload& CachedEntry)
{
	static UFunction* uFnOnOnlineImageDownloaded = nullptr;

	if (!uFnOnOnlineImageDownloaded)
	{
		uFnOnOnlineImageDownloaded = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded");
	}

	UOnlineImageDownloaderWeb_execOnOnlineImageDownloaded_Params OnOnlineImageDownloaded_Params;
	memset(&OnOnlineImageDownloaded_Params, 0, sizeof(OnOnlineImageDownloaded_Params));
	memcpy_s(&OnOnlineImageDownloaded_Params.CachedEntry, sizeof(OnOnlineImageDownloaded_Params.CachedEntry), &CachedEntry, sizeof(CachedEntry));

	this->ProcessEvent(uFnOnOnlineImageDownloaded, &OnOnlineImageDownloaded_Params, nullptr);
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AWebConnection::IsHanging()
{
	static UFunction* uFnIsHanging = nullptr;

	if (!uFnIsHanging)
	{
		uFnIsHanging = UFunction::FindFunction("Function IpDrv.WebConnection.IsHanging");
	}

	AWebConnection_execIsHanging_Params IsHanging_Params;
	memset(&IsHanging_Params, 0, sizeof(IsHanging_Params));

	this->ProcessEvent(uFnIsHanging, &IsHanging_Params, nullptr);

	return IsHanging_Params.ReturnValue;
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::Cleanup()
{
	static UFunction* uFnCleanup = nullptr;

	if (!uFnCleanup)
	{
		uFnCleanup = UFunction::FindFunction("Function IpDrv.WebConnection.Cleanup");
	}

	AWebConnection_execCleanup_Params Cleanup_Params;
	memset(&Cleanup_Params, 0, sizeof(Cleanup_Params));

	this->ProcessEvent(uFnCleanup, &Cleanup_Params, nullptr);
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::CheckRawBytes()
{
	static UFunction* uFnCheckRawBytes = nullptr;

	if (!uFnCheckRawBytes)
	{
		uFnCheckRawBytes = UFunction::FindFunction("Function IpDrv.WebConnection.CheckRawBytes");
	}

	AWebConnection_execCheckRawBytes_Params CheckRawBytes_Params;
	memset(&CheckRawBytes_Params, 0, sizeof(CheckRawBytes_Params));

	this->ProcessEvent(uFnCheckRawBytes, &CheckRawBytes_Params, nullptr);
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::EndOfHeaders()
{
	static UFunction* uFnEndOfHeaders = nullptr;

	if (!uFnEndOfHeaders)
	{
		uFnEndOfHeaders = UFunction::FindFunction("Function IpDrv.WebConnection.EndOfHeaders");
	}

	AWebConnection_execEndOfHeaders_Params EndOfHeaders_Params;
	memset(&EndOfHeaders_Params, 0, sizeof(EndOfHeaders_Params));

	this->ProcessEvent(uFnEndOfHeaders, &EndOfHeaders_Params, nullptr);
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::CreateResponseObject()
{
	static UFunction* uFnCreateResponseObject = nullptr;

	if (!uFnCreateResponseObject)
	{
		uFnCreateResponseObject = UFunction::FindFunction("Function IpDrv.WebConnection.CreateResponseObject");
	}

	AWebConnection_execCreateResponseObject_Params CreateResponseObject_Params;
	memset(&CreateResponseObject_Params, 0, sizeof(CreateResponseObject_Params));

	this->ProcessEvent(uFnCreateResponseObject, &CreateResponseObject_Params, nullptr);
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessPost(const class FString& S)
{
	static UFunction* uFnProcessPost = nullptr;

	if (!uFnProcessPost)
	{
		uFnProcessPost = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessPost");
	}

	AWebConnection_execProcessPost_Params ProcessPost_Params;
	memset(&ProcessPost_Params, 0, sizeof(ProcessPost_Params));
	memcpy_s(&ProcessPost_Params.S, sizeof(ProcessPost_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnProcessPost, &ProcessPost_Params, nullptr);
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessGet(const class FString& S)
{
	static UFunction* uFnProcessGet = nullptr;

	if (!uFnProcessGet)
	{
		uFnProcessGet = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessGet");
	}

	AWebConnection_execProcessGet_Params ProcessGet_Params;
	memset(&ProcessGet_Params, 0, sizeof(ProcessGet_Params));
	memcpy_s(&ProcessGet_Params.S, sizeof(ProcessGet_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnProcessGet, &ProcessGet_Params, nullptr);
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessHead(const class FString& S)
{
	static UFunction* uFnProcessHead = nullptr;

	if (!uFnProcessHead)
	{
		uFnProcessHead = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessHead");
	}

	AWebConnection_execProcessHead_Params ProcessHead_Params;
	memset(&ProcessHead_Params, 0, sizeof(ProcessHead_Params));
	memcpy_s(&ProcessHead_Params.S, sizeof(ProcessHead_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnProcessHead, &ProcessHead_Params, nullptr);
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ReceivedLine(const class FString& S)
{
	static UFunction* uFnReceivedLine = nullptr;

	if (!uFnReceivedLine)
	{
		uFnReceivedLine = UFunction::FindFunction("Function IpDrv.WebConnection.ReceivedLine");
	}

	AWebConnection_execReceivedLine_Params ReceivedLine_Params;
	memset(&ReceivedLine_Params, 0, sizeof(ReceivedLine_Params));
	memcpy_s(&ReceivedLine_Params.S, sizeof(ReceivedLine_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnReceivedLine, &ReceivedLine_Params, nullptr);
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::eventReceivedText(const class FString& Text)
{
	static UFunction* uFnReceivedText = nullptr;

	if (!uFnReceivedText)
	{
		uFnReceivedText = UFunction::FindFunction("Function IpDrv.WebConnection.ReceivedText");
	}

	AWebConnection_eventReceivedText_Params ReceivedText_Params;
	memset(&ReceivedText_Params, 0, sizeof(ReceivedText_Params));
	memcpy_s(&ReceivedText_Params.Text, sizeof(ReceivedText_Params.Text), &Text, sizeof(Text));

	this->ProcessEvent(uFnReceivedText, &ReceivedText_Params, nullptr);
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::eventTimer()
{
	static UFunction* uFnTimer = nullptr;

	if (!uFnTimer)
	{
		uFnTimer = UFunction::FindFunction("Function IpDrv.WebConnection.Timer");
	}

	AWebConnection_eventTimer_Params Timer_Params;
	memset(&Timer_Params, 0, sizeof(Timer_Params));

	this->ProcessEvent(uFnTimer, &Timer_Params, nullptr);
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::eventClosed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function IpDrv.WebConnection.Closed");
	}

	AWebConnection_eventClosed_Params Closed_Params;
	memset(&Closed_Params, 0, sizeof(Closed_Params));

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::eventAccepted()
{
	static UFunction* uFnAccepted = nullptr;

	if (!uFnAccepted)
	{
		uFnAccepted = UFunction::FindFunction("Function IpDrv.WebConnection.Accepted");
	}

	AWebConnection_eventAccepted_Params Accepted_Params;
	memset(&Accepted_Params, 0, sizeof(Accepted_Params));

	this->ProcessEvent(uFnAccepted, &Accepted_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
