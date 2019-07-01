//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QuickDialogController.h"

__attribute__((visibility("hidden")))
@interface GDLoginFormViewController : QuickDialogController
{
    _Bool _loading;
    CDUnknownBlockType _buttonTapHandler;
    CDUnknownBlockType _cancelHandler;
}

@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType buttonTapHandler; // @synthesize buttonTapHandler=_buttonTapHandler;
- (void).cxx_destruct;
- (void)cancelTapped:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setQuickDialogTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithRoot:(id)arg1;

@end

