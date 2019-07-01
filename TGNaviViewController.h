//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationBarDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSMutableArray, NSString, NavigationBarTouchManager, UIImageView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface TGNaviViewController : UINavigationController <UINavigationBarDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate>
{
    _Bool _isNaviAnimating;
    _Bool _oldGestureIsEnabled;
    UIImageView *_closeButton;
    UITapGestureRecognizer *_tapGesture;
    CDUnknownBlockType _action;
    NSMutableArray *_disabledSubviews;
    UITapGestureRecognizer *_titleGesture;
    NavigationBarTouchManager *_touchManager;
    struct CGPoint _previousContentOffset;
}

@property(nonatomic) struct CGPoint previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;
@property(nonatomic) _Bool oldGestureIsEnabled; // @synthesize oldGestureIsEnabled=_oldGestureIsEnabled;
@property(retain, nonatomic) NavigationBarTouchManager *touchManager; // @synthesize touchManager=_touchManager;
@property(retain, nonatomic) UITapGestureRecognizer *titleGesture; // @synthesize titleGesture=_titleGesture;
@property(retain, nonatomic) NSMutableArray *disabledSubviews; // @synthesize disabledSubviews=_disabledSubviews;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) _Bool isNaviAnimating; // @synthesize isNaviAnimating=_isNaviAnimating;
- (void).cxx_destruct;
- (void)didTapped:(id)arg1;
- (void)hideDeleteButton;
- (void)displayDeleteButtonWithAction:(CDUnknownBlockType)arg1;
- (void)viewWillLayoutSubviews;
- (void)removeDeleteButton;
- (_Bool)isShowingDeleteButton;
- (void)navigationBarTitleDidTapped:(id)arg1;
- (void)setTitleGestureEnabled:(_Bool)arg1;
- (_Bool)isTitleGestureEnabled;
- (void)refreshNavigationBarHeight;
- (void)restoreContentOffset;
- (void)saveContentOffset;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
