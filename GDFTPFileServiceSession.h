//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDRemoteFileServiceSession.h"

@class GDFTPClient;

__attribute__((visibility("hidden")))
@interface GDFTPFileServiceSession : GDRemoteFileServiceSession
{
}

+ (id)baseURLForFileService:(id)arg1 client:(id)arg2;
- (void)addMetadata:(id)arg1 parentURL:(id)arg2 toCache:(id)arg3 continuation:(CDUnknownBlockType)arg4;
- (id)clientMetadataWithCachedMetadata:(id)arg1 parentURL:(id)arg2;
- (id)clientMetadataForFTPMetadata:(id)arg1;
- (id)canonicalURLForMetadata:(id)arg1;
- (id)canonicalURLByAppendingPath:(id)arg1 toURL:(id)arg2;
- (id)webDAVPathFromCanonicalURL:(id)arg1;
- (id)normalisedPathForPath:(id)arg1;
- (id)resumeUploadWithUploadState:(id)arg1 fromFileURL:(id)arg2 uploadStateHandler:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)uploadFileURL:(id)arg1 filename:(id)arg2 mimeType:(id)arg3 toParentFolderURL:(id)arg4 uploadStateHandler:(CDUnknownBlockType)arg5 progress:(CDUnknownBlockType)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)uploadFileURL:(id)arg1 mimeType:(id)arg2 toDestinationURL:(id)arg3 parentVersionID:(id)arg4 internalUploadState:(id)arg5 uploadStateHandler:(CDUnknownBlockType)arg6 progress:(CDUnknownBlockType)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (id)downloadURL:(id)arg1 intoFileURL:(id)arg2 fileVersion:(id)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)moveFileAtURL:(id)arg1 toParentURL:(id)arg2 name:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)copyFileAtURL:(id)arg1 toParentURL:(id)arg2 name:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)deleteURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getContentsOfDirectoryAtURL:(id)arg1 metadataCache:(id)arg2 cachedMetadata:(id)arg3 cachedContents:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getMetadataForURL:(id)arg1 metadataCache:(id)arg2 cachedMetadata:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setFilePermissionsForURL:(id)arg1 withPermissions:(unsigned long long)arg2 recursive:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)createDirectoryWithName:(id)arg1 parentURL:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)searchAtURL:(id)arg1 withName:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)userDescription;
- (id)alias;
- (void)validateAccessWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

// Remaining properties
@property(retain, nonatomic) GDFTPClient *client; // @dynamic client;

@end

