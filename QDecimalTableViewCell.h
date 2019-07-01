//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QEntryTableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSNumberFormatter, NSString;

@interface QDecimalTableViewCell : QEntryTableViewCell <UITextFieldDelegate>
{
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateElementFromTextField:(id)arg1;
- (void)prepareForElement:(id)arg1 inTableView:(id)arg2;
- (void)updateTextFieldFromElement;
- (id)decimalElement;
- (void)createSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
