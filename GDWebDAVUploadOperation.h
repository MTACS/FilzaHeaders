//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDParentOperation.h"

@class GDWebDAVClient, NSString;

__attribute__((visibility("hidden")))
@interface GDWebDAVUploadOperation : GDParentOperation
{
    _Bool _uploadComplete;
    GDWebDAVClient *_client;
    NSString *_sourcePath;
    NSString *_destinationPath;
    NSString *_mimeType;
    CDUnknownBlockType _uploadProgressBlock;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    unsigned long long _fileSize;
}

@property(nonatomic, getter=isUploadComplete) _Bool uploadComplete; // @synthesize uploadComplete=_uploadComplete;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(readonly, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(readonly, copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(readonly, nonatomic) GDWebDAVClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)getFileMetadata;
- (void)uploadFile;
- (void)nextUploadStep;
- (void)main;
- (id)initWithClient:(id)arg1 fromLocalPath:(id)arg2 toWebDAVPath:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

