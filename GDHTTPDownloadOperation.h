//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDFileManagerDownloadOperation.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface GDHTTPDownloadOperation : GDFileManagerDownloadOperation
{
    NSURL *_localDestinationFileURL;
}

- (void)setLocalDestinationFileURL:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)downloadFile;
- (void)main;
- (id)localDestinationFileURL;
- (id)initWithHTTP:(id)arg1 sourceURL:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

