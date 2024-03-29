//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGAbstractViewerViewController.h"

#import "MWPhotoBrowserDelegate.h"

@class MWPhotoBrowser, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TGImageViewerController : TGAbstractViewerViewController <MWPhotoBrowserDelegate>
{
    _Bool _isLoadingThumbnail;
    NSMutableArray *_imgs;
    MWPhotoBrowser *_imageBrowser;
    NSMutableDictionary *_placeholders;
    long long _lastLoadedThumbTopIndex;
    long long _lastLoadedThumbBottomIndex;
    long long _needsToCancelThumbnailLoading;
}

@property(nonatomic) long long needsToCancelThumbnailLoading; // @synthesize needsToCancelThumbnailLoading=_needsToCancelThumbnailLoading;
@property(nonatomic) long long lastLoadedThumbBottomIndex; // @synthesize lastLoadedThumbBottomIndex=_lastLoadedThumbBottomIndex;
@property(nonatomic) long long lastLoadedThumbTopIndex; // @synthesize lastLoadedThumbTopIndex=_lastLoadedThumbTopIndex;
@property(nonatomic) _Bool isLoadingThumbnail; // @synthesize isLoadingThumbnail=_isLoadingThumbnail;
@property(retain, nonatomic) NSMutableDictionary *placeholders; // @synthesize placeholders=_placeholders;
@property(retain, nonatomic) MWPhotoBrowser *imageBrowser; // @synthesize imageBrowser=_imageBrowser;
@property(retain, nonatomic) NSMutableArray *imgs; // @synthesize imgs=_imgs;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imageCantOpen:(id)arg1;
- (void)viewDidLoad;
- (void)photoBrowserDidFinishModalPresentation:(id)arg1;
- (id)photoBrowser:(id)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 placeholderPhotoAtIndex:(unsigned long long)arg2;
- (void)didReceiveMemoryWarning;
- (id)photoBrowser:(id)arg1 thumbPhotoAtIndex:(unsigned long long)arg2 asyncLoadingImage:(CDUnknownBlockType)arg3;
- (void)_doLoadingThumbnails;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2 asyncLoadingImage:(CDUnknownBlockType)arg3;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setPreviewing:(_Bool)arg1;
- (id)initWithFileItem:(id)arg1 moreInfo:(id)arg2 delegate:(id)arg3;
- (id)initForPreviewingWithFileItem:(id)arg1 moreInfo:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

