//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDDictionaryBackedObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GDSugarSyncUploadState : GDDictionaryBackedObject
{
}

@property(readonly, nonatomic) long long offset;
@property(readonly, copy, nonatomic) NSString *fileVersionID;
@property(readonly, copy, nonatomic) NSString *fileID;
- (id)initWithFileID:(id)arg1 fileVersionID:(id)arg2 offset:(unsigned long long)arg3;

@end

