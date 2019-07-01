//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIPopoverControllerDelegate.h"

@class NSString, QRootElement, QuickDialogTableView, UIPopoverController;

@interface QuickDialogController : UIViewController <UIPopoverControllerDelegate>
{
    QRootElement *_root;
    QuickDialogTableView *_quickDialogTableView;
    CDUnknownBlockType _willDisappearCallback;
    _Bool _keyboardVisible;
    _Bool _viewOnScreen;
    _Bool _resizeWhenKeyboardPresented;
    UIPopoverController *_popoverForChildRoot;
    UIPopoverController *_popoverBeingPresented;
}

+ (id)controllerWithNavigationForRoot:(id)arg1;
+ (Class)controllerClassForRoot:(id)arg1;
+ (id)controllerForRoot:(id)arg1;
+ (id)buildControllerWithClass:(Class)arg1 root:(id)arg2;
@property(retain, nonatomic) UIPopoverController *popoverForChildRoot; // @synthesize popoverForChildRoot=_popoverForChildRoot;
@property(retain, nonatomic) UIPopoverController *popoverBeingPresented; // @synthesize popoverBeingPresented=_popoverBeingPresented;
@property(nonatomic) _Bool resizeWhenKeyboardPresented; // @synthesize resizeWhenKeyboardPresented=_resizeWhenKeyboardPresented;
@property(retain, nonatomic) QuickDialogTableView *quickDialogTableView; // @synthesize quickDialogTableView=_quickDialogTableView;
@property(copy, nonatomic) CDUnknownBlockType willDisappearCallback; // @synthesize willDisappearCallback=_willDisappearCallback;
@property(retain, nonatomic) QRootElement *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resizeForKeyboard:(id)arg1;
- (_Bool)shouldDeleteElement:(id)arg1;
- (id)controllerForRoot:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithRoot:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (void)loading:(_Bool)arg1;
- (id)createLoadingView;
- (void)popToPreviousRootElement;
- (void)popToPreviousRootElementOnMainThread;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)displayViewControllerInPopover:(id)arg1 withNavigation:(_Bool)arg2;
- (void)displayViewControllerInPopover:(id)arg1 withNavigation:(_Bool)arg2 fromRect:(struct CGRect)arg3;
- (void)dismissModalViewController;
- (void)displayViewControllerForRoot:(id)arg1;
- (void)displayViewController:(id)arg1 withPresentationMode:(int)arg2;
- (void)displayViewController:(id)arg1;
- (void)showHideSectionsWithInsertAnimation:(long long)arg1 removeAnimation:(long long)arg2 sectionsToInsert:(id)arg3 sectionsToRemove:(id)arg4;
- (void)showHideElementsWithInsertAnimation:(long long)arg1 removeAnimation:(long long)arg2 elementsToInsert:(id)arg3 elementsToRemove:(id)arg4;
- (void)showSectionsWithAnimation:(long long)arg1 sections:(id)arg2;
- (void)showElementsWithAnimation:(long long)arg1 elements:(id)arg2;
- (void)hideSectionsWithAnimation:(long long)arg1 sections:(id)arg2;
- (void)hideElementsWithAnimation:(long long)arg1 elements:(id)arg2;
- (void)switchElementsWithAnimation:(long long)arg1 elements:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
