//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDURLMetadata.h"

@class GDSFTPMetadata, NSDate, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GDSFTPURLMetadata : NSObject <GDURLMetadata>
{
    NSString *_SFTPPath;
    GDSFTPMetadata *_metadata;
}

@property(readonly, nonatomic) GDSFTPMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *SFTPPath; // @synthesize SFTPPath=_SFTPPath;
- (void).cxx_destruct;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *modifiedDate;
- (id)webDAVPath;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSString *fileVersionIdentifier;
@property(readonly, nonatomic) long long fileSize;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
@property(readonly, nonatomic) NSDictionary *rawData;
- (id)cacheableMetadata;
- (id)jsonDictionary;
@property(readonly, nonatomic) _Bool isSymbolicLink;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)detailsInformation;
- (id)initWithSFTPMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURL *parentUrl; // @dynamic parentUrl;
@property(readonly) Class superclass;

@end

