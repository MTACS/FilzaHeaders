//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface TGArchiveRowCell : UITableViewCell
{
    UILabel *lbFileDate;
    UILabel *lbFileName;
    UILabel *lbFileSize;
}

@property(nonatomic) UILabel *lbFileSize; // @synthesize lbFileSize;
@property(nonatomic) UILabel *lbFileName; // @synthesize lbFileName;
@property(nonatomic) UILabel *lbFileDate; // @synthesize lbFileDate;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

