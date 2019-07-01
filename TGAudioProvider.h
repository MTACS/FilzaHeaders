//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewContentDataSource.h"
#import "QLPreviewContentDelegate.h"
#import "QLPreviewControllerDataSource.h"
#import "QLPreviewControllerDelegate.h"

@class NSArray, NSString, NSTimer, QLPreviewItemAVState, QLRemotePreviewContentController, TGQuickLookViewController;

__attribute__((visibility("hidden")))
@interface TGAudioProvider : NSObject <QLPreviewContentDataSource, QLPreviewContentDelegate, QLPreviewControllerDataSource, QLPreviewControllerDelegate>
{
    _Bool _shuffling;
    _Bool _didSwitched;
    QLPreviewItemAVState *_state;
    TGQuickLookViewController *_pvController;
    NSArray *_mediaItems;
    long long _currentIndex;
    long long _repeatMode;
    NSTimer *_timer;
    id <TGAudioProviderDelegate> _delegate;
    QLRemotePreviewContentController *_contentController;
}

@property(retain, nonatomic) QLRemotePreviewContentController *contentController; // @synthesize contentController=_contentController;
@property(nonatomic) id <TGAudioProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool didSwitched; // @synthesize didSwitched=_didSwitched;
@property(nonatomic) _Bool shuffling; // @synthesize shuffling=_shuffling;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) TGQuickLookViewController *pvController; // @synthesize pvController=_pvController;
@property(retain, nonatomic) QLPreviewItemAVState *state; // @synthesize state=_state;
- (void)updateState;
- (void)playCurrentTrack:(_Bool)arg1 reset:(_Bool)arg2;
- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(long long)arg3 withError:(id)arg4;
- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (double)currentPositionForTrack:(unsigned long long)arg1;
- (id)fileNameOfCurrentTrack;
- (void)artworkForTrack:(unsigned long long)arg1 receivingBlock:(CDUnknownBlockType)arg2;
- (void)seekToPosition:(double)arg1;
- (double)lengthForTrack:(unsigned long long)arg1;
- (id)titleForTrack:(unsigned long long)arg1;
- (id)artistForTrack:(unsigned long long)arg1;
- (id)fileUrlForTrack:(unsigned long long)arg1;
- (id)albumForTrack:(unsigned long long)arg1;
- (void)dealloc;
- (void)nextTrack;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)initWithoutQL;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

