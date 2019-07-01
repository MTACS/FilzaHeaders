//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class GDFileManagerUploadState, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GDPersistentUploadDestination : NSObject <NSCoding>
{
    NSString *_filename;
    unsigned long long _uploadMode;
    NSString *_mimeType;
    NSURL *_parentFolderURL;
    NSURL *_destinationURL;
    NSString *_parentVersionID;
    GDFileManagerUploadState *_uploadState;
}

@property(retain, nonatomic) GDFileManagerUploadState *uploadState; // @synthesize uploadState=_uploadState;
@property(retain, nonatomic) NSString *parentVersionID; // @synthesize parentVersionID=_parentVersionID;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain, nonatomic) NSURL *parentFolderURL; // @synthesize parentFolderURL=_parentFolderURL;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) unsigned long long uploadMode; // @synthesize uploadMode=_uploadMode;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)applyToUploadOperation:(id)arg1;
- (void)setDestinationURL:(id)arg1 mimeType:(id)arg2 parentVersionID:(id)arg3;
- (void)createNewFileWithFilename:(id)arg1 mimeType:(id)arg2 parentFolderURL:(id)arg3;

@end

