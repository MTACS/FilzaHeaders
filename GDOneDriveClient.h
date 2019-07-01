//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDHTTPClient.h"

@class GDOAuth2Credential, GDOneDriveAPIToken, NSString;

__attribute__((visibility("hidden")))
@interface GDOneDriveClient : GDHTTPClient
{
    NSString *_defaultMetadataFields;
}

@property(retain, nonatomic) NSString *defaultMetadataFields; // @synthesize defaultMetadataFields=_defaultMetadataFields;
- (void).cxx_destruct;
- (void)appendChangesFromChangeListResponse:(id)arg1 toArray:(id)arg2;
- (void)getChangesWithURLParameters:(id)arg1 resultsArray:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getChangesWithURLParameters:(id)arg1 metadataFields:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getChangesFromLastKnownChangeID:(id)arg1 metadataFields:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getChangesFromLastKnownChangeID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getAllChangesWithStartChangeID:(id)arg1 metadataFields:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getAllChangesWithStartChangeID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)uploadFile:(id)arg1 toFileID:(id)arg2 uploadState:(id)arg3 uploadStateHandler:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)uploadFile:(id)arg1 destinationFilename:(id)arg2 mimeType:(id)arg3 parentFolderID:(id)arg4 uploadState:(id)arg5 uploadStateHandler:(CDUnknownBlockType)arg6 progress:(CDUnknownBlockType)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (_Bool)isDirectory:(id)arg1;
- (id)downloadFileID:(id)arg1 intoPath:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)moveFileID:(id)arg1 toParentID:(id)arg2 name:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)searchAtPath:(id)arg1 withText:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)__moveFileID:(id)arg1 toParentID:(id)arg2 name:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)__renameFileID:(id)arg1 name:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)__copyFileID:(id)arg1 toParentID:(id)arg2 driveID:(id)arg3 name:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)copyFileID:(id)arg1 toParentID:(id)arg2 name:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)deleteFileID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)appendMetadataFromFileListResponse:(id)arg1 toArray:(id)arg2;
- (void)getFileListWithQuery:(id)arg1 pageToken:(id)arg2 etag:(id)arg3 metadataFields:(id)arg4 resultsArray:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)getFileListWithQuery:(id)arg1 etag:(id)arg2 metadataFields:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getContentsOfFileID:(id)arg1 etag:(id)arg2 metadataFields:(id)arg3 offset:(long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)pathForFileID:(id)arg1 path:(id)arg2;
- (void)getContentsOfFileID:(id)arg1 etag:(id)arg2 metadataFields:(id)arg3 resultArray:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getContentsOfFileID:(id)arg1 etag:(id)arg2 metadataFields:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getContentsOfFileID:(id)arg1 etag:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getContentsOfFileID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateMetadataFileID:(id)arg1 withMetadata:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getSharedLinkMetadataFileID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMetadataForFileID:(id)arg1 etag:(id)arg2 metadataFields:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getMetadataForFileID:(id)arg1 etag:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getMetadataForFileID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)groupedMetadataFieldsSelectorForSelector:(id)arg1;
- (void)getAccountInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getAccessTokenWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)enqueueOperationWithURLRequest:(id)arg1 requiresAuthentication:(_Bool)arg2 shouldRetryBlock:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 configureOperationBlock:(CDUnknownBlockType)arg6;
- (void)createDirectory:(id)arg1 withParentID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)enqueueOperationWithMethod:(id)arg1 path:(id)arg2 urlParameters:(id)arg3 etag:(id)arg4 requiresAccessToken:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (_Bool)isAuthenticationFailureError:(id)arg1;
- (_Bool)authorizeRequest:(id)arg1;
- (id)enqueueOperationWithMethod:(id)arg1 path:(id)arg2 urlParameters:(id)arg3 etag:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (id)initWithClientManager:(id)arg1 credential:(id)arg2 baseURL:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) GDOneDriveAPIToken *apiToken; // @dynamic apiToken;
@property(retain) GDOAuth2Credential *credential; // @dynamic credential;

@end

