//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MWPhotoBrowser, NSString;

@protocol MWPhotoBrowserDelegate <NSObject>
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)arg1 placeholderPhotoAtIndex:(unsigned long long)arg2;
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2 asyncLoadingImage:(void (^)(unsigned long long, id <MWPhoto>))arg3;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(MWPhotoBrowser *)arg1;

@optional
- (void)photoBrowserDidFinishModalPresentation:(MWPhotoBrowser *)arg1;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2 selectedChanged:(_Bool)arg3;
- (_Bool)photoBrowser:(MWPhotoBrowser *)arg1 isPhotoSelectedAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 actionButtonPressedForPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(MWPhotoBrowser *)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)arg1 thumbPhotoAtIndex:(unsigned long long)arg2 asyncLoadingImage:(void (^)(unsigned long long, id <MWPhoto>))arg3;
@end
