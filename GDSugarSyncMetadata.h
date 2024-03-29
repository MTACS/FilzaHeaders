//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDDictionaryBackedObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface GDSugarSyncMetadata : GDDictionaryBackedObject
{
}

+ (id)objectIDFromObjectURL:(id)arg1;
@property(readonly, nonatomic) long long storedFileSize;
@property(readonly, nonatomic) long long fileSize;
@property(readonly, nonatomic, getter=isFileDataAvailableOnServer) _Bool fileDataAvailableOnServer;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
- (id)detailsInformation;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, nonatomic) NSDate *modifiedDate;
@property(readonly, copy, nonatomic) NSString *lastModifiedString;
@property(readonly, copy, nonatomic) NSString *displayName;

@end

