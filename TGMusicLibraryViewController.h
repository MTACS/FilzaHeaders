//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGPageViewController.h"

__attribute__((visibility("hidden")))
@interface TGMusicLibraryViewController : TGPageViewController
{
    _Bool _isLoading;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (id)itemsForPanelMenuManager:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)deleteSelectedFiles;
- (id)moveSelectedFilesToTrash;
- (void)setDefaultMenuStates;
- (void)updateEditingToolbar;
- (void)reloadItem:(id)arg1;
- (void)renameView:(id)arg1 completeWithName:(id)arg2;
- (_Bool)renameView:(id)arg1 checkIfNameExisted:(id)arg2;
- (void)moveTouched;
- (id)doTrashSelectedIndexPaths:(id)arg1;
- (id)doEraseSelectedIndexPaths:(id)arg1;
- (void)doCopySelectedIndexPaths:(id)arg1;
- (void)copyTouched;
- (void)loadFilesWithSortMode:(int)arg1;
- (void)loadFilesWithSortModeWithProgress:(int)arg1;
- (void)hideLoadingProgress;
- (_Bool)showLoadingProgress;
- (void)newItemArrive:(id)arg1;
- (void)insertFilesAndDirectoryFromPasteboard;
- (void)doLoadingPage;
- (void)_loadThumbnails;
- (void)setCurrentPath:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)updateSortButtons;
- (void)setBrowserView:(id)arg1;
- (void)browserView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (Class)fileAttributesClass;
- (id)previewingControllerForIndexPath:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
