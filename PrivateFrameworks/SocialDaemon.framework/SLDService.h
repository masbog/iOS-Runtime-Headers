/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SocialDaemon.framework/SocialDaemon
 */

@class NSString, NSObject<OS_dispatch_queue>, SLDServer, NSObject<OS_xpc_object>, NSManagedObjectContext, NSMutableSet, NSPersistentStoreCoordinator, <SLDServiceDelegate>, NSManagedObjectModel;

@interface SLDService : NSObject {
    <SLDServiceDelegate> *_delegate;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    SLDServer *_server;
    NSObject<OS_xpc_object> *_serviceConnection;
    NSMutableSet *_sessions;
    NSObject<OS_dispatch_queue> *serviceQueue;
}

@property(retain) <SLDServiceDelegate> * delegate;
@property(retain) SLDServer * server;
@property NSObject<OS_dispatch_queue> * serviceQueue;
@property(readonly) NSString * xpcServiceName;

- (void).cxx_destruct;
- (id)_appSupportPath;
- (void)_configureXPC;
- (id)_databasePath;
- (id)_managedObjectContext;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (void)_setupSessionWithConnection:(id)arg1;
- (void)_tearDownXPC;
- (id)delegate;
- (id)initWithServer:(id)arg1 delegate:(id)arg2;
- (void)removeSession:(id)arg1;
- (id)server;
- (id)serviceQueue;
- (void)setDelegate:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServiceQueue:(id)arg1;
- (void)startAcceptingConnections;
- (id)xpcServiceName;

@end
