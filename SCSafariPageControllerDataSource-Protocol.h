//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSafariPageController, UIViewController;

@protocol SCSafariPageControllerDataSource <NSObject>
- (UIViewController *)pageController:(SCSafariPageController *)arg1 viewControllerForPageAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPagesInPageController:(SCSafariPageController *)arg1;
@end

