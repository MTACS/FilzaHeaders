//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDClientManager.h"

@class GDDropboxAPIToken, UIViewController;

__attribute__((visibility("hidden")))
@interface GDDropboxClientManager : GDClientManager
{
    UIViewController *sfvc;
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

+ (Class)clientClass;
+ (Class)apiTokenClass;
@property(copy) CDUnknownBlockType failureCallback; // @synthesize failureCallback=_failureCallback;
@property(copy) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
- (void).cxx_destruct;
- (void)validateOAuthParameters:(id)arg1 apiToken:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)oauthParametersFromCallbackURL:(id)arg1 apiToken:(id *)arg2;
- (_Bool)handleOpenURL:(id)arg1;
- (void)linkUserID:(id)arg1 apiToken:(id)arg2 fromController:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setDefaultKey:(id)arg1 secret:(id)arg2 root:(id)arg3;

// Remaining properties
@property(retain, nonatomic) GDDropboxAPIToken *defaultAPIToken; // @dynamic defaultAPIToken;

@end

