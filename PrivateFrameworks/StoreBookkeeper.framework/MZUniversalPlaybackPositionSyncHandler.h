/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSError, MZUPPBagContext, MZKeyValueStoreController, NSObject<OS_dispatch_queue>, MZKeyValueStoreTransaction, <MZUniversalPlaybackPositionDataSource>, <MZUniversalPlaybackPositionTransactionContext>, NSString, NSMutableDictionary;

@interface MZUniversalPlaybackPositionSyncHandler : NSObject <MZKeyValueStoreControllerDelegate, MZKeyValueStoreTransactionProcessing> {
    MZUPPBagContext *_bagContext;
    BOOL _canceled;
    MZKeyValueStoreTransaction *_currentKVSTransaction;
    <MZUniversalPlaybackPositionDataSource> *_dataSource;
    <MZUniversalPlaybackPositionTransactionContext> *_dataSourceTransactionContext;
    NSError *_fatalSyncError;
    MZKeyValueStoreController *_kvsController;
    NSMutableDictionary *_metadataItemsFromDataSource;
    NSMutableDictionary *_metadataItemsFromKVSStorage;
    NSMutableDictionary *_metadataItemsToCommitToDataSource;
    NSMutableDictionary *_metadataItemsToCommitToKVSStorage;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_reportedItemVersionForIdentifier;
    NSString *_responseDomainVersion;
    BOOL _syncInProgress;
    NSObject<OS_dispatch_queue> *_syncOperationQueue;
}

@property(retain) MZUPPBagContext * bagContext;
@property BOOL canceled;
@property(retain) MZKeyValueStoreTransaction * currentKVSTransaction;
@property(retain) <MZUniversalPlaybackPositionDataSource> * dataSource;
@property(retain) <MZUniversalPlaybackPositionTransactionContext> * dataSourceTransactionContext;
@property(retain) NSError * fatalSyncError;
@property(retain) MZKeyValueStoreController * kvsController;
@property(retain) NSMutableDictionary * metadataItemsFromDataSource;
@property(retain) NSMutableDictionary * metadataItemsFromKVSStorage;
@property(retain) NSMutableDictionary * metadataItemsToCommitToDataSource;
@property(retain) NSMutableDictionary * metadataItemsToCommitToKVSStorage;
@property(retain) NSMutableDictionary * reportedItemVersionForIdentifier;
@property(retain) NSString * responseDomainVersion;
@property BOOL syncInProgress;

- (void)_dataSourceCancelTransaction;
- (int)_mergeMetadataItemFromSetResponse:(id)arg1;
- (void)_mergeMetadataItemsFromGetResponse;
- (void)_resetState;
- (BOOL)_shouldStop;
- (void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2;
- (void)_signalKVSTransactionCompletion:(id)arg1;
- (BOOL)_synchronize:(id*)arg1;
- (id)_synchronouslyRunKVSTransaction:(id)arg1;
- (id)bagContext;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (BOOL)canceled;
- (id)currentKVSTransaction;
- (id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3;
- (id)dataSource;
- (id)dataSourceTransactionContext;
- (void)dealloc;
- (id)fatalSyncError;
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2;
- (BOOL)keyValueStoreController:(id)arg1 shouldScheduleTransaction:(id)arg2;
- (void)keyValueStoreController:(id)arg1 transaction:(id)arg2 didCancelWithError:(id)arg3;
- (BOOL)keyValueStoreController:(id)arg1 transaction:(id)arg2 didFailWithError:(id)arg3;
- (void)keyValueStoreController:(id)arg1 transactionDidFinish:(id)arg2;
- (id)keysForTransaction:(id)arg1;
- (id)kvsController;
- (id)metadataItemsFromDataSource;
- (id)metadataItemsFromKVSStorage;
- (id)metadataItemsToCommitToDataSource;
- (id)metadataItemsToCommitToKVSStorage;
- (id)newKVSGetAllTransactionSinceDomainVersion:(id)arg1;
- (id)newKVSPutAllTransactionWithMetadataItems:(id)arg1;
- (id)newKVSTransactionWithType:(int)arg1 keys:(id)arg2;
- (id)reportedItemVersionForIdentifier;
- (id)responseDomainVersion;
- (void)setBagContext:(id)arg1;
- (void)setCanceled:(BOOL)arg1;
- (void)setCurrentKVSTransaction:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceTransactionContext:(id)arg1;
- (void)setFatalSyncError:(id)arg1;
- (void)setKvsController:(id)arg1;
- (void)setMetadataItemsFromDataSource:(id)arg1;
- (void)setMetadataItemsFromKVSStorage:(id)arg1;
- (void)setMetadataItemsToCommitToDataSource:(id)arg1;
- (void)setMetadataItemsToCommitToKVSStorage:(id)arg1;
- (void)setReportedItemVersionForIdentifier:(id)arg1;
- (void)setResponseDomainVersion:(id)arg1;
- (void)setSyncInProgress:(BOOL)arg1;
- (id)sinceDomainVersionForTransaction:(id)arg1;
- (BOOL)syncInProgress;
- (void)synchronizeWithCompletionHandler:(id)arg1;
- (void)timeout;
- (void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2;
- (void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(BOOL)arg6 finishedBlock:(id)arg7;
- (void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2;
- (id)versionForGetTransaction:(id)arg1 key:(id)arg2;

@end
