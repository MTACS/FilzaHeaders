//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDRemoteFileService.h"

@class GDGoogleDriveClientManager;

__attribute__((visibility("hidden")))
@interface GDGoogleDriveFileService : GDRemoteFileService
{
}

+ (Class)fileServiceSessionClass;
+ (Class)clientManagerClass;
- (void)linkUserID:(id)arg1 apiToken:(id)arg2 fromController:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)name;
- (id)iconImage;
- (id)largeIconImage;
- (id)logoImage;
- (id)urlScheme;

// Remaining properties
@property(readonly, nonatomic) GDGoogleDriveClientManager *clientManager; // @dynamic clientManager;

@end
