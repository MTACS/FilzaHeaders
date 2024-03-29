//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "MWTapDetectingImageViewDelegate.h"
#import "MWTapDetectingViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class DACircularProgressView, MWCaptionView, MWPhotoBrowser, MWTapDetectingImageView, MWTapDetectingView, NSString, UIButton, UIImageView;

@interface MWZoomingScrollView : UIScrollView <UIScrollViewDelegate, MWTapDetectingImageViewDelegate, MWTapDetectingViewDelegate>
{
    MWPhotoBrowser *_photoBrowser;
    MWTapDetectingView *_tapView;
    MWTapDetectingImageView *_photoImageView;
    DACircularProgressView *_loadingIndicator;
    UIImageView *_loadingError;
    unsigned long long _index;
    id <MWPhoto> _photo;
    MWCaptionView *_captionView;
    UIButton *_selectedButton;
}

@property(nonatomic) __weak UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(nonatomic) __weak MWCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) id <MWPhoto> photo; // @synthesize photo=_photo;
@property unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)view:(id)arg1 doubleTapDetected:(id)arg2;
- (void)view:(id)arg1 singleTapDetected:(id)arg2;
- (void)imageView:(id)arg1 doubleTapDetected:(id)arg2;
- (void)imageView:(id)arg1 singleTapDetected:(id)arg2;
- (void)handleDoubleTap:(struct CGPoint)arg1;
- (void)handleSingleTap:(struct CGPoint)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (double)initialZoomScaleWithMinScale;
- (void)showLoadingIndicator;
- (void)hideLoadingIndicator;
- (void)setProgressFromNotification:(id)arg1;
- (void)hideImageFailure;
- (void)displayImageFailure;
- (void)displayImage;
- (void)prepareForReuse;
- (id)initWithPhotoBrowser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

