/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSDictionary;

@interface GKAchievementDescriptionInternal : GKInternalRepresentation {
    NSString *_achievedDescription;
    NSString *_groupIdentifier;
    BOOL _hidden;
    NSDictionary *_icons;
    NSString *_identifier;
    unsigned int _maximumPoints;
    BOOL _replayable;
    NSString *_title;
    NSString *_unachievedDescription;
}

@property(retain) NSString * achievedDescription;
@property(retain) NSString * groupIdentifier;
@property(getter=isHidden) BOOL hidden;
@property(retain) NSDictionary * icons;
@property(retain) NSString * identifier;
@property unsigned int maximumPoints;
@property(getter=isReplayable) BOOL replayable;
@property(retain) NSString * title;
@property(retain) NSString * unachievedDescription;

+ (id)codedPropertyKeys;

- (id)achievedDescription;
- (void)dealloc;
- (id)groupIdentifier;
- (unsigned int)hash;
- (id)icons;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHidden;
- (BOOL)isReplayable;
- (unsigned int)maximumPoints;
- (void)setAchievedDescription:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaximumPoints:(unsigned int)arg1;
- (void)setReplayable:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnachievedDescription:(id)arg1;
- (id)title;
- (id)unachievedDescription;

@end
