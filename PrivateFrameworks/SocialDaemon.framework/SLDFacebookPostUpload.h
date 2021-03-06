/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SocialDaemon.framework/SocialDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SLFacebookPost, ACAccount, NSString, <SLDFacebookPostUploadDelegate><NSObject>, NSMutableArray, SLDFacebookImageAssetDataProvider;

@interface SLDFacebookPostUpload : NSObject {
    ACAccount *_account;
    <SLDFacebookPostUploadDelegate><NSObject> *_delegate;
    NSMutableArray *_failedUploads;
    SLDFacebookImageAssetDataProvider *_imageAssetDataProvider;
    SLFacebookPost *_post;
    id _postCompletion;
    NSString *_sourceAppIdentifier;
    BOOL _suppressAlerts;
    NSMutableArray *_uploadQueue;
}

@property(retain) ACAccount * account;
@property(retain) <SLDFacebookPostUploadDelegate><NSObject> * delegate;
@property(retain) SLFacebookPost * post;
@property(copy) id postCompletion;
@property(retain) NSString * sourceAppIdentifier;
@property BOOL suppressAlerts;

- (void).cxx_destruct;
- (void)_directUserToCheckpointURL:(id)arg1;
- (void)_handleRetry;
- (id)_nextPost;
- (void)_notifyDelegateWithSuccess:(BOOL)arg1;
- (void)_post:(id)arg1 didReceiveAssetData:(id)arg2 error:(id)arg3;
- (void)_processUploadQueue;
- (void)_requestCredentialRenewal;
- (void)_startUploadWithPost:(id)arg1;
- (BOOL)_uploadQueueEmpty;
- (id)account;
- (id)delegate;
- (id)facebookIconURL;
- (void)handleResponse:(id)arg1 withError:(id)arg2;
- (id)imageAssetDataProvider;
- (id)initWithPost:(id)arg1 account:(id)arg2;
- (id)post;
- (id)postCompletion;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPost:(id)arg1;
- (void)setPostCompletion:(id)arg1;
- (void)setSourceAppIdentifier:(id)arg1;
- (void)setSuppressAlerts:(BOOL)arg1;
- (id)sourceAppIdentifier;
- (void)startUpload;
- (BOOL)suppressAlerts;

@end
