//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SQLRowTableViewCell : UITableViewCell
{
    long long numColumns;
    NSArray *_columsWith;
}

@property(retain, nonatomic) NSArray *columsWith; // @synthesize columsWith=_columsWith;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)labelAtIndex:(long long)arg1;
- (id)initWithColumns:(long long)arg1 columsWith:(id)arg2 reuseIdentifier:(id)arg3;

@end

