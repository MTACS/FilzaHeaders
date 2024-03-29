//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface FXLabel : UIView
{
    UIColor *_tagColor;
    long long _lineBreakMode;
    long long _textAligment;
    UIColor *_textColor;
    UIFont *_font;
    long long _numberOfLines;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long textAligment; // @synthesize textAligment=_textAligment;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(retain, nonatomic) UIColor *tagColor; // @synthesize tagColor=_tagColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)FXLabel_sizeThatFits:(struct CGSize)arg1 actualFontSize:(double *)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

