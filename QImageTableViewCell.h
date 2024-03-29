//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QEntryTableViewCell.h"

@class QImageElement, UIButton;

@interface QImageTableViewCell : QEntryTableViewCell
{
    QImageElement *_imageElement;
    UIButton *_imageViewButton;
}

@property(retain, nonatomic) UIButton *imageViewButton; // @synthesize imageViewButton=_imageViewButton;
@property(retain, nonatomic) QImageElement *imageElement; // @synthesize imageElement=_imageElement;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)recalculateDetailImageViewPosition;
- (void)layoutSubviews;
- (void)prepareForElement:(id)arg1 inTableView:(id)arg2;
- (void)handleImageSelected;
- (void)createSubviews;
- (id)init;

@end

