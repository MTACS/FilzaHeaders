//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TGDirectoryInfoViewDelegate.h"
#import "TopToolBarViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FloatingToolbarHandle, NSMutableArray, NSString, NSTimer, TGCollectionView, TGDirectoryInfoView, TGFastTableView, TGInfoFooterCollectionReusableView, TagColorView, TopToolBarView, UIViewController;

__attribute__((visibility("hidden")))
@interface TIGIBrowserView : UIView <UIGestureRecognizerDelegate, TopToolBarViewDelegate, TGDirectoryInfoViewDelegate, UICollectionViewDataSource, UITableViewDataSource, UICollectionViewDelegate, UITableViewDelegate, UIScrollViewDelegate>
{
    _Bool _selectAllButtonState;
    _Bool __enabledBrowserViewDidScrollDelegate;
    struct CGPoint *touchPoint;
    _Bool _allowReloading;
    _Bool _isiPad;
    _Bool _showFileSize;
    _Bool _showFilePermissions;
    _Bool _showFolderDetails;
    _Bool _editing;
    _Bool _hideDirectoryInfo;
    int _mode;
    int _currentSortMode;
    NSString *_currentPath;
    NSString *_currentFilesystem;
    NSString *_currentItemsCount;
    NSString *_currentDiskspace;
    TGFastTableView *_tableView;
    TGCollectionView *_collectionView;
    TopToolBarView *_topToolbar;
    TagColorView *_tagColorView;
    NSTimer *_insertTimer;
    NSMutableArray *_waitingForInsert;
    UIViewController *_viewController;
    id <TIGIBrowserViewDataSource> _dataSource;
    id <TIGIBrowserViewDelegate> _delegate;
    NSMutableArray *_hlIndexPaths;
    NSTimer *_hlTimer;
    TGDirectoryInfoView *_infoFooterViewList;
    TGInfoFooterCollectionReusableView *_infoFooterViewGrid;
    FloatingToolbarHandle *_FHHandle;
}

+ (struct CGSize)iconSize;
@property(retain, nonatomic) FloatingToolbarHandle *FHHandle; // @synthesize FHHandle=_FHHandle;
@property(nonatomic) __weak TGInfoFooterCollectionReusableView *infoFooterViewGrid; // @synthesize infoFooterViewGrid=_infoFooterViewGrid;
@property(retain, nonatomic) TGDirectoryInfoView *infoFooterViewList; // @synthesize infoFooterViewList=_infoFooterViewList;
@property(retain, nonatomic) NSTimer *hlTimer; // @synthesize hlTimer=_hlTimer;
@property(retain, nonatomic) NSMutableArray *hlIndexPaths; // @synthesize hlIndexPaths=_hlIndexPaths;
@property(nonatomic) _Bool hideDirectoryInfo; // @synthesize hideDirectoryInfo=_hideDirectoryInfo;
@property(nonatomic) id <TIGIBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <TIGIBrowserViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) int currentSortMode; // @synthesize currentSortMode=_currentSortMode;
@property(nonatomic) _Bool showFolderDetails; // @synthesize showFolderDetails=_showFolderDetails;
@property(nonatomic) _Bool showFilePermissions; // @synthesize showFilePermissions=_showFilePermissions;
@property(nonatomic) _Bool showFileSize; // @synthesize showFileSize=_showFileSize;
@property(nonatomic) _Bool isiPad; // @synthesize isiPad=_isiPad;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSMutableArray *waitingForInsert; // @synthesize waitingForInsert=_waitingForInsert;
@property(nonatomic) _Bool allowReloading; // @synthesize allowReloading=_allowReloading;
@property(retain, nonatomic) NSTimer *insertTimer; // @synthesize insertTimer=_insertTimer;
@property(retain, nonatomic) TagColorView *tagColorView; // @synthesize tagColorView=_tagColorView;
@property(retain, nonatomic) TopToolBarView *topToolbar; // @synthesize topToolbar=_topToolbar;
@property(retain, nonatomic) TGCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TGFastTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *currentDiskspace; // @synthesize currentDiskspace=_currentDiskspace;
@property(retain, nonatomic) NSString *currentItemsCount; // @synthesize currentItemsCount=_currentItemsCount;
@property(retain, nonatomic) NSString *currentFilesystem; // @synthesize currentFilesystem=_currentFilesystem;
@property(retain, nonatomic) NSString *currentPath; // @synthesize currentPath=_currentPath;
- (void).cxx_destruct;
- (void)__updateHLIndexPathsAfterInsertingIndexPath:(id)arg1;
- (void)__updateHLIndexPathsAfterDeletingIndexPath:(id)arg1;
- (void)__updateHLIndexPathsWithIndexPath:(id)arg1 type:(unsigned long long)arg2;
- (void)removeIndexPathFromHLIndexPaths:(id)arg1;
- (void)addIndexPathToHLIndexPaths:(id)arg1 keepPrevious:(_Bool)arg2;
- (void)setIndexPathToHLIndexPaths:(id)arg1 keepPrevious:(_Bool)arg2;
- (void)unHighLighted;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)shouldShowHeaderViewWhenScrollUp;
- (void)setShouldShowHeaderViewWhenScrollUp:(_Bool)arg1;
- (void)processWaitingList;
- (void)updateHeaderPosition;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)accessoryTapped:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (struct CGRect)rectForIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setItem:(id)arg1 forItemAtIndexPath:(id)arg2 highlight:(_Bool)arg3;
- (void)setItem:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)removeItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1 animation:(_Bool)arg2;
- (void)setName:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)stopScrollingAnimation;
- (void)scrollToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)resumeScrollingAnimationIfNeed;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 highlight:(_Bool)arg3 keepPreviousHighLighted:(_Bool)arg4;
- (_Bool)isItemAtIndexPathVisible:(id)arg1;
- (id)nameForItemAtIndexPath:(id)arg1;
- (id)imageForItemAtIndexPath:(id)arg1;
- (void)setIconImage:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)indexPathsForSelectedItems;
- (id)indexPathsForVisibleItems;
- (void)selectAllItems:(_Bool)arg1;
- (void)selectOnlyItem:(id)arg1;
- (void)reloadData;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathOfPoint:(struct CGPoint)arg1;
- (void)selectItemAtIndexPath:(id)arg1;
- (void)setFloatingHeaderView:(id)arg1 footerView:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)contentOffset;
- (void)createNewItemAtIndexPath:(id)arg1 highlight:(_Bool)arg2 keepPreviousHighLighted:(_Bool)arg3;
- (void)TopToolbarView:(id)arg1 didCheckedSelectAll:(_Bool)arg2;
- (void)TopToolbarView:(id)arg1 didSelectSortMode:(id)arg2;
- (void)TopToolbarView:(id)arg1 didSelectSearchButton:(_Bool)arg2;
- (void)TopToolbarView:(id)arg1 didSelectViewMode:(int)arg2;
- (void)reloadDataForItemsAtIndexPaths:(id)arg1;
- (void)reloadDataForItemAtIndexPath:(id)arg1;
- (void)TopToolbarView:(id)arg1 didSelectTagColor:(int)arg2;
- (void)TopToolbarViewDidEndLoading:(id)arg1;
- (void)TopToolbarViewDidBeginLoading:(id)arg1;
- (void)dealloc;
- (void)updateTopToolbarStyle;
- (void)createTopToolbar;
- (void)__setScrollingSpeed;
- (void)handleLongPress:(id)arg1;
- (void)updateToolBars:(long long)arg1;
- (void)updateContentInsetWithCurrentContext;
- (void)directoryInfoView:(id)arg1 didTappedAtLabel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)directoryInfoView;
- (void)layoutSubviews;
- (Class)gridViewCellClass;
- (Class)listViewRowClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

