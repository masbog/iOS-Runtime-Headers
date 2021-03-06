/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSMutableDictionary, <MZKeyValueStoreTransactionProcessing>, NSString, NSArray, NSURL;

@interface MZKeyValueStoreTransaction : NSObject {
    NSURL *_URL;
    NSString *_domain;
    NSArray *_keys;
    <MZKeyValueStoreTransactionProcessing> *_processor;
    NSString *_sinceDomainVersion;
    int _type;
    NSMutableDictionary *_userInfo;
}

@property(retain) NSURL * URL;
@property(copy) NSString * domain;
@property(readonly) NSArray * keys;
@property(retain) <MZKeyValueStoreTransactionProcessing> * processor;
@property(copy) NSString * sinceDomainVersion;
@property int type;
@property(retain) NSMutableDictionary * userInfo;

- (id)URL;
- (void)dealloc;
- (id)description;
- (id)domain;
- (id)initWithType:(int)arg1 domain:(id)arg2 URL:(id)arg3 keys:(id)arg4;
- (id)keys;
- (id)processor;
- (void)setDomain:(id)arg1;
- (void)setProcessor:(id)arg1;
- (void)setSinceDomainVersion:(id)arg1;
- (void)setType:(int)arg1;
- (void)setURL:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)sinceDomainVersion;
- (int)type;
- (id)userInfo;
- (id)userInfoValueForKey:(id)arg1;

@end
