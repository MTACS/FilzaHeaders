//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDDictionaryBackedObject.h"

@class DLSFTPFile, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface GDSFTPMetadata : GDDictionaryBackedObject
{
    DLSFTPFile *_file;
}

@property(retain, nonatomic) DLSFTPFile *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (id)detailsInformation;
@property(readonly, nonatomic) NSDate *modifiedDate;
@property(readonly, copy, nonatomic) NSString *lastModifiedString;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) _Bool isDirectory;
@property(readonly, copy, nonatomic) NSString *href;
- (id)fileAttributes;
- (id)backingStore;
- (id)initWithFile:(id)arg1;

@end

