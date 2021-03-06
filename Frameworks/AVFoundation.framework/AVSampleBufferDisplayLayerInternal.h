/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSObject<OS_dispatch_queue>, CALayer, AVMediaDataRequester;

@interface AVSampleBufferDisplayLayerInternal : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    BOOL aboveHighWaterLevel;
    CALayer *contentLayer;
    BOOL controlTimebaseSetByUser;
    BOOL hasEnqueuedSamples;
    BOOL isRequestingMediaData;
    AVMediaDataRequester *mediaDataRequester;
    } presentationSize;
    NSObject<OS_dispatch_queue> *serialQueue;
    NSString *videoGravity;
    struct OpaqueFigVideoQueue { } *videoQueue;
}

@end
