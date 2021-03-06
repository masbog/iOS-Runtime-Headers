/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand {
}

@property(copy) NSString * dialogPhase;
@property BOOL scrollToTop;
@property BOOL temporary;
@property(copy) NSArray * views;

+ (id)addViews;
+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogPhase;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)scrollToTop;
- (void)setDialogPhase:(id)arg1;
- (void)setScrollToTop:(BOOL)arg1;
- (void)setTemporary:(BOOL)arg1;
- (void)setViews:(id)arg1;
- (BOOL)temporary;
- (id)views;

@end
