//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDFileManagerDownloadOperation.h"

@class GDFileServiceSession, NSURL;

__attribute__((visibility("hidden")))
@interface GDFileManagerCachedDownloadOperation : GDFileManagerDownloadOperation
{
    _Bool _didFetchNewFileVersion;
    unsigned long long _cachePolicy;
    NSURL *_canonicalURL;
    GDFileServiceSession *_session;
}

@property(nonatomic) _Bool didFetchNewFileVersion; // @synthesize didFetchNewFileVersion=_didFetchNewFileVersion;
@property(retain, nonatomic) GDFileServiceSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURL *canonicalURL; // @synthesize canonicalURL=_canonicalURL;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void).cxx_destruct;
- (void)main;
- (id)initWithFileManager:(id)arg1 downloadURL:(id)arg2 cachePolicy:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)initWithFileManager:(id)arg1 sourceURL:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

