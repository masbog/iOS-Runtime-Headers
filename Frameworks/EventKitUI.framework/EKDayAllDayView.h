/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, UILabel, <EKDayAllDayViewDelegate>, UIScrollView, UIView, NSMutableArray;

@interface EKDayAllDayView : UIView {
    UILabel *_allDay;
    BOOL _allDayLabelHighlighted;
    BOOL _allowSelection;
    <EKDayAllDayViewDelegate> *_delegate;
    EKEvent *_dimmedOccurrence;
    BOOL _dimsNonSelectedItems;
    int _maxVisibleItems;
    float _occurrenceInset;
    NSMutableArray *_occurrenceViews;
    int _orientation;
    UIScrollView *_scroller;
    EKEvent *_selectedEvent;
    BOOL _showSelection;
    UIView *_splitterView;
    BOOL _usesSmallText;
}

@property BOOL allowsOccurrenceSelection;
@property <EKDayAllDayViewDelegate> * delegate;
@property(retain) EKEvent * dimmedOccurrence;
@property BOOL dimsNonSelectedItems;
@property int maxVisibleItems;
@property BOOL showsSelection;

- (float)_allDayAreaHeightForEventCount:(int)arg1;
- (void)addViewToScroller:(id)arg1;
- (BOOL)allowsOccurrenceSelection;
- (BOOL)containsEvent:(id)arg1;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)dimmedOccurrence;
- (BOOL)dimsNonSelectedItems;
- (float)firstEventYOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAllDayLabelHighlighted;
- (void)layoutSubviews;
- (int)maxVisibleItems;
- (float)nextAvailableOccurrenceViewYOrigin;
- (id)occurrenceViewForEvent:(id)arg1;
- (void)removeAllOccurrenceViews;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (void)setMaxVisibleItems:(int)arg1;
- (void)setOccurrenceInset:(float)arg1 labelInset:(float)arg2;
- (void)setOccurrences:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setShowsSelection:(BOOL)arg1;
- (BOOL)showsSelection;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
