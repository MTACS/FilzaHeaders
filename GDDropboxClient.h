//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDHTTPClient.h"

@class GDDropboxAPIToken, GDDropboxCredential, NSString;

__attribute__((visibility("hidden")))
@interface GDDropboxClient : GDHTTPClient
{
}

- (id)uploadFile:(id)arg1 toDropboxPath:(id)arg2 parentRev:(id)arg3 uploadState:(id)arg4 uploadStateHandler:(CDUnknownBlockType)arg5 progress:(CDUnknownBlockType)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)downloadFile:(id)arg1 intoPath:(id)arg2 withParameters:(id)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)downloadFile:(id)arg1 intoPath:(id)arg2 atRev:(id)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)downloadFile:(id)arg1 intoPath:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)copyOrMove:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)movePath:(id)arg1 toPath:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)copyPath:(id)arg1 toPath:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)createSharedLink:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)createDirectory:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)deletePath:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getRevisionHistoryForFile:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMetadataForPath:(id)arg1 atRev:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getMetadataForPath:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getSharedLinkMetadataForPath:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMetadataForPath:(id)arg1 withParameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)searchAtPath:(id)arg1 withtext:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getContentsForPath:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getMoreContentsForPath:(id)arg1 cursor:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getAccountInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getAccessTokenWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)enqueueDropboxRequestOperationWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (_Bool)isAuthenticationFailureError:(id)arg1;
@property(readonly, copy, nonatomic) NSString *root;
- (id)initWithClientManager:(id)arg1 credential:(id)arg2 baseURL:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) GDDropboxAPIToken *apiToken; // @dynamic apiToken;
@property(retain) GDDropboxCredential *credential; // @dynamic credential;

@end

