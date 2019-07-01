//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDParentOperation.h"

@class GDBoxClient, GDBoxMetadata, GDBoxUploadState, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GDBoxUploadOperation : GDParentOperation
{
    GDBoxClient *_client;
    NSString *_sourcePath;
    NSString *_destinationFileID;
    NSString *_parentFileID;
    NSString *_parentRevisionID;
    long long _chunkSize;
    GDBoxUploadState *_uploadState;
    CDUnknownBlockType _uploadStateHandler;
    CDUnknownBlockType _uploadProgressBlock;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    GDBoxMetadata *_fileMetadata;
    NSArray *_fileVersionHistory;
    unsigned long long _fileSize;
    NSString *_uploadedMD5;
    NSString *_revisionID;
}

@property(retain, nonatomic) NSString *revisionID; // @synthesize revisionID=_revisionID;
@property(retain, nonatomic) NSString *uploadedMD5; // @synthesize uploadedMD5=_uploadedMD5;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSArray *fileVersionHistory; // @synthesize fileVersionHistory=_fileVersionHistory;
@property(retain, nonatomic) GDBoxMetadata *fileMetadata; // @synthesize fileMetadata=_fileMetadata;
@property(readonly, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(readonly, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadStateHandler; // @synthesize uploadStateHandler=_uploadStateHandler;
@property(retain, nonatomic) GDBoxUploadState *uploadState; // @synthesize uploadState=_uploadState;
@property(nonatomic) long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(copy, nonatomic) NSString *parentRevisionID; // @synthesize parentRevisionID=_parentRevisionID;
@property(copy, nonatomic) NSString *parentFileID; // @synthesize parentFileID=_parentFileID;
@property(copy, nonatomic) NSString *destinationFileID; // @synthesize destinationFileID=_destinationFileID;
@property(readonly, copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(readonly, nonatomic) GDBoxClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *metadataFields;
@property(readonly, nonatomic) NSString *uploadSessionURI;
- (void)getFileMetadata;
- (void)createUploadSession;
- (void)nextUploadStep;
- (void)main;
- (void)setUploadState:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)createNewFileWithFilename:(id)arg1 mimeType:(id)arg2 parentFolderID:(id)arg3;
- (void)createNewFileWithFilename:(id)arg1 parentFolderID:(id)arg2;
- (id)initWithClient:(id)arg1 fromLocalPath:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end
