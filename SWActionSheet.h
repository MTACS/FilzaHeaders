//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIWindow;

__attribute__((visibility("hidden")))
@interface SWActionSheet : UIView
{
    UIWindow *SWActionSheetWindow;
    UIView *view;
    UIView *_bgView;
    _Bool _presented;
}

@property(nonatomic) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)showInContainerViewAnimated:(_Bool)arg1;
- (void)showInContainerView;
- (void)showFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)configureFrameForBounds:(struct CGRect)arg1;
- (id)initWithView:(id)arg1;
- (id)actionSheetContainer;
- (id)window;
- (void)destroyWindow;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(_Bool)arg2;

@end

