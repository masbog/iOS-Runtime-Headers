/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScrollView, NSArray, UIView, GKComposeMessageField, GKComposeHeaderFieldBackgroundView;

@interface GKBaseComposeController : GKViewController <UITextViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    GKScrollView *_backgroundView;
    GKComposeHeaderFieldBackgroundView *_bounceRevealTopView;
    NSArray *_composeHeaderFields;
    UIView *_intendedFirstResponder;
    } _lastKnownKeyboardFrame;
    GKComposeMessageField *_messageField;
}

@property(retain) GKScrollView * backgroundView;
@property(retain) GKComposeHeaderFieldBackgroundView * bounceRevealTopView;
@property(retain) NSArray * composeHeaderFields;
@property UIView * intendedFirstResponder;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } lastKnownKeyboardFrame;
@property(retain) GKComposeMessageField * messageField;

- (id)backgroundView;
- (id)bounceRevealTopView;
- (id)composeHeaderFields;
- (void)dealloc;
- (id)init;
- (id)intendedFirstResponder;
- (void)keyboardWillMove:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lastKnownKeyboardFrame;
- (void)layoutFieldsAnimated:(BOOL)arg1;
- (void)layoutMessageViewAnimated:(BOOL)arg1;
- (void)loadView;
- (id)messageField;
- (void)setBackgroundView:(id)arg1;
- (void)setBounceRevealTopView:(id)arg1;
- (void)setComposeHeaderFields:(id)arg1;
- (void)setIntendedFirstResponder:(id)arg1;
- (void)setLastKnownKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMessageField:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
