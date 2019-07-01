//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEasingFunctionProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCEasingFunction : NSObject <SCEasingFunctionProtocol>
{
    unsigned long long _type;
    CDUnknownFunctionPointerType _easingFunction;
}

+ (id)easingFunctionWithType:(unsigned long long)arg1;
@property(nonatomic) CDUnknownFunctionPointerType easingFunction; // @synthesize easingFunction=_easingFunction;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (double)solveForInput:(double)arg1;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

