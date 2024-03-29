//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDClientManager.h"

@class GDOneDriveAPIToken;

__attribute__((visibility("hidden")))
@interface GDOneDriveClientManager : GDClientManager
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

+ (Class)clientClass;
+ (Class)apiTokenClass;
@property(copy) CDUnknownBlockType failureCallback; // @synthesize failureCallback=_failureCallback;
@property(copy) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
- (void).cxx_destruct;
- (void)validateCredential:(id)arg1 apiToken:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)oauthCodeFromCallbackURL:(id)arg1 error:(id *)arg2;
- (void)linkUserID:(id)arg1 apiToken:(id)arg2 fromController:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setDefaultKey:(id)arg1 secret:(id)arg2;

// Remaining properties
@property(retain, nonatomic) GDOneDriveAPIToken *defaultAPIToken; // @dynamic defaultAPIToken;

@end

