/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSObject<VideoConferenceRealTimeChannel>, VideoAttributes, NSLock, VCCallSession, GKNATObserver, NSObject<VideoConferenceSpeakingDelegate>, VideoConferenceManager, NSObject<VideoConferenceDelegate>, NSArray, NSObject<OS_dispatch_queue>, VCVideoRule, CameraRemoteFrameSynchronizer, NSString, NSMutableDictionary, CALayer, NSObject<VideoConferenceChannelQualityDelegate>;

@interface VideoConference : NSObject <VCCallSessionDelegate, GKNATObserverDelegate> {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    int audioTimeStampDelta;
    BOOL bweOperatingModeInitialized;
    BOOL canLocalResizePIP;
    BOOL canRemoteResizePIP;
    int chatMode;
    VCVideoRule *conferenceCaptureRule;
    float conferenceVolume;
    NSArray *connectedPeers;
    int currentCamera;
    NSString *currentFocus;
    VCCallSession *currentFocusSession;
    double dAudioHostTime;
    NSObject<VideoConferenceDelegate> *delegate;
    NSLock *delegateLock;
    BOOL disableVAD;
    int downstreamBandwidth;
    unsigned int dwAudioTS;
    int fecMode;
    struct __CFString { } *forceHWI;
    BOOL forceHWICheck;
    struct __CFString { } *forceNOLOG;
    BOOL forceNoICE;
    struct tagHANDLE { int x1; } *hVR;
    struct tagHANDLE { int x1; } *hVT;
    BOOL hasMic;
    int iSoundBytes;
    float inputMeterLevel;
    BOOL inputMeteringEnabled;
    BOOL isAttemptingRelay;
    BOOL isFocus;
    BOOL isGKVoiceChat;
    BOOL isRecvVideo;
    BOOL isTalking;
    BOOL isUsingSuppression;
    unsigned int lastSentAudioSampleTime;
    double lastVideQualityNotificationUpdate;
    double lastVideoThrottlingCheck;
    } localExpectedLandscapeAspectRatio;
    } localExpectedPortraitAspectRatio;
    int localFrameHeight;
    int localFrameWidth;
    } localScreenLandscapeAspectRatio;
    } localScreenPortraitAspectRatio;
    float longTerm;
    VideoConferenceManager *manager;
    NSObject<OS_dispatch_queue> *managerQueue;
    int max2GRate;
    BOOL microphoneMuted;
    int mostRecentStartedCall;
    NSArray *mutedPeers;
    } natCond;
    } natMutex;
    GKNATObserver *natObserver;
    int natType;
    float outputMeterLevel;
    BOOL outputMeteringEnabled;
    int packetsPerBundle;
    unsigned int preferredCodec;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    BOOL receivedFirstPreviewFrame;
    BOOL receivedFirstRemoteFrame;
    int recvRTPBytes;
    double recvRTPTimeStamp;
    struct _CAImageQueue { } *remoteCAImageQueue;
    struct _CAImageQueue { } *remoteCAImageQueueBack;
    } remoteExpectedLandscapeAspectRatio;
    } remoteExpectedPortraitAspectRatio;
    int remoteFrameHeight;
    int remoteFrameWidth;
    } remoteScreenLandscapeAspectRatio;
    } remoteScreenPortraitAspectRatio;
    BOOL remoteSupportsExpectedAspectRatio;
    BOOL remoteSupportsVisibleRect;
    VideoAttributes *remoteVideoAttributes;
    void *remoteVideoBackLayer;
    struct OpaqueFigImageQueue { } *remoteVideoImageQueue;
    struct OpaqueFigImageQueue { } *remoteVideoImageQueueBack;
    void *remoteVideoLayer;
    int remoteVideoSlot;
    int remoteVideoSlotBack;
    CALayer *remoteVideoSubLayer;
    CALayer *remoteVideoSubLayerBack;
    } remoteVideoVisibleRect;
    unsigned char requestedCameraType;
    BOOL requiresWifi;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    NSArray *sessionArray;
    NSMutableDictionary *sessionDict;
    float shortTerm;
    BOOL shouldPrioritizeParticipantIDForSIPInvite;
    BOOL shouldResumeAudio;
    BOOL shouldResumeVideo;
    BOOL shouldStopPreviewOnClose;
    BOOL shouldTimeoutPackets;
    unsigned char speakingArray[16];
    NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate;
    } stateLock;
    CameraRemoteFrameSynchronizer *synchronizer;
    unsigned int talkTime;
    unsigned int talkingPeersLimit;
    int upstreamBandwidth;
    BOOL useAFRC;
    BOOL useActiveProbingSenderLog;
    BOOL useCompressedConnectionData;
    BOOL useFakeLargeFrameMode;
    BOOL useNewBWEMode;
    BOOL useViceroyBlobFormat;
    } xAudioTS;
    } xRemoteLayer;
}

@property int chatMode;
@property(readonly) VCVideoRule * conferenceCaptureRule;
@property float conferenceVolume;
@property(copy) NSString * currentFocus;
@property NSObject<VideoConferenceDelegate> * delegate;
@property BOOL disableVAD;
@property int downstreamBandwidth;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property BOOL hasMic;
@property(readonly) float inputMeterLevel;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property BOOL isFocus;
@property BOOL isGKVoiceChat;
@property BOOL isUsingSuppression;
@property(readonly) double localBitrate;
@property(readonly) int localFrameHeight;
@property(readonly) int localFrameWidth;
@property(readonly) double localFramerate;
@property(readonly) double localPacketLossRate;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property int natType;
@property(readonly) float outputMeterLevel;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property int packetsPerBundle;
@property unsigned int preferredCodec;
@property NSObject<VideoConferenceChannelQualityDelegate> * qualityDelegate;
@property(readonly) double remoteBitrate;
@property(readonly) int remoteFrameHeight;
@property(readonly) int remoteFrameWidth;
@property(readonly) double remoteFramerate;
@property(readonly) double remotePacketLossRate;
@property(retain) VideoAttributes * remoteVideoAttributes;
@property void* remoteVideoBackLayer;
@property void* remoteVideoLayer;
@property(readonly) CALayer * remoteVideoSubLayer;
@property(readonly) CALayer * remoteVideoSubLayerBack;
@property BOOL requiresWifi;
@property(readonly) double roundTripTime;
@property(setter=setRTChannel:) NSObject<VideoConferenceRealTimeChannel> * rtChannel;
@property BOOL shouldPrioritizeParticipantIDForSIPInvite;
@property BOOL shouldTimeoutPackets;
@property NSObject<VideoConferenceSpeakingDelegate> * speakingDelegate;
@property unsigned int talkingPeersLimit;
@property int upstreamBandwidth;
@property BOOL useCompressedConnectionData;
@property BOOL useViceroyBlobFormat;

- (void)NATTypeDictionaryUpdated:(id)arg1;
- (void)avConferencePreviewError;
- (void)calculateMixingArrays:(unsigned int*)arg1 talkingMask:(unsigned int)arg2;
- (unsigned int)calculateTalkingMaskAtTimeStamp:(unsigned int)arg1 samples:(char *)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (int)callIDForOpenSessionWithParticipantID:(id)arg1;
- (int)captureAsFocus:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 averagePower:(unsigned char)arg6;
- (int)captureAsFocusClient:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(unsigned char)arg5;
- (int)captureMeshMode:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6;
- (int)chatMode;
- (void)checkVideoThrottleDuration;
- (void)cleanupManager;
- (void)cleanupProc:(id)arg1;
- (void)cleanupQueues;
- (void)cleanupSession:(id)arg1 didRemoteCancel:(BOOL)arg2;
- (void)cleanupSession:(id)arg1 withDelay:(unsigned int)arg2;
- (id)conferenceCaptureRule;
- (float)conferenceVolume;
- (id)connectionBlobForParticipantID:(id)arg1 callID:(int*)arg2 error:(id*)arg3;
- (unsigned int)connectionResultCallbackForCallID:(int)arg1 result:(struct tagCONNRESULT { int x1; int x2; int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x_8_1_1; BOOL x_8_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; }*)arg2 didReceiveICEPacket:(BOOL)arg3 didUseRelay:(BOOL)arg4;
- (int)currentCameraID;
- (id)currentFocus;
- (void)dealloc;
- (void)defaultCleanupSession:(id)arg1;
- (id)delegate;
- (bool)didDetectBandwidth:(BOOL)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3;
- (BOOL)disableVAD;
- (int)downstreamBandwidth;
- (void)forceNoICE:(BOOL)arg1;
- (void)getDefaultsVideoSettings:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 bitRate:(int*)arg4 useBFC:(BOOL*)arg5 enableBitstreamCapture:(BOOL*)arg6 enable2vuyCapture:(BOOL*)arg7 enableVPBLogging:(BOOL*)arg8;
- (BOOL)getIsAudioPaused:(BOOL*)arg1 callID:(int)arg2 error:(id*)arg3;
- (BOOL)getIsVideoPaused:(BOOL*)arg1 callID:(int)arg2 error:(id*)arg3;
- (void)getNSError:(id*)arg1 code:(int)arg2 detailedCode:(int)arg3 filePath:(id)arg4 description:(id)arg5 hResult:(long)arg6;
- (void)getNSError:(id*)arg1 code:(int)arg2 detailedCode:(int)arg3 filePath:(id)arg4 description:(id)arg5 reason:(id)arg6;
- (void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (BOOL)hasMic;
- (BOOL)hasSessionWaitingForSIPInvite;
- (id)init;
- (bool)initiateResolutionChangeToWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (float)inputMeterLevel;
- (BOOL)isFocus;
- (BOOL)isGKVoiceChat;
- (BOOL)isInputMeteringEnabled;
- (BOOL)isMicrophoneMuted;
- (BOOL)isOutputMeteringEnabled;
- (BOOL)isSpeakerPhoneEnabled;
- (BOOL)isUsingSuppression;
- (double)localBitrate;
- (int)localFrameHeight;
- (int)localFrameWidth;
- (double)localFramerate;
- (double)localPacketLossRate;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (id)loopbackSessionWaitingForSIPInvite;
- (void)markUnfinishedSessions;
- (BOOL)matchesCallID:(int)arg1;
- (BOOL)matchesIncomingConnectionResult:(struct tagCONNRESULT { int x1; int x2; int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x_8_1_1; BOOL x_8_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; }*)arg1;
- (BOOL)matchesOpenSessionForParticipantID:(id)arg1;
- (BOOL)matchesParticipantID:(id)arg1;
- (int)natType;
- (double)networkQualityForCallID:(int)arg1;
- (bool)onCaptureFrame:(struct __CVBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cameraStatusBits:(unsigned char)arg3;
- (bool)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned long)arg9;
- (bool)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (bool)onPlayVideo:(struct __CVBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cameraStatusBits:(unsigned char)arg3;
- (id)openSessionForParticipant:(id)arg1;
- (float)outputMeterLevel;
- (double)packetLossRateForCallID:(int)arg1;
- (int)packetsPerBundle;
- (unsigned char)powerFloatToInt:(float)arg1;
- (float)powerIntToFloat:(unsigned char)arg1;
- (unsigned int)preferredCodec;
- (void)processRelayRequestResponse:(int)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayUpdate:(int)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (unsigned int)pruneQuietestPeers:(unsigned int)arg1 talking:(unsigned int)arg2 mask:(unsigned int)arg3 meters:(char *)arg4;
- (int)pullDecodedAsFocus:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (int)pullDecodedAsFocusClient:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (int)pullDecodedMeshMode:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (id)qualityDelegate;
- (void)rdlock;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)recvSamplesForSession:(id)arg1 samples:(char *)arg2 numBytes:(int)arg3 numSamples:(int)arg4 storeTimestamp:(unsigned int)arg5;
- (void)remoteAudioDidPause:(BOOL)arg1 callID:(int)arg2;
- (double)remoteBitrate;
- (void)remoteCancelledCallID:(int)arg1;
- (int)remoteFrameHeight;
- (int)remoteFrameWidth;
- (double)remoteFramerate;
- (double)remotePacketLossRate;
- (void)remoteScreenAspectRatioChangedForSession:(id)arg1 remoteScreenPortraitAspectRatio:(struct CGSize { float x1; float x2; })arg2 remoteScreenLandscapeAspectRatio:(struct CGSize { float x1; float x2; })arg3 remoteExpectedPortraitAspectRatio:(struct CGSize { float x1; float x2; })arg4 remoteExpectedLandscapeAspectRatio:(struct CGSize { float x1; float x2; })arg5 remoteSupportsVisibleRect:(BOOL)arg6 remoteSupportsExpectedAspectRatio:(BOOL)arg7 canLocalResizePIP:(BOOL)arg8 canRemoteResizePIP:(BOOL)arg9;
- (id)remoteVideoAttributes;
- (void*)remoteVideoBackLayer;
- (void)remoteVideoDidPause:(BOOL)arg1 callID:(int)arg2;
- (void*)remoteVideoLayer;
- (int)remoteVideoSlot:(BOOL)arg1;
- (id)remoteVideoSubLayer;
- (id)remoteVideoSubLayerBack;
- (BOOL)requiresWifi;
- (double)roundTripTime;
- (id)rtChannel;
- (void)session:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)session:(id)arg1 didStart:(BOOL)arg2 connectionType:(unsigned int)arg3 localUseCell:(unsigned int)arg4 remoteUseCell:(unsigned int)arg5 error:(id)arg6;
- (void)session:(id)arg1 didStopWithDelay:(int)arg2 error:(id)arg3;
- (void)session:(id)arg1 didStopWithError:(id)arg2;
- (void)session:(id)arg1 forCallID:(int)arg2 didChangeCellTechLocal:(int)arg3 remote:(int)arg4 bitRate:(unsigned int)arg5;
- (void)session:(id)arg1 forCallID:(int)arg2 didChangeVideoRule:(id)arg3;
- (void)session:(id)arg1 inititiateRelayRequest:(id)arg2;
- (void)session:(id)arg1 notifyMaxPktLenForCallID:(int)arg2;
- (void)session:(id)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (void)session:(id)arg1 remoteMediaStalled:(BOOL)arg2;
- (void)session:(id)arg1 sendRelayResponse:(id)arg2;
- (bool)session:(id)arg1 startVideoIO:(id*)arg2 rtpVideo:(struct tagHANDLE { int x1; }*)arg3 rtpAudio:(struct tagHANDLE { int x1; }*)arg4 actualVideoPayload:(int)arg5 enableUEP:(BOOL)arg6 enableControlByte:(BOOL)arg7 featuresListString:(char *)arg8 maxBandwidth:(int)arg9 remoteUserInfo:(id)arg10 captureRule:(id)arg11 encodeRule:(id)arg12 usingCellular:(BOOL)arg13 iLocalCellTech:(int)arg14 remoteUsingCellular:(BOOL)arg15 isUnpausing:(BOOL)arg16;
- (void)session:(id)arg1 withCallID:(int)arg2 networkHint:(BOOL)arg3;
- (void)session:(id)arg1 withCallID:(int)arg2 videoIsDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (id)sessionForIncomingConnectionResult:(struct tagCONNRESULT { int x1; int x2; int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x_8_1_1; BOOL x_8_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; }*)arg1;
- (id)sessionForIncomingParticipantID:(id)arg1;
- (id)sessionForParticipantID:(id)arg1;
- (BOOL)setActive:(BOOL)arg1;
- (void)setBWEOptions:(BOOL)arg1 UseNewBWEMode:(BOOL)arg2 FakeLargeFrameMode:(BOOL)arg3 ProbingSenderLog:(BOOL)arg4;
- (void)setCallReport:(int)arg1 withReport:(id)arg2;
- (void)setChatMode:(int)arg1;
- (void)setConferenceVolume:(float)arg1;
- (void)setCurrentFocus:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableVAD:(BOOL)arg1;
- (void)setDownstreamBandwidth:(int)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (void)setFECMode:(int)arg1;
- (void)setHasMic:(BOOL)arg1;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (void)setIsFocus:(BOOL)arg1;
- (void)setIsGKVoiceChat:(BOOL)arg1;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)setMax2GRate:(int)arg1;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setNatType:(int)arg1;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (void)setPacketsPerBundle:(int)arg1;
- (BOOL)setPauseAudio:(BOOL)arg1 callID:(int)arg2 error:(id*)arg3;
- (BOOL)setPauseAudio:(BOOL)arg1;
- (BOOL)setPauseVideo:(BOOL)arg1 callID:(int)arg2 error:(id*)arg3;
- (BOOL)setPauseVideo:(BOOL)arg1;
- (void)setPeerCN:(id)arg1 callID:(int)arg2;
- (void)setPreferredCodec:(unsigned int)arg1;
- (void)setQualityDelegate:(id)arg1;
- (void)setRTChannel:(id)arg1;
- (void)setRemoteVideoAttributes:(id)arg1;
- (void)setRemoteVideoBackLayer:(void*)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)setRequiresWifi:(BOOL)arg1;
- (void)setSendAudio:(BOOL)arg1 forCallID:(int)arg2;
- (void)setSessionID:(id)arg1 callID:(int)arg2;
- (void)setShouldPrioritizeParticipantIDForSIPInvite:(BOOL)arg1;
- (void)setShouldTimeoutPackets:(BOOL)arg1;
- (void)setSpeakingDelegate:(id)arg1;
- (void)setTalkingPeersLimit:(unsigned int)arg1;
- (void)setUpstreamBandwidth:(int)arg1;
- (void)setUseCompressedConnectionData:(BOOL)arg1;
- (void)setUseViceroyBlobFormat:(BOOL)arg1;
- (BOOL)shouldPrioritizeParticipantIDForSIPInvite;
- (BOOL)shouldSendAudioForCallID:(int)arg1;
- (BOOL)shouldTimeoutPackets;
- (int)sipCallbackNotification:(int)arg1 callID:(int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void*)arg5 confIndex:(int*)arg6;
- (id)speakingDelegate;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(int)arg2 usingBlob:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 error:(id*)arg6;
- (int)stateForCallID:(int)arg1;
- (id)statsForCallID:(int)arg1;
- (void)stopAllCalls:(id)arg1;
- (void)stopCallID:(int)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3;
- (void)stopCallID:(int)arg1;
- (bool)stopVideoIO:(BOOL)arg1 error:(id*)arg2;
- (unsigned int)talkingPeersLimit;
- (void)threadSafeCleanupSession:(id)arg1;
- (int)tryrdlock;
- (void)unlock;
- (void)updateMeter:(unsigned char)arg1 forParticipant:(id)arg2 atIndex:(unsigned int)arg3;
- (void)updateMeters:(unsigned short)arg1;
- (BOOL)updateSpeaking:(unsigned long)arg1 timeStamp:(unsigned int)arg2;
- (void)updateVideoQualityNotification:(double)arg1;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
- (int)upstreamBandwidth;
- (BOOL)useCompressedConnectionData;
- (BOOL)useViceroyBlobFormat;
- (void)warmupForCall;
- (void)wrlock;

@end
