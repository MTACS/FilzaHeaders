//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGFocusedInput.h"

__attribute__((visibility("hidden")))
@interface NewFolder : TGFocusedInput
{
    id <NewFolderDelegate> delegate;
}

@property(nonatomic) id <NewFolderDelegate> delegate; // @synthesize delegate;
- (_Bool)shouldEnableDoneButtonWithText:(id)arg1;
- (void)didDoneWithText:(id)arg1;
- (void)didCancel:(id)arg1;
- (void)setSuggestedFileName:(id)arg1;
- (void)dealloc;
- (void)showInViewController:(id)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

