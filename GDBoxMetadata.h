//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDDictionaryBackedObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface GDBoxMetadata : GDDictionaryBackedObject
{
    NSString *_item_status;
}

@property(readonly, nonatomic) NSString *item_status; // @synthesize item_status=_item_status;
- (void).cxx_destruct;
- (id)detailsInformation;
@property(readonly, nonatomic) long long size;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
@property(readonly, nonatomic) NSDate *modified_at;
@property(readonly, copy, nonatomic) NSString *etag;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *name;

@end

