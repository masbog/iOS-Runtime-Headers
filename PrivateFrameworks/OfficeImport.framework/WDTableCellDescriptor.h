/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDShading, WDBorder;

@interface WDTableCellDescriptor : NSObject {
    unsigned int mShadingOverridden : 1;
    unsigned int mTopBorderOverridden : 1;
    unsigned int mLeftBorderOverridden : 1;
    unsigned int mBottomBorderOverridden : 1;
    unsigned int mRightBorderOverridden : 1;
    unsigned int mDiagonalUpBorderOverridden : 1;
    unsigned int mDiagonalDownBorderOverridden : 1;
    unsigned int mWidthTypeOverridden : 1;
    unsigned int mTopMarginOverridden : 1;
    unsigned int mTopMarginTypeOverridden : 1;
    unsigned int mBottomMarginOverridden : 1;
    unsigned int mBottomMarginTypeOverridden : 1;
    unsigned int mLeftMarginOverridden : 1;
    unsigned int mLeftMarginTypeOverridden : 1;
    unsigned int mRightMarginOverridden : 1;
    unsigned int mRightMarginTypeOverridden : 1;
    unsigned int mVerticalAlignmentOverridden : 1;
    unsigned int mVerticallyMergedCell : 1;
    unsigned int mVerticallyMergedCellOverridden : 1;
    unsigned int mFirstInSetOfVerticallyMergedCells : 1;
    unsigned int mFirstInSetOfVerticallyMergedCellsOverridden : 1;
    unsigned int mNoWrap : 1;
    unsigned int mNoWrapOverridden : 1;
    WDBorder *mBottomBorder;
    short mBottomMargin;
    int mBottomMarginType;
    WDBorder *mDiagonalDownBorder;
    WDBorder *mDiagonalUpBorder;
    WDBorder *mLeftBorder;
    short mLeftMargin;
    int mLeftMarginType;
    WDBorder *mRightBorder;
    short mRightMargin;
    int mRightMarginType;
    WDShading *mShading;
    WDBorder *mTopBorder;
    short mTopMargin;
    int mTopMarginType;
    int mVerticalAlignment;
    short mWidth;
    int mWidthType;
}

- (id)bottomBorder;
- (short)bottomMargin;
- (int)bottomMarginType;
- (id)diagonalDownBorder;
- (id)diagonalUpBorder;
- (BOOL)firstInSetOfVerticallyMergedCells;
- (BOOL)isBottomBorderOverridden;
- (BOOL)isBottomMarginOverridden;
- (BOOL)isBottomMarginTypeOverridden;
- (BOOL)isDiagonalDownBorderOverridden;
- (BOOL)isDiagonalUpBorderOverridden;
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
- (BOOL)isLeftBorderOverridden;
- (BOOL)isLeftMarginOverridden;
- (BOOL)isLeftMarginTypeOverridden;
- (BOOL)isNoWrapOverridden;
- (BOOL)isRightBorderOverridden;
- (BOOL)isRightMarginOverridden;
- (BOOL)isRightMarginTypeOverridden;
- (BOOL)isShadingOverridden;
- (BOOL)isTopBorderOverridden;
- (BOOL)isTopMarginOverridden;
- (BOOL)isTopMarginTypeOverridden;
- (BOOL)isVerticalAlignmentOverridden;
- (BOOL)isVerticallyMergedCellOverridden;
- (BOOL)isWidthTypeOverridden;
- (id)leftBorder;
- (short)leftMargin;
- (int)leftMarginType;
- (BOOL)noWrap;
- (id)rightBorder;
- (short)rightMargin;
- (int)rightMarginType;
- (void)setBottomBorder:(id)arg1;
- (void)setBottomBorderOverridden:(BOOL)arg1;
- (void)setBottomMargin:(short)arg1;
- (void)setBottomMarginOverridden:(BOOL)arg1;
- (void)setBottomMarginType:(int)arg1;
- (void)setBottomMarginTypeOverridden:(BOOL)arg1;
- (void)setDiagonalDownBorder:(id)arg1;
- (void)setDiagonalDownBorderOverridden:(BOOL)arg1;
- (void)setDiagonalUpBorder:(id)arg1;
- (void)setDiagonalUpBorderOverridden:(BOOL)arg1;
- (void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1;
- (void)setFirstInSetOfVerticallyMergedCellsOverridden:(BOOL)arg1;
- (void)setLeftBorder:(id)arg1;
- (void)setLeftBorderOverridden:(BOOL)arg1;
- (void)setLeftMargin:(short)arg1;
- (void)setLeftMarginOverridden:(BOOL)arg1;
- (void)setLeftMarginType:(int)arg1;
- (void)setLeftMarginTypeOverridden:(BOOL)arg1;
- (void)setNoWrap:(BOOL)arg1;
- (void)setNoWrapOverridden:(BOOL)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setRightBorderOverridden:(BOOL)arg1;
- (void)setRightMargin:(short)arg1;
- (void)setRightMarginOverridden:(BOOL)arg1;
- (void)setRightMarginType:(int)arg1;
- (void)setRightMarginTypeOverridden:(BOOL)arg1;
- (void)setShading:(id)arg1;
- (void)setShadingOverridden:(BOOL)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setTopBorderOverridden:(BOOL)arg1;
- (void)setTopMargin:(short)arg1;
- (void)setTopMarginOverridden:(BOOL)arg1;
- (void)setTopMarginType:(int)arg1;
- (void)setTopMarginTypeOverridden:(BOOL)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (void)setVerticalAlignmentOverridden:(BOOL)arg1;
- (void)setVerticallyMergedCell:(BOOL)arg1;
- (void)setVerticallyMergedCellOverridden:(BOOL)arg1;
- (void)setWidth:(short)arg1;
- (void)setWidthType:(int)arg1;
- (void)setWidthTypeOverridden:(BOOL)arg1;
- (id)shading;
- (id)topBorder;
- (short)topMargin;
- (int)topMarginType;
- (int)verticalAlignment;
- (BOOL)verticallyMergedCell;
- (int)widthType;

@end
