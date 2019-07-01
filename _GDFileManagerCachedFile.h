//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _GDFileManagerCachedFile : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveFileSizeValue:(long long)arg1;
- (long long)primitiveFileSizeValue;
@property long long fileSizeValue;
- (id)objectID;

// Remaining properties
@property(retain, nonatomic) NSString *cacheDirectoryPath; // @dynamic cacheDirectoryPath;
@property(retain, nonatomic) NSString *cacheFilePath; // @dynamic cacheFilePath;
@property(retain, nonatomic) NSDate *downloadDate; // @dynamic downloadDate;
@property(retain, nonatomic) NSNumber *fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSDate *lastAccess; // @dynamic lastAccess;
@property(retain, nonatomic) NSString *metadataClassName; // @dynamic metadataClassName;
@property(retain, nonatomic) NSData *metadataJSONData; // @dynamic metadataJSONData;
@property(retain, nonatomic) NSString *sourceURLString; // @dynamic sourceURLString;
@property(retain, nonatomic) NSString *versionIdentifier; // @dynamic versionIdentifier;

@end
