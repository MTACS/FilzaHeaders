//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDAPIToken.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GDDropboxAPIToken : GDAPIToken
{
    NSString *_root;
}

+ (id)registerTokenWithKey:(id)arg1 secret:(id)arg2 root:(id)arg3;
@property(readonly, copy, nonatomic) NSString *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKey:(id)arg1 secret:(id)arg2 root:(id)arg3;
- (id)initWithKey:(id)arg1 secret:(id)arg2;

@end

