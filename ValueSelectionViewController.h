//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGThemeTableViewController.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ValueSelectionViewController : TGThemeTableViewController
{
    NSDictionary *_preferencesItem;
    NSString *_preferencesName;
}

@property(retain, nonatomic) NSString *preferencesName; // @synthesize preferencesName=_preferencesName;
@property(readonly, nonatomic) NSDictionary *preferencesItem; // @synthesize preferencesItem=_preferencesItem;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

