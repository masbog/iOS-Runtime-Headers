/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIAlertView, NSArray;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertSheet;
    BOOL _allowInSetup;
    NSArray *_allowedBundleIDs;
    BOOL _didEverActivate;
    BOOL _didPlayPresentationSound;
    BOOL _ignoreIfAlreadyDisplaying;
    BOOL _orderOverSBAlert;
    BOOL _pendInSetupIfNotAllowed;
    BOOL _preventLockOver;
}

@property BOOL allowInSetup;
@property(retain) NSArray * allowedBundleIDs;
@property BOOL ignoreIfAlreadyDisplaying;
@property BOOL pendInSetupIfNotAllowed;

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;

- (BOOL)_didEverActivate;
- (void)_playPresentationSound;
- (id)alertItemNotificationDate;
- (id)alertItemNotificationSender;
- (int)alertItemNotificationType;
- (int)alertPriority;
- (id)alertSheet;
- (Class)alertSheetClass;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)allowAutoUnlock;
- (BOOL)allowInSetup;
- (BOOL)allowMenuButtonDismissal;
- (id)allowedBundleIDs;
- (double)autoDismissInterval;
- (BOOL)behavesSuperModally;
- (void)buttonDismissed;
- (void)cleanPreviousConfiguration;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)dealloc;
- (void)didActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (BOOL)didPlayPresentationSound;
- (void)dismiss:(int)arg1;
- (void)dismiss;
- (BOOL)dismissOnLock;
- (BOOL)dismissOnModalDisplayActivation;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)hasActiveKeyboardOnScreen;
- (BOOL)ignoreIfAlreadyDisplaying;
- (id)init;
- (BOOL)isCriticalAlert;
- (id)lockLabel;
- (float)lockLabelFontSize;
- (void)noteVolumeOrLockPressed;
- (BOOL)pendInSetupIfNotAllowed;
- (void)performUnlockAction;
- (void)playPresentationSound;
- (BOOL)preventInterruption;
- (BOOL)preventLockOver;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (void)screenWillUndim;
- (void)setAllowInSetup:(BOOL)arg1;
- (void)setAllowedBundleIDs:(id)arg1;
- (void)setIgnoreIfAlreadyDisplaying:(BOOL)arg1;
- (void)setOrderOverSBAlert:(BOOL)arg1;
- (void)setPendInSetupIfNotAllowed:(BOOL)arg1;
- (void)setPreventLockOver:(BOOL)arg1;
- (id)shortLockLabel;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (BOOL)togglesMediaControls;
- (BOOL)undimsScreen;
- (BOOL)unlocksScreen;
- (void)willActivate;
- (void)willDeactivateForReason:(int)arg1;
- (void)willRelockForButtonPress:(BOOL)arg1;

@end
