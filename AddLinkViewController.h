//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGThemeTableViewController.h"

#import "UITextViewDelegate.h"

@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface AddLinkViewController : TGThemeTableViewController <UITextViewDelegate>
{
    NSString *_textName;
    NSString *_textPath;
    NSString *_textGroup;
}

@property(retain, nonatomic) NSString *textGroup; // @synthesize textGroup=_textGroup;
@property(retain, nonatomic) NSString *textPath; // @synthesize textPath=_textPath;
@property(retain, nonatomic) NSString *textName; // @synthesize textName=_textName;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)done;
- (void)dismiss;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
@property(readonly, nonatomic) UITextView *path;
@property(readonly, nonatomic) UITextView *name;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

