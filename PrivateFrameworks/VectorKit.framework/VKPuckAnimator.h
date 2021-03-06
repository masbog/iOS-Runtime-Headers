/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPuckAnimatorLocationProjector, <VKPuckAnimatorDelegate>, VKAttributedRouteMatch, <VKPuckAnimatorTarget>, VKAnimation, VKRunningCurve;

@interface VKPuckAnimator : NSObject {
    VKAnimation *_animation;
    VKRunningCurve *_curve;
    <VKPuckAnimatorDelegate> *_delegate;
    VKAttributedRouteMatch *_lastProjectedLocation;
    VKPuckAnimatorLocationProjector *_locationProjector;
    int _pausedCount;
    BOOL _suspended;
    <VKPuckAnimatorTarget> *_target;
    double _tracePlaybackSpeedMultiplier;
}

@property <VKPuckAnimatorDelegate> * delegate;
@property(retain) VKAttributedRouteMatch * lastProjectedLocation;
@property(retain) <VKPuckAnimatorTarget> * target;
@property double tracePlaybackSpeedMultiplier;

- (void)_step;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)lastProjectedLocation;
- (void)pause;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setLastProjectedLocation:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)start;
- (void)stop;
- (id)target;
- (double)tracePlaybackSpeedMultiplier;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2;

@end
