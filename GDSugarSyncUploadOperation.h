//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDParentOperation.h"

@class GDSugarSyncClient, GDSugarSyncMetadata, GDSugarSyncUploadState, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GDSugarSyncUploadOperation : GDParentOperation
{
    GDSugarSyncClient *_client;
    NSString *_sourcePath;
    NSString *_fileID;
    NSString *_parentVersionID;
    GDSugarSyncUploadState *_uploadState;
    CDUnknownBlockType _uploadStateHandler;
    CDUnknownBlockType _uploadProgressBlock;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    NSString *_fileVersionID;
    unsigned long long _fileSize;
    GDSugarSyncMetadata *_fileVersionMetadata;
    NSArray *_fileVersionHistory;
}

@property(retain, nonatomic) NSArray *fileVersionHistory; // @synthesize fileVersionHistory=_fileVersionHistory;
@property(retain, nonatomic) GDSugarSyncMetadata *fileVersionMetadata; // @synthesize fileVersionMetadata=_fileVersionMetadata;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileVersionID; // @synthesize fileVersionID=_fileVersionID;
@property(readonly, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(readonly, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadStateHandler; // @synthesize uploadStateHandler=_uploadStateHandler;
@property(retain, nonatomic) GDSugarSyncUploadState *uploadState; // @synthesize uploadState=_uploadState;
@property(copy, nonatomic) NSString *parentVersionID; // @synthesize parentVersionID=_parentVersionID;
@property(readonly, copy, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(readonly, copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(readonly, nonatomic) GDSugarSyncClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)getFileMetadata;
- (void)checkIfUploadConflictsWithParent;
- (void)commitUpload;
- (void)checkIfProgressHasBeenMadeOrFailWithError:(id)arg1;
- (void)checkUploadStateWithServer;
- (void)sendNextChunk;
- (void)createFileVersion;
- (void)nextUploadStep;
- (void)setUploadState:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)main;
- (id)initWithClient:(id)arg1 fromLocalPath:(id)arg2 toFileID:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

