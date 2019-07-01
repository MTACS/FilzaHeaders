//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DataScroller : NSObject
{
    void *data;
    void *last;
    unsigned long long lastCurrentIndex;
    unsigned long long dataSize;
    struct __sFILE *file;
    _Bool _writable;
    NSString *_filePath;
    unsigned long long _currentIndex;
}

@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool writable; // @synthesize writable=_writable;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)dataSize;
- (void)deleteByteAtIndex:(unsigned long long)arg1;
- (void)insertByteAtIndex:(unsigned long long)arg1;
- (long long)find:(char *)arg1 length:(unsigned long long)arg2 fromIndex:(unsigned long long)arg3;
- (_Bool)write;
- (void *)dataPtr:(unsigned long long)arg1;
- (void)scrollToIndex:(unsigned long long)arg1;
- (_Bool)isReadonly;
- (id)initWithFileAtPath:(id)arg1 writable:(_Bool)arg2;

@end

