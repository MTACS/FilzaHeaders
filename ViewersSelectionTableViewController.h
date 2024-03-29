//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGThemeTableViewController.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ViewersSelectionTableViewController : TGThemeTableViewController
{
    NSString *_ext;
    NSString *_vname;
    NSArray *_identities;
    NSDictionary *_viewers;
    NSArray *_apps;
}

@property(retain, nonatomic) NSArray *apps; // @synthesize apps=_apps;
@property(retain, nonatomic) NSDictionary *viewers; // @synthesize viewers=_viewers;
@property(retain, nonatomic) NSArray *identities; // @synthesize identities=_identities;
@property(retain, nonatomic) NSString *vname; // @synthesize vname=_vname;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

