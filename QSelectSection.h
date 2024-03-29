//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QDynamicDataSection.h"

@class NSArray, NSMutableArray;

@interface QSelectSection : QDynamicDataSection
{
    NSMutableArray *_items;
    _Bool _multipleAllowed;
    _Bool _deselectAllowed;
    NSMutableArray *_selected;
    CDUnknownBlockType _onSelected;
}

@property(nonatomic) _Bool deselectAllowed; // @synthesize deselectAllowed=_deselectAllowed;
@property(copy, nonatomic) CDUnknownBlockType onSelected; // @synthesize onSelected=_onSelected;
@property(nonatomic) _Bool multipleAllowed; // @synthesize multipleAllowed=_multipleAllowed;
@property(retain, nonatomic) NSMutableArray *selectedIndexes; // @synthesize selectedIndexes=_selected;
- (void).cxx_destruct;
- (void)fetchValueIntoObject:(id)arg1;
- (void)insertOption:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addOption:(id)arg1;
- (void)addElement:(id)arg1;
- (void)createElements;
@property(readonly, nonatomic) NSArray *selectedItems;
@property(retain, nonatomic) NSArray *items;
- (id)initWithItems:(id)arg1 selected:(unsigned long long)arg2 title:(id)arg3;
- (id)initWithItems:(id)arg1 selected:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 selectedItems:(id)arg2 title:(id)arg3;
- (id)initWithItems:(id)arg1 selectedIndexes:(id)arg2 title:(id)arg3;
- (id)initWithItems:(id)arg1 selectedIndexes:(id)arg2;
- (id)init;

@end

