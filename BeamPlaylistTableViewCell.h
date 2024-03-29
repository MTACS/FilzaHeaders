//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIFont, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface BeamPlaylistTableViewCell : UITableViewCell
{
    _Bool _currentSong;
    UIImageView *_playingImageView;
    UIFont *_font;
    UILabel *_trackLabel;
    UILabel *_titleLabel;
    UILabel *_durationLabel;
}

@property(nonatomic, getter=isCurrentSong) _Bool currentSong; // @synthesize currentSong=_currentSong;
@property(readonly, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *trackLabel; // @synthesize trackLabel=_trackLabel;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) UIImageView *playingImageView; // @synthesize playingImageView=_playingImageView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

