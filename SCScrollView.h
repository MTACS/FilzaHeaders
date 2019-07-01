//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class CADisplayLink, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SCScrollView : UIScrollView
{
    unsigned long long _maximumNumberOfTouches;
    NSMutableArray *_approvalAreas;
    CADisplayLink *_displayLink;
    id <SCEasingFunctionProtocol> _easingFunction;
    double _duration;
    double _startTime;
    CDUnknownBlockType _completionBlock;
    struct CGPoint _startContentOffset;
    struct CGPoint _deltaContentOffset;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) struct CGPoint deltaContentOffset; // @synthesize deltaContentOffset=_deltaContentOffset;
@property(nonatomic) struct CGPoint startContentOffset; // @synthesize startContentOffset=_startContentOffset;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) id <SCEasingFunctionProtocol> easingFunction; // @synthesize easingFunction=_easingFunction;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableArray *approvalAreas; // @synthesize approvalAreas=_approvalAreas;
@property(nonatomic) unsigned long long maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
- (void).cxx_destruct;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)_updateContentOffset:(id)arg1;
- (void)stopRunningAnimation;
- (void)setContentOffset:(struct CGPoint)arg1 easingFunction:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isRunningAnimation;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeTouchApprovalArea:(id)arg1;
- (void)addTouchApprovalArea:(id)arg1;
@property(readonly, nonatomic) NSArray *touchApprovalAreas;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

