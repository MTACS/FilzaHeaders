//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QElement.h"

@class NSDictionary, NSIndexPath, NSMutableArray, NSString;

@interface QRootElement : QElement
{
    _Bool _grouped;
    NSString *_title;
    NSMutableArray *_sections;
    NSString *_controllerName;
    NSDictionary *_sectionTemplate;
    int _presentationMode;
    _Bool _showKeyboardOnAppear;
    NSString *_emptyMessage;
    CDUnknownBlockType _onValueChanged;
    NSIndexPath *_preselectedElementIndex;
}

+ (id)rootForJSON:(id)arg1 withObject:(id)arg2;
+ (id)rootForJSON:(id)arg1;
+ (Class)JSONParserClass;
@property _Bool showKeyboardOnAppear; // @synthesize showKeyboardOnAppear=_showKeyboardOnAppear;
@property(retain, nonatomic) NSIndexPath *preselectedElementIndex; // @synthesize preselectedElementIndex=_preselectedElementIndex;
@property(nonatomic) int presentationMode; // @synthesize presentationMode=_presentationMode;
@property(copy, nonatomic) CDUnknownBlockType onValueChanged; // @synthesize onValueChanged=_onValueChanged;
@property(copy, nonatomic) NSString *emptyMessage; // @synthesize emptyMessage=_emptyMessage;
@property(retain, nonatomic) NSDictionary *sectionTemplate; // @synthesize sectionTemplate=_sectionTemplate;
@property(retain, nonatomic) NSString *controllerName; // @synthesize controllerName=_controllerName;
@property _Bool grouped; // @synthesize grouped=_grouped;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)findElementToFocusOnAfter:(id)arg1;
- (id)findElementToFocusOnBefore:(id)arg1;
- (id)rootWithKey:(id)arg1;
- (id)elementWithKey:(id)arg1;
- (id)sectionWithKey:(id)arg1;
- (void)dealloc;
- (void)bindToObject:(id)arg1;
- (void)bindToObject:(id)arg1 shallow:(_Bool)arg2;
- (void)fetchValueUsingBindingsIntoObject:(id)arg1;
- (void)fetchValueIntoObject:(id)arg1;
- (void)handleEditingChanged;
- (void)selected:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (id)getCellForTableView:(id)arg1 controller:(id)arg2;
- (unsigned long long)getVisibleIndexForSection:(id)arg1;
- (long long)visibleNumberOfSections;
- (id)getVisibleSectionForIndex:(long long)arg1;
- (long long)numberOfSections;
- (id)getSectionForIndex:(long long)arg1;
- (void)addSection:(id)arg1;
- (id)init;
- (id)initWithJSONFile:(id)arg1 andDataJSONFile:(id)arg2;
- (id)initWithJSON:(id)arg1 andData:(id)arg2;
- (id)initWithJSONFile:(id)arg1 andData:(id)arg2;
- (id)initWithJSONFile:(id)arg1;

@end
