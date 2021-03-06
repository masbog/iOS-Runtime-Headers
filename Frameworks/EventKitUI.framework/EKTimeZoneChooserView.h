/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UISearchField, NSArray, UIImageView, UINavigationBar, <EKTimeZoneChooserDelegate>, UICompletionTable;

@interface EKTimeZoneChooserView : UIView <UITextFieldDelegate> {
    NSArray *_cities;
    UICompletionTable *_completionTable;
    <EKTimeZoneChooserDelegate> *_delegate;
    UINavigationBar *_navigationBar;
    UISearchField *_searchField;
    UIImageView *_searchFieldBackground;
    int _style;
}

@property <EKTimeZoneChooserDelegate> * delegate;

- (BOOL)becomeFirstResponder;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned int)numberOfCompletionsInTable:(id)arg1;
- (void)setCityName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)table:(id)arg1 completionAtIndex:(unsigned int)arg2;
- (void)table:(id)arg1 didSelectCompletionAtIndex:(unsigned int)arg2;
- (void)textValueChanged:(id)arg1;

@end
