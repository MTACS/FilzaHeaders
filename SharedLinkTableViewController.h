//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGThemeTableViewController.h"

#import "CustomValueSelectorViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FileItem, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SharedLinkTableViewController : TGThemeTableViewController <UIGestureRecognizerDelegate, CustomValueSelectorViewControllerDelegate>
{
    FileItem *_item;
    NSDictionary *_shared_link;
    NSString *_aText;
    NSMutableDictionary *_changed;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableDictionary *changed; // @synthesize changed=_changed;
@property(retain, nonatomic) NSString *aText; // @synthesize aText=_aText;
@property(retain, nonatomic) NSDictionary *shared_link; // @synthesize shared_link=_shared_link;
@property(nonatomic) __weak FileItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)customValueSelectorViewControllerChanged:(id)arg1 values:(id)arg2 selected:(id)arg3 name:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)longPress:(id)arg1;
- (void)copyZText:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)saveChange;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

