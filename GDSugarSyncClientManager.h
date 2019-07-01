//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDClientManager.h"

@class GDSugarSyncAPIToken;

__attribute__((visibility("hidden")))
@interface GDSugarSyncClientManager : GDClientManager
{
}

+ (Class)clientClass;
+ (Class)apiTokenClass;
- (void)generateAccessTokenWithClient:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)validateUsername:(id)arg1 password:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)linkUserID:(id)arg1 apiToken:(id)arg2 fromController:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setDefaultKey:(id)arg1 secret:(id)arg2 appID:(id)arg3;

// Remaining properties
@property(retain, nonatomic) GDSugarSyncAPIToken *defaultAPIToken; // @dynamic defaultAPIToken;

@end

