/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, PSSpecifier, NSMutableArray, NSNumber;

@interface CNFRegSettingsController : CNFRegListController <CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate> {
    struct { 
        unsigned int listeningForFinishedEditingEvents : 1; 
        unsigned int appeared : 1; 
        unsigned int ignoringTextFieldChanges : 1; 
        unsigned int showEnableSwitch : 1; 
        unsigned int refreshingCallerIdValues : 1; 
    NSArray *_accountGroupSpecifiers;
    PSSpecifier *_addAddressButtonSpecifier;
    NSMutableArray *_addresses;
    id _alertHandler;
    NSArray *_aliasGroupSpecifiers;
    PSSpecifier *_blankAddressSpecifier;
    NSArray *_callerIdGroupSpecifiers;
    NSArray *_cellularDataGroupSpecifiers;
    PSSpecifier *_cellularDataSwitchSpecifier;
    NSNumber *_delayedRefreshAnimatedFlag;
    PSSpecifier *_faceTimeEnabledGroupSpecifier;
    PSSpecifier *_faceTimeEnabledSpecifier;
    NSString *_pendingAddress;
    NSArray *_replyWithMessageGroupSpecifiers;
    } _settingsFlags;
}

@property(copy) id alertHandler;
@property(copy) NSString * pendingAddress;
@property BOOL showEnableSwitch;

- (BOOL)_allAccountsAreDeactivated;
- (id)_appleIDAccounts;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_cacheIndividualSpecifier:(id)arg1 includeInGroup:(BOOL*)arg2;
- (void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2;
- (BOOL)_canDeselectAlias:(id)arg1;
- (void)_clearBlankAliasField;
- (void)_handleDeactivation:(id)arg1;
- (void)_handleFaceTimeCTRegistrationStatusChanged;
- (void)_handleFaceTimeEntitlementStatusChanged;
- (void)_handleFaceTimeStateChanged;
- (void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2;
- (void)_handleSuccessfulAccountReactivation:(id)arg1;
- (void)_hideLocaleChooser;
- (id)_operationalAccounts;
- (id)_operationalAccountsForService:(int)arg1;
- (BOOL)_popFromSettingsAnimated:(BOOL)arg1;
- (void)_refreshFaceTimeSettingsDelayed:(id)arg1;
- (void)_reloadSpecifier:(id)arg1 withBlock:(id)arg2;
- (void)_setupAccountHandlers;
- (void)_setupAccountHandlersForDisabledOperation;
- (void)_setupAccountHandlersForDisabling;
- (void)_setupAccountHandlersForNormalOperation;
- (void)_setupAllListeners;
- (void)_setupAppearBlockForLocaleControllerWithAccount:(id)arg1;
- (BOOL)_shouldShowAliasInfo;
- (BOOL)_shouldUseDisabledHandlers;
- (void)_showAccountAlertForAccount:(id)arg1;
- (void)_showAliasValidationError:(id)arg1;
- (void)_showLocaleChooserWithAccount:(id)arg1;
- (void)_showSignInController;
- (void)_showViewAccountControllerForAccount:(id)arg1;
- (id)_specifierIdentifierForAccount:(id)arg1;
- (id)_switchFooterText;
- (void)_tearDownAllListeners;
- (void)_updateAddAliasButtonText;
- (void)_updateControllerStateAnimated:(BOOL)arg1;
- (void)_updateSwitch;
- (void)_updateSwitchDelayed;
- (id)_useableAccounts;
- (id)accountSpecifiers;
- (void)accountTappedWithSpecifier:(id)arg1;
- (void)addAddressTapped:(id)arg1;
- (BOOL)additionalAliasesAvailable;
- (id)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)aliasDetailControllerForSpecifier:(id)arg1;
- (id)aliasForSpecifier:(id)arg1;
- (id)aliasSpecifiers;
- (id)aliasWithIdentifier:(id)arg1;
- (id)blankAliasTextField;
- (id)bundle;
- (id)callerIdAliasSpecifiers;
- (BOOL)canBeShownFromSuspendedState;
- (BOOL)cellularDataSwitchEnabled;
- (void)clearAccountCache;
- (id)createSpecifierForAccount:(id)arg1;
- (id)createSpecifierForAlias:(id)arg1;
- (id)createSpecifierForCallerIdAlias:(id)arg1;
- (id)customTitle;
- (void)dealloc;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (id)getAccountNameForSpecifier:(id)arg1;
- (id)getAddAliasTextForSpecifier:(id)arg1;
- (id)getCellularDataForSpecifier:(id)arg1;
- (id)getFaceTimeEnabledForSpecifier:(id)arg1;
- (int)groupIdForSpecifier:(id)arg1;
- (int)groupIdForSpecifierId:(id)arg1;
- (int)indexOfLastSpecifierInGroup:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isShowingAddButton;
- (BOOL)isShowingBlankAlias;
- (void)keyboardDismissed:(id)arg1;
- (id)logName;
- (id)pendingAddress;
- (id)pendingAddressForSpecifier:(id)arg1;
- (BOOL)popToFirstRunControllerAnimated:(BOOL)arg1;
- (id)possibleCallerIdAliases;
- (void)refreshAccountsAnimated:(BOOL)arg1;
- (void)refreshAliasSpecifier:(id)arg1;
- (void)refreshAliasesAnimated:(BOOL)arg1;
- (void)refreshAllAliasSpecifiers;
- (void)refreshAllCallerIdAliasSpecifiers;
- (void)refreshCallerIdAliasesAnimated:(BOOL)arg1;
- (void)refreshCallerIdSpecifier:(id)arg1;
- (void)refreshCellularDataAnimated:(BOOL)arg1;
- (void)refreshEnabledStateAnimated:(BOOL)arg1;
- (void)refreshFaceTimeSettingsAnimated:(BOOL)arg1;
- (void)refreshFaceTimeSettingsWithDelayAnimated:(BOOL)arg1;
- (void)returnKeyPressed:(id)arg1;
- (void)setAlertHandler:(id)arg1;
- (void)setAliasSelected:(id)arg1;
- (void)setCallerId:(id)arg1;
- (void)setCellularData:(id)arg1 specifier:(id)arg2;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(BOOL)arg3;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2;
- (void)setPendingAddress:(id)arg1 forSpecifier:(id)arg2;
- (void)setPendingAddress:(id)arg1;
- (void)setShowEnableSwitch:(BOOL)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (BOOL)shouldShowCellularData;
- (BOOL)shouldShowReplyWithMessage;
- (BOOL)showAccounts:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showAddAliasButton:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)showAliases:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showAllSettings:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showBlankAlias:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)showCallerId:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showCellularData:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)showEnableSwitch;
- (void)showReplyWithMessage:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(BOOL)arg3;
- (id)specifierList;
- (void)startEditingTextField;
- (void)startListeningForFinishedEditingEventNotifications;
- (id)statusForAlias:(id)arg1;
- (id)statusForSpecifier:(id)arg1;
- (void)stopEditingTextField:(BOOL)arg1;
- (void)stopListeningForFinishedEditingEventNotifications;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)textFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)updateCellularDataFooterText;
- (void)updateSpecifier:(id)arg1 withAccount:(id)arg2;
- (void)updateSpecifier:(id)arg1 withAlias:(id)arg2;
- (void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2;
- (void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
