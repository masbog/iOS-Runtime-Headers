/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSObject<OS_xpc_object>, PKImageSetCache, NSObject<OS_dispatch_queue>;

@interface PKPassLibrary : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    PKImageSetCache *_imageSetCache;
    id _passLibraryProxy;
}

+ (BOOL)isPassLibraryAvailable;

- (void)_wireupCards:(id)arg1;
- (void)addFakeBulletin;
- (id)bulletinDictWithRecordID:(id)arg1;
- (id)bulletinDictsForPassTypeID:(id)arg1 count:(unsigned int)arg2 sinceDate:(id)arg3;
- (id)bulletinSectionInfoForRecordID:(id)arg1;
- (void)cardAddedWithUniqueID:(id)arg1;
- (void)cardChangedWithUniqueID:(id)arg1;
- (void)cardRemovedWithInfo:(id)arg1;
- (void)cardRemovedWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)clearBulletinRecordsForPassTypeID:(id)arg1 beforeDate:(id)arg2;
- (BOOL)containsPass:(id)arg1;
- (void)dealloc;
- (id)diffForBulletinRecordID:(id)arg1;
- (void)establishPassLibraryConnection;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id)arg2;
- (void)fetchImageSet:(int)arg1 forUniqueID:(id)arg2 displayProfile:(id)arg3 withCompletion:(id)arg4;
- (void)flushReferencedUniqueID:(id)arg1 forCachedImageSet:(int)arg2 withDisplayProfile:(id)arg3;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id)arg2;
- (void)ingestPassData:(id)arg1 settings:(int)arg2 completionHandler:(id)arg3;
- (id)init;
- (void)introduceDatabaseIntegrityProblem;
- (void)noteAccountChangedWithCompletion:(id)arg1;
- (void)nukeDatabaseAndExit;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)passes;
- (void)passesWithHandler:(id)arg1;
- (void)removePass:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1;
- (BOOL)replacePassWithPass:(id)arg1;
- (void)setAllowRelevantPasses:(BOOL)arg1;
- (void)tearDownPassLibraryConnection;
- (void)updatePassWithUniqueID:(id)arg1 handler:(id)arg2;
- (void)updateSettings:(int)arg1 forPassWithUniqueID:(id)arg2 completionHandler:(id)arg3;

@end
