//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QRootElement.h"

@class NSDate, NSNumber;

@interface QDateTimeElement : QRootElement
{
    NSDate *_dateValue;
    long long _mode;
    long long _minuteInterval;
}

@property(retain, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
- (void).cxx_destruct;
- (void)selected:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (void)fetchValueIntoObject:(id)arg1;
- (void)updateElements;
- (void)initializeRoot;
- (id)getCellForTableView:(id)arg1 controller:(id)arg2;
- (id)initWithTitle:(id)arg1 date:(id)arg2;
- (id)init;
@property long long minuteInterval;
@property long long mode;
@property(nonatomic) NSNumber *ticksValue;

@end

