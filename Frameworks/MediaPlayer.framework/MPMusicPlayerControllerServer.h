/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject {
    MPMusicPlayerControllerServerInternal *_internal;
}

@property(readonly) MPAVController * player;

+ (void)initialize;
+ (BOOL)isMusicPlayerControllerServerRunning;
+ (id)sharedInstance;
+ (void)startMusicPlayerControllerServerWithDelegate:(id)arg1;

- (void)_runMigServer;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;

@end
