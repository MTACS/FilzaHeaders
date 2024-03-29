//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, TIGIBrowserView, UILabel;

@protocol TIGIBrowserViewDelegate <NSObject>
- (void)browserViewDidDeselectAllItems:(TIGIBrowserView *)arg1;
- (void)browserViewDidSelectAllItems:(TIGIBrowserView *)arg1;
- (void)browserViewRequireToLoadingThumbnailIfNeeds:(TIGIBrowserView *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)browserViewDidScroll:(TIGIBrowserView *)arg1;
- (void)browserView:(TIGIBrowserView *)arg1 deleteButtonTappedForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)browserView:(TIGIBrowserView *)arg1 accessoryButtonTappedForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)browserView:(TIGIBrowserView *)arg1 willSortWithSortMode:(int)arg2;
- (void)browserView:(TIGIBrowserView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)browserView:(TIGIBrowserView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;

@optional
- (void)browserViewDidBeginLoading:(TIGIBrowserView *)arg1;
- (void)browserViewDidChangeViewMode:(TIGIBrowserView *)arg1;
- (void)browserView:(TIGIBrowserView *)arg1 directoryInfoViewTappedAtLabel:(UILabel *)arg2;
@end

