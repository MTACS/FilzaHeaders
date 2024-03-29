//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class ICRegularExpression, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSTimer, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface ICTextView : UITextView
{
    _Bool _circularSearch;
    _Bool _animatedSearch;
    _Bool _appliedSelectionFix;
    _Bool _highlightSearchResults;
    _Bool _performedNewScroll;
    _Bool _searching;
    _Bool _searchVisibleRange;
    int _scrollPosition;
    NSTimer *_autoRefreshTimer;
    double _scrollAutoRefreshDelay;
    UIView *_textSubview;
    double _highlightCornerRadius;
    NSMutableDictionary *_highlightsByRange;
    unsigned long long _maxHighlightedMatches;
    UIColor *_primaryHighlightColor;
    NSMutableArray *_primaryHighlights;
    ICRegularExpression *_regex;
    unsigned long long _searchIndex;
    unsigned long long _searchOptions;
    UIColor *_secondaryHighlightColor;
    NSMutableOrderedSet *_secondaryHighlights;
    struct _NSRange _cachedRange;
    struct _NSRange _searchRange;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableOrderedSet *secondaryHighlights; // @synthesize secondaryHighlights=_secondaryHighlights;
@property(retain, nonatomic) UIColor *secondaryHighlightColor; // @synthesize secondaryHighlightColor=_secondaryHighlightColor;
@property(nonatomic) _Bool searchVisibleRange; // @synthesize searchVisibleRange=_searchVisibleRange;
@property(nonatomic) struct _NSRange searchRange; // @synthesize searchRange=_searchRange;
@property(nonatomic) unsigned long long searchOptions; // @synthesize searchOptions=_searchOptions;
@property(nonatomic) unsigned long long searchIndex; // @synthesize searchIndex=_searchIndex;
@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(nonatomic) int scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property(retain, nonatomic) ICRegularExpression *regex; // @synthesize regex=_regex;
@property(retain, nonatomic) NSMutableArray *primaryHighlights; // @synthesize primaryHighlights=_primaryHighlights;
@property(retain, nonatomic) UIColor *primaryHighlightColor; // @synthesize primaryHighlightColor=_primaryHighlightColor;
@property(nonatomic) _Bool performedNewScroll; // @synthesize performedNewScroll=_performedNewScroll;
@property(nonatomic) unsigned long long maxHighlightedMatches; // @synthesize maxHighlightedMatches=_maxHighlightedMatches;
@property(nonatomic) _Bool highlightSearchResults; // @synthesize highlightSearchResults=_highlightSearchResults;
@property(retain, nonatomic) NSMutableDictionary *highlightsByRange; // @synthesize highlightsByRange=_highlightsByRange;
@property(nonatomic) double highlightCornerRadius; // @synthesize highlightCornerRadius=_highlightCornerRadius;
@property(nonatomic) struct _NSRange cachedRange; // @synthesize cachedRange=_cachedRange;
@property(nonatomic) _Bool appliedSelectionFix; // @synthesize appliedSelectionFix=_appliedSelectionFix;
@property(nonatomic) _Bool animatedSearch; // @synthesize animatedSearch=_animatedSearch;
@property(nonatomic) double scrollAutoRefreshDelay; // @synthesize scrollAutoRefreshDelay=_scrollAutoRefreshDelay;
@property(nonatomic) _Bool circularSearch; // @synthesize circularSearch=_circularSearch;
@property(nonatomic) NSTimer *autoRefreshTimer; // @synthesize autoRefreshTimer=_autoRefreshTimer;
- (void).cxx_destruct;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2 consideringInsets:(_Bool)arg3 atScrollPosition:(int)arg4;
- (void)scrollRangeToVisible:(struct _NSRange)arg1 consideringInsets:(_Bool)arg2 animated:(_Bool)arg3 atScrollPosition:(int)arg4;
- (_Bool)scrollToString:(id)arg1 searchOptions:(unsigned long long)arg2 range:(struct _NSRange)arg3 animated:(_Bool)arg4 atScrollPosition:(int)arg5;
- (_Bool)scrollToString:(id)arg1 searchOptions:(unsigned long long)arg2 animated:(_Bool)arg3 atScrollPosition:(int)arg4;
- (_Bool)scrollToString:(id)arg1 searchOptions:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)scrollToString:(id)arg1 searchOptions:(unsigned long long)arg2;
- (_Bool)scrollToMatch:(id)arg1 searchOptions:(unsigned long long)arg2 range:(struct _NSRange)arg3 animated:(_Bool)arg4 atScrollPosition:(int)arg5;
- (_Bool)scrollToMatch:(id)arg1 searchOptions:(unsigned long long)arg2 animated:(_Bool)arg3 atScrollPosition:(int)arg4;
- (_Bool)scrollToMatch:(id)arg1 searchOptions:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)scrollToMatch:(id)arg1 searchOptions:(unsigned long long)arg2;
- (void)setText:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)scrollToCaretPosition:(id)arg1;
- (void)awakeFromNib;
- (void)applySelectionFix;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (_Bool)becomeFirstResponder;
- (struct UIEdgeInsets)totalContentInset;
- (void)textChanged;
- (void)setPrimaryHighlightAtRange:(struct _NSRange)arg1;
- (void)scrollToY:(double)arg1 animated:(_Bool)arg2 consideringInsets:(_Bool)arg3;
- (void)scrollEnded;
- (void)removeHighlightsTooFarFromRange:(struct _NSRange)arg1;
- (void)initializeSecondaryHighlights;
- (_Bool)initializeSearchWithPattern:(id)arg1;
- (void)initializePrimaryHighlights;
- (void)initializeHighlights;
- (void)initialize;
- (void)highlightOccurrencesInMaskedVisibleRange;
- (id)addHighlightAtTextRange:(id)arg1;
- (id)addHighlightAtRect:(struct CGRect)arg1;
- (struct CGRect)visibleRectConsideringInsets:(_Bool)arg1;
- (struct _NSRange)visibleRangeConsideringInsets:(_Bool)arg1 startPosition:(id *)arg2 endPosition:(id *)arg3;
- (struct _NSRange)visibleRangeConsideringInsets:(_Bool)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2 consideringInsets:(_Bool)arg3;
- (void)scrollRangeToVisible:(struct _NSRange)arg1 consideringInsets:(_Bool)arg2 animated:(_Bool)arg3;
- (void)scrollRangeToVisible:(struct _NSRange)arg1 consideringInsets:(_Bool)arg2;
- (_Bool)scrollToString:(id)arg1 searchDirection:(int)arg2;
- (_Bool)scrollToString:(id)arg1;
- (_Bool)scrollToMatch:(id)arg1 searchDirection:(int)arg2;
- (_Bool)scrollToMatch:(id)arg1;
- (void)resetSearch;
- (struct _NSRange)rangeOfFoundString;
- (unsigned long long)numberOfMatches;
- (unsigned long long)indexOfFoundString;
- (long long)indexOfFoundStringInt;
- (id)foundString;
@property(readonly, nonatomic) UIView *textSubview; // @synthesize textSubview=_textSubview;

@end

