//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface CkoTask : NSObject
{
    void *m_eventCallback;
    void *m_obj;
}

- (_Bool)Wait:(id)arg1;
- (void)SleepMs:(id)arg1;
- (_Bool)SaveLastError:(id)arg1;
- (_Bool)RunSynchronously;
- (_Bool)Run;
- (void)RemoveProgressInfo:(id)arg1;
- (id)ProgressInfoValue:(id)arg1;
- (id)ProgressInfoName:(id)arg1;
- (id)GetResultString;
- (id)GetResultInt;
- (id)GetResultBytes;
- (_Bool)GetResultBool;
- (id)CopyResultBytes;
- (void)ClearProgressLog;
- (_Bool)Cancel;
@property(readonly, copy, nonatomic) NSString *Version;
@property(nonatomic) _Bool VerboseLogging;
@property(copy, nonatomic) NSString *UserData;
@property(readonly, nonatomic) _Bool TaskSuccess;
@property(readonly, copy, nonatomic) NSNumber *TaskId;
@property(readonly, copy, nonatomic) NSNumber *StatusInt;
@property(readonly, copy, nonatomic) NSString *Status;
@property(readonly, copy, nonatomic) NSString *ResultType;
@property(readonly, copy, nonatomic) NSString *ResultErrorText;
@property(readonly, copy, nonatomic) NSNumber *ProgressLogSize;
@property(readonly, copy, nonatomic) NSNumber *PercentDone;
@property(readonly, nonatomic) _Bool Live;
@property(nonatomic) _Bool LastMethodSuccess;
@property(readonly, copy, nonatomic) NSString *LastErrorXml;
@property(readonly, copy, nonatomic) NSString *LastErrorText;
@property(readonly, copy, nonatomic) NSString *LastErrorHtml;
@property(nonatomic) _Bool KeepProgressLog;
@property(readonly, nonatomic) _Bool Inert;
@property(copy, nonatomic) NSNumber *HeartbeatMs;
@property(readonly, nonatomic) _Bool Finished;
@property(copy, nonatomic) NSString *DebugLogFilePath;
- (void)setEventCallbackObject:(id)arg1;
- (id)stringWithUtf8:(const char *)arg1;
- (void)clearCppImplObj;
- (void)setCppImplObj:(void *)arg1;
- (void *)CppImplObj;
- (void)dispose;
- (void)dealloc;
- (id)init;

@end
