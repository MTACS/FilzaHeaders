//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface CkoFtp2 : NSObject
{
    void *m_eventCallback;
    void *m_obj;
}

- (_Bool)UnlockComponent:(id)arg1;
- (id)SystAsync;
- (id)Syst;
- (id)SyncRemoteTree2Async:(id)arg1 mode:(id)arg2 bDescend:(_Bool)arg3 bPreviewOnly:(_Bool)arg4;
- (_Bool)SyncRemoteTree2:(id)arg1 mode:(id)arg2 bDescend:(_Bool)arg3 bPreviewOnly:(_Bool)arg4;
- (id)SyncRemoteTreeAsync:(id)arg1 mode:(id)arg2;
- (_Bool)SyncRemoteTree:(id)arg1 mode:(id)arg2;
- (id)SyncLocalTreeAsync:(id)arg1 mode:(id)arg2;
- (_Bool)SyncLocalTree:(id)arg1 mode:(id)arg2;
- (id)SyncLocalDirAsync:(id)arg1 mode:(id)arg2;
- (_Bool)SyncLocalDir:(id)arg1 mode:(id)arg2;
- (id)SyncDeleteRemoteAsync:(id)arg1;
- (_Bool)SyncDeleteRemote:(id)arg1;
- (id)StatAsync;
- (id)Stat;
- (void)SleepMs:(id)arg1;
- (id)SiteAsync:(id)arg1;
- (_Bool)Site:(id)arg1;
- (id)SetTypeBinaryAsync;
- (_Bool)SetTypeBinary;
- (id)SetTypeAsciiAsync;
- (_Bool)SetTypeAscii;
- (_Bool)SetSslClientCertPfx:(id)arg1 pfxPassword:(id)arg2;
- (_Bool)SetSslClientCertPem:(id)arg1 pemPassword:(id)arg2;
- (_Bool)SetSslClientCert:(id)arg1;
- (void)SetSslCertRequirement:(id)arg1 value:(id)arg2;
- (id)SetRemoteFileDtAsync:(id)arg1 remoteFilename:(id)arg2;
- (_Bool)SetRemoteFileDt:(id)arg1 remoteFilename:(id)arg2;
- (id)SetRemoteFileDateTimeStrAsync:(id)arg1 remoteFilename:(id)arg2;
- (_Bool)SetRemoteFileDateTimeStr:(id)arg1 remoteFilename:(id)arg2;
- (_Bool)SetRemoteFileDateTime:(id)arg1 remoteFilename:(id)arg2;
- (void)SetOldestDateStr:(id)arg1;
- (void)SetOldestDate:(id)arg1;
- (id)SetModeZAsync;
- (_Bool)SetModeZ;
- (id)SendCommandAsync:(id)arg1;
- (id)SendCommand:(id)arg1;
- (_Bool)SaveLastError:(id)arg1;
- (id)RenameRemoteFileAsync:(id)arg1 newFilename:(id)arg2;
- (_Bool)RenameRemoteFile:(id)arg1 newFilename:(id)arg2;
- (id)RemoveRemoteDirAsync:(id)arg1;
- (_Bool)RemoveRemoteDir:(id)arg1;
- (id)QuoteAsync:(id)arg1;
- (_Bool)Quote:(id)arg1;
- (id)PutTreeAsync:(id)arg1;
- (_Bool)PutTree:(id)arg1;
- (id)PutPlanAsync:(id)arg1 planLogFilePath:(id)arg2;
- (_Bool)PutPlan:(id)arg1 planLogFilePath:(id)arg2;
- (id)PutFileFromTextDataAsync:(id)arg1 textData:(id)arg2 charset:(id)arg3;
- (_Bool)PutFileFromTextData:(id)arg1 textData:(id)arg2 charset:(id)arg3;
- (id)PutFileFromBinaryDataAsync:(id)arg1 binaryData:(id)arg2;
- (_Bool)PutFileFromBinaryData:(id)arg1 binaryData:(id)arg2;
- (id)PutFileAsync:(id)arg1 remoteFilename:(id)arg2;
- (_Bool)PutFile:(id)arg1 remoteFilename:(id)arg2;
- (id)NoopAsync;
- (_Bool)Noop;
- (id)NlstXmlAsync:(id)arg1;
- (id)NlstXml:(id)arg1;
- (id)MPutFilesAsync:(id)arg1;
- (id)MPutFiles:(id)arg1;
- (id)MGetFilesAsync:(id)arg1 localDir:(id)arg2;
- (id)MGetFiles:(id)arg1 localDir:(id)arg2;
- (id)LoginAfterConnectOnlyAsync;
- (_Bool)LoginAfterConnectOnly;
- (_Bool)IsUnlocked;
- (id)GetXmlDirListingAsync:(id)arg1;
- (id)GetXmlDirListing:(id)arg1;
- (id)GetTextDirListingAsync:(id)arg1;
- (id)GetTextDirListing:(id)arg1;
- (id)GetSslServerCert;
- (id)GetSizeStrByNameAsync:(id)arg1;
- (id)GetSizeStrByName:(id)arg1;
- (id)GetSizeStrAsync:(id)arg1;
- (id)GetSizeStr:(id)arg1;
- (id)GetSizeByName64:(id)arg1;
- (id)GetSizeByNameAsync:(id)arg1;
- (id)GetSizeByName:(id)arg1;
- (id)GetSize64:(id)arg1;
- (id)GetSizeAsync:(id)arg1;
- (id)GetSize:(id)arg1;
- (id)GetRemoteFileTextDataAsync:(id)arg1;
- (id)GetRemoteFileTextData:(id)arg1;
- (id)GetRemoteFileTextCAsync:(id)arg1 charset:(id)arg2;
- (id)GetRemoteFileTextC:(id)arg1 charset:(id)arg2;
- (id)GetRemoteFileBinaryDataAsync:(id)arg1;
- (id)GetRemoteFileBinaryData:(id)arg1;
- (id)GetPermissionsAsync:(id)arg1;
- (id)GetPermissions:(id)arg1;
- (id)GetPermTypeAsync:(id)arg1;
- (id)GetPermType:(id)arg1;
- (id)GetOwnerAsync:(id)arg1;
- (id)GetOwner:(id)arg1;
- (id)GetLastModifiedTimeStrAsync:(id)arg1;
- (id)GetLastModifiedTimeStr:(id)arg1;
- (id)GetLastModifiedTimeByNameStrAsync:(id)arg1;
- (id)GetLastModifiedTimeByNameStr:(id)arg1;
- (id)GetLastModifiedTimeByName:(id)arg1;
- (id)GetLastModifiedTime:(id)arg1;
- (id)GetLastModDtByNameAsync:(id)arg1;
- (id)GetLastModDtByName:(id)arg1;
- (id)GetLastModDtAsync:(id)arg1;
- (id)GetLastModDt:(id)arg1;
- (id)GetLastAccessTimeStrAsync:(id)arg1;
- (id)GetLastAccessTimeStr:(id)arg1;
- (id)GetLastAccessTimeByNameStrAsync:(id)arg1;
- (id)GetLastAccessTimeByNameStr:(id)arg1;
- (id)GetLastAccessTimeByName:(id)arg1;
- (id)GetLastAccessTime:(id)arg1;
- (id)GetLastAccessDtByNameAsync:(id)arg1;
- (id)GetLastAccessDtByName:(id)arg1;
- (id)GetLastAccessDtAsync:(id)arg1;
- (id)GetLastAccessDt:(id)arg1;
- (id)GetIsSymbolicLinkAsync:(id)arg1;
- (_Bool)GetIsSymbolicLink:(id)arg1;
- (id)GetIsDirectoryAsync:(id)arg1;
- (_Bool)GetIsDirectory:(id)arg1;
- (id)GetGroupAsync:(id)arg1;
- (id)GetGroup:(id)arg1;
- (id)GetFilenameAsync:(id)arg1;
- (id)GetFilename:(id)arg1;
- (id)GetFileAsync:(id)arg1 localPath:(id)arg2;
- (_Bool)GetFile:(id)arg1 localPath:(id)arg2;
- (id)GetDirCountAsync;
- (id)GetDirCount;
- (id)GetCurrentRemoteDirAsync;
- (id)GetCurrentRemoteDir;
- (id)GetCreateTimeStrAsync:(id)arg1;
- (id)GetCreateTimeStr:(id)arg1;
- (id)GetCreateTimeByNameStrAsync:(id)arg1;
- (id)GetCreateTimeByNameStr:(id)arg1;
- (id)GetCreateTimeByName:(id)arg1;
- (id)GetCreateTime:(id)arg1;
- (id)GetCreateDtByNameAsync:(id)arg1;
- (id)GetCreateDtByName:(id)arg1;
- (id)GetCreateDtAsync:(id)arg1;
- (id)GetCreateDt:(id)arg1;
- (id)FeatAsync;
- (id)Feat;
- (id)DownloadTreeAsync:(id)arg1;
- (_Bool)DownloadTree:(id)arg1;
- (id)DisconnectAsync;
- (_Bool)Disconnect;
- (id)DirTreeXmlAsync;
- (id)DirTreeXml;
- (id)DetermineSettings;
- (id)DetermineProxyMethod;
- (id)DeleteTreeAsync;
- (_Bool)DeleteTree;
- (id)DeleteRemoteFileAsync:(id)arg1;
- (_Bool)DeleteRemoteFile:(id)arg1;
- (id)DeleteMatchingAsync:(id)arg1;
- (id)DeleteMatching:(id)arg1;
- (id)CreateRemoteDirAsync:(id)arg1;
- (_Bool)CreateRemoteDir:(id)arg1;
- (id)CreatePlanAsync:(id)arg1;
- (id)CreatePlan:(id)arg1;
- (id)ConvertToTlsAsync;
- (_Bool)ConvertToTls;
- (id)ConnectOnlyAsync;
- (_Bool)ConnectOnly;
- (id)ConnectAsync;
- (_Bool)Connect;
- (void)ClearSessionLog;
- (void)ClearDirCache;
- (id)ClearControlChannelAsync;
- (_Bool)ClearControlChannel;
- (id)CheckConnectionAsync;
- (_Bool)CheckConnection;
- (id)ChangeRemoteDirAsync:(id)arg1;
- (_Bool)ChangeRemoteDir:(id)arg1;
- (_Bool)AsyncPutFileStart:(id)arg1 remoteFilename:(id)arg2;
- (_Bool)AsyncGetFileStart:(id)arg1 localFilename:(id)arg2;
- (_Bool)AsyncAppendFileStart:(id)arg1 remoteFilename:(id)arg2;
- (void)AsyncAbort;
- (id)AppendFileFromTextDataAsync:(id)arg1 textData:(id)arg2 charset:(id)arg3;
- (_Bool)AppendFileFromTextData:(id)arg1 textData:(id)arg2 charset:(id)arg3;
- (id)AppendFileFromBinaryDataAsync:(id)arg1 binaryData:(id)arg2;
- (_Bool)AppendFileFromBinaryData:(id)arg1 binaryData:(id)arg2;
- (id)AppendFileAsync:(id)arg1 remoteFilename:(id)arg2;
- (_Bool)AppendFile:(id)arg1 remoteFilename:(id)arg2;
@property(readonly, copy, nonatomic) NSString *Version;
@property(nonatomic) _Bool VerboseLogging;
@property(copy, nonatomic) NSString *Username;
@property(nonatomic) _Bool UseEpsv;
@property(readonly, copy, nonatomic) NSNumber *UploadTransferRate;
@property(readonly, copy, nonatomic) NSString *TlsVersion;
@property(readonly, copy, nonatomic) NSString *TlsCipherSuite;
@property(copy, nonatomic) NSString *SyncedFiles;
@property(readonly, copy, nonatomic) NSString *SyncPreview;
@property(copy, nonatomic) NSString *SyncMustNotMatch;
@property(copy, nonatomic) NSString *SyncMustMatch;
@property(readonly, nonatomic) _Bool SslServerCertVerified;
@property(copy, nonatomic) NSString *SslProtocol;
@property(copy, nonatomic) NSString *SslAllowedCiphers;
@property(nonatomic) _Bool Ssl;
@property(copy, nonatomic) NSNumber *SocksVersion;
@property(copy, nonatomic) NSString *SocksUsername;
@property(copy, nonatomic) NSNumber *SocksPort;
@property(copy, nonatomic) NSString *SocksPassword;
@property(copy, nonatomic) NSString *SocksHostname;
@property(copy, nonatomic) NSNumber *SoSndBuf;
@property(copy, nonatomic) NSNumber *SoRcvBuf;
@property(nonatomic) _Bool SkipFinalReply;
@property(readonly, copy, nonatomic) NSString *SessionLog;
@property(copy, nonatomic) NSNumber *SendBufferSize;
@property(nonatomic) _Bool RestartNext;
@property(nonatomic) _Bool RequireSslCertVerify;
@property(copy, nonatomic) NSNumber *ReadTimeout;
@property(copy, nonatomic) NSString *ProxyUsername;
@property(copy, nonatomic) NSNumber *ProxyPort;
@property(copy, nonatomic) NSString *ProxyPassword;
@property(copy, nonatomic) NSNumber *ProxyMethod;
@property(copy, nonatomic) NSString *ProxyHostname;
@property(copy, nonatomic) NSNumber *ProgressMonSize64;
@property(copy, nonatomic) NSNumber *ProgressMonSize;
@property(nonatomic) _Bool PreferNlst;
@property(nonatomic) _Bool PreferIpv6;
@property(copy, nonatomic) NSNumber *Port;
@property(copy, nonatomic) NSNumber *PercentDoneScale;
@property(copy, nonatomic) NSString *Password;
@property(nonatomic) _Bool PassiveUseHostAddr;
@property(nonatomic) _Bool Passive;
@property(readonly, nonatomic) _Bool PartialTransfer;
@property(readonly, copy, nonatomic) NSNumber *NumFilesAndDirs;
@property(readonly, nonatomic) _Bool LoginVerified;
@property(copy, nonatomic) NSString *ListPattern;
@property(readonly, copy, nonatomic) NSString *LastReply;
@property(nonatomic) _Bool LastMethodSuccess;
@property(readonly, copy, nonatomic) NSString *LastErrorXml;
@property(readonly, copy, nonatomic) NSString *LastErrorText;
@property(readonly, copy, nonatomic) NSString *LastErrorHtml;
@property(nonatomic) _Bool KeepSessionLog;
@property(readonly, nonatomic) _Bool IsConnected;
@property(copy, nonatomic) NSNumber *IdleTimeoutMs;
@property(copy, nonatomic) NSString *HttpProxyUsername;
@property(copy, nonatomic) NSNumber *HttpProxyPort;
@property(copy, nonatomic) NSString *HttpProxyPassword;
@property(copy, nonatomic) NSString *HttpProxyHostname;
@property(copy, nonatomic) NSString *HttpProxyDomain;
@property(copy, nonatomic) NSString *HttpProxyAuthMethod;
@property(copy, nonatomic) NSString *Hostname;
@property(copy, nonatomic) NSNumber *HeartbeatMs;
@property(readonly, nonatomic) _Bool HasModeZ;
@property(readonly, copy, nonatomic) NSString *Greeting;
@property(copy, nonatomic) NSString *ForcePortIpAddress;
@property(readonly, copy, nonatomic) NSNumber *DownloadTransferRate;
@property(copy, nonatomic) NSString *DirListingCharset;
@property(copy, nonatomic) NSString *DebugLogFilePath;
@property(copy, nonatomic) NSString *DataProtection;
@property(copy, nonatomic) NSNumber *CrlfMode;
@property(readonly, nonatomic) _Bool ConnectVerified;
@property(copy, nonatomic) NSNumber *ConnectTimeout;
@property(readonly, copy, nonatomic) NSNumber *ConnectFailReason;
@property(copy, nonatomic) NSString *CommandCharset;
@property(copy, nonatomic) NSString *ClientIpAddress;
@property(copy, nonatomic) NSNumber *BandwidthThrottleUp;
@property(copy, nonatomic) NSNumber *BandwidthThrottleDown;
@property(nonatomic) _Bool AutoXcrc;
@property(nonatomic) _Bool AutoSyst;
@property(nonatomic) _Bool AutoSetUseEpsv;
@property(nonatomic) _Bool AutoOptsUtf8;
@property(nonatomic) _Bool AutoGetSizeForProgress;
@property(nonatomic) _Bool AutoFix;
@property(nonatomic) _Bool AutoFeat;
@property(nonatomic) _Bool AuthTls;
@property(nonatomic) _Bool AuthSsl;
@property(readonly, nonatomic) _Bool AsyncSuccess;
@property(readonly, copy, nonatomic) NSNumber *AsyncPercentDone;
@property(readonly, copy, nonatomic) NSString *AsyncLog;
@property(readonly, nonatomic) _Bool AsyncFinished;
@property(readonly, copy, nonatomic) NSString *AsyncBytesSentStr;
@property(readonly, copy, nonatomic) NSNumber *AsyncBytesSent64;
@property(readonly, copy, nonatomic) NSNumber *AsyncBytesSent;
@property(readonly, copy, nonatomic) NSString *AsyncBytesReceivedStr;
@property(readonly, copy, nonatomic) NSNumber *AsyncBytesReceived64;
@property(readonly, copy, nonatomic) NSNumber *AsyncBytesReceived;
@property(nonatomic) _Bool AllowMlsd;
@property(copy, nonatomic) NSNumber *AllocateSize;
@property(copy, nonatomic) NSNumber *ActivePortRangeStart;
@property(copy, nonatomic) NSNumber *ActivePortRangeEnd;
@property(copy, nonatomic) NSString *Account;
- (void)setEventCallbackObject:(id)arg1;
- (id)stringWithUtf8:(const char *)arg1;
- (void)clearCppImplObj;
- (void)setCppImplObj:(void *)arg1;
- (void *)CppImplObj;
- (void)dispose;
- (void)dealloc;
- (id)init;

@end

