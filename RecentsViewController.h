//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGThemeTableViewController.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RecentsViewController : TGThemeTableViewController
{
    NSMutableArray *_items;
    NSMutableArray *_openFileList;
}

@property(retain, nonatomic) NSMutableArray *openFileList; // @synthesize openFileList=_openFileList;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)done;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)accessoryTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)loadData;
- (void)clear;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

