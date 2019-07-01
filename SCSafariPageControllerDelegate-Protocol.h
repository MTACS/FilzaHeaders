//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSafariPageController, UIViewController;

@protocol SCSafariPageControllerDelegate <NSObject>

@optional
- (void)pageController:(SCSafariPageController *)arg1 didDeletePageAtIndex:(unsigned long long)arg2;
- (void)pageController:(SCSafariPageController *)arg1 willDeletePageAtIndex:(unsigned long long)arg2;
- (void)pageController:(SCSafariPageController *)arg1 didNavigateToPageAtIndex:(unsigned long long)arg2;
- (void)pageController:(SCSafariPageController *)arg1 didNavigateToOffset:(struct CGPoint)arg2;
- (void)pageController:(SCSafariPageController *)arg1 didHideViewController:(UIViewController *)arg2 atIndex:(unsigned long long)arg3;
- (void)pageController:(SCSafariPageController *)arg1 didShowViewController:(UIViewController *)arg2 atIndex:(unsigned long long)arg3;
@end

