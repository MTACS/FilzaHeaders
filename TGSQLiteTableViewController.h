//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TGSQLiteTableViewController : UITableViewController
{
    NSMutableArray *tables;
    NSMutableArray *indexes;
    NSMutableArray *views;
    NSMutableArray *triggers;
}

@property(retain, nonatomic) NSMutableArray *triggers; // @synthesize triggers;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views;
@property(retain, nonatomic) NSMutableArray *indexes; // @synthesize indexes;
@property(retain, nonatomic) NSMutableArray *tables; // @synthesize tables;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sqlEdtitorClicked;
- (void)doneClicked;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)sqlite;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end
