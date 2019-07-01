//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAReplicatorLayer;

__attribute__((visibility("hidden")))
@interface TGCustomActivityIndicator : UIView
{
    double progress;
    _Bool isAnimating;
    CAReplicatorLayer *_spinnerReplicator;
    CALayer *_marker;
}

@property(retain, nonatomic) CALayer *marker; // @synthesize marker=_marker;
@property(retain, nonatomic) CAReplicatorLayer *spinnerReplicator; // @synthesize spinnerReplicator=_spinnerReplicator;
- (void).cxx_destruct;
- (void)stopAnimation;
- (_Bool)isAnimating;
- (void)startAnimation;
- (double)progress;
- (void)setProgressValue:(double)arg1;
- (void)setRotate:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
