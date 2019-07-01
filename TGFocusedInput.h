//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIImage, UIImageView, UITextField;

__attribute__((visibility("hidden")))
@interface TGFocusedInput : UIView <UITextFieldDelegate>
{
    UITextField *hiddenTextField;
    UIView *mainInputView;
    UITextField *inputTextField;
    UIButton *doneButton;
    UIButton *cancelButton;
    UIImageView *iconView;
    UIView *inputBackground;
    _Bool _blockHiddenTextField;
    _Bool _done;
    _Bool didControlButtonPressed;
}

- (void).cxx_destruct;
- (void)initiateData:(id)arg1;
- (void)initiateUI:(id)arg1;
- (_Bool)shouldEnableDoneButtonWithText:(id)arg1;
- (void)didDoneWithText:(id)arg1;
- (void)didCancel:(id)arg1;
- (void)finilizeUI;
- (id)getText;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)showInViewController:(id)arg1;
- (void)showControlsButtonOnkeyboard;
- (void)showControlsButton:(id)arg1;
- (void)setBlurEffect;
@property(retain, nonatomic) UIImage *icon;
@property(retain, nonatomic) NSString *defaultText;
- (void)textFieldDidChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

