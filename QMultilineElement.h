//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QEntryElement.h"

@interface QMultilineElement : QEntryElement
{
    id <QuickDialogEntryElementDelegate> _delegate;
}

@property(nonatomic) id <QuickDialogEntryElementDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canTakeFocus;
- (void)fetchValueIntoObject:(id)arg1;
- (void)selected:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (id)getCellForTableView:(id)arg1 controller:(id)arg2;
- (id)initWithTitle:(id)arg1 value:(id)arg2;
- (id)init;

@end

