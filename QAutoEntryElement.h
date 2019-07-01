//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QEntryElement.h"

#import "DOAutocompleteTextFieldDelegate.h"
#import "UITextInputTraits.h"

@class NSArray, NSString, UIColor, UITextInputPasswordRules;

@interface QAutoEntryElement : QEntryElement <UITextInputTraits, DOAutocompleteTextFieldDelegate>
{
    _Bool hiddenToolbar;
    _Bool _enablesReturnKeyAutomatically;
    _Bool _secureTextEntry;
    NSString *textValue;
    NSString *placeholder;
    NSArray *_autoCompleteValues;
    NSString *lastAutoComplete;
    UIColor *autoCompleteColor;
    id <QuickDialogEntryElementDelegate> _delegate;
    long long _autocorrectionType;
    long long _autocapitalizationType;
    long long _keyboardType;
    long long _keyboardAppearance;
    long long _returnKeyType;
}

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) id <QuickDialogEntryElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *autoCompleteColor; // @synthesize autoCompleteColor;
@property(retain, nonatomic) NSString *lastAutoComplete; // @synthesize lastAutoComplete;
@property(retain, nonatomic) NSArray *autoCompleteValues; // @synthesize autoCompleteValues=_autoCompleteValues;
@property _Bool hiddenToolbar; // @synthesize hiddenToolbar;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder;
@property(retain, nonatomic) NSString *textValue; // @synthesize textValue;
- (void).cxx_destruct;
- (id)textField:(id)arg1 completionForPrefix:(id)arg2;
- (void)fetchValueIntoObject:(id)arg1;
- (void)selected:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (id)getCellForTableView:(id)arg1 controller:(id)arg2;
- (id)initWithTitle:(id)arg1 value:(id)arg2 placeholder:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

