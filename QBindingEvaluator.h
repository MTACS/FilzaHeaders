//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QRootBuilder;

@interface QBindingEvaluator : NSObject
{
    QRootBuilder *_builder;
}

+ (_Bool)stringIsEmpty:(id)arg1;
- (void).cxx_destruct;
- (void)fetchValueFromObject:(id)arg1 toData:(id)arg2;
- (void)bindSection:(id)arg1 toProperties:(id)arg2;
- (void)bindRootElement:(id)arg1 toCollection:(id)arg2;
- (void)bindSection:(id)arg1 toCollection:(id)arg2;
- (void)bindObject:(id)arg1 toData:(id)arg2 withString:(id)arg3;
- (void)bindObject:(id)arg1 toData:(id)arg2;
- (id)init;

@end
