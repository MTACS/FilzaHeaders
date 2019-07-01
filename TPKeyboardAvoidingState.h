//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TPKeyboardAvoidingState : NSObject
{
    _Bool _keyboardVisible;
    _Bool _priorPagingEnabled;
    struct CGSize _priorContentSize;
    struct UIEdgeInsets _priorInset;
    struct UIEdgeInsets _priorScrollIndicatorInsets;
    struct CGRect _keyboardRect;
}

@property(nonatomic) _Bool priorPagingEnabled; // @synthesize priorPagingEnabled=_priorPagingEnabled;
@property(nonatomic) struct CGSize priorContentSize; // @synthesize priorContentSize=_priorContentSize;
@property(nonatomic) struct CGRect keyboardRect; // @synthesize keyboardRect=_keyboardRect;
@property(nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) struct UIEdgeInsets priorScrollIndicatorInsets; // @synthesize priorScrollIndicatorInsets=_priorScrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets priorInset; // @synthesize priorInset=_priorInset;

@end
