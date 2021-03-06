/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSNumber, NSString, BKSMachSendRight;

@interface BKSApplicationProcessInfo : NSObject <NSCopying, BKSXPCCoding> {
    NSNumber *_beingDebugged;
    NSString *_bundleIdentifier;
    BOOL _classic;
    BKSMachSendRight *_eventPort;
    NSNumber *_pidNumber;
    BOOL _suspended;
}

@property(retain) NSNumber * beingDebugged;
@property(copy) NSString * bundleIdentifier;
@property BOOL classic;
@property(retain) BKSMachSendRight * eventPort;
@property(retain) NSNumber * pidNumber;
@property BOOL suspended;

- (id)beingDebugged;
- (id)bundleIdentifier;
- (BOOL)classic;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)eventPort;
- (id)initWithInfo:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (id)pidNumber;
- (void)setBeingDebugged:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClassic:(BOOL)arg1;
- (void)setEventPort:(id)arg1;
- (void)setPidNumber:(id)arg1;
- (void)setSuspended:(BOOL)arg1;
- (BOOL)suspended;

@end
