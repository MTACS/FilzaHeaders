//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (FXLabelDrawing)
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(double)arg5 characterSpacing:(double)arg6 kerningTable:(id)arg7 allowOrphans:(_Bool)arg8;
- (struct CGSize)FXLabel_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(double)arg5 characterSpacing:(double)arg6 kerningTable:(id)arg7 allowOrphans:(_Bool)arg8 color:(id)arg9;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(double)arg4 characterSpacing:(double)arg5 kerningTable:(id)arg6 allowOrphans:(_Bool)arg7;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 characterSpacing:(double)arg8 kerningTable:(id)arg9;
- (struct CGSize)FXLabel_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 characterSpacing:(double)arg8 kerningTable:(id)arg9 color:(id)arg10;
- (struct CGSize)sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double *)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5 characterSpacing:(double)arg6 kerningTable:(id)arg7;
- (struct CGSize)FXLabel_sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double *)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5 characterSpacing:(double)arg6 kerningTable:(id)arg7 charactersFitted:(unsigned long long *)arg8 includesEllipsis:(_Bool *)arg9;
- (struct CGSize)FXLabel_drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2 color:(id)arg3;
- (struct CGSize)FXLabel_sizeWithFont:(id)arg1;
- (id)FXLabel_linesWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(double)arg4 characterSpacing:(double)arg5 kerningTable:(id)arg6 allowOrphans:(_Bool)arg7;
- (id)FXLabel_characters;
- (_Bool)FXLabel_isPunctuation;
- (void)FXLabel_popSizingContext;
- (void)FXLabel_pushSizingContext;
@end

