//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPClient.h"

#import "GDClient.h"

@class GDAPIToken, GDClientCredential, GDClientManager, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface GDHTTPClient : AFHTTPClient <GDClient>
{
    _Bool _requestsIgnoreCacheByDefault;
    GDClientManager *_clientManager;
    GDClientCredential *_credential;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(nonatomic) _Bool requestsIgnoreCacheByDefault; // @synthesize requestsIgnoreCacheByDefault=_requestsIgnoreCacheByDefault;
@property(retain) GDClientCredential *credential; // @synthesize credential=_credential;
@property(readonly, nonatomic) GDClientManager *clientManager; // @synthesize clientManager=_clientManager;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic) GDAPIToken *apiToken;
- (id)httpErrorWithErrorDomain:(id)arg1 fromAFNetworkingError:(id)arg2 errorDetails:(id)arg3;
- (id)httpErrorWithErrorDomain:(id)arg1 fromAFNetworkingError:(id)arg2;
- (_Bool)isAuthenticationFailureError:(id)arg1;
- (_Bool)authorizeRequest:(id)arg1;
- (void)getAccessTokenWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)enqueueOperationWithURLRequest:(id)arg1 requiresAuthentication:(_Bool)arg2 shouldRetryBlock:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 configureOperationBlock:(CDUnknownBlockType)arg6;
- (id)enqueueOperationWithURLRequest:(id)arg1 requiresAuthentication:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (void)enqueueHTTPRequestOperation:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userID;
- (id)initWithClientManager:(id)arg1 credential:(id)arg2 baseURL:(id)arg3;
- (id)initWithClientManager:(id)arg1 credential:(id)arg2;
- (id)initWithClientManager:(id)arg1 userID:(id)arg2;
- (id)initWithClientManager:(id)arg1;
- (id)initWithBaseURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
