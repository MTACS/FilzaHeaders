//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class TreeTable;

@interface UITableView (TreeTable)
- (void)collapse:(id)arg1 array:(id)arg2;
- (void)collapse:(id)arg1;
- (id)parent:(id)arg1;
- (id)siblings:(id)arg1;
- (void)expand:(id)arg1 array:(id)arg2;
- (void)expand:(id)arg1;
- (_Bool)isExpanded:(id)arg1;
- (id)itemForTreeIndexPath:(id)arg1;
- (id)treeIndexPathFromTablePath:(id)arg1;
- (id)treeIndexOfRow:(unsigned long long)arg1 root:(id)arg2 offset:(unsigned long long)arg3;
- (id)treeIndexPathForItem:(id)arg1;
- (unsigned long long)numberOfSubitems:(id)arg1;
- (unsigned long long)rowOffsetForIndexPath:(id)arg1 root:(id)arg2;
- (unsigned long long)rowOffsetForIndexPath:(id)arg1;
- (id)tableIndexPathFromTreePath:(id)arg1;
@property(readonly, nonatomic) __weak TreeTable *treeProxy; // @dynamic treeProxy;
@end

