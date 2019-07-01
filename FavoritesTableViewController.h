//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGThemeTableViewController.h"

#import "ReorderTableViewDelegate.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FavoritesTableViewController : TGThemeTableViewController <ReorderTableViewDelegate>
{
    _Bool hasSharedFolder;
    NSMutableArray *_links;
    NSMutableArray *_system;
    NSArray *_clouds;
}

@property(retain, nonatomic) NSArray *clouds; // @synthesize clouds=_clouds;
@property(retain, nonatomic) NSMutableArray *system; // @synthesize system=_system;
@property(retain, nonatomic) NSMutableArray *links; // @synthesize links=_links;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)finishReorderingWithObject:(id)arg1 atIndexPath:(id)arg2;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)saveObjectAndInsertBlankRowAtIndexPath:(id)arg1;
- (_Bool)canMoveRowFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (_Bool)canMoveRowAtIndexPath:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)addLink;
- (void)dealloc;
- (void)reloadFavorites;
- (void)done:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

