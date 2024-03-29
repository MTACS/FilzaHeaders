//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINavigationControllerDelegate.h"
#import "UISplitViewControllerDelegate.h"

@class NSArray, NSString, TGNaviViewController;

__attribute__((visibility("hidden")))
@interface TIGIPageData : NSObject <UISplitViewControllerDelegate, UINavigationControllerDelegate>
{
    int _identifier;
    NSString *title;
    NSString *subtitle;
    NSString *_path;
    TGNaviViewController *_controller;
    id <TIGIPageDataDelegate> _delegate;
    NSArray *_lastPages;
}

@property(retain, nonatomic) NSArray *lastPages; // @synthesize lastPages=_lastPages;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <TIGIPageDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TGNaviViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEnabled;
- (id)view;
- (_Bool)isPageWindow;
- (_Bool)isAccountsWindow;
- (_Bool)isSearchWindow;
- (void)endEditingPath;
- (void)endEditing;
- (_Bool)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setNewPath:(id)arg1;
- (void)dismissViewController;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 preferVc:(id)arg2;
- (id)initWithPath:(id)arg1 title:(id)arg2;
- (id)icon;
- (void)displayDeleteButton:(_Bool)arg1;
- (void)removeDeleteButtonIfNeeds;
- (id)pageSubtitle;
- (id)pageTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

