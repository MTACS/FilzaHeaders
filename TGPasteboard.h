//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TGPasteboard : NSObject
{
    NSMutableArray *_pasteboardData;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *pasteboardData; // @synthesize pasteboardData=_pasteboardData;
- (void).cxx_destruct;
- (id)getObjects;
- (id)popObjects;
- (void)pushObjects:(id)arg1;
- (void)importObjects:(id)arg1;
- (id)getType;
- (void)setType:(id)arg1;
- (void)import;
- (void)dealloc;
- (id)init;

@end
