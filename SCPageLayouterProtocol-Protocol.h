//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCPageViewController, UIViewController;

@protocol SCPageLayouterProtocol <NSObject>
@property(nonatomic) unsigned long long numberOfPagesToPreloadAfterCurrentPage;
@property(nonatomic) unsigned long long numberOfPagesToPreloadBeforeCurrentPage;
@property(nonatomic) unsigned long long navigationConstraintType;
@property(nonatomic) unsigned long long navigationType;
- (struct CGRect)finalFrameForPageAtIndex:(unsigned long long)arg1 pageViewController:(SCPageViewController *)arg2;

@optional
- (void)animatePageMoveFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 viewController:(UIViewController *)arg3 pageViewController:(SCPageViewController *)arg4 completion:(void (^)(void))arg5;
- (void)animatePageDeletionAtIndex:(unsigned long long)arg1 viewController:(UIViewController *)arg2 pageViewController:(SCPageViewController *)arg3 completion:(void (^)(void))arg4;
- (_Bool)shouldPreserveOffsetForInsertionAtIndex:(unsigned long long)arg1 pageViewController:(SCPageViewController *)arg2;
- (void)animatePageInsertionAtIndex:(unsigned long long)arg1 viewController:(UIViewController *)arg2 pageViewController:(SCPageViewController *)arg3 completion:(void (^)(void))arg4;
- (void)animatePageReloadAtIndex:(unsigned long long)arg1 oldViewController:(UIViewController *)arg2 newViewController:(UIViewController *)arg3 pageViewController:(SCPageViewController *)arg4 completion:(void (^)(void))arg5;
- (void)pageViewController:(SCPageViewController *)arg1 didNavigateToOffset:(struct CGPoint)arg2;
- (struct CATransform3D)sublayerTransformForPageAtIndex:(unsigned long long)arg1 contentOffset:(struct CGPoint)arg2 pageViewController:(SCPageViewController *)arg3;
- (unsigned long long)zPositionForPageAtIndex:(unsigned long long)arg1 pageViewController:(SCPageViewController *)arg2;
- (struct CGRect)currentFrameForPageAtIndex:(unsigned long long)arg1 contentOffset:(struct CGPoint)arg2 finalFrame:(struct CGRect)arg3 pageViewController:(SCPageViewController *)arg4;
- (struct UIEdgeInsets)contentInsetForPageViewController:(SCPageViewController *)arg1;
- (double)interItemSpacingForPageViewController:(SCPageViewController *)arg1;
- (struct CGPoint)contentOffsetForPageViewController:(SCPageViewController *)arg1;
- (struct CGSize)contentSizeForPageViewController:(SCPageViewController *)arg1;
@end

