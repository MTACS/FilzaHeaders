//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (DateTools)
+ (id)implicitCalendar;
+ (void)setDefaultCalendarIdentifier:(id)arg1;
+ (id)defaultCalendarIdentifier;
+ (_Bool)isLeapYear:(long long)arg1;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)shortTimeAgoSinceDate:(id)arg1;
+ (id)timeAgoSinceDate:(id)arg1;
+ (void)load;
- (id)formattedDateWithFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (id)formattedDateWithFormat:(id)arg1 locale:(id)arg2;
- (id)formattedDateWithFormat:(id)arg1 timeZone:(id)arg2;
- (id)formattedDateWithFormat:(id)arg1;
- (id)formattedDateWithStyle:(unsigned long long)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (id)formattedDateWithStyle:(unsigned long long)arg1 locale:(id)arg2;
- (id)formattedDateWithStyle:(unsigned long long)arg1 timeZone:(id)arg2;
- (id)formattedDateWithStyle:(unsigned long long)arg1;
- (_Bool)isLaterThanOrEqualTo:(id)arg1;
- (_Bool)isEarlierThanOrEqualTo:(id)arg1;
- (_Bool)isLaterThan:(id)arg1;
- (_Bool)isEarlierThan:(id)arg1;
- (double)secondsLaterThan:(id)arg1;
- (double)minutesLaterThan:(id)arg1;
- (double)hoursLaterThan:(id)arg1;
- (long long)daysLaterThan:(id)arg1;
- (long long)weeksLaterThan:(id)arg1;
- (long long)monthsLaterThan:(id)arg1;
- (long long)yearsLaterThan:(id)arg1;
- (double)secondsEarlierThan:(id)arg1;
- (double)minutesEarlierThan:(id)arg1;
- (double)hoursEarlierThan:(id)arg1;
- (long long)daysEarlierThan:(id)arg1;
- (long long)weeksEarlierThan:(id)arg1;
- (long long)monthsEarlierThan:(id)arg1;
- (long long)yearsEarlierThan:(id)arg1;
- (double)secondsAgo;
- (double)minutesAgo;
- (double)hoursAgo;
- (long long)daysAgo;
- (long long)weeksAgo;
- (long long)monthsAgo;
- (long long)yearsAgo;
- (double)secondsUntil;
- (double)minutesUntil;
- (double)hoursUntil;
- (long long)daysUntil;
- (long long)weeksUntil;
- (long long)monthsUntil;
- (long long)yearsUntil;
- (long long)daysFrom:(id)arg1 calendar:(id)arg2;
- (long long)weeksFrom:(id)arg1 calendar:(id)arg2;
- (long long)monthsFrom:(id)arg1 calendar:(id)arg2;
- (long long)yearsFrom:(id)arg1 calendar:(id)arg2;
- (double)secondsFrom:(id)arg1;
- (double)minutesFrom:(id)arg1;
- (double)hoursFrom:(id)arg1;
- (long long)daysFrom:(id)arg1;
- (long long)weeksFrom:(id)arg1;
- (long long)monthsFrom:(id)arg1;
- (long long)yearsFrom:(id)arg1;
- (id)dateBySubtractingSeconds:(long long)arg1;
- (id)dateBySubtractingMinutes:(long long)arg1;
- (id)dateBySubtractingHours:(long long)arg1;
- (id)dateBySubtractingDays:(long long)arg1;
- (id)dateBySubtractingWeeks:(long long)arg1;
- (id)dateBySubtractingMonths:(long long)arg1;
- (id)dateBySubtractingYears:(long long)arg1;
- (id)dateByAddingSeconds:(long long)arg1;
- (id)dateByAddingMinutes:(long long)arg1;
- (id)dateByAddingHours:(long long)arg1;
- (id)dateByAddingDays:(long long)arg1;
- (id)dateByAddingWeeks:(long long)arg1;
- (id)dateByAddingMonths:(long long)arg1;
- (id)dateByAddingYears:(long long)arg1;
- (long long)componentForDate:(id)arg1 type:(unsigned long long)arg2 calendar:(id)arg3;
- (long long)dayOfYearWithCalendar:(id)arg1;
- (long long)yearForWeekOfYearWithCalendar:(id)arg1;
- (long long)weekOfYearWithCalendar:(id)arg1;
- (long long)weekOfMonthWithCalendar:(id)arg1;
- (long long)quarterWithCalendar:(id)arg1;
- (long long)weekdayOrdinalWithCalendar:(id)arg1;
- (long long)weekdayWithCalendar:(id)arg1;
- (long long)secondWithCalendar:(id)arg1;
- (long long)minuteWithCalendar:(id)arg1;
- (long long)hourWithCalendar:(id)arg1;
- (long long)dayWithCalendar:(id)arg1;
- (long long)monthWithCalendar:(id)arg1;
- (long long)yearWithCalendar:(id)arg1;
- (long long)eraWithCalendar:(id)arg1;
- (_Bool)isWeekend;
- (_Bool)isYesterday;
- (_Bool)isTomorrow;
- (_Bool)isToday;
- (_Bool)isInLeapYear;
- (long long)daysInYear;
- (long long)dayOfYear;
- (long long)daysInMonth;
- (long long)yearForWeekOfYear;
- (long long)weekOfYear;
- (long long)weekOfMonth;
- (long long)quarter;
- (long long)weekdayOrdinal;
- (long long)weekday;
- (long long)second;
- (long long)minute;
- (long long)hour;
- (long long)day;
- (long long)month;
- (long long)year;
- (long long)era;
- (id)getLocaleFormatUnderscoresWithValue:(double)arg1;
- (id)logicLocalizedStringFromFormat:(id)arg1 withValue:(long long)arg2;
- (id)shortTimeAgoSinceDate:(id)arg1;
- (id)timeAgoSinceDate:(id)arg1 numericDates:(_Bool)arg2 numericTimes:(_Bool)arg3;
- (id)timeAgoSinceDate:(id)arg1 numericDates:(_Bool)arg2;
- (id)timeAgoSinceDate:(id)arg1;
- (id)shortTimeAgoSinceNow;
- (id)timeAgoSinceNow;
@end

