/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, GKGameTitleView, GKHeaderSegmentedControl, GKGameRecord;

@interface GKGameDetailHeaderView : GKDetailHeaderView {
}

@property(readonly) int gameIconStyle;
@property(retain) GKGameRecord * gameRecordLocalPlayer;
@property(retain) UIImageView * iconView;
@property BOOL landscapeStyle;
@property GKHeaderSegmentedControl * segmentedControl;
@property(retain) GKGameTitleView * titleView;

+ (id)headerView;
+ (id)ratableHeaderView;

- (void)applyStoreItem:(id)arg1 toBuyButton:(id)arg2 titleView:(id)arg3;
- (int)gameIconStyle;
- (void)updateFromGameRecord;

@end
