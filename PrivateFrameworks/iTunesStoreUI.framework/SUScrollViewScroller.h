/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIScrollView, NSMutableArray, NSObject<UIScrollViewDelegate>;

@interface SUScrollViewScroller : NSObject <UIScrollViewDelegate> {
    NSObject<UIScrollViewDelegate> *_originalDelegate;
    NSMutableArray *_scrollRequests;
    UIScrollView *_scrollView;
}

@property(readonly) UIScrollView * scrollView;

- (void)_addScrollRequest:(id)arg1;
- (void)_finishActiveScrollRequest;
- (void)_performContentOffsetRequest:(id)arg1;
- (void)_performNextScrollRequest;
- (void)_performScrollRectRequest:(id)arg1;
- (void)attachToScrollView:(id)arg1;
- (void)dealloc;
- (void)detachFromScrollView;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)scrollFrameToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (id)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;

@end
