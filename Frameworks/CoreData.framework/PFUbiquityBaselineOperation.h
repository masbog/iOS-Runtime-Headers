/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPersistentStore, NSString, PFUbiquityLocation, NSManagedObjectModel;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
    NSString *_localPeerID;
    NSManagedObjectModel *_model;
    NSString *_modelVersionHash;
    NSPersistentStore *_store;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(readonly) NSString * localPeerID;
@property(readonly) NSManagedObjectModel * model;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSPersistentStore * store;
@property(readonly) NSString * storeName;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;

- (void)dealloc;
- (id)description;
- (id)initWithStore:(id)arg1 andLocalPeerID:(id)arg2;
- (id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 modelVersionHash:(id)arg3 andRootLocation:(id)arg4;
- (id)localPeerID;
- (id)model;
- (id)modelVersionHash;
- (id)store;
- (id)storeName;
- (void)storeWillBeRemoved:(id)arg1;
- (id)ubiquityRootLocation;

@end
