//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AbstractActionSheetPicker.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ActionSheetCustomPicker : AbstractActionSheetPicker
{
    id <ActionSheetCustomPickerDelegate> _delegate;
    NSArray *_initialSelections;
}

+ (id)showPickerWithTitle:(id)arg1 delegate:(id)arg2 showCancelButton:(_Bool)arg3 origin:(id)arg4 initialSelections:(id)arg5;
+ (id)showPickerWithTitle:(id)arg1 delegate:(id)arg2 showCancelButton:(_Bool)arg3 origin:(id)arg4;
@property(retain, nonatomic) NSArray *initialSelections; // @synthesize initialSelections=_initialSelections;
@property(retain, nonatomic) id <ActionSheetCustomPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyTarget:(id)arg1 didCancelWithAction:(SEL)arg2 origin:(id)arg3;
- (void)notifyTarget:(id)arg1 didSucceedWithAction:(SEL)arg2 origin:(id)arg3;
- (id)configuredPickerView;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 showCancelButton:(_Bool)arg3 origin:(id)arg4 initialSelections:(id)arg5;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 showCancelButton:(_Bool)arg3 origin:(id)arg4;

@end

