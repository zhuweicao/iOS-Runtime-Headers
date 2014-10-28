/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class <SiriUISuggestionsViewDelegate>, NSArray, NSMutableOrderedSet, NSString, NSTimer, SiriUIAcousticIDSpinner, UIColor, UILabel;

@interface SiriUISuggestionsView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    } _contentOffset;
    <SiriUISuggestionsViewDelegate> *_delegate;
    BOOL _firstSuggestionPresentation;
    UILabel *_headerLabel;
    NSString *_headerText;
    UILabel *_largeSubheaderLabel;
    NSString *_largeSubheaderText;
    UILabel *_oldHeaderLabel;
    NSArray *_oldSuggestionLabels;
    int _orientation;
    NSMutableOrderedSet *_pendedSuggestions;
    UILabel *_subheaderLabel;
    NSString *_subheaderText;
    NSArray *_suggestionLabels;
    UIColor *_textColor;
    NSTimer *_updateSuggestionsTimer;
}

@property struct CGPoint { float x1; float x2; } contentOffset;
@property <SiriUISuggestionsViewDelegate> * delegate;
@property(copy) NSString * headerText;
@property(copy) NSString * largeSubheaderText;
@property int orientation;
@property(copy) NSString * subheaderText;
@property(copy) UIColor * textColor;

- (void).cxx_destruct;
- (void)_animateHeaderIn;
- (void)_animateHeaderOut;
- (void)_animateInSuggestionAtIndex:(unsigned int)arg1;
- (void)_animateOutSuggestionAtIndex:(unsigned int)arg1;
- (float)_headerFontSize;
- (float)_headerToLargeSubheaderOffset;
- (float)_headerToSubheaderOffset;
- (int)_heightType;
- (BOOL)_isPortrait;
- (float)_largeSubheaderFontSize;
- (void)_loadLargeSubheaderViewIfNeeded;
- (void)_loadSubheaderViewIfNeeded;
- (void)_loadSuggestionsViewsIfNeeded;
- (unsigned int)_numberOfSuggestionsToDisplay;
- (void)_reallyShowAcousticIDSpinner;
- (void)_setSuggestionTexts:(id)arg1;
- (float)_subheaderFontSize;
- (float)_suggestionFontSize;
- (float)_suggestionSpacing;
- (void)_updateSuggestions;
- (double)_updateSuggestionsDelay;
- (void)acousticIDSpinnerDidHide:(id)arg1;
- (void)animateOutWithCompletion:(id)arg1;
- (void)clearCurrentSuggestions;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (id)delegate;
- (id)headerText;
- (void)hideAcousticIDSpinner;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)largeSubheaderText;
- (void)layoutSubviews;
- (int)orientation;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setLargeSubheaderText:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setSubheaderText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)showAcousticIDSpinner;
- (void)startSuggesting;
- (void)stopSuggesting;
- (id)subheaderText;
- (id)textColor;

@end