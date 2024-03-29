//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class GDAPIToken, NSString;

__attribute__((visibility("hidden")))
@interface GDClientCredential : NSObject <NSCoding>
{
    GDAPIToken *_apiToken;
    NSString *_userID;
    NSString *_displayName;
    NSString *_apiTokenKey;
    NSString *_apiTokenClassName;
}

@property(readonly, copy, nonatomic) NSString *apiTokenClassName; // @synthesize apiTokenClassName=_apiTokenClassName;
@property(readonly, copy, nonatomic) NSString *apiTokenKey; // @synthesize apiTokenKey=_apiTokenKey;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)updateDisplayName:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) GDAPIToken *apiToken; // @synthesize apiToken=_apiToken;
- (long long)compare:(id)arg1;
- (_Bool)canBeRenewed;
- (_Bool)isValid;
- (id)initWithUserID:(id)arg1 apiToken:(id)arg2;

@end

