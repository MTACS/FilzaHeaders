//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDParentOperation.h"

@class GDSugarSyncClient, GDSugarSyncMetadata, NSString;

__attribute__((visibility("hidden")))
@interface GDSugarSyncDownloadOperation : GDParentOperation
{
    GDSugarSyncClient *_client;
    NSString *_localPath;
    NSString *_fileID;
    NSString *_fileVersionID;
    CDUnknownBlockType _downloadProgressBlock;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    GDSugarSyncMetadata *_fileMetadata;
    long long _fileSize;
}

@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) GDSugarSyncMetadata *fileMetadata; // @synthesize fileMetadata=_fileMetadata;
@property(readonly, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(readonly, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(retain, nonatomic) NSString *fileVersionID; // @synthesize fileVersionID=_fileVersionID;
@property(readonly, copy, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(readonly, copy, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(readonly, nonatomic) GDSugarSyncClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)downloadFile;
- (void)getLatestFileVersion;
- (void)getFileMetadata;
- (void)nextDownloadStep;
- (void)main;
- (id)initWithClient:(id)arg1 fileID:(id)arg2 toLocalPath:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

