/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSTimeZone, NSArray, NSString, EKCalendar, NSDate, NSURL;

@interface EKCalendarItem : EKObject {
    int _actionsDisabledCachedValue;
}

@property(copy) NSURL * URL;
@property(readonly) NSString * UUID;
@property(copy) NSArray * alarms;
@property(readonly) NSArray * attendees;
@property(retain) EKCalendar * calendar;
@property(readonly) NSString * calendarItemExternalIdentifier;
@property(readonly) NSString * calendarItemIdentifier;
@property(readonly) NSDate * creationDate;
@property(readonly) BOOL hasAlarms;
@property(readonly) BOOL hasAttendees;
@property(readonly) BOOL hasNotes;
@property(readonly) BOOL hasRecurrenceRules;
@property(readonly) NSDate * lastModifiedDate;
@property(copy) NSString * location;
@property(copy) NSString * notes;
@property(copy) NSArray * recurrenceRules;
@property(copy) NSTimeZone * timeZone;
@property(copy) NSString * title;

- (id)URL;
- (id)UUID;
- (id)_alarmsRelation;
- (id)_attachmentsRelation;
- (id)_attendeesRelation;
- (id)_locationRelation;
- (void)_moveToCalendarInternal:(id)arg1;
- (id)_organizerRelation;
- (id)_persistentItem;
- (id)_recurrencesRelation;
- (id)_selfAttendeeRelation;
- (id)action;
- (BOOL)actionsDisabled;
- (void)addAlarm:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (id)alarms;
- (BOOL)allowsAlarmModifications;
- (BOOL)allowsAttendeeModifications;
- (BOOL)allowsCalendarModifications;
- (BOOL)allowsRecurrenceModifications;
- (id)attachments;
- (id)attendees;
- (id)calendar;
- (id)calendarItemExternalIdentifier;
- (id)calendarItemIdentifier;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3;
- (id)creationDate;
- (id)description;
- (id)externalURI;
- (BOOL)hasAlarms;
- (BOOL)hasAttendees;
- (BOOL)hasNotes;
- (BOOL)hasRecurrenceRules;
- (BOOL)isAllDay;
- (BOOL)isDefaultAlarmRemoved;
- (BOOL)isEditable;
- (BOOL)isExternallyOrganizedInvitation;
- (BOOL)isFloating;
- (BOOL)isOrganizedBySharedCalendarOwner;
- (BOOL)isSelfOrganized;
- (BOOL)isSelfOrganizedInvitation;
- (id)lastModifiedDate;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)location;
- (void)moveToCalendar:(id)arg1;
- (id)notes;
- (id)organizer;
- (id)originalItem;
- (int)priority;
- (void)rebase;
- (id)recurrenceRules;
- (void)removeAlarm:(id)arg1;
- (void)removeAttendee:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (BOOL)requiresDetach;
- (id)selfAttendee;
- (int)selfParticipantStatus;
- (void)setAction:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDefaultAlarmRemoved:(BOOL)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setSharedItemCreatedByAddress:(id)arg1;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (void)setSharedItemCreatedDate:(id)arg1;
- (void)setSharedItemCreatedTimeZone:(id)arg1;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (void)setSharedItemModifiedByEmailAddress:(id)arg1;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (void)setSharedItemModifiedDate:(id)arg1;
- (void)setSharedItemModifiedTimeZone:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)sharedItemCreatedByDisplayName;
- (id)sharedItemCreatedByEmailAddress;
- (id)sharedItemCreatedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedDate;
- (id)sharedItemCreatedTimeZone;
- (id)sharedItemModifiedByDisplayName;
- (id)sharedItemModifiedByEmailAddress;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedDate;
- (id)sharedItemModifiedTimeZone;
- (id)structuredLocation;
- (id)timeZone;
- (id)title;
- (void)updatePersistentObject;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (BOOL)validate:(id*)arg1;

@end
