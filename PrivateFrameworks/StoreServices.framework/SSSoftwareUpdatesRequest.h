/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSoftwareUpdatesContext, <SSSoftwareUpdatesRequestDelegate>;

@interface SSSoftwareUpdatesRequest : SSRequest {
    SSSoftwareUpdatesContext *_context;
}

@property <SSSoftwareUpdatesRequestDelegate> * delegate;
@property(readonly) SSSoftwareUpdatesContext * updateQueueContext;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithUpdateQueueContext:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)start;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithUpdatesResponseBlock:(id)arg1;
- (id)updateQueueContext;

@end
