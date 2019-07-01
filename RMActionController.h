//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAppearanceContainer.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface RMActionController : UIViewController <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, UIAppearanceContainer>
{
    double z;
    double s;
    double radius;
    int _isCompact;
    _Bool _disableMotionEffects;
    _Bool _disableBackgroundTaps;
    _Bool _disableBouncingEffects;
    _Bool _disableBlurEffects;
    _Bool _disableBlurEffectsForContentView;
    _Bool _disableBlurEffectsForBackgroundView;
    _Bool _hasBeenDismissed;
    long long _style;
    UIView *_contentView;
    UIView *_topContainer;
    UIView *_bottomContainer;
    UILabel *_headerTitleLabel;
    UILabel *_headerMessageLabel;
    NSMutableArray *_additionalActions;
    NSMutableArray *_doneActions;
    NSMutableArray *_cancelActions;
    UIView *_backgroundView;
    NSLayoutConstraint *_yConstraint;
}

+ (id)actionControllerWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3 selectAction:(id)arg4 andCancelAction:(id)arg5;
+ (id)actionControllerWithStyle:(long long)arg1 selectAction:(id)arg2 andCancelAction:(id)arg3;
+ (id)actionControllerWithStyle:(long long)arg1;
@property(nonatomic) __weak NSLayoutConstraint *yConstraint; // @synthesize yConstraint=_yConstraint;
@property(nonatomic) _Bool hasBeenDismissed; // @synthesize hasBeenDismissed=_hasBeenDismissed;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSMutableArray *cancelActions; // @synthesize cancelActions=_cancelActions;
@property(retain, nonatomic) NSMutableArray *doneActions; // @synthesize doneActions=_doneActions;
@property(retain, nonatomic) NSMutableArray *additionalActions; // @synthesize additionalActions=_additionalActions;
@property(retain, nonatomic) UILabel *headerMessageLabel; // @synthesize headerMessageLabel=_headerMessageLabel;
@property(retain, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) UIView *topContainer; // @synthesize topContainer=_topContainer;
@property(nonatomic) _Bool disableBlurEffectsForBackgroundView; // @synthesize disableBlurEffectsForBackgroundView=_disableBlurEffectsForBackgroundView;
@property(nonatomic) _Bool disableBlurEffectsForContentView; // @synthesize disableBlurEffectsForContentView=_disableBlurEffectsForContentView;
@property(nonatomic) _Bool disableBlurEffects; // @synthesize disableBlurEffects=_disableBlurEffects;
@property(nonatomic) _Bool disableBouncingEffects; // @synthesize disableBouncingEffects=_disableBouncingEffects;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool disableBackgroundTaps; // @synthesize disableBackgroundTaps=_disableBackgroundTaps;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool disableMotionEffects; // @synthesize disableMotionEffects=_disableMotionEffects;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)addAction:(id)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (long long)preferredStatusBarStyle;
- (void)addSubview:(id)arg1 toContainer:(id)arg2;
- (void)backgroundViewTapped:(id)arg1;
- (void)handleCancelNotAssociatedWithAnyButton;
- (long long)backgroundBlurEffectStyleForCurrentStyle;
- (long long)containerBlurEffectStyleForCurrentStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupActionController;
- (void)viewDidLoad;
- (void)setupTopContainersTopMarginConstraint;
- (void)setupConstraints;
- (void)setupContainerElements;
- (void)setupUIElements;
- (void)setup;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3 selectAction:(id)arg4 andCancelAction:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)mainViewTransitionToTraitCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

