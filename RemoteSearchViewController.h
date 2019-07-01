//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudPageViewController.h"

__attribute__((visibility("hidden")))
@interface RemoteSearchViewController : CloudPageViewController
{
}

- (_Bool)_shouldFreeWhenReceiveMemoryWarning;
- (id)itemsForPanelMenuManager:(id)arg1;
- (id)itemsForBarMenuManager:(id)arg1;
- (void)performActionForMenuWithIdentifier:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)loadFilesWithSortModeIfNeeds:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentPath;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)browserViewRequireToLoadingThumbnailIfNeeds:(id)arg1 atIndexPath:(id)arg2;
- (void)updateEditingToolbar;
- (void)setToolbarItems:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(_Bool)arg2;
- (id)toolbarItems;
- (id)navigationItem;
- (void)doLoadingPage;
- (void)loadFilesWithSortMode:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

