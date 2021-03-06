/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDate, NSError, CKEntity, NSCalendarDate, CKConversation, NSDictionary, NSString, IMService, NSAttributedString, NSArray;

@interface CKClientComposeMessage : NSObject <CKMessage> {
    NSDictionary *_attachmentParts;
    NSCalendarDate *_calendarDate;
    double _date;
    NSString *_guid;
    NSString *_markup;
    NSArray *_parts;
    NSArray *_recipients;
    NSAttributedString *_subject;
    NSString *_text;
}

@property(readonly) NSString * address;
@property(readonly) NSDictionary * attachmentParts;
@property(readonly) NSCalendarDate * calendarDate;
@property CKConversation * conversation;
@property(readonly) NSError * error;
@property(readonly) BOOL failedSend;
@property(readonly) int failedSendCount;
@property(readonly) NSString * guid;
@property(readonly) BOOL hasAttachments;
@property(readonly) BOOL hasBeenSent;
@property(readonly) BOOL isDelivered;
@property BOOL isFromDowngrading;
@property(readonly) BOOL isFromFilteredSender;
@property(readonly) BOOL isFromMe;
@property(readonly) BOOL isOutgoing;
@property(readonly) BOOL isPlaceholder;
@property(readonly) BOOL isRead;
@property(readonly) BOOL isSMS;
@property(readonly) BOOL isToEmailAddress;
@property(readonly) BOOL isTypingIndicator;
@property(readonly) BOOL isWaitingForDelivery;
@property(readonly) BOOL isiMessage;
@property(readonly) NSString * markup;
@property(readonly) unsigned int messagePartCount;
@property(readonly) int outgoingBubbleColor;
@property(readonly) BOOL partiallyFailedSend;
@property(readonly) NSArray * parts;
@property(readonly) int pendingCount;
@property(readonly) float percentComplete;
@property(readonly) NSString * previewText;
@property(retain) NSArray * recipients;
@property(readonly) int rowID;
@property(readonly) CKEntity * sender;
@property(readonly) int sentCount;
@property(readonly) int sequenceNumber;
@property(readonly) IMService * service;
@property(readonly) BOOL shouldPlayReceivedTone;
@property(readonly) NSAttributedString * subject;
@property(readonly) BOOL supportsDeliveryReceipts;
@property(readonly) NSString * text;
@property(readonly) NSDate * timeRead;
@property(readonly) BOOL wantsSendStatus;

- (id)address;
- (id)attachmentParts;
- (id)calendarDate;
- (BOOL)containsAllDisplayableMessageParts:(id)arg1;
- (id)conversation;
- (void)dealloc;
- (void)deleteMessageParts:(id)arg1;
- (id)error;
- (BOOL)failedSend;
- (int)failedSendCount;
- (id)groupID;
- (id)guid;
- (BOOL)hasAttachments;
- (BOOL)hasBeenSent;
- (id)initWithMarkup:(id)arg1 parts:(id)arg2 attachmentParts:(id)arg3 subject:(id)arg4 guid:(id)arg5;
- (BOOL)isDelivered;
- (BOOL)isFirstDisplayablePart:(id)arg1;
- (BOOL)isFromDowngrading;
- (BOOL)isFromFilteredSender;
- (BOOL)isFromMe;
- (BOOL)isOutgoing;
- (BOOL)isPlaceholder;
- (BOOL)isRead;
- (BOOL)isSMS;
- (BOOL)isToEmailAddress;
- (BOOL)isTypingIndicator;
- (BOOL)isWaitingForDelivery;
- (BOOL)isiMessage;
- (void)loadParts;
- (id)markup;
- (unsigned int)messagePartCount;
- (int)outgoingBubbleColor;
- (BOOL)partiallyFailedSend;
- (id)parts;
- (int)pendingCount;
- (float)percentComplete;
- (id)previewText;
- (id)recipients;
- (void)resetParts;
- (int)rowID;
- (id)sender;
- (int)sentCount;
- (int)sequenceNumber;
- (id)service;
- (void)setConversation:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setIsFromDowngrading:(BOOL)arg1;
- (void)setRecipients:(id)arg1;
- (BOOL)shouldPlayReceivedTone;
- (id)subject;
- (BOOL)supportsDeliveryReceipts;
- (id)text;
- (id)timeRead;
- (BOOL)wantsSendStatus;

@end
