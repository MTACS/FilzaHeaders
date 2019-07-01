//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSMutableDictionary, UIButton;

__attribute__((visibility("hidden")))
@interface ShortenSortButton : UIView
{
    int _numberOfDisplayItems;
    id <ShortenSortButtonDelegate> _delegate;
    NSArray *_titles;
    NSMutableDictionary *_aSortInfos;
    NSMutableArray *_sortLabels;
    NSMutableArray *_textWidthArrays;
    UIButton *_moreButton;
}

+ (id)typeTypes;
+ (id)sizeTypes;
+ (id)dateTypes;
+ (id)nameTypes;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) NSMutableArray *textWidthArrays; // @synthesize textWidthArrays=_textWidthArrays;
@property(retain, nonatomic) NSMutableArray *sortLabels; // @synthesize sortLabels=_sortLabels;
@property(retain, nonatomic) NSMutableDictionary *aSortInfos; // @synthesize aSortInfos=_aSortInfos;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) __weak id <ShortenSortButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int numberOfDisplayItems; // @synthesize numberOfDisplayItems=_numberOfDisplayItems;
- (void).cxx_destruct;
- (id)getSortInfos;
- (void)setSortInfos:(id)arg1;
- (void)shortenSorTapped:(id)arg1;
- (void)updateLabels;
- (id)valueForTitle:(id)arg1;
- (void)moreSelected:(id)arg1;
- (void)updateSubviews;
- (void)layoutSubviews;
- (void)setTitles:(id)arg1 sortInfos:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 titles:(id)arg2 sortInfos:(id)arg3;

@end
