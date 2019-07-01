//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface TGActionItem : NSObject
{
    _Bool _isImageRounded;
    NSString *_title;
    UIImage *_image;
    CDUnknownBlockType _handler;
    NSString *_identifier;
    id _userInfo;
}

@property(nonatomic) _Bool isImageRounded; // @synthesize isImageRounded=_isImageRounded;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

