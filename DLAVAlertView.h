//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class DLAVAlertViewTheme, NSMutableArray, NSString, UILabel, UITextField;

__attribute__((visibility("hidden")))
@interface DLAVAlertView : UIView <UITextFieldDelegate>
{
    _Bool _visible;
    _Bool _dismissesOnBackdropTap;
    _Bool _hasCustomTextFields;
    _Bool _isObservingKeyboard;
    id <DLAVAlertViewDelegate> _delegate;
    long long _cancelButtonIndex;
    UITextField *_customFirstReponderTextField;
    CDUnknownBlockType _completion;
    unsigned long long _alertViewStyle;
    UIView *_contentView;
    double _minContentWidth;
    double _maxContentWidth;
    UIView *_clippingView;
    UILabel *_titleLabel;
    UIView *_titleBackgroundView;
    UILabel *_messageLabel;
    NSMutableArray *_textfields;
    NSMutableArray *_buttons;
    NSMutableArray *_lines;
    NSMutableArray *_textFieldThemes;
    NSMutableArray *_buttonThemes;
    DLAVAlertViewTheme *_theme;
    double _keyboardHeight;
}

+ (struct CGRect)getScreenFrameForOrientation:(long long)arg1;
+ (struct CGRect)getScreenFrameForCurrentOrientation;
+ (struct CGSize)optimalSizeForLabel:(id)arg1 inMaxSize:(struct CGSize)arg2;
+ (void)applyTheme:(id)arg1 toButton:(id)arg2 animated:(_Bool)arg3;
+ (void)applyTheme:(id)arg1 toTextField:(id)arg2 animated:(_Bool)arg3;
+ (void)setBackdropColor:(id)arg1;
+ (void)setDefaultTheme:(id)arg1;
+ (id)line;
+ (id)buttonWithTitle:(id)arg1 target:(id)arg2;
+ (id)textFieldWithText:(id)arg1 placeholder:(id)arg2;
+ (id)messageLabelWithMessage:(id)arg1;
+ (id)titleLabelWithTitle:(id)arg1;
+ (id)buttonTitlesWithCancelTitle:(id)arg1 otherTitle:(id)arg2;
+ (void)initialize;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isObservingKeyboard; // @synthesize isObservingKeyboard=_isObservingKeyboard;
@property(copy, nonatomic) DLAVAlertViewTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSMutableArray *buttonThemes; // @synthesize buttonThemes=_buttonThemes;
@property(retain, nonatomic) NSMutableArray *textFieldThemes; // @synthesize textFieldThemes=_textFieldThemes;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableArray *textfields; // @synthesize textfields=_textfields;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *titleBackgroundView; // @synthesize titleBackgroundView=_titleBackgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(nonatomic) double minContentWidth; // @synthesize minContentWidth=_minContentWidth;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long alertViewStyle; // @synthesize alertViewStyle=_alertViewStyle;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak UITextField *customFirstReponderTextField; // @synthesize customFirstReponderTextField=_customFirstReponderTextField;
@property(nonatomic) _Bool hasCustomTextFields; // @synthesize hasCustomTextFields=_hasCustomTextFields;
@property(nonatomic) _Bool dismissesOnBackdropTap; // @synthesize dismissesOnBackdropTap=_dismissesOnBackdropTap;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
@property(nonatomic) __weak id <DLAVAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCenterWithAnimationOfDuration:(double)arg1;
- (void)updateBoundsWithAnimationOfDuration:(double)arg1;
- (void)updateFrameWithAnimationOfDuration:(double)arg1;
- (double)animationDuration;
- (double)contentViewHeight;
- (double)messageHeight;
- (double)titleHeight;
- (struct CGSize)preferredFrameSize;
- (double)alertHeight;
- (double)alertWidth;
- (void)layoutButtonsWithTheme:(id)arg1 inAlertWithSize:(struct CGSize)arg2 atVerticalOffset:(double *)arg3;
- (void)layoutButtonPairWithTheme:(id)arg1 inAlertWithSize:(struct CGSize)arg2 atVerticalOffset:(double *)arg3;
- (void)layoutTextFieldsWithTheme:(id)arg1 inAlertWithSize:(struct CGSize)arg2 atVerticalOffset:(double *)arg3;
- (void)layoutContentViewWithTheme:(id)arg1 inAlertWithSize:(struct CGSize)arg2 atVerticalOffset:(double *)arg3;
- (void)layoutMessageLabelWithTheme:(id)arg1 inAlertWithSize:(struct CGSize)arg2 atVerticalOffset:(double *)arg3;
- (void)layoutTitleLabelWithTheme:(id)arg1 inAlertWithSize:(struct CGSize)arg2 atVerticalOffset:(double *)arg3;
- (void)layoutSubviews;
- (void)updateFirstOtherButtonEnabledWithCurrentTextField:(id)arg1;
- (_Bool)shouldSetFirstOtherButtonEnabled;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)removeKeyboardNotificationObservers;
- (void)addKeyboardNotificationObservers;
- (void)dismissAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didDismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissWithButton:(id)arg1;
- (void)dismissWithBackdropTap;
- (void)unhideWithCompletion:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)didShowOrUnhide;
- (void)willDismissOrHide;
- (void)showWithCompletion:(CDUnknownBlockType)arg1 animation:(_Bool)arg2;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)show;
- (void)setHighlightBackgroundColorForButton:(id)arg1;
- (void)setBackgroundColorForButton:(id)arg1;
- (void)applyTheme:(id)arg1 animated:(_Bool)arg2;
- (void)applyTheme:(id)arg1;
- (void)setCustomButtonTheme:(id)arg1 forButtonAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setCustomButtonTheme:(id)arg1 forButtonAtIndex:(unsigned long long)arg2;
- (void)setCustomTextFieldTheme:(id)arg1 forTextFieldAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setCustomTextFieldTheme:(id)arg1 forTextFieldAtIndex:(unsigned long long)arg2;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
@property(readonly, nonatomic) long long numberOfButtons;
- (void)updateTextFieldsForAlertViewStyle:(unsigned long long)arg1;
- (void)removeTextFieldsInRange:(struct _NSRange)arg1;
- (id)themeForButtonAtIndex:(unsigned long long)arg1;
- (_Bool)isPrimaryButtonAtIndex:(unsigned long long)arg1;
- (long long)indexOfButtonWithTitle:(id)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (id)buttonAtIndex:(long long)arg1;
- (id)internalAddButtonWithTitle:(id)arg1;
- (void)addButtonWithTitle:(id)arg1;
- (void)addLabelWithMessage:(id)arg1;
- (void)addLabelWithTitle:(id)arg1;
- (id)themeForTextFieldAtIndex:(unsigned long long)arg1;
- (void)setSecureTextEntry:(_Bool)arg1 ofTextFieldAtIndex:(long long)arg2;
- (void)setInputView:(id)arg1 ofTextFieldAtIndex:(long long)arg2;
- (void)setKeyboardType:(long long)arg1 ofTextFieldAtIndex:(long long)arg2;
- (long long)numberOfTextFields;
- (id)textFieldTextAtIndex:(long long)arg1;
- (id)textFieldAtIndex:(long long)arg1;
- (id)internalAddTextFieldWithText:(id)arg1 placeholder:(id)arg2;
- (void)addTextFieldWithText:(id)arg1 placeholder:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (double)progress;
- (void)updateProgress:(double)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
