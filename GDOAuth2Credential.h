//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDAccessTokenClientCredential.h"

@class AFOAuthCredential;

__attribute__((visibility("hidden")))
@interface GDOAuth2Credential : GDAccessTokenClientCredential
{
    AFOAuthCredential *_oauthCredential;
}

@property(readonly, nonatomic) AFOAuthCredential *oauthCredential; // @synthesize oauthCredential=_oauthCredential;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessTokenExpirationDate;
- (_Bool)canBeRenewed;
- (_Bool)isAccessTokenValid;
- (_Bool)isValid;
- (id)alias;
- (id)initWithOAuthCredential:(id)arg1 userID:(id)arg2 apiToken:(id)arg3;
- (id)initWithUserID:(id)arg1 apiToken:(id)arg2;

@end

