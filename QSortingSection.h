//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QSection.h"

@interface QSortingSection : QSection
{
    _Bool _sortingEnabled;
    _Bool _canDeleteRows;
}

@property(nonatomic) _Bool canDeleteRows; // @synthesize canDeleteRows=_canDeleteRows;
@property(nonatomic) _Bool sortingEnabled; // @synthesize sortingEnabled=_sortingEnabled;
- (_Bool)canRemoveElementForRow:(long long)arg1;
- (_Bool)removeElementForRow:(long long)arg1;
- (void)moveElementFromRow:(unsigned long long)arg1 toRow:(unsigned long long)arg2;
- (void)fetchValueIntoObject:(id)arg1;
- (_Bool)needsEditing;
- (id)init;

@end

