//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGAbstractViewerViewController.h"

#import "QLPreviewControllerDelegate.h"

@class NSString, TGQuickLookData;

__attribute__((visibility("hidden")))
@interface QuickLookiOS7ViewController : TGAbstractViewerViewController <QLPreviewControllerDelegate>
{
    TGQuickLookData *_data;
}

@property(retain, nonatomic) TGQuickLookData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)previewControllerWillDismiss:(id)arg1;
- (void)doneClicked_;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

