//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGThemeTableViewController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TGFileSystemInfoViewController : TGThemeTableViewController
{
    struct statfs stat;
    NSArray *_titles;
}

@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)setFileSystemStat:(struct statfs *)arg1;
- (void)doneTouched:(id)arg1;
- (void)setFile:(id)arg1;
- (void)viewDidLoad;

@end
