/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, NSArray;

@interface MFMailToURLComponents : NSObject {
    NSArray *_bccRecipients;
    NSString *_body;
    NSArray *_ccRecipients;
    NSString *_subject;
    NSArray *_toRecipients;
}

@property(readonly) NSArray * bccRecipients;
@property(readonly) NSString * body;
@property(readonly) NSArray * ccRecipients;
@property(readonly) NSString * subject;
@property(readonly) NSArray * toRecipients;

+ (id)componentsWithURL:(id)arg1;

- (void)_decomposeURL:(id)arg1;
- (id)bccRecipients;
- (id)body;
- (id)ccRecipients;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)subject;
- (id)toRecipients;

@end
