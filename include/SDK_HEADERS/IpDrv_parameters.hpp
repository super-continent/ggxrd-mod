/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: IpDrv_parameters.hpp
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
# Parameters
# ========================================================================================= #
*/

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] 
struct AInternetLink_eventResolveFailed_Params
{
};

// Function IpDrv.InternetLink.Resolved
// [0x00020800] 
struct AInternetLink_eventResolved_Params
{
	struct FIpAddr                                     Addr;                                             // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400]  (iNative[32554])
struct AInternetLink_execGetLocalIP_Params
{
	struct FIpAddr                                     Arg;                                              // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400]  (iNative[33104])
struct AInternetLink_execStringToIpAddr_Params
{
	class FString                                      Str;                                              // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     Addr;                                             // 0x000C (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400]  (iNative[32624])
struct AInternetLink_execIpAddrToString_Params
{
	struct FIpAddr                                     Arg;                                              // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0008 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400]  (iNative[32551])
struct AInternetLink_execGetLastError_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400]  (iNative[33044])
struct AInternetLink_execResolve_Params
{
	class FString                                      Domain;                                           // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400]  (iNative[32899])
struct AInternetLink_execParseURL_Params
{
	class FString                                      URL;                                              // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      Addr;                                             // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            PortNum;                                          // 0x0018 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class FString                                      LevelName;                                        // 0x001C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      EntryName;                                        // 0x0028 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0034 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400]  (iNative[32627])
struct AInternetLink_execIsDataPending_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020800] 
struct ATcpLink_eventReceivedBinary_Params
{
	int32_t                                            Count;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[255];                                           // 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] 
struct ATcpLink_eventReceivedLine_Params
{
	class FString                                      Line;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] 
struct ATcpLink_eventReceivedText_Params
{
	class FString                                      Text;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] 
struct ATcpLink_eventClosed_Params
{
};

// Function IpDrv.TcpLink.Opened
// [0x00020800] 
struct ATcpLink_eventOpened_Params
{
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] 
struct ATcpLink_eventAccepted_Params
{
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400]  (iNative[32992])
struct ATcpLink_execReadBinary_Params
{
	int32_t                                            Count;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[255];                                           // 0x0004 (0x00FF) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      // 0x0104 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400]  (iNative[32997])
struct ATcpLink_execReadText_Params
{
	class FString                                      Str;                                              // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400]  (iNative[836])
struct ATcpLink_execSendBinary_Params
{
	int32_t                                            Count;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[255];                                           // 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0104 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendText
// [0x00020400]  (iNative[835])
struct ATcpLink_execSendText_Params
{
	class FString                                      Str;                                              // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400]  (iNative[32626])
struct ATcpLink_execIsConnected_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Close
// [0x00020400]  (iNative[31913])
struct ATcpLink_execClose_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Open
// [0x00020400]  (iNative[25351])
struct ATcpLink_execOpen_Params
{
	struct FIpAddr                                     Addr;                                             // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Listen
// [0x00020400]  (iNative[30436])
struct ATcpLink_execListen_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400]  (iNative[32282])
struct ATcpLink_execBindPort_Params
{
	int32_t                                            PortNum;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bUseNextAvailable : 1;                            // 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020002] 
struct UMcpServiceBase_execGetAppAccessURL_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020002] 
struct UMcpServiceBase_execGetBaseURL_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.Init
// [0x00020802] 
struct UMcpServiceBase_eventInit_Params
{
	// class UClass*                                   McpConfigClass;                                   // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020400]  (iNative[33159])
struct UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Params
{
	struct FUniqueNetId                                UniqueId;                                         // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineMatchmakingStats*                     MMStats;                                          // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020400]  (iNative[29847])
struct UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumPlayers;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420400]  (iNative[29868])
struct UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Params
{
	struct FUniqueNetId                                UniqueId;                                         // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<uint8_t>                              Payload;                                          // 0x0008 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020400]  (iNative[29869])
struct UOnlineEventsInterfaceMcp_execUploadPlayerData_Params
{
	struct FUniqueNetId                                UniqueId;                                         // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      PlayerNick;                                       // 0x0008 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execGetNews_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            NewsType;                                         // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int32_t                                         NewsIndex;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Params
{
	struct FScriptDelegate                             ReadGameNewsDelegate;                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Params
{
	struct FScriptDelegate                             ReadNewsDelegate;                                 // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120000] 
struct UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint8_t                                            NewsType;                                         // 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020400]  (iNative[26866])
struct UOnlineNewsInterfaceMcp_execReadNews_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            NewsType;                                         // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// [0x00020400]  (iNative[32570])
struct UOnlineTitleFileDownloadBase_execGetUrlForFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadBase_execClearRequestTitleFileListCompleteDelegate_Params
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadBase_execAddRequestTitleFileListCompleteDelegate_Params
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// [0x00120000] 
struct UOnlineTitleFileDownloadBase_execOnRequestTitleFileListComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      ResultStr;                                        // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execRequestTitleFileList_Params
{
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execClearDownloadedFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execClearDownloadedFiles_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x000C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// [0x00420000] 
struct UOnlineTitleFileDownloadBase_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadBase_execClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadBase_execAddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineTitleFileDownloadBase_execOnReadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x00020400]  (iNative[18359])
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400]  (iNative[18360])
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002] 
struct UOnlineTitleFileDownloadMcp_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x000C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         FileIndex;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400]  (iNative[22034])
struct UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00020400]  (iNative[26886])
struct UOnlineTitleFileDownloadMcp_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execGetUrlForFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execOnFileListReceived_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDidSucceed : 1;                                  // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         Index;                                            // 0x000C (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          RequestTitleFileListDelegate;                     // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ResponseStr;                                      // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bSuccess : 1;                                     // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execRequestTitleFileList_Params
{
	// class UHttpRequestInterface*                    HTTPRequest;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	// class FString                                   URL;                                              // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// [0x00020400]  (iNative[18359])
struct UOnlineTitleFileDownloadWeb_execClearDownloadedFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// [0x00020400]  (iNative[18360])
struct UOnlineTitleFileDownloadWeb_execClearDownloadedFiles_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x000C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         FileIndex;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// [0x00420400]  (iNative[22034])
struct UOnlineTitleFileDownloadWeb_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// [0x00040401]  (iNative[33136])
struct UOnlineTitleFileDownloadWeb_execTriggerDelegates_Params
{
	uint32_t                                           bSuccess : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      FileRead;                                         // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// [0x00040003] 
struct UOnlineTitleFileDownloadWeb_execOnFileDownloadComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDidSucceed : 1;                                  // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint32_t                                        bSuccess : 1;                                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         FileIndex;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                         Idx;                                              // 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                   Filename;                                         // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class TArray<uint8_t>                           BinaryData;                                       // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   FileCompressionTypeString;                        // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         FileIndex;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                         Idx;                                              // 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// [0x00420400]  (iNative[33148])
struct UOnlineTitleFileDownloadWeb_execUncompressTitleFileContents_Params
{
	uint8_t                                            FileCompressionType;                              // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<uint8_t>                              CompressedFileContents;                           // 0x0004 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              UncompressedFileContents;                         // 0x0010 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020400]  (iNative[19554])
struct UTitleFileDownloadCache_execDeleteTitleFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020400]  (iNative[19555])
struct UTitleFileDownloadCache_execDeleteTitleFiles_Params
{
	float                                              MaxAgeSeconds;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020400]  (iNative[18331])
struct UTitleFileDownloadCache_execClearCachedFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020400]  (iNative[18332])
struct UTitleFileDownloadCache_execClearCachedFiles_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020400]  (iNative[22036])
struct UTitleFileDownloadCache_execGetTitleFileLogicalName_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020400]  (iNative[22035])
struct UTitleFileDownloadCache_execGetTitleFileHash_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020400]  (iNative[22037])
struct UTitleFileDownloadCache_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x000C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420400]  (iNative[22034])
struct UTitleFileDownloadCache_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             SaveCompleteDelegate;                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             SaveCompleteDelegate;                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120000] 
struct UTitleFileDownloadCache_execOnSaveTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020400]  (iNative[27455])
struct UTitleFileDownloadCache_execSaveTitleFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      LogicalName;                                      // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             LoadCompleteDelegate;                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             LoadCompleteDelegate;                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120000] 
struct UTitleFileDownloadCache_execOnLoadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020400]  (iNative[23483])
struct UTitleFileDownloadCache_execLoadTitleFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.CacheMessageContents
// [0x00420000] 
struct UMcpMessageBase_execCacheMessageContents_Params
{
	class TArray<uint8_t>                              MessageContents;                                  // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageId;                                        // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.CacheMessage
// [0x00020000] 
struct UMcpMessageBase_execCacheMessage_Params
{
	struct FMcpMessage                                 Message;                                          // 0x0000 (0x0058) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.GetMessageContents
// [0x00420000] 
struct UMcpMessageBase_execGetMessageContentsW_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              MessageContents;                                  // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// [0x00120000] 
struct UMcpMessageBase_execOnQueryMessageContentsComplete_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.QueryMessageContents
// [0x00020000] 
struct UMcpMessageBase_execQueryMessageContents_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.GetMessageList
// [0x00420000] 
struct UMcpMessageBase_execGetMessageListW_Params
{
	class FString                                      ToUniqueUserId;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpMessageList                             MessageList;                                      // 0x000C (0x0018) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// [0x00120000] 
struct UMcpMessageBase_execOnQueryMessagesComplete_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.QueryMessages
// [0x00020000] 
struct UMcpMessageBase_execQueryMessages_Params
{
	class FString                                      ToUniqueUserId;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      TitleId;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// [0x00120000] 
struct UMcpMessageBase_execOnDeleteMessageComplete_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.DeleteMessage
// [0x00020000] 
struct UMcpMessageBase_execDeleteMessage_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// [0x00120000] 
struct UMcpMessageBase_execOnCreateMessageComplete_Params
{
	struct FMcpMessage                                 Message;                                          // 0x0000 (0x0058) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x0058 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x005C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.CreateMessage
// [0x00420000] 
struct UMcpMessageBase_execCreateMessage_Params
{
	class TArray<class FString>                        ToUniqueUserIds;                                  // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      FromUniqueUserId;                                 // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FromFriendlyName;                                 // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      MessageType;                                      // 0x0024 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      TitleId;                                          // 0x0030 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PushMessage;                                      // 0x003C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ValidUntil;                                       // 0x0048 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              MessageContents;                                  // 0x0054 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.CreateInstance
// [0x00022003] 
struct UMcpMessageBase_execCreateInstance_Params
{
	class UMcpMessageBase*                             ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpMessageBaseClass;                              // 0x0004 (0x0004) [0x0000000000000000]               
	// class UMcpMessageBase*                          NewInstance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.CacheMessageContents
// [0x00420002] 
struct UMcpMessageManager_execCacheMessageContents_Params
{
	class TArray<uint8_t>                              MessageContents;                                  // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageId;                                        // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         MessageContentsIndex;                             // 0x001C (0x0004) [0x0000000000000000]               
	// uint32_t                                        bWasSuccessful : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageManager.GetMessageById
// [0x00420002] 
struct UMcpMessageManager_execGetMessageByIdW_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpMessage                                 Message;                                          // 0x000C (0x0058) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0064 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         MessageListsSize;                                 // 0x0068 (0x0004) [0x0000000000000000]               
	// int32_t                                         MessageListsItr;                                  // 0x006C (0x0004) [0x0000000000000000]               
	// int32_t                                         MessageItr;                                       // 0x0070 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.CacheMessage
// [0x00820002] 
struct UMcpMessageManager_execCacheMessage_Params
{
	struct FMcpMessage                                 Message;                                          // 0x0000 (0x0058) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         AddAt;                                            // 0x0058 (0x0004) [0x0000000000000000]               
	// int32_t                                         MessageIndex;                                     // 0x005C (0x0004) [0x0000000000000000]               
	// int32_t                                         MessageListIndex;                                 // 0x0060 (0x0004) [0x0000000000000000]               
	// struct FMcpMessageList                          UserMessageList;                                  // 0x0064 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bWasFound : 1;                                    // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageManager.GetMessageContents
// [0x00420002] 
struct UMcpMessageManager_execGetMessageContentsW_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              MessageContents;                                  // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                        bWasSuccessful : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         MessageContentsIndex;                             // 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// [0x00840003] 
struct UMcpMessageManager_execOnQueryMessageContentsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class TArray<uint8_t>                           MessageContents;                                  // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   MessageId;                                        // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpMessage                              Message;                                          // 0x0028 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.QueryMessageContents
// [0x00020002] 
struct UMcpMessageManager_execQueryMessageContents_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    QueryMessageContentsRequest;                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.GetMessageList
// [0x00420002] 
struct UMcpMessageManager_execGetMessageListW_Params
{
	class FString                                      ToUniqueUserId;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpMessageList                             MessageList;                                      // 0x000C (0x0018) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         MessageListIndex;                                 // 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// [0x00840003] 
struct UMcpMessageManager_execOnQueryMessagesRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Error;                                            // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   JsonString;                                       // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                         JsonIndex;                                        // 0x002C (0x0004) [0x0000000000000000]               
	// struct FMcpMessage                              Message;                                          // 0x0030 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   MessageCompressionTypeString;                     // 0x0088 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.QueryMessages
// [0x00020002] 
struct UMcpMessageManager_execQueryMessages_Params
{
	class FString                                      ToUniqueUserId;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      TitleId;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    QueryMessagesRequest;                             // 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// [0x00020002] 
struct UMcpMessageManager_execOnDeleteMessageRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Content;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   MessageId;                                        // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.DeleteMessage
// [0x00020002] 
struct UMcpMessageManager_execDeleteMessage_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    DeleteMessageRequest;                             // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// [0x00820002] 
struct UMcpMessageManager_execOnCreateMessageRequestComplete_Params
{
	class UHttpRequestInterface*                       CreateMessageRequest;                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Content;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpMessage                              CreatedMessage;                                   // 0x001C (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.CreateMessage
// [0x00C20002] 
struct UMcpMessageManager_execCreateMessage_Params
{
	class TArray<class FString>                        ToUniqueUserIds;                                  // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      FromUniqueUserId;                                 // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FromFriendlyName;                                 // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      MessageType;                                      // 0x0024 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      TitleId;                                          // 0x0030 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PushMessage;                                      // 0x003C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ValidUntil;                                       // 0x0048 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              MessageContents;                                  // 0x0054 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0060 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    CreateMessageRequest;                             // 0x006C (0x0004) [0x0000000000000000]               
	// struct FMcpMessage                              Message;                                          // 0x0070 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ToUniqueUserIdsStr;                               // 0x00C8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         Idx;                                              // 0x00D4 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// [0x00420802] 
struct UMcpMessageManager_eventFinishedAsyncUncompression_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class TArray<uint8_t>                              UncompressedMessageContents;                      // 0x0004 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageId;                                        // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.StartAsyncUncompression
// [0x00420400]  (iNative[33091])
struct UMcpMessageManager_execStartAsyncUncompression_Params
{
	class FString                                      MessageId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            MessageCompressionType;                           // 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<uint8_t>                              MessageContent;                                   // 0x0010 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpMessageManager.StartAsyncCompression
// [0x00420400]  (iNative[33090])
struct UMcpMessageManager_execStartAsyncCompression_Params
{
	uint8_t                                            MessageCompressionType;                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<uint8_t>                              MessageContent;                                   // 0x0004 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                          // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearAllDelegates_Params
{
};

// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execAddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallDeleteUserFileCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         Index;                                            // 0x001C (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          CallDelegate;                                     // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// [0x00120000] 
struct UMcpUserCloudFileDownload_execOnDeleteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestDeleteUserFileComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         EntryIdx;                                         // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	// class FString                                   Filename;                                         // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UserId;                                           // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bResult : 1;                                      // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// [0x00020002] 
struct UMcpUserCloudFileDownload_execDeleteUserFile_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldCloudDelete : 1;                           // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bShouldLocallyDelete : 1;                         // 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         EntryIdx;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0028 (0x0004) [0x0000000000000000]               
	// class FString                                   URL;                                              // 0x002C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bPending : 1;                                     // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execAddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallWriteUserFileCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         Index;                                            // 0x001C (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          CallDelegate;                                     // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// [0x00120000] 
struct UMcpUserCloudFileDownload_execOnWriteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestWriteUserFileComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         EntryIdx;                                         // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	// class FString                                   Filename;                                         // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UserId;                                           // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bResult : 1;                                      // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// [0x00440003] 
struct UMcpUserCloudFileDownload_execGetUserFileIndexForRequest_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            UserIdx;                                          // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            FileIdx;                                          // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// [0x00420002] 
struct UMcpUserCloudFileDownload_execWriteUserFile_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0018 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         EntryIdx;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x002C (0x0004) [0x0000000000000000]               
	// class FString                                   URL;                                              // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bPending : 1;                                     // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execAddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallReadUserFileCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         Index;                                            // 0x001C (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          CallDelegate;                                     // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// [0x00120000] 
struct UMcpUserCloudFileDownload_execOnReadUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestReadUserFileComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         EntryIdx;                                         // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	// class FString                                   Filename;                                         // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UserId;                                           // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bResult : 1;                                      // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// class TArray<uint8_t>                           FileContents;                                     // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// [0x00020002] 
struct UMcpUserCloudFileDownload_execReadUserFile_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         EntryIdx;                                         // 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	// class FString                                   URL;                                              // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bPending : 1;                                     // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// [0x00420002] 
struct UMcpUserCloudFileDownload_execGetUserFileList_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FEmsFile>                      UserFiles;                                        // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         EntryIdx;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execAddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// [0x00040003] 
struct UMcpUserCloudFileDownload_execCallEnumerateUserFileCompleteDelegates_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         Index;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          CallDelegate;                                     // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// [0x00120000] 
struct UMcpUserCloudFileDownload_execOnEnumerateUserFilesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// [0x00040003] 
struct UMcpUserCloudFileDownload_execOnHTTPRequestEnumerateUserFilesComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         EntryIdx;                                         // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         JsonIdx;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	// class FString                                   JsonString;                                       // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UserId;                                           // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x002C (0x0004) [0x0000000000000000]               
	// uint32_t                                        bResult : 1;                                      // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// [0x00020002] 
struct UMcpUserCloudFileDownload_execEnumerateUserFiles_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         EntryIdx;                                         // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   URL;                                              // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bPending : 1;                                     // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearFile
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearFile_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                        bResult : 1;                                      // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         EntryIdx;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearFiles_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                        bResult : 1;                                      // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         EntryIdx;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// [0x00420002] 
struct UMcpUserCloudFileDownload_execGetFileContents_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0018 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                        bResult : 1;                                      // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         EntryIdx;                                         // 0x002C (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0030 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00]  (iNative[13147])
struct UMeshBeacon_eventDestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420400]  (iNative[33069])
struct UMeshBeaconClient_execSendHostNewGameSessionResponse_Params
{
	uint32_t                                           bSuccess : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x0010 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0060 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520000] 
struct UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FPlayerMember>                 Players;                                          // 0x000C (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520000] 
struct UMeshBeaconClient_execOnTravelRequestReceived_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x000C (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520000] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestResults_Params
{
	uint8_t                                            TestType;                                         // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            TestResult;                                       // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FConnectionBandwidthStats                   BandwidthStats;                                   // 0x0004 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120000] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Params
{
	uint8_t                                            TestType;                                         // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120000] 
struct UMeshBeaconClient_execOnConnectionRequestResult_Params
{
	uint8_t                                            ConnectionResult;                                 // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020400]  (iNative[32280])
struct UMeshBeaconClient_execBeginBandwidthTest_Params
{
	uint8_t                                            TestType;                                         // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TestBufferSize;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420400]  (iNative[33029])
struct UMeshBeaconClient_execRequestConnection_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FClientConnectionRequest                    ClientRequest;                                    // 0x0008 (0x0024) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bRegisterSecureAddress : 1;                       // 0x002C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00]  (iNative[13147])
struct UMeshBeaconClient_eventDestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520000] 
struct UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Params
{
	uint32_t                                           bSucceeded : 1;                                   // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x0010 (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420400]  (iNative[33028])
struct UMeshBeaconHost_execRequestClientCreateNewSession_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FPlayerMember>                 Players;                                          // 0x0014 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420400]  (iNative[33114])
struct UMeshBeaconHost_execTellClientsToTravel_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x000C (0x0050) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120000] 
struct UMeshBeaconHost_execOnAllPendingPlayersConnected_Params
{
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420400]  (iNative[32248])
struct UMeshBeaconHost_execAllPlayersConnected_Params
{
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020400]  (iNative[32541])
struct UMeshBeaconHost_execGetConnectionIndexForPlayer_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420002] 
struct UMeshBeaconHost_execSetPendingPlayerConnections_Params
{
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520000] 
struct UMeshBeaconHost_execOnFinishedBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            TestType;                                         // 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            TestResult;                                       // 0x0009 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FConnectionBandwidthStats                   BandwidthStats;                                   // 0x000C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120000] 
struct UMeshBeaconHost_execOnStartedBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            TestType;                                         // 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520000] 
struct UMeshBeaconHost_execOnReceivedClientConnectionRequest_Params
{
	struct FClientMeshBeaconConnection                 NewClientConnection;                              // 0x0000 (0x0058) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020002] 
struct UMeshBeaconHost_execAllowBandwidthTesting_Params
{
	uint32_t                                           bEnabled : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020400]  (iNative[32320])
struct UMeshBeaconHost_execCancelPendingBandwidthTests_Params
{
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020400]  (iNative[32595])
struct UMeshBeaconHost_execHasPendingBandwidthTest_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020400]  (iNative[32318])
struct UMeshBeaconHost_execCancelInProgressBandwidthTests_Params
{
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020400]  (iNative[32594])
struct UMeshBeaconHost_execHasInProgressBandwidthTest_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020400]  (iNative[33027])
struct UMeshBeaconHost_execRequestClientBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            TestType;                                         // 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TestBufferSize;                                   // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00]  (iNative[13147])
struct UMeshBeaconHost_eventDestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020400]  (iNative[32613])
struct UMeshBeaconHost_execInitHostBeacon_Params
{
	struct FUniqueNetId                                InOwningPlayerId;                                 // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] 
struct UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  OutRegisteredPlayers;                             // 0x0008 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         Idx;                                              // 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                         PlayerIdx;                                        // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400]  (iNative[32629])
struct UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] 
struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerAddr_Params
{
	int32_t                                            OutServerIP;                                      // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            OutServerPort;                                    // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                     // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420400]  (iNative[21001])
struct UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FLocalAuthSession                           OutSessionInfo;                                   // 0x0004 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420400]  (iNative[21027])
struct UOnlineAuthInterfaceImpl_execFindServerAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FAuthSession                                OutSessionInfo;                                   // 0x0004 (0x0018) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420400]  (iNative[20999])
struct UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FLocalAuthSession                           OutSessionInfo;                                   // 0x0004 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420400]  (iNative[20974])
struct UOnlineAuthInterfaceImpl_execFindClientAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FAuthSession                                OutSessionInfo;                                   // 0x0004 (0x0018) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420404]  (iNative[14794])
struct UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Params
{
	struct FLocalAuthSession                           OutSessionInfo;                                   // 0x0000 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420404]  (iNative[14818])
struct UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Params
{
	struct FAuthSession                                OutSessionInfo;                                   // 0x0000 (0x0018) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420404]  (iNative[14793])
struct UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Params
{
	struct FLocalAuthSession                           OutSessionInfo;                                   // 0x0000 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420404]  (iNative[14786])
struct UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Params
{
	struct FAuthSession                                OutSessionInfo;                                   // 0x0000 (0x0018) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020400]  (iNative[20360])
struct UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020400]  (iNative[20358])
struct UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401]  (iNative[20386])
struct UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401]  (iNative[20370])
struct UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            OutAuthTicketUID;                                 // 0x0010 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020400]  (iNative[20359])
struct UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020400]  (iNative[20357])
struct UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401]  (iNative[20385])
struct UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401]  (iNative[20369])
struct UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerPort;                                       // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerPort;                                       // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSecure : 1;                                      // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            OutAuthTicketUID;                                 // 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020400]  (iNative[27685])
struct UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020400]  (iNative[27665])
struct UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020400]  (iNative[27684])
struct UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020400]  (iNative[27667])
struct UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Params
{
	int32_t                                            AuthTicketUID;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Params
{
	class UPlayer*                                     ServerConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;              // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;              // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Params
{
	class UPlayer*                                     ServerConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Params
{
	uint32_t                                           bSuccess : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                ServerUID;                                        // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPlayer*                                     ServerConnection;                                 // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ExtraInfo;                                        // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Params
{
	uint32_t                                           bSuccess : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                ClientUID;                                        // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPlayer*                                     ClientConnection;                                 // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ExtraInfo;                                        // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerPort;                                       // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSecure : 1;                                      // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnAuthReady_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execIsReady_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RunBandwidthTest
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRunBandwidthTest_Params
{
};

// Function IpDrv.OnlineGameInterfaceImpl.IsAllowedToNetworkHost
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execIsAllowedToNetworkHost_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGetRoomIdFromTitleServiceDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGetRoomIdFromTitleServiceDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGetRoomIdFromTitleServiceDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGetRoomIdFromTitleServiceDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromSessionId
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetRoomIdFromSessionId_Params
{
	class FString                                      SessionId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromTitleService
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetRoomIdFromTitleService_Params
{
	struct FQWord                                      DataId;                                           // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGetRoomIdFromTitleService
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnGetRoomIdFromTitleService_Params
{
	struct FQWord                                      RoomId;                                           // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.GetRoomId
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetRoomId_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.SendPlayerList
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execSendPlayerList_Params
{
	class TArray<class APlayerReplicationInfo*>        Players;                                          // 0x0000 (0x000C) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnGetNumberOfCurrentPlayersComplete_Params
{
	int32_t                                            TotalPlayers;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayersCached
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetNumberOfCurrentPlayersCached_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayers
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetNumberOfCurrentPlayers_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnQosStatusChanged_Params
{
	int32_t                                            NumComplete;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumTotal;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400]  (iNative[16282])
struct UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Params
{
	uint8_t                                            SearchingPlayerNum;                               // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSearch*                           SearchSettings;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x0008 (0x0050) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420400]  (iNative[26874])
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x0008 (0x0050) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400]  (iNative[26873])
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Params
{
	struct FOnlineGameSearchResult                     DesiredGame;                                      // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x0008 (0x0050) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Params
{
	int32_t                                            StartAt;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumberToQuery;                                    // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Params
{
	uint8_t                                            PlayerNum;                                        // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FOnlineGameSearchResult                     DesiredGame;                                      // 0x000C (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execMigrateOnlineGame_Params
{
	uint8_t                                            HostingPlayerNum;                                 // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingGameCompleteDelegate;       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingCompleteDelegate;           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execRecalculateSkillRating_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0008 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAcceptGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                     // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FOnlineArbitrationRegistrant>  ReturnValue;                                      // 0x0008 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterForArbitration_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020400]  (iNative[20374])
struct UOnlineGameInterfaceImpl_execEndOnlineGame_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020400]  (iNative[28818])
struct UOnlineGameInterfaceImpl_execStartOnlineGame_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RetrieveGameSettingsForIP
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRetrieveGameSettingsForIP_Params
{
	class FString                                      IPAddress;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearOnRetrieveGameSettingsForIPDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearOnRetrieveGameSettingsForIPDelegate_Params
{
	struct FScriptDelegate                             RetrieveIPDelegate;                               // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddOnRetrieveGameSettingsForIPDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddOnRetrieveGameSettingsForIPDelegate_Params
{
	struct FScriptDelegate                             NewRetrieveIPDelegate;                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRetrievedGameSettingsForIP
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnRetrievedGameSettingsForIP_Params
{
	uint32_t                                           bSuccessful : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FOnlineGameSearchResult                     ConnectResult;                                    // 0x0004 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayers_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0008 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayer_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayers_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0008 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayer_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasInvited : 1;                                  // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400]  (iNative[21950])
struct UOnlineGameInterfaceImpl_execGetResolvedConnectString_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ConnectInfo;                                      // 0x0008 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.IsCurrentRoomOwner
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execIsCurrentRoomOwner_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.SetRankedReadyStatus
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execSetRankedReadyStatus_Params
{
	uint32_t                                           bReady : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.IsJoinOperationInProgress
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execIsJoinOperationInProgress_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGameByMatchingParams
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execJoinOnlineGameByMatchingParams_Params
{
	struct FQWord                                      RoomId;                                           // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         JoinedGameSettings;                               // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400]  (iNative[23009])
struct UOnlineGameInterfaceImpl_execJoinOnlineGame_Params
{
	uint8_t                                            PlayerNum;                                        // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FOnlineGameSearchResult                     DesiredGame;                                      // 0x000C (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400]  (iNative[21359])
struct UOnlineGameInterfaceImpl_execFreeSearchResults_Params
{
	class UOnlineGameSearch*                           Search;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020400]  (iNative[18098])
struct UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400]  (iNative[21006])
struct UOnlineGameInterfaceImpl_execFindOnlineGames_Params
{
	uint8_t                                            SearchingPlayerNum;                               // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSearch*                           SearchSettings;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400]  (iNative[19620])
struct UOnlineGameInterfaceImpl_execDestroyOnlineGame_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] 
struct UOnlineGameInterfaceImpl_execUpdateOnlineGame_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShouldRefreshOnlineData : 1;                     // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400]  (iNative[18985])
struct UOnlineGameInterfaceImpl_execCreateOnlineGame_Params
{
	uint8_t                                            HostingPlayerNum;                                 // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         NewGameSettings;                                  // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execGetGameSearch_Params
{
	class UOnlineGameSearch*                           ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execGetGameSettings_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420400]  (iNative[32896])
struct UOnlinePlaylistManager_execParseDataCenterId_Params
{
	class TArray<uint8_t>                              Data;                                             // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020002] 
struct UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class TArray<uint8_t>                           FileData;                                         // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020002] 
struct UOnlinePlaylistManager_execReadDataCenterId_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020802] 
struct UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Params
{
	int32_t                                            NumPlayers;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UOnlineEventsInterface*                   EventsInterface;                                  // 0x0004 (0x0008) [0x0000000000000000]               
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            WorldwideTotal;                                   // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            RegionTotal;                                      // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// int32_t                                         PlaylistIndex;                                    // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420400]  (iNative[32898])
struct UOnlinePlaylistManager_execParsePlaylistPopulationData_Params
{
	class TArray<uint8_t>                              Data;                                             // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120000] 
struct UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Params
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020002] 
struct UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class TArray<uint8_t>                           FileData;                                         // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020002] 
struct UOnlinePlaylistManager_execReadPlaylistPopulation_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020002] 
struct UOnlinePlaylistManager_execReset_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<int32_t>                              ContentIds;                                       // 0x0004 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         PlaylistIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
// [0x00020002] 
struct UOnlinePlaylistManager_execGetInventorySwapFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SourceInventory;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         PlaylistIndex;                                    // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         SwapIndex;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<class FName>                          MapCycle;                                         // 0x0004 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         PlaylistIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020002] 
struct UOnlinePlaylistManager_execGetUrlFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int32_t                                         PlaylistIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020002] 
struct UOnlinePlaylistManager_execGetMatchType_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         PlaylistIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020002] 
struct UOnlinePlaylistManager_execIsPlaylistArbitrated_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         PlaylistIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            LoadBalanceId;                                    // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// int32_t                                         PlaylistIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TeamSize;                                         // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            TeamCount;                                        // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            MaxPartySize;                                     // 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// int32_t                                         PlaylistIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020002] 
struct UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         PlaylistIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020002] 
struct UOnlinePlaylistManager_execHasAnyGameSettings_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         PlaylistIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                         GameIndex;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020002] 
struct UOnlinePlaylistManager_execGetGameSettings_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameSettingsId;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         PlaylistIndex;                                    // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         GameIndex;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020400]  (iNative[32523])
struct UOnlinePlaylistManager_execFinalizePlaylistObjects_Params
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020002] 
struct UOnlinePlaylistManager_execOnReadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIndex;                                        // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020400]  (iNative[33081])
struct UOnlinePlaylistManager_execShouldRefreshPlaylists_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020400]  (iNative[32430])
struct UOnlinePlaylistManager_execDetermineFilesToDownload_Params
{
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020002] 
struct UOnlinePlaylistManager_execDownloadPlaylist_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIndex;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120000] 
struct UOnlinePlaylistManager_execOnReadPlaylistComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000] 
struct UPartyBeacon_execOnDestroyComplete_Params
{
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00]  (iNative[13147])
struct UPartyBeacon_eventDestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00]  (iNative[13147])
struct UPartyBeaconClient_eventDestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020400]  (iNative[32321])
struct UPartyBeaconClient_execCancelReservation_Params
{
	struct FUniqueNetId                                CancellingPartyLeader;                            // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420400]  (iNative[33034])
struct UPartyBeaconClient_execRequestReservationUpdate_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                            // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FPlayerReservation>            PlayersToAdd;                                     // 0x0010 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420400]  (iNative[33033])
struct UPartyBeaconClient_execRequestReservation_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                            // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FPlayerReservation>            Players;                                          // 0x0010 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000] 
struct UPartyBeaconClient_execOnHostHasCancelled_Params
{
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000] 
struct UPartyBeaconClient_execOnHostIsReady_Params
{
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120000] 
struct UPartyBeaconClient_execOnTravelRequestReceived_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x000C (0x0050) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationCountUpdated_Params
{
	int32_t                                            ReservationRemaining;                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationRequestComplete_Params
{
	uint8_t                                            ReservationResult;                                // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020400]  (iNative[32557])
struct UPartyBeaconHost_execGetMaxAvailableTeamSize_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420002] 
struct UPartyBeaconHost_execGetPartyLeaders_Params
{
	class TArray<struct FUniqueNetId>                  PartyLeaders;                                     // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         PartyIndex;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20002] 
struct UPartyBeaconHost_execGetPlayers_Params
{
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         PlayerIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         PartyIndex;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	// struct FPlayerReservation                       PlayerRes;                                        // 0x0014 (0x0024) [0x0000000000000000]               
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020400]  (iNative[32249])
struct UPartyBeaconHost_execAppendReservationSkillsToSearch_Params
{
	class UOnlineGameSearch*                           Search;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820802] 
struct UPartyBeaconHost_eventUnregisterParty_Params
{
	struct FUniqueNetId                                PartyLeader;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                         PlayerIndex;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                         PartyIndex;                                       // 0x000C (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	// struct FPlayerReservation                       PlayerRes;                                        // 0x0014 (0x0024) [0x0000000000000000]               
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820802] 
struct UPartyBeaconHost_eventUnregisterPartyMembers_Params
{
	// int32_t                                         Index;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                         PartyIndex;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	// struct FPlayerReservation                       PlayerRes;                                        // 0x000C (0x0024) [0x0000000000000000]               
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820802] 
struct UPartyBeaconHost_eventRegisterPartyMembers_Params
{
	// int32_t                                         Index;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                         PartyIndex;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	// class UOnlineRecentPlayersList*                 PlayersList;                                      // 0x000C (0x0004) [0x0000000000000000]               
	// class TArray<struct FUniqueNetId>               Members;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FPlayerReservation                       PlayerRes;                                        // 0x001C (0x0024) [0x0000000000000000]               
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020002] 
struct UPartyBeaconHost_execAreReservationsFull_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020400]  (iNative[33112])
struct UPartyBeaconHost_execTellClientsHostHasCancelled_Params
{
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020400]  (iNative[33113])
struct UPartyBeaconHost_execTellClientsHostIsReady_Params
{
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020400]  (iNative[33114])
struct UPartyBeaconHost_execTellClientsToTravel_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x000C (0x0050) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00]  (iNative[13147])
struct UPartyBeaconHost_eventDestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000] 
struct UPartyBeaconHost_execOnClientCancellationReceived_Params
{
	struct FUniqueNetId                                PartyLeader;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationsFull_Params
{
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationChange_Params
{
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020400]  (iNative[32589])
struct UPartyBeaconHost_execHandlePlayerLogout_Params
{
	struct FUniqueNetId                                PlayerID;                                         // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bMaintainParty : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420400]  (iNative[32543])
struct UPartyBeaconHost_execGetExistingReservation_Params
{
	struct FUniqueNetId                                PartyLeader;                                      // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420400]  (iNative[33158])
struct UPartyBeaconHost_execUpdatePartyReservationEntry_Params
{
	struct FUniqueNetId                                PartyLeader;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FPlayerReservation>            PlayerMembers;                                    // 0x0008 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x0014 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420400]  (iNative[32244])
struct UPartyBeaconHost_execAddPartyReservationEntry_Params
{
	struct FUniqueNetId                                PartyLeader;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FPlayerReservation>            PlayerMembers;                                    // 0x0008 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            TeamNum;                                          // 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsHost : 1;                                      // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint8_t                                            ReturnValue;                                      // 0x001C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024400]  (iNative[32613])
struct UPartyBeaconHost_execInitHostBeacon_Params
{
	int32_t                                            InNumTeams;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InNumPlayersPerTeam;                              // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InNumReservations;                                // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FName                                        InSessionName;                                    // 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InForceTeamNum;                                   // 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020400]  (iNative[32904])
struct UPartyBeaconHost_execPauseReservationRequests_Params
{
	uint32_t                                           bPause : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020002] 
struct UWebRequest_execGetHexDigit_Params
{
	class FString                                      D;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020002] 
struct UWebRequest_execDecodeFormData_Params
{
	class FString                                      Data;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   Token[2];                                         // 0x000C (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ch;                                               // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                         H1;                                               // 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                         H2;                                               // 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                         Limit;                                            // 0x003C (0x0004) [0x0000000000000000]               
	// int32_t                                         T;                                                // 0x0040 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020002] 
struct UWebRequest_execProcessHeaderString_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebRequest.Dump
// [0x00020401]  (iNative[32441])
struct UWebRequest_execDump_Params
{
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401]  (iNative[32575])
struct UWebRequest_execGetVariables_Params
{
	class TArray<class FString>                        varNames;                                         // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401]  (iNative[31970])
struct UWebRequest_execGetVariableNumber_Params
{
	class FString                                      VariableName;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Number;                                           // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DefaultValue;                                     // 0x0010 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x001C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401]  (iNative[32574])
struct UWebRequest_execGetVariableCount_Params
{
	class FString                                      VariableName;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401]  (iNative[31964])
struct UWebRequest_execGetVariable_Params
{
	class FString                                      VariableName;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DefaultValue;                                     // 0x000C (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401]  (iNative[32246])
struct UWebRequest_execAddVariable_Params
{
	class FString                                      VariableName;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401]  (iNative[21774])
struct UWebRequest_execGetHeaders_Params
{
	class TArray<class FString>                        Headers;                                          // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401]  (iNative[21773])
struct UWebRequest_execGetHeader_Params
{
	class FString                                      HeaderName;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DefaultValue;                                     // 0x000C (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401]  (iNative[32240])
struct UWebRequest_execAddHeader_Params
{
	class FString                                      HeaderName;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00020401]  (iNative[32460])
struct UWebRequest_execEncodeBase64_Params
{
	class FString                                      Decoded;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00020401]  (iNative[32395])
struct UWebRequest_execDecodeBase64_Params
{
	class FString                                      Encoded;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020002] 
struct UWebResponse_execSentResponse_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SentText
// [0x00020002] 
struct UWebResponse_execSentText_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.Redirect
// [0x00020002] 
struct UWebResponse_execRedirect_Params
{
	class FString                                      URL;                                              // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024002] 
struct UWebResponse_execSendStandardHeaders_Params
{
	class FString                                      ContentType;                                      // 0x0000 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bCache : 1;                                       // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024002] 
struct UWebResponse_execHTTPError_Params
{
	int32_t                                            ErrorNum;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Data;                                             // 0x0004 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020002] 
struct UWebResponse_execSendHeaders_Params
{
	// class FString                                   hdr;                                              // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024002] 
struct UWebResponse_execAddHeader_Params
{
	class FString                                      Header;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bReplace : 1;                                     // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                         Idx;                                              // 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                   Part;                                             // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   Entry;                                            // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020002] 
struct UWebResponse_execHTTPHeader_Params
{
	class FString                                      Header;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.HttpResponse
// [0x00020002] 
struct UWebResponse_execHttpResponse_Params
{
	class FString                                      Header;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020002] 
struct UWebResponse_execFailAuthentication_Params
{
	class FString                                      Realm;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024002] 
struct UWebResponse_execSendCachedFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ContentType;                                      // 0x000C (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020802] 
struct UWebResponse_eventSendBinary_Params
{
	int32_t                                            Count;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[255];                                           // 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebResponse.SendText
// [0x00024802] 
struct UWebResponse_eventSendText_Params
{
	class FString                                      Text;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bNoCRLF : 1;                                      // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.Dump
// [0x00020401]  (iNative[32441])
struct UWebResponse_execDump_Params
{
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401]  (iNative[32548])
struct UWebResponse_execGetHTTPExpiration_Params
{
	int32_t                                            OffsetSeconds;                                    // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401]  (iNative[32660])
struct UWebResponse_execLoadParsedUHTM_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401]  (iNative[32610])
struct UWebResponse_execIncludeBinaryFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401]  (iNative[32611])
struct UWebResponse_execIncludeUHTM_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401]  (iNative[32339])
struct UWebResponse_execClearSubst_Params
{
};

// Function IpDrv.WebResponse.Subst
// [0x00024401]  (iNative[33105])
struct UWebResponse_execSubst_Params
{
	class FString                                      Variable;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	uint32_t                                           bClear : 1;                                       // 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401]  (iNative[32516])
struct UWebResponse_execFileExists_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020802] 
struct UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00426002] 
struct UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Params
{
	class FName                                        ProviderTag;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            PlaylistId;                                       // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ProviderIndex;                                    // 0x000C (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	class UOnlinePlaylistProvider*                     ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UUIDataStore_OnlinePlaylists*             PlaylistDS;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	// class TArray<class UUIResourceDataProvider*>    Providers;                                        // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UOnlinePlaylistProvider*                  OPP;                                              // 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401]  (iNative[32566])
struct UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Params
{
	class FName                                        ProviderTag;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ProviderIndex;                                    // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UUIResourceDataProvider*                     out_Provider;                                     // 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401]  (iNative[21951])
struct UUIDataStore_OnlinePlaylists_execGetResourceProviders_Params
{
	class FName                                        ProviderTag;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UUIResourceDataProvider*>       out_Providers;                                    // 0x0008 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020802] 
struct UUIDataStore_OnlinePlaylists_eventInit_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020000] 
struct UWebApplication_execPostQuery_Params
{
	class UWebRequest*                                 Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebApplication.Query
// [0x00020000] 
struct UWebApplication_execQuery_Params
{
	class UWebRequest*                                 Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020002] 
struct UWebApplication_execPreQuery_Params
{
	class UWebRequest*                                 Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020002] 
struct UWebApplication_execCleanupApp_Params
{
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] 
struct UWebApplication_execCleanup_Params
{
};

// Function IpDrv.WebApplication.Init
// [0x00020000] 
struct UWebApplication_execInit_Params
{
};

// Function IpDrv.WebServer.GetApplication
// [0x00420002] 
struct AWebServer_execGetApplication_Params
{
	class FString                                      URI;                                              // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SubURI;                                           // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UWebApplication*                             ReturnValue;                                      // 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         I;                                                // 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                         L;                                                // 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] 
struct AWebServer_eventLostChild_Params
{
	class AActor*                                      C;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] 
struct AWebServer_eventGainedChild_Params
{
	class AActor*                                      C;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] 
struct AWebServer_eventDestroyed_Params
{
	// int32_t                                         I;                                                // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00820002] 
struct AWebServer_execPostBeginPlay_Params
{
	// int32_t                                         I;                                                // 0x0000 (0x0004) [0x0000000000000000]               
	// class UClass*                                   ApplicationClass;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	// struct FIpAddr                                  L;                                                // 0x0008 (0x0008) [0x0000000000000000]               
	// class FString                                   S;                                                // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.HelloWeb.Query
// [0x00020802] 
struct UHelloWeb_eventQuery_Params
{
	class UWebRequest*                                 Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                         I;                                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.HelloWeb.Init
// [0x00020002] 
struct UHelloWeb_execInit_Params
{
};

// Function IpDrv.ImageServer.Query
// [0x00020802] 
struct UImageServer_eventQuery_Params
{
	class UWebRequest*                                 Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                   Image;                                            // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// [0x00020000] 
struct UMcpClashMobBase_execUpdateChallengeUserReward_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            UserReward;                                       // 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnUpdateChallengeUserRewardComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            // 0x001C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// [0x00020000] 
struct UMcpClashMobBase_execUpdateChallengeUserProgress_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bDidComplete : 1;                                 // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            GoalProgress;                                     // 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnUpdateChallengeUserProgressComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            // 0x001C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             OutChallengeUserStatus;                           // 0x0018 (0x0064) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// [0x00420000] 
struct UMcpClashMobBase_execQueryChallengeMultiUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<class FString>                        UserIdsToRead;                                    // 0x0018 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// [0x00020000] 
struct UMcpClashMobBase_execQueryChallengeUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnQueryChallengeUserStatusComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            // 0x001C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.AcceptChallenge
// [0x00020000] 
struct UMcpClashMobBase_execAcceptChallenge_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnAcceptChallengeComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            // 0x001C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execDeleteCachedChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execClearCachedChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeFileContents_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              OutFileContents;                                  // 0x0018 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execDownloadChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeFileList
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeFileList_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FMcpClashMobChallengeFile>     OutChallengeFiles;                                // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnDownloadChallengeFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UniqueChallengeId;                                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x001C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            // 0x0028 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeList
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeList_Params
{
	class TArray<struct FMcpClashMobChallengeEvent>    OutChallengeEvents;                               // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeList
// [0x00020000] 
struct UMcpClashMobBase_execQueryChallengeList_Params
{
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnQueryChallengeListComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.CreateInstance
// [0x00022003] 
struct UMcpClashMobBase_execCreateInstance_Params
{
	class UMcpClashMobBase*                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpClashMobBaseClass;                             // 0x0004 (0x0004) [0x0000000000000000]               
	// class UMcpClashMobBase*                         NewInstance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// [0x00020002] 
struct UMcpClashMobFileDownload_execGetUrlForFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnUpdateChallengeUserRewardHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   UniqueChallengeId;                                // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UniqueUserId;                                     // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bResult : 1;                                      // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         UserQueryIdx;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                         ChallengeQueryIdx;                                // 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// [0x00020002] 
struct UMcpClashMobManager_execUpdateChallengeUserReward_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            UserReward;                                       // 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                   URL;                                              // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         ChallengeQueryIdx;                                // 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserQueryIdx;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	// uint32_t                                        bPending : 1;                                     // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          // 0x0040 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnUpdateChallengeUserProgressHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   UniqueChallengeId;                                // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UniqueUserId;                                     // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bResult : 1;                                      // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         UserQueryIdx;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                         ChallengeQueryIdx;                                // 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// [0x00020002] 
struct UMcpClashMobManager_execUpdateChallengeUserProgress_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bDidComplete : 1;                                 // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            GoalProgress;                                     // 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                   URL;                                              // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x002C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         ChallengeQueryIdx;                                // 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserQueryIdx;                                     // 0x003C (0x0004) [0x0000000000000000]               
	// uint32_t                                        bPending : 1;                                     // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          // 0x0044 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// [0x00C20002] 
struct UMcpClashMobManager_execGetChallengeUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             OutChallengeUserStatus;                           // 0x0018 (0x0064) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         UserStatusIdx;                                    // 0x007C (0x0004) [0x0000000000000000]               
	// struct FMcpClashMobChallengeUserStatus          DefaultStatus;                                    // 0x0080 (0x0064) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnQueryChallengeMultiStatusHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   JSONStr;                                          // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UniqueChallengeId;                                // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UniqueUserId;                                     // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bResult : 1;                                      // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         UserQueryIdx;                                     // 0x0040 (0x0004) [0x0000000000000000]               
	// int32_t                                         ChallengeQueryIdx;                                // 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserStatusIdx;                                    // 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                         TempUserStatusIdx;                                // 0x004C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// [0x00420002] 
struct UMcpClashMobManager_execQueryChallengeMultiUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<class FString>                        UserIdsToRead;                                    // 0x0018 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   JSONStr;                                          // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         ChallengeQueryIdx;                                // 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserQueryIdx;                                     // 0x004C (0x0004) [0x0000000000000000]               
	// int32_t                                         UserIdIdx;                                        // 0x0050 (0x0004) [0x0000000000000000]               
	// uint32_t                                        bPending : 1;                                     // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          // 0x0058 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnQueryChallengeStatusHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   JSONStr;                                          // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UniqueChallengeId;                                // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UniqueUserId;                                     // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bResult : 1;                                      // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         UserQueryIdx;                                     // 0x0040 (0x0004) [0x0000000000000000]               
	// int32_t                                         ChallengeQueryIdx;                                // 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserStatusIdx;                                    // 0x0048 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// [0x00020002] 
struct UMcpClashMobManager_execQueryChallengeUserStatus_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         ChallengeQueryIdx;                                // 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserQueryIdx;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	// uint32_t                                        bPending : 1;                                     // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          // 0x003C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnAcceptChallengeHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   UniqueChallengeId;                                // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UniqueUserId;                                     // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bResult : 1;                                      // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         UserQueryIdx;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                         ChallengeQueryIdx;                                // 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.AcceptChallenge
// [0x00020002] 
struct UMcpClashMobManager_execAcceptChallenge_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UniqueUserId;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         ChallengeQueryIdx;                                // 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserQueryIdx;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	// uint32_t                                        bPending : 1;                                     // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          // 0x003C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// [0x00020002] 
struct UMcpClashMobManager_execDeleteCachedChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         ChallengeIdx;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// [0x00020002] 
struct UMcpClashMobManager_execClearCachedChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         ChallengeIdx;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// [0x00420002] 
struct UMcpClashMobManager_execGetChallengeFileContents_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              OutFileContents;                                  // 0x0018 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         ChallengeIdx;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0028 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// [0x00020002] 
struct UMcpClashMobManager_execOnDownloadMcpFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      DLName;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class TArray<uint8_t>                           FileContents;                                     // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         ChallengeIdx;                                     // 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	// class FString                                   Filename;                                         // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnLoadCachedFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      DLName;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// uint32_t                                        bRequiresDownload : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class FString                                   FileHashCache;                                    // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   FileHashChallenge;                                // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   Filename;                                         // 0x002C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         ChallengeIdx;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x003C (0x0004) [0x0000000000000000]               
	// class TArray<uint8_t>                           FileContents;                                     // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// [0x00020002] 
struct UMcpClashMobManager_execDownloadChallengeFile_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DLName;                                           // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         ChallengeIdx;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                         FileIdx;                                          // 0x0028 (0x0004) [0x0000000000000000]               
	// uint32_t                                        bPending : 1;                                     // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.GetChallengeFileList
// [0x00420002] 
struct UMcpClashMobManager_execGetChallengeFileList_Params
{
	class FString                                      UniqueChallengeId;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FMcpClashMobChallengeFile>     OutChallengeFiles;                                // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         ChallengeEventIdx;                                // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpClashMobManager.GetChallengeList
// [0x00420002] 
struct UMcpClashMobManager_execGetChallengeList_Params
{
	class TArray<struct FMcpClashMobChallengeEvent>    OutChallengeEvents;                               // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// [0x00040003] 
struct UMcpClashMobManager_execOnQueryChallengeListHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   JSONStr;                                          // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bResult : 1;                                      // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.QueryChallengeList
// [0x00020002] 
struct UMcpClashMobManager_execQueryChallengeList_Params
{
	// class FString                                   URL;                                              // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bPending : 1;                                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.Init
// [0x00020002] 
struct UMcpClashMobManager_execInit_Params
{
};

// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnAcceptGroupInviteComplete_Params
{
	class FString                                      GroupID;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// [0x00020000] 
struct UMcpGroupsBase_execAcceptGroupInvite_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldAccept : 1;                                // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.McpGroupsBase.GetGroupInviteList
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupInviteList_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroupList                               InviteList;                                       // 0x000C (0x0018) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnQueryGroupInvitesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroupInvites
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroupInvites_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnDeleteAllGroupsComplete_Params
{
	class FString                                      RequesterId;                                      // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.DeleteAllGroups
// [0x00020000] 
struct UMcpGroupsBase_execDeleteAllGroups_Params
{
	class FString                                      OwnerId;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnRemoveGroupMembersComplete_Params
{
	class FString                                      GroupID;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execRemoveGroupMembers_Params
{
	class FString                                      OwnerId;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<class FString>                        MemberIds;                                        // 0x0018 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnAddGroupMembersComplete_Params
{
	class FString                                      GroupID;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.AddGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execAddGroupMembers_Params
{
	class FString                                      OwnerId;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<class FString>                        MemberIds;                                        // 0x0018 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bRequiresAcceptance : 1;                          // 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.McpGroupsBase.GetGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupMembers_Params
{
	class FString                                      GroupID;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FMcpGroupMember>               GroupMembers;                                     // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnQueryGroupMembersComplete_Params
{
	class FString                                      GroupID;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroupMembers
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroupMembers_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.GetGroupList
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupList_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroupList                               GroupList;                                        // 0x000C (0x0018) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnQueryGroupsComplete_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroups
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroups_Params
{
	class FString                                      RequesterId;                                      // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnDeleteGroupComplete_Params
{
	class FString                                      GroupID;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.DeleteGroup
// [0x00020000] 
struct UMcpGroupsBase_execDeleteGroup_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnCreateGroupComplete_Params
{
	struct FMcpGroup                                   Group;                                            // 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x0034 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0038 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.CreateGroup
// [0x00020000] 
struct UMcpGroupsBase_execCreateGroup_Params
{
	class FString                                      OwnerId;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupName;                                        // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.CreateInstance
// [0x00022003] 
struct UMcpGroupsBase_execCreateInstance_Params
{
	class UMcpGroupsBase*                              ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpGroupsManagerClass;                            // 0x0004 (0x0004) [0x0000000000000000]               
	// class UMcpGroupsBase*                           NewInstance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.CacheGroupMember
// [0x00820002] 
struct UMcpGroupsManager_execCacheGroupMember_Params
{
	class FString                                      MemberId;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            AcceptState;                                      // 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                         MemberIndex;                                      // 0x001C (0x0004) [0x0000000000000000]               
	// struct FMcpGroupList                            GroupList;                                        // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         GroupListIndex;                                   // 0x0038 (0x0004) [0x0000000000000000]               
	// struct FMcpGroup                                GroupTemp;                                        // 0x003C (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         GroupIndex;                                       // 0x0070 (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0074 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.CacheGroup
// [0x00820002] 
struct UMcpGroupsManager_execCacheGroup_Params
{
	class FString                                      RequesterId;                                      // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroup                                   Group;                                            // 0x000C (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         AddAt;                                            // 0x0040 (0x0004) [0x0000000000000000]               
	// int32_t                                         GroupIndex;                                       // 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                         GroupListIndex;                                   // 0x0048 (0x0004) [0x0000000000000000]               
	// struct FMcpGroupList                            UserGroupList;                                    // 0x004C (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bWasFound : 1;                                    // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// [0x00120002] 
struct UMcpGroupsManager_execOnAcceptGroupInviteRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Content;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   GroupID;                                          // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// [0x00020002] 
struct UMcpGroupsManager_execAcceptGroupInvite_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldAccept : 1;                                // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   URL;                                              // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    AcceptGroupInviteRequest;                         // 0x0028 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// [0x00020002] 
struct UMcpGroupsManager_execOnDeleteAllGroupsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Content;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   RequesterId;                                      // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.DeleteAllGroups
// [0x00020002] 
struct UMcpGroupsManager_execDeleteAllGroups_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    DeleteGroupRequest;                               // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// [0x00020002] 
struct UMcpGroupsManager_execOnRemoveGroupMembersRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Content;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   GroupID;                                          // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// [0x00420002] 
struct UMcpGroupsManager_execRemoveGroupMembers_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<class FString>                        MemberIds;                                        // 0x0018 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    RemoveGroupMembersRequest;                        // 0x0030 (0x0004) [0x0000000000000000]               
	// class FString                                   JsonPayload;                                      // 0x0034 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         Index;                                            // 0x0040 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// [0x00120002] 
struct UMcpGroupsManager_execOnAddGroupMembersRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Content;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   GroupID;                                          // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.AddGroupMembers
// [0x00420002] 
struct UMcpGroupsManager_execAddGroupMembers_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<class FString>                        MemberIds;                                        // 0x0018 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bRequiresAcceptance : 1;                          // 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   URL;                                              // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    AddGroupMembersRequest;                           // 0x0034 (0x0004) [0x0000000000000000]               
	// class FString                                   JsonPayload;                                      // 0x0038 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         Index;                                            // 0x0044 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.GetGroupMembers
// [0x00C20002] 
struct UMcpGroupsManager_execGetGroupMembers_Params
{
	class FString                                      GroupID;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FMcpGroupMember>               GroupMembers;                                     // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         GroupIndex;                                       // 0x0018 (0x0004) [0x0000000000000000]               
	// struct FMcpGroupList                            GroupList;                                        // 0x001C (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpGroup                                GroupTemp;                                        // 0x0034 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// [0x00120002] 
struct UMcpGroupsManager_execOnQueryGroupMembersRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Error;                                            // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   JsonString;                                       // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                         JsonIndex;                                        // 0x002C (0x0004) [0x0000000000000000]               
	// uint8_t                                         AcceptState;                                      // 0x0030 (0x0001) [0x0000000000000000]               
	// class FString                                   MemberId;                                         // 0x0034 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   GroupID;                                          // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.QueryGroupMembers
// [0x00020002] 
struct UMcpGroupsManager_execQueryGroupMembers_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    QueryGroupMembersRequest;                         // 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.GetGroupList
// [0x00420002] 
struct UMcpGroupsManager_execGetGroupList_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FMcpGroupList                               GroupList;                                        // 0x000C (0x0018) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         GroupListIndex;                                   // 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// [0x00920002] 
struct UMcpGroupsManager_execOnQueryGroupsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Error;                                            // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpGroup                                Group;                                            // 0x001C (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   JsonString;                                       // 0x0050 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x005C (0x0004) [0x0000000000000000]               
	// int32_t                                         JsonIndex;                                        // 0x0060 (0x0004) [0x0000000000000000]               
	// class FString                                   RequesterId;                                      // 0x0064 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.QueryGroups
// [0x00020002] 
struct UMcpGroupsManager_execQueryGroups_Params
{
	class FString                                      RequesterId;                                      // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    QueryGroupsRequest;                               // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// [0x00020002] 
struct UMcpGroupsManager_execOnDeleteGroupRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Content;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   GroupID;                                          // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.DeleteGroup
// [0x00020002] 
struct UMcpGroupsManager_execDeleteGroup_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupID;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    DeleteGroupRequest;                               // 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// [0x00820002] 
struct UMcpGroupsManager_execOnCreateGroupRequestComplete_Params
{
	class UHttpRequestInterface*                       CreateGroupRequest;                               // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      HttpResponse;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         ResponseCode;                                     // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   Content;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FMcpGroup                                CreatedGroup;                                     // 0x001C (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   JsonString;                                       // 0x0050 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x005C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpGroupsManager.CreateGroup
// [0x00820002] 
struct UMcpGroupsManager_execCreateGroup_Params
{
	class FString                                      UniqueUserId;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GroupName;                                        // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    CreateGroupRequest;                               // 0x0024 (0x0004) [0x0000000000000000]               
	// struct FMcpGroup                                FailedGroup;                                      // 0x0028 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.GetIdMappings
// [0x00420000] 
struct UMcpIdMappingBase_execGetIdMappings_Params
{
	class FString                                      ExternalType;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FMcpIdMapping>                 IDMappings;                                       // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// [0x00120000] 
struct UMcpIdMappingBase_execOnQueryMappingsComplete_Params
{
	class FString                                      ExternalType;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.QueryMappings
// [0x00420000] 
struct UMcpIdMappingBase_execQueryMappings_Params
{
	class TArray<class FString>                        ExternalIds;                                      // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// [0x00120000] 
struct UMcpIdMappingBase_execOnAddMappingComplete_Params
{
	class FString                                      McpId;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalId;                                       // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0028 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.AddMapping
// [0x00020000] 
struct UMcpIdMappingBase_execAddMapping_Params
{
	class FString                                      McpId;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalId;                                       // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.CreateInstance
// [0x00022003] 
struct UMcpIdMappingBase_execCreateInstance_Params
{
	class UMcpIdMappingBase*                           ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpIdMappingBaseClass;                            // 0x0004 (0x0004) [0x0000000000000000]               
	// class UMcpIdMappingBase*                        NewInstance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpIdMappingManager.GetIdMappings
// [0x00420002] 
struct UMcpIdMappingManager_execGetIdMappings_Params
{
	class FString                                      ExternalType;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FMcpIdMapping>                 IDMappings;                                       // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         Index;                                            // 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// [0x00020002] 
struct UMcpIdMappingManager_execOnQueryMappingsRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         Index;                                            // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                         ResponseCode;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                   JsonString;                                       // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                         JsonIndex;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                         AccountIndex;                                     // 0x002C (0x0004) [0x0000000000000000]               
	// uint32_t                                        bWasFound : 1;                                    // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// class FString                                   McpId;                                            // 0x0034 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ExternalId;                                       // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ExternalType;                                     // 0x004C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingManager.QueryMappings
// [0x00420002] 
struct UMcpIdMappingManager_execQueryMappings_Params
{
	class TArray<class FString>                        ExternalIds;                                      // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          // 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0028 (0x0004) [0x0000000000000000]               
	// class FString                                   JsonPayload;                                      // 0x002C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         Index;                                            // 0x0038 (0x0004) [0x0000000000000000]               
	// uint32_t                                        bFirst : 1;                                       // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// [0x00020002] 
struct UMcpIdMappingManager_execOnAddMappingRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         Index;                                            // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                         ResponseCode;                                     // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpIdMappingManager.AddMapping
// [0x00020002] 
struct UMcpIdMappingManager_execAddMapping_Params
{
	class FString                                      McpId;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalId;                                       // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExternalType;                                     // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          // 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0034 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpServerTimeBase.GetLastServerTime
// [0x00020000] 
struct UMcpServerTimeBase_execGetLastServerTime_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// [0x00120000] 
struct UMcpServerTimeBase_execOnQueryServerTimeComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      DateTimeStr;                                      // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Error;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeBase.QueryServerTime
// [0x00020000] 
struct UMcpServerTimeBase_execQueryServerTime_Params
{
};

// Function IpDrv.McpServerTimeBase.CreateInstance
// [0x00022003] 
struct UMcpServerTimeBase_execCreateInstance_Params
{
	class UMcpServerTimeBase*                          ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpServerTimeBaseClass;                           // 0x0004 (0x0004) [0x0000000000000000]               
	// class UMcpServerTimeBase*                       NewInstance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpServerTimeManager.GetLastServerTime
// [0x00020002] 
struct UMcpServerTimeManager_execGetLastServerTime_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// [0x00040003] 
struct UMcpServerTimeManager_execOnQueryServerTimeHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   TimeStr;                                          // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ResponseStr;                                      // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         Idx;                                              // 0x0030 (0x0004) [0x0000000000000000]               
	// uint32_t                                        bResult : 1;                                      // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpServerTimeManager.QueryServerTime
// [0x00020002] 
struct UMcpServerTimeManager_execQueryServerTime_Params
{
	// class FString                                   URL;                                              // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   ErrorStr;                                         // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bPending : 1;                                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// [0x00120000] 
struct UMcpUserManagerBase_execOnDeleteUserComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.DeleteUser
// [0x00020000] 
struct UMcpUserManagerBase_execDeleteUser_Params
{
	class FString                                      McpId;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.GetUsers
// [0x00420000] 
struct UMcpUserManagerBase_execGetUsers_Params
{
	class TArray<struct FMcpUserStatus>                Users;                                            // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// [0x00120000] 
struct UMcpUserManagerBase_execOnQueryUsersComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.QueryUsers
// [0x00420000] 
struct UMcpUserManagerBase_execQueryUsers_Params
{
	class TArray<class FString>                        McpIds;                                           // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.QueryUser
// [0x00024000] 
struct UMcpUserManagerBase_execQueryUser_Params
{
	class FString                                      McpId;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldUpdateLastActive : 1;                      // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// [0x00120000] 
struct UMcpUserManagerBase_execOnRegisterUserComplete_Params
{
	class FString                                      McpId;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UDID;                                             // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Error;                                            // 0x001C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// [0x00024000] 
struct UMcpUserManagerBase_execRegisterUserFacebook_Params
{
	class FString                                      FacebookId;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FacebookAuthToken;                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UDID;                                             // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExistingMcpAuth;                                  // 0x0024 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.RegisterUserEmail
// [0x00024000] 
struct UMcpUserManagerBase_execRegisterUserEmail_Params
{
	class FString                                      Email;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PasswordHash;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UDID;                                             // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExistingMcpAuth;                                  // 0x0024 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// [0x00024000] 
struct UMcpUserManagerBase_execRegisterUserGenerated_Params
{
	class FString                                      UDID;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExistingMcpAuth;                                  // 0x000C (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.CreateInstance
// [0x00022003] 
struct UMcpUserManagerBase_execCreateInstance_Params
{
	class UMcpUserManagerBase*                         ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UClass*                                   McpUserManagerBaseClass;                          // 0x0004 (0x0004) [0x0000000000000000]               
	// class UMcpUserManagerBase*                      NewInstance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnDeleteUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         Index;                                            // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         ResponseCode;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.DeleteUser
// [0x00020002] 
struct UMcpUserManager_execDeleteUser_Params
{
	class FString                                      McpId;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          // 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.GetUsers
// [0x00420002] 
struct UMcpUserManager_execGetUsers_Params
{
	class TArray<struct FMcpUserStatus>                Users;                                            // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnQueryUsersRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         Index;                                            // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                         ResponseCode;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                   JsonString;                                       // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserIndex;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                         JsonIndex;                                        // 0x002C (0x0004) [0x0000000000000000]               
	// class FString                                   McpId;                                            // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UDID;                                             // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   CountryCode;                                      // 0x0048 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   LastActiveDate;                                   // 0x0054 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bIsBanned : 1;                                    // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                        bWasFound : 1;                                    // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         DaysInactive;                                     // 0x0068 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.QueryUsers
// [0x00420002] 
struct UMcpUserManager_execQueryUsers_Params
{
	class TArray<class FString>                        McpIds;                                           // 0x0000 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          // 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                   JsonPayload;                                      // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         Index;                                            // 0x002C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnQueryUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         Index;                                            // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                         ResponseCode;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                   JsonString;                                       // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserIndex;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	// class FString                                   McpId;                                            // 0x002C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   UDID;                                             // 0x0038 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   CountryCode;                                      // 0x0044 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                   LastActiveDate;                                   // 0x0050 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bIsBanned : 1;                                    // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                        bWasFound : 1;                                    // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         DaysInactive;                                     // 0x0064 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.QueryUser
// [0x00024002] 
struct UMcpUserManager_execQueryUser_Params
{
	class FString                                      McpId;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldUpdateLastActive : 1;                      // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class FString                                   URL;                                              // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          // 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0020 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnRegisterUserFacebookRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnRegisterUserFacebookRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.McpUserManager.RegisterUserFacebook
// [0x00024002] 
struct UMcpUserManager_execRegisterUserFacebook_Params
{
	class FString                                      FacebookId;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FacebookAuthToken;                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UDID;                                             // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExistingMcpAuth;                                  // 0x0024 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          // 0x003C (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0040 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnRegisterUserEmailRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnRegisterUserEmailRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.McpUserManager.RegisterUserEmail
// [0x00024002] 
struct UMcpUserManager_execRegisterUserEmail_Params
{
	class FString                                      Email;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PasswordHash;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      UDID;                                             // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExistingMcpAuth;                                  // 0x0024 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          // 0x003C (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0040 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnRegisterUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         Index;                                            // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                         ResponseCode;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                         UserIndex;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                   McpId;                                            // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                        bWasFound : 1;                                    // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserManager.RegisterUserGenerated
// [0x00024002] 
struct UMcpUserManager_execRegisterUserGenerated_Params
{
	class FString                                      UDID;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ExistingMcpAuth;                                  // 0x000C (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          // 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                         AddAt;                                            // 0x0028 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execDebugDraw_Params
{
	class UCanvas*                                     Canvas;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// float                                           PosX;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	// float                                           PosY;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                         Idx;                                              // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execOnDownloadComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDidSucceed : 1;                                  // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         FoundIdx;                                         // 0x000C (0x0004) [0x0000000000000000]               
	// class TArray<uint8_t>                           JPEGData;                                         // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execDownloadNextImage_Params
{
	// int32_t                                         Idx;                                              // 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                         PendingDownloads;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execClearAllDownloads_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execClearDownloads_Params
{
	class TArray<class FString>                        URLs;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         Idx;                                              // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execGetNumPendingDownloads_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         Idx;                                              // 0x0004 (0x0004) [0x0000000000000000]               
	// int32_t                                         Count;                                            // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execRequestOnlineImages_Params
{
	class TArray<class FString>                        URLs;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         FoundIdx;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                         Idx;                                              // 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Params
{
	class FString                                      URL;                                              // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         FoundIdx;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded
// [0x00120000] 
struct UOnlineImageDownloaderWeb_execOnOnlineImageDownloaded_Params
{
	struct FOnlineImageDownload                        CachedEntry;                                      // 0x0000 (0x001C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] 
struct AWebConnection_execIsHanging_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020002] 
struct AWebConnection_execCleanup_Params
{
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020002] 
struct AWebConnection_execCheckRawBytes_Params
{
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020002] 
struct AWebConnection_execEndOfHeaders_Params
{
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020002] 
struct AWebConnection_execCreateResponseObject_Params
{
	// int32_t                                         I;                                                // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020002] 
struct AWebConnection_execProcessPost_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020002] 
struct AWebConnection_execProcessGet_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020002] 
struct AWebConnection_execProcessHead_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002] 
struct AWebConnection_execReceivedLine_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] 
struct AWebConnection_eventReceivedText_Params
{
	class FString                                      Text;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
	// class FString                                   S;                                                // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] 
struct AWebConnection_eventTimer_Params
{
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] 
struct AWebConnection_eventClosed_Params
{
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] 
struct AWebConnection_eventAccepted_Params
{
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
