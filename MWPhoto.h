//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MWPhoto.h"

@class NSDictionary, NSString, NSURL, UIImage;

@interface MWPhoto : NSObject <MWPhoto>
{
    UIImage *_image;
    NSString *_caption;
    NSDictionary *_EXIFInfo;
    NSURL *_imageURL;
}

+ (id)photoWithImage:(id)arg1;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSDictionary *EXIFInfo; // @synthesize EXIFInfo=_EXIFInfo;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
