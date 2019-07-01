//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface FMDatabaseQueue : NSObject
{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    FMDatabase *_db;
    int _openFlags;
}

+ (Class)databaseClass;
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;
+ (id)databaseQueueWithPath:(id)arg1;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;
- (void)beginTransaction:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)database;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 flags:(int)arg2;

@end

