/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSDate, NSString;

@interface SASmsSearch : SABaseClientBoundCommand {
}

@property(copy) NSDate * end;
@property(copy) NSString * message;
@property(copy) NSString * recipient;
@property(copy) NSString * sender;
@property(copy) NSDate * start;
@property int status;
@property(copy) NSURL * targetAppId;
@property(copy) NSString * timeZoneId;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)end;
- (id)groupIdentifier;
- (id)message;
- (id)recipient;
- (BOOL)requiresResponse;
- (id)sender;
- (void)setEnd:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetAppId:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (id)start;
- (int)status;
- (id)targetAppId;
- (id)timeZoneId;

@end
