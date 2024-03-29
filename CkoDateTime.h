//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface CkoDateTime : NSObject
{
    void *m_obj;
}

- (void)SetFromUnixTimeDbl:(_Bool)arg1 t:(id)arg2;
- (void)SetFromUnixTime64:(_Bool)arg1 t:(id)arg2;
- (void)SetFromUnixTime:(_Bool)arg1 t:(id)arg2;
- (void)SetFromSystemTime:(_Bool)arg1 sysTime:(id)arg2;
- (_Bool)SetFromRfc822:(id)arg1;
- (void)SetFromOleDate:(_Bool)arg1 dt:(id)arg2;
- (void)SetFromNtpTime:(id)arg1;
- (_Bool)SetFromDtObj:(id)arg1;
- (void)SetFromDosDate:(_Bool)arg1 t:(id)arg2;
- (void)SetFromDateTimeTicks:(_Bool)arg1 n:(id)arg2;
- (void)SetFromCurrentSystemTime;
- (id)Serialize;
- (_Bool)SaveLastError:(id)arg1;
- (_Bool)LoadTaskResult:(id)arg1;
- (id)GetDtObj:(_Bool)arg1;
- (id)GetAsUnixTimeDbl:(_Bool)arg1;
- (id)GetAsUnixTime64:(_Bool)arg1;
- (id)GetAsUnixTime:(_Bool)arg1;
- (id)GetAsRfc822:(_Bool)arg1;
- (id)GetAsOleDate:(_Bool)arg1;
- (id)GetAsDosDate:(_Bool)arg1;
- (id)GetAsDateTimeTicks:(_Bool)arg1;
- (void)DeSerialize:(id)arg1;
- (_Bool)AddDays:(id)arg1;
@property(readonly, copy, nonatomic) NSString *Version;
@property(nonatomic) _Bool VerboseLogging;
@property(readonly, copy, nonatomic) NSNumber *UtcOffset;
@property(nonatomic) _Bool LastMethodSuccess;
@property(readonly, copy, nonatomic) NSString *LastErrorXml;
@property(readonly, copy, nonatomic) NSString *LastErrorText;
@property(readonly, copy, nonatomic) NSString *LastErrorHtml;
@property(readonly, copy, nonatomic) NSNumber *IsDst;
@property(copy, nonatomic) NSString *DebugLogFilePath;
- (id)stringWithUtf8:(const char *)arg1;
- (void)clearCppImplObj;
- (void)setCppImplObj:(void *)arg1;
- (void *)CppImplObj;
- (void)dispose;
- (void)dealloc;
- (id)init;

@end

