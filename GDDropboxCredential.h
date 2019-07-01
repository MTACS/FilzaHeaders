//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDClientCredential.h"

@class GDDropboxAPIToken, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GDDropboxCredential : GDClientCredential
{
    _Bool _isOauth2;
    NSString *_authorisationHeader;
    NSDictionary *_oauthParameters;
}

@property(readonly, copy, nonatomic) NSDictionary *oauthParameters; // @synthesize oauthParameters=_oauthParameters;
@property(readonly, nonatomic) _Bool isOauth2; // @synthesize isOauth2=_isOauth2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *authorisationHeader; // @synthesize authorisationHeader=_authorisationHeader;
- (void)upgradeToOauth2:(id)arg1;
@property(readonly, copy, nonatomic) NSString *root;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)alias;
- (id)initWithUserID:(id)arg1 apiToken:(id)arg2 oauth2Parameters:(id)arg3;
- (id)initWithUserID:(id)arg1 apiToken:(id)arg2 oauthParameters:(id)arg3;
- (id)initWithUserID:(id)arg1 apiToken:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) GDDropboxAPIToken *apiToken; // @dynamic apiToken;

@end

