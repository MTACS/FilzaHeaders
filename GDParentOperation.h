//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface GDParentOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    NSObject<OS_dispatch_queue> *_successCallbackQueue;
    NSObject<OS_dispatch_queue> *_failureCallbackQueue;
    NSObject<OS_dispatch_queue> *_private_queue;
    NSMutableArray *_childOperations;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *childOperations; // @synthesize childOperations=_childOperations;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *private_queue; // @synthesize private_queue=_private_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *failureCallbackQueue; // @synthesize failureCallbackQueue=_failureCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *successCallbackQueue; // @synthesize successCallbackQueue=_successCallbackQueue;
- (void).cxx_destruct;
- (void)addChildOperation:(id)arg1;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)finish;
- (void)main;
- (void)start;
- (id)init;

@end

