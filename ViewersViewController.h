//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGThemeTableViewController.h"

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ViewersViewController : TGThemeTableViewController
{
    NSArray *_identities;
    NSDictionary *_viewers;
}

@property(retain, nonatomic) NSDictionary *viewers; // @synthesize viewers=_viewers;
@property(retain, nonatomic) NSArray *identities; // @synthesize identities=_identities;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

