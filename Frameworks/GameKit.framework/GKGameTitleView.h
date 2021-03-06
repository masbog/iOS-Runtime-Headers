/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKCoreTextLabel, NSString, GKUITheme, NSDate;

@interface GKGameTitleView : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    NSDate *_date;
    GKCoreTextLabel *_dateLabel;
    } _datelineInsets;
    GKCoreTextLabel *_gameTitleLabel;
    GKCoreTextLabel *_lastPlayedLabel;
    float _maxDateFontSize;
    float _maxDateLabelFontSize;
    float _maxTitleFontSize;
    unsigned int _numberOfTitleLines;
    GKUITheme *_theme;
    NSString *_title;
}

@property(retain) NSDate * date;
@property(retain) GKCoreTextLabel * dateLabel;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } datelineInsets;
@property(retain) GKCoreTextLabel * gameTitleLabel;
@property(retain) GKCoreTextLabel * lastPlayedLabel;
@property float maxDateFontSize;
@property float maxDateLabelFontSize;
@property float maxTitleFontSize;
@property unsigned int numberOfTitleLines;
@property(retain) GKUITheme * theme;
@property(retain) NSString * title;

- (id)date;
- (id)dateLabel;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })datelineInsets;
- (void)dealloc;
- (id)formattedDateForStyle:(unsigned int)arg1 relative:(BOOL)arg2;
- (id)gameTitleLabel;
- (id)init;
- (id)lastPlayedLabel;
- (void)layoutDateLineWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 viewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 hasValidDate:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutGameTitleLabelWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)maxDateFontSize;
- (float)maxDateLabelFontSize;
- (float)maxTitleFontSize;
- (unsigned int)numberOfTitleLines;
- (void)setDate:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setDatelineInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGameTitleLabel:(id)arg1;
- (void)setLastPlayedLabel:(id)arg1;
- (void)setMaxDateFontSize:(float)arg1;
- (void)setMaxDateLabelFontSize:(float)arg1;
- (void)setMaxTitleFontSize:(float)arg1;
- (void)setNumberOfTitleLines:(unsigned int)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)theme;
- (id)title;

@end
