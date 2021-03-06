/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCXPCProtocol <NSObject>
@required
-(void)flushWithCompletion:(/*^block*/id)arg1;
-(void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(char)arg3 completion:(/*^block*/id)arg4;
-(void)checkInWithCompletion:(/*^block*/id)arg1;
-(void)checkCarrierProfileAndForceReinstallation:(char)arg1 completion:(/*^block*/id)arg2;
-(void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(char)arg3 completion:(/*^block*/id)arg4;
-(void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(char)arg3 completion:(/*^block*/id)arg4;
-(void)setAutoCorrectionAllowed:(char)arg1 completion:(/*^block*/id)arg2;
-(void)setPredictiveKeyboardAllowed:(char)arg1 completion:(/*^block*/id)arg2;
-(void)setSpellCheckAllowed:(char)arg1 completion:(/*^block*/id)arg2;
-(void)setAllowedURLStrings:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addAllowedURLString:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addBookmark:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notifyDeviceUnlockedWithCompletion:(/*^block*/id)arg1;
-(void)mayShareToMessagesAndOriginatingAccountIsManaged:(char)arg1 completion:(/*^block*/id)arg2;
-(void)isProfileInstalledWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)installProfileData:(id)arg1 interactive:(char)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(char)arg4 completion:(/*^block*/id)arg5;
-(void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(/*^block*/id)arg1;
-(void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(/*^block*/id)arg1;
-(void)updateProfileIdentifier:(id)arg1 interactive:(char)arg2 completion:(/*^block*/id)arg3;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 completion:(/*^block*/id)arg6;
-(void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(/*^block*/id)arg3;
-(void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeOrphanedClientRestrictionsWithCompletion:(/*^block*/id)arg1;
-(void)managedSystemConfigurationServiceIDsWithCompletion:(/*^block*/id)arg1;
-(void)managedWiFiNetworkNamesWithCompletion:(/*^block*/id)arg1;
-(void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(char)arg2 completion:(/*^block*/id)arg3;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeBoolSetting:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeValueSetting:(id)arg1 completion:(/*^block*/id)arg2;
-(void)openSensitiveURL:(id)arg1 unlock:(char)arg2 completion:(/*^block*/id)arg3;
-(void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)installProvisioningProfileData:(id)arg1 managingProfileIdentifer:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeProvisioningProfileWithUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notifyStartComplianceTimer:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recomputeUserComplianceWarningWithCompletion:(/*^block*/id)arg1;
-(void)recomputePerClientUserComplianceWithCompletion:(/*^block*/id)arg1;
-(void)resetAllSettingsToDefaultsWithCompletion:(/*^block*/id)arg1;
-(void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)managedAppIDsWithFlags:(int)arg1 completion:(/*^block*/id)arg2;
-(void)removeExpiredProfilesWithCompletion:(/*^block*/id)arg1;
-(void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(/*^block*/id)arg4;
-(void)profileDataStoredForPurpose:(int)arg1 completion:(/*^block*/id)arg2;
-(void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(/*^block*/id)arg2;
-(void)rereadManagedAppAttributesWithCompletion:(/*^block*/id)arg1;
-(void)cloudConfigurationMachineInfoDataWithCompletion:(/*^block*/id)arg1;
-(void)cloudConfigurationStoreDetails:(id)arg1 completion:(/*^block*/id)arg2;
-(void)createActivationLockBypassCodeWithCompletion:(/*^block*/id)arg1;
-(void)storeActivationRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setUserBookmarks:(id)arg1 completion:(/*^block*/id)arg2;
-(void)stashUserBookmarks:(id)arg1 withLabel:(id)arg2 completion:(/*^block*/id)arg3;
-(void)unstashUserBookmarksFromLabel:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeWebContentFilterUserBlacklistedURLString:(id)arg1 completion:(/*^block*/id)arg2;
-(void)stashBlacklistURLStringsWithCompletion:(/*^block*/id)arg1;
-(void)unstashBlacklistURLStringsWithCompletion:(/*^block*/id)arg1;
-(void)stashWhitelistURLStringsWithCompletion:(/*^block*/id)arg1;
-(void)unstashWhitelistURLStringsWithCompletion:(/*^block*/id)arg1;
-(void)shutDownWithCompletion:(/*^block*/id)arg1;

@end

