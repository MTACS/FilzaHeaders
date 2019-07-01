//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TNCheckBoxDelegate.h"

@class DLAVAlertView, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface TGNetworkOperation : NSObject <TNCheckBoxDelegate>
{
    NSOperationQueue *queue;
    NSObject<OS_dispatch_queue> *completion_queue;
    NSObject<OS_dispatch_queue> *ask_error_queue;
    NSObject<OS_dispatch_semaphore> *ask_wait_semaphore;
    DLAVAlertView *confirmationAlertView;
    DLAVAlertView *_alertView;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _endIfCancel;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType endIfCancel; // @synthesize endIfCancel=_endIfCancel;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) DLAVAlertView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (void)askUserWithTitle:(id)arg1 message:(id)arg2 buttons:(id)arg3 applyAll:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 animation:(_Bool)arg6;
- (void)askUserWithTitle:(id)arg1 message:(id)arg2 buttons:(id)arg3 applyAll:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)askUserWithTitle:(id)arg1 message:(id)arg2 buttons:(id)arg3 completion:(CDUnknownBlockType)arg4 animation:(_Bool)arg5;
- (void)askUserWithTitle:(id)arg1 message:(id)arg2 buttons:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)showProgressViewWithMessage:(id)arg1 buttons:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)localizedStringForType:(id)arg1;
- (void)cancelAll;
- (id)asyncMoveURLs:(id)arg1 toParentURL:(id)arg2 referNames:(id)arg3 isDirectory:(id)arg4 fileSize:(id)arg5 begin:(CDUnknownBlockType)arg6 progress:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8 askForExisted:(CDUnknownBlockType)arg9 askForError:(CDUnknownBlockType)arg10 end:(CDUnknownBlockType)arg11;
- (id)asyncCopyURLs:(id)arg1 toParentURL:(id)arg2 referNames:(id)arg3 isDirectory:(id)arg4 fileSize:(id)arg5 begin:(CDUnknownBlockType)arg6 progress:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8 askForExisted:(CDUnknownBlockType)arg9 askForError:(CDUnknownBlockType)arg10 end:(CDUnknownBlockType)arg11;
- (_Bool)isBusy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
