/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PLAbstractAlbumPickerViewControllerDelegate>, PLLibraryBannerView, NSString, NSOrderedSet, UIViewController, PLAbstractLibraryViewController;

@interface PLAbstractAlbumPickerViewController : UIViewController <PLAbstractLibraryViewControllerDelegate, PLAlbumListChangeObserver> {
    NSString *_albumCreationLabel;
    NSOrderedSet *_assetsToAdd;
    PLLibraryBannerView *_bannerView;
    id _completionHandler;
    UIViewController *_contentViewController;
    <PLAbstractAlbumPickerViewControllerDelegate> *_delegate;
    int _libraryContentMode;
    PLAbstractLibraryViewController *_libraryViewController;
    NSString *_pickerTitle;
}

@property(copy) NSString * albumCreationLabel;
@property(retain) NSOrderedSet * assetsToAdd;
@property(retain) PLLibraryBannerView * bannerView;
@property(copy) id completionHandler;
@property(retain) UIViewController * contentViewController;
@property <PLAbstractAlbumPickerViewControllerDelegate> * delegate;
@property(readonly) int libraryContentMode;
@property(retain) PLAbstractLibraryViewController * libraryViewController;
@property(copy) NSString * pickerTitle;

- (id)albumCreationLabel;
- (void)albumListDidChange:(id)arg1;
- (int)albumListFilter;
- (void)animateBannerThumbnailToAlbumAtIndex:(unsigned int)arg1 completion:(id)arg2;
- (id)assetsToAdd;
- (id)bannerView;
- (int)bannerViewStyle;
- (void)cancelPicker:(id)arg1;
- (id)completionHandler;
- (id)contentViewController;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (id)initWithLibraryContentMode:(int)arg1 assetsToAdd:(id)arg2 completionHandler:(id)arg3;
- (int)libraryContentMode;
- (BOOL)libraryViewController:(id)arg1 shouldEnableAlbum:(struct NSObject { Class x1; }*)arg2;
- (id)libraryViewController;
- (void)loadView;
- (id)pickerTitle;
- (id)preparedContentController;
- (id)preparedLibraryViewController;
- (void)setAlbumCreationLabel:(id)arg1;
- (void)setAssetsToAdd:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLibraryViewController:(id)arg1;
- (void)setPickerTitle:(id)arg1;
- (void)viewDidUnload;

@end
