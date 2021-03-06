/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ASScreenshotsViewController, ASApplicationPageView, UIActionSheet;

@interface ASSoftwarePageViewController : ASStructuredPageViewController <UIActionSheetDelegate, ISURLOperationDelegate> {
    ASApplicationPageView *_pageView;
    ASScreenshotsViewController *_screenshotsController;
    UIActionSheet *_shareDisambiguationSheet;
}

- (id)_activeItem;
- (id)_applicationIcon;
- (id)_applicationIconURL;
- (BOOL)_canDisplayPage:(id)arg1 error:(id*)arg2;
- (void)_cancelShareDisambiguationSheet;
- (id)_contentRatingImage;
- (id)_contentRatingImageURL;
- (void)_delayedClearSelection;
- (void)_destroyShareDisambiguationSheet;
- (id)_itemArtworkImage;
- (id)_newApplicationIconOperationForItemImage:(id)arg1;
- (id)_newContentRatingOperationForContentRating:(id)arg1;
- (void)_pushStorePageWithURL:(id)arg1;
- (void)_reloadAfterRestrictionsChanged;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_showShareDisambiguationSheet;
- (void)_showTellAFriendMailCompose;
- (void)_showTweetSheet;
- (id)_tellAFriendBody;
- (id)_tellAFriendSubject;
- (void)_updatePageView;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)buttonWasTapped:(id)arg1 forReviews:(id)arg2;
- (void)cellWasTapped:(id)arg1 forUserAgreement:(id)arg2;
- (id)copyDefaultScriptProperties;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)moreInfoCellWasTapped:(id)arg1;
- (id)newDataSource;
- (id)newTableView;
- (id)newTermsAndConditionsFooter;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reloadForChangedRowCount:(int)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)reportAProblemButtonWasTapped:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)shareButtonWasTapped:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
