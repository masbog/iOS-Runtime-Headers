/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSString, NSData, NSNumber;

@interface FTRegistrationMessage : FTIDSMessage <NSCopying> {
    NSArray *_capabilities;
    NSString *_deviceName;
    NSString *_hardwareVersion;
    NSString *_osVersion;
    NSString *_protocolVersion;
    NSArray *_responseBindings;
    NSNumber *_responseNextHBI;
    NSString *_softwareVersion;
    NSData *_validationData;
}

@property(copy) NSArray * capabilities;
@property(copy) NSString * deviceName;
@property(copy) NSString * hardwareVersion;
@property(copy) NSString * osVersion;
@property(copy) NSString * protocolVersion;
@property(copy) NSArray * responseBindings;
@property(copy) NSNumber * responseNextHBI;
@property(copy) NSString * softwareVersion;
@property(copy) NSData * validationData;

- (id)additionalMessageHeaders;
- (id)bagKey;
- (id)capabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deviceName;
- (void)handleResponseDictionary:(id)arg1;
- (id)hardwareVersion;
- (BOOL)hasRequiredKeys:(id*)arg1;
- (id)messageBody;
- (id)nonStandardMessageHeadersForOutgoingPush;
- (id)osVersion;
- (id)protocolVersion;
- (id)requiredKeys;
- (id)responseBindings;
- (id)responseNextHBI;
- (void)setCapabilities:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHardwareVersion:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setResponseBindings:(id)arg1;
- (void)setResponseNextHBI:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setValidationData:(id)arg1;
- (id)softwareVersion;
- (id)validationData;

@end
