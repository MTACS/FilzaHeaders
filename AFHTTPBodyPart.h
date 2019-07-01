//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSInputStream, NSString;

__attribute__((visibility("hidden")))
@interface AFHTTPBodyPart : NSObject <NSCopying>
{
    int _phase;
    NSInputStream *_inputStream;
    unsigned long long _phaseReadOffset;
    _Bool _hasInitialBoundary;
    _Bool _hasFinalBoundary;
    unsigned long long _stringEncoding;
    NSDictionary *_headers;
    id _body;
    unsigned long long _bodyContentLength;
    NSString *_boundary;
}

@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(nonatomic) _Bool hasFinalBoundary; // @synthesize hasFinalBoundary=_hasFinalBoundary;
@property(nonatomic) _Bool hasInitialBoundary; // @synthesize hasInitialBoundary=_hasInitialBoundary;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) unsigned long long bodyContentLength; // @synthesize bodyContentLength=_bodyContentLength;
@property(retain, nonatomic) id body; // @synthesize body=_body;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)transitionToNextPhase;
- (long long)readData:(id)arg1 intoBuffer:(char *)arg2 maxLength:(unsigned long long)arg3;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=hasBytesAvailable) _Bool bytesAvailable;
@property(readonly, nonatomic) unsigned long long contentLength;
- (id)stringForHeaders;
- (void)dealloc;
- (id)init;

@end
