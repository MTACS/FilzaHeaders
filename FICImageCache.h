//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FICImageCache : NSObject
{
    NSMutableDictionary *_formats;
    NSMutableDictionary *_imageTables;
    NSMutableDictionary *_requests;
    id <FICImageCacheDelegate> _delegate;
    _Bool _delegateImplementsWantsSourceImageForEntityWithFormatNameCompletionBlock;
    _Bool _delegateImplementsShouldProcessAllFormatsInFamilyForEntity;
    _Bool _delegateImplementsErrorDidOccurWithMessage;
    _Bool _delegateImplementsCancelImageLoadingForEntityWithFormatName;
}

+ (id)dispatchQueue;
+ (id)sharedImageCache;
@property(nonatomic) __weak id <FICImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logMessage:(id)arg1;
- (void)reset;
- (void)cancelImageRetrievalForEntity:(id)arg1 withFormatName:(id)arg2;
- (void)deleteImageForEntity:(id)arg1 withFormatName:(id)arg2;
- (_Bool)imageExistsForEntity:(id)arg1 withFormatName:(id)arg2;
- (void)_processImage:(id)arg1 forEntity:(id)arg2 imageTable:(id)arg3 completionBlocks:(id)arg4;
- (void)_processImage:(id)arg1 forEntity:(id)arg2 withFormatName:(id)arg3 completionBlocksDictionary:(id)arg4;
- (void)setImage:(id)arg1 forEntity:(id)arg2 withFormatName:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_imageDidLoad:(id)arg1 forURL:(id)arg2;
- (_Bool)_retrieveImageForEntity:(id)arg1 withFormatName:(id)arg2 loadSynchronously:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)asynchronouslyRetrieveImageForEntity:(id)arg1 withFormatName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)retrieveImageForEntity:(id)arg1 withFormatName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)formatsWithFamily:(id)arg1;
- (id)formatWithName:(id)arg1;
- (void)setFormats:(id)arg1;
- (id)init;

@end
