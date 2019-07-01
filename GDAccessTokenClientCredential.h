//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDClientCredential.h"

@class NSDate, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface GDAccessTokenClientCredential : GDClientCredential
{
    NSObject<OS_dispatch_queue> *_private_queue;
    GDAccessTokenClientCredential *_refreshedCredential;
}

@property(retain, nonatomic) GDAccessTokenClientCredential *refreshedCredential; // @synthesize refreshedCredential=_refreshedCredential;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *private_queue; // @synthesize private_queue=_private_queue;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (void)getRenewedAccessTokenUsingClient:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getRenewedAccessTokenUsingClient:(id)arg1 forced:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (_Bool)isAccessTokenValid;
- (void)_commonInitGDAccessTokenClientCredential;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 apiToken:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSDate *accessTokenExpirationDate; // @dynamic accessTokenExpirationDate;

@end

