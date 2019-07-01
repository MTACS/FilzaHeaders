//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDWebLoginControllerDelegate.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GDWebLoginControllerDefaultDelegate : NSObject <GDWebLoginControllerDelegate>
{
    NSURL *_callbackURL;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(retain, nonatomic) NSURL *callbackURL; // @synthesize callbackURL=_callbackURL;
- (void).cxx_destruct;
- (void)cleanup;
- (void)webLoginViewControllerDidCancel:(id)arg1;
- (_Bool)webLoginController:(id)arg1 shouldDismissForURL:(id)arg2;
- (id)initWithCallbackURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

