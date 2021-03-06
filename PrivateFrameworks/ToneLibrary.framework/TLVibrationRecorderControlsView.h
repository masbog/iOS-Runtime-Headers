/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class TLVibrationRecorderProgressView, <TLVibrationRecorderControlsViewDelegate>;

@interface TLVibrationRecorderControlsView : UIView {
    <TLVibrationRecorderControlsViewDelegate> *_delegate;
    id _leftButton;
    TLVibrationRecorderProgressView *_progressView;
    id _rightButton;
}

@property(setter=_setLeftButton:,retain) id _leftButton;
@property(setter=_setRightButton:,retain) id _rightButton;
@property double currentTimeInterval;
@property <TLVibrationRecorderControlsViewDelegate> * delegate;
@property(getter=isLeftButtonEnabled) BOOL leftButtonEnabled;
@property(getter=isRightButtonEnabled) BOOL rightButtonEnabled;
@property int roundedCornersCompensationDelayMode;

+ (void)_loadImages;
+ (float)defaultHeight;

- (void)_buttonTapped:(id)arg1;
- (id)_leftButton;
- (id)_rightButton;
- (void)_setLeftButton:(id)arg1;
- (void)_setRightButton:(id)arg1;
- (void)clearAllVibrationComponents;
- (double)currentTimeInterval;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 vibrationPatternMaximumDuration:(double)arg2;
- (BOOL)isLeftButtonEnabled;
- (BOOL)isRightButtonEnabled;
- (int)roundedCornersCompensationDelayMode;
- (void)setCurrentTimeInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeftButtonColor:(int)arg1 title:(id)arg2 icon:(id)arg3 enabled:(BOOL)arg4 rightButtonColor:(int)arg5 title:(id)arg6 icon:(id)arg7 enabled:(BOOL)arg8 animationDuration:(double)arg9 completion:(id)arg10;
- (void)setLeftButtonEnabled:(BOOL)arg1;
- (void)setRightButtonEnabled:(BOOL)arg1;
- (void)setRoundedCornersCompensationDelayMode:(int)arg1;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;

@end
