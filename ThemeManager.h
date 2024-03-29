//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface ThemeManager : NSObject
{
    NSMutableDictionary *_simpleIconCache;
    _Bool _translucent;
    NSString *_exec;
    NSString *_exec_link;
    NSString *_file;
    NSString *_file_blocked;
    NSString *_file_link;
    NSString *_folder;
    NSString *_folder_link;
    NSString *_extensions_dir;
    UIColor *_background;
    UIColor *_secondaryColor;
    UIColor *_text;
    UIColor *_bar;
    UIColor *_header;
    UIColor *_brown;
    UIColor *_lightGray;
    UIColor *_gray;
    UIColor *_darkGray;
    UIColor *_systemColor;
    UIColor *_highlight;
    UIColor *_selected;
    UIImage *_folder_detail;
    UIImage *_file_detail;
    UIImage *_closeButton;
    UIColor *_barBackground;
    long long _statusBarStyle;
    long long _activityStyle;
    UIImage *_checkboxImage;
    UIColor *_highlight_selected;
    long long _barStyle;
    UIImage *_link;
    double _fontSize;
    double _smallFontSize;
    double _labelFontSize;
    double _buttonFontSize;
}

+ (id)sharedInstance;
@property(nonatomic) double buttonFontSize; // @synthesize buttonFontSize=_buttonFontSize;
@property(nonatomic) double labelFontSize; // @synthesize labelFontSize=_labelFontSize;
@property(nonatomic) double smallFontSize; // @synthesize smallFontSize=_smallFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIImage *link; // @synthesize link=_link;
@property(nonatomic) _Bool translucent; // @synthesize translucent=_translucent;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(retain, nonatomic) UIColor *highlight_selected; // @synthesize highlight_selected=_highlight_selected;
@property(retain, nonatomic) UIImage *checkboxImage; // @synthesize checkboxImage=_checkboxImage;
@property(nonatomic) long long activityStyle; // @synthesize activityStyle=_activityStyle;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) UIColor *barBackground; // @synthesize barBackground=_barBackground;
@property(retain, nonatomic) UIImage *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImage *file_detail; // @synthesize file_detail=_file_detail;
@property(retain, nonatomic) UIImage *folder_detail; // @synthesize folder_detail=_folder_detail;
@property(retain, nonatomic) UIColor *selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) UIColor *systemColor; // @synthesize systemColor=_systemColor;
@property(retain, nonatomic) UIColor *darkGray; // @synthesize darkGray=_darkGray;
@property(retain, nonatomic) UIColor *gray; // @synthesize gray=_gray;
@property(retain, nonatomic) UIColor *lightGray; // @synthesize lightGray=_lightGray;
@property(retain, nonatomic) UIColor *brown; // @synthesize brown=_brown;
@property(retain, nonatomic) UIColor *header; // @synthesize header=_header;
@property(retain, nonatomic) UIColor *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) UIColor *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *background; // @synthesize background=_background;
@property(retain, nonatomic) NSString *extensions_dir; // @synthesize extensions_dir=_extensions_dir;
@property(retain, nonatomic) NSString *folder_link; // @synthesize folder_link=_folder_link;
@property(retain, nonatomic) NSString *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) NSString *file_link; // @synthesize file_link=_file_link;
@property(retain, nonatomic) NSString *file_blocked; // @synthesize file_blocked=_file_blocked;
@property(retain, nonatomic) NSString *file; // @synthesize file=_file;
@property(retain, nonatomic) NSString *exec_link; // @synthesize exec_link=_exec_link;
@property(retain, nonatomic) NSString *exec; // @synthesize exec=_exec;
- (void).cxx_destruct;
- (void)clearAllMemoryCaches;
- (_Bool)shouldGenerateThumnailForFileExtension:(id)arg1;
- (_Bool)shouldGenerateThumnailForFilePath:(id)arg1;
- (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2 radius:(float)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)imageWithName:(id)arg1;
- (id)imageWithName:(id)arg1 cache:(_Bool)arg2;
- (void)loadExentionToCache;
- (void)loadExentionToCacheIfNeeds;
- (id)imageWithName:(id)arg1 withMaskColor:(id)arg2;
- (id)imageWithName:(id)arg1 withMaskColor:(id)arg2 cache:(_Bool)arg3;
- (id)inverseColor:(id)arg1;
- (void)setThemeColors;
- (_Bool)isBlackTheme;
- (void)setThemeFiles;
- (_Bool)isRightToLeftContent;
- (void)setFontSize;
- (id)init;

@end

