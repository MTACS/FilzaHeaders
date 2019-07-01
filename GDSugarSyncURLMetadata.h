//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDURLMetadata.h"

@class GDSugarSyncMetadata, NSDate, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GDSugarSyncURLMetadata : NSObject <GDURLMetadata>
{
    GDSugarSyncMetadata *_metadata;
}

@property(readonly, nonatomic) GDSugarSyncMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isSymbolicLink;
@property(readonly, nonatomic) NSDictionary *rawData;
@property(readonly, nonatomic) NSDate *modifiedDate;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, copy, nonatomic) NSString *fileVersionIdentifier;
@property(readonly, nonatomic) long long fileSize;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
- (id)cacheableMetadata;
- (id)detailsInformation;
- (id)jsonDictionary;
- (id)initWithSugarSyncMetadata:(id)arg1 fileVersionID:(id)arg2;
- (id)initWithSugarSyncMetadata:(id)arg1;
- (id)initWithMetadataDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURL *parentUrl; // @dynamic parentUrl;
@property(readonly) Class superclass;

@end

