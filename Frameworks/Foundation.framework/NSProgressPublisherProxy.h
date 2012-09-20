/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSFileAccessNode, <NSProgressPublisher>, NSMutableSet;

@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher> {
    <NSProgressPublisher> *_forwarder;
    id _publisherID;
    NSFileAccessNode *_itemLocation;
    NSMutableSet *_bundleIDsOfUnacknowledgedApps;
}


- (id)description;
- (oneway void)cancel;
- (void)dealloc;
- (oneway void)pause;
- (void)broadcastValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;
- (id)initWithForwarder:(id)arg1 publisherID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3;
- (id)publisherID;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (oneway void)stopProvidingValues;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)arg1;
- (id)descriptionWithIndenting:(id)arg1;
- (void)setItemLocation:(id)arg1;

@end