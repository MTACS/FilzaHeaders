//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>, NSTimer, NSURL;

__attribute__((visibility("hidden")))
@interface TGLocalFileManager : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    int _importWithType;
    NSTimer *_checkProgress;
    CDUnknownBlockType _progressBlock;
    NSError *_error;
    long long _fileSize;
    NSURL *_from;
    NSURL *_to;
    NSURL *_toOriginal;
}

+ (id)sharedInstance;
@property(nonatomic) int importWithType; // @synthesize importWithType=_importWithType;
@property(retain, nonatomic) NSURL *toOriginal; // @synthesize toOriginal=_toOriginal;
@property(retain, nonatomic) NSURL *to; // @synthesize to=_to;
@property(retain, nonatomic) NSURL *from; // @synthesize from=_from;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSTimer *checkProgress; // @synthesize checkProgress=_checkProgress;
- (void).cxx_destruct;
- (void)_copyFileProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 deleteAfterDone:(_Bool)arg3;
- (void)_checkProgress:(id)arg1;
- (void)moveFileAtURL:(id)arg1 toURL:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)copyFileAtURL:(id)arg1 toURL:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

