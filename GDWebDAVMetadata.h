//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDDictionaryBackedObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface GDWebDAVMetadata : GDDictionaryBackedObject
{
    NSDate *_modifiedDate;
}

- (void).cxx_destruct;
- (id)detailsInformation;
@property(readonly, copy, nonatomic) NSString *mimeType;
@property(readonly, copy, nonatomic) NSString *eTag;
@property(readonly, copy, nonatomic) NSString *lastModifiedString;
@property(readonly, nonatomic) long long fileSize;
@property(readonly, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, nonatomic) _Bool isDirectory;
@property(readonly, copy, nonatomic) NSString *contentType;
@property(readonly, copy, nonatomic) NSString *href;

@end

