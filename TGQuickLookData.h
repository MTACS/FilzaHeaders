//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewControllerDataSource.h"
#import "QLPreviewControllerDelegate.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TGQuickLookData : NSObject <QLPreviewControllerDelegate, QLPreviewControllerDataSource>
{
    NSMutableArray *_pdfFileItems;
}

@property(retain, nonatomic) NSMutableArray *pdfFileItems; // @synthesize pdfFileItems=_pdfFileItems;
- (void).cxx_destruct;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

