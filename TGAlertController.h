//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TGAlertController : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _completion;
}

+ (void)showAlertWithTitle:(id)arg1 text:(id)arg2 cancelButton:(id)arg3 otherButtons:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)shared;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

