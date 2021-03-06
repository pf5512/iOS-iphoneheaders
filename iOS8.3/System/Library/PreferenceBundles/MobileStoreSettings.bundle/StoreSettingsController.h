/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:05:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <MobileStoreSettings/SSAuthenticateRequestDelegate.h>
#import <MobileStoreSettings/SUClientDelegate.h>

@class NSString, SSAuthenticateRequest, NSArray, HSCloudClient, NSMutableSet, UIAlertView, SuggestedAppsController;

@interface StoreSettingsController : PSListController <SSAuthenticateRequestDelegate, SUClientDelegate> {

	unsigned _accountMatchStatus;
	char _adFreeRadioEnabled;
	NSString* _appleID;
	SSAuthenticateRequest* _authenticateRequest;
	NSArray* _automaticDownloadConfigurations;
	char _cellularNetworkingAllowed;
	HSCloudClient* _cloudClient;
	NSString* _defaultAccountName;
	char _didAuthenticate;
	NSMutableSet* _enabledAutomaticDownloadKinds;
	char _isAuthenticating;
	NSString* _password;
	NSMutableSet* _pendingAutomaticDownloadKinds;
	char _radioSupported;
	char _sagaEnabled;
	UIAlertView* _signedInAlertView;
	UIAlertView* _signedOutAlertView;
	SuggestedAppsController* _suggestedAppsController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_isActive;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(id)_imageForApplicationIdentifier:(id)arg1 ;
-(void)_carrierSettingsChangedNotification:(id)arg1 ;
-(void)_automaticDownloadKindsChangedNotification:(id)arg1 ;
-(void)_textFieldChangedNotification:(id)arg1 ;
-(void)_reloadAutomaticDownloadConfigurations;
-(void)_reloadAdFreeRadioEnabledFromBag;
-(void)_reloadRadioAvailableFromServer;
-(void)_destroyAuthenticateRequest;
-(void)_signIn;
-(char)_isSignedIn;
-(id)_copySignedInSpecifiers;
-(id)_copySignedOutSpecifiers;
-(void)_reloadSagaAvailabilityForAppearance;
-(void)_loadUserSpecificURLBag;
-(id)_activeAutomaticDownloadKinds;
-(void)_reloadForAutomaticDownloadKindsChange;
-(void)_showAccountSheetWithViewController:(id)arg1 animated:(char)arg2 ;
-(void)_viewAccount;
-(void)_createNewAccount;
-(id)_bagContext;
-(char)_isSignInEnabled;
-(id)_enabledAutomaticDownloadKinds;
-(void)_setAppleID:(id)arg1 ;
-(id)_automaticDownloadConfigurations;
-(id)_newAutomaticDownloadSpecifierWithConfiguration:(id)arg1 ;
-(char)_shouldShowSpecifierForAutomaticDownloadKinds:(id)arg1 ;
-(id)_newAutomaticUpdatesSpecifier;
-(char)_shouldShowCellularDataSwitch;
-(id)_newCellularDataGroupSpecifier;
-(id)_newCellularDataSwitchSpecifier;
-(id)_newButtonSpecifierWithName:(id)arg1 action:(SEL)arg2 ;
-(char)_shouldShowMesaMessageInsteadOfPasswordSettingsSpecifier;
-(id)_newLinkSpecifierWithName:(id)arg1 detailControllerClass:(Class)arg2 ;
-(id)_newSwitchSpecifierWithName:(id)arg1 ;
-(void)_setShowAllMusicEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_setShowAllVideosEnabled:(id)arg1 specifier:(id)arg2 ;
-(char)_isSagaExpired;
-(id)_iTunesMatchFooterSpecifier;
-(void)_subscribeToITunesMatch:(id)arg1 ;
-(id)_newEnableSagaSwitchSpecifier;
-(id)_copyAutomaticDownloadSpecifiers;
-(id)_suggestedAppsController;
-(id)_appleIDSpecifier;
-(id)_passwordSpecifier;
-(void)_signInButton:(id)arg1 ;
-(void)_showAccountSheetWithStyle:(int)arg1 ;
-(id)_automaticDownloadsEnabled:(id)arg1 ;
-(void)_setAutomaticDownloadsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_imageForDownloadKinds:(id)arg1 ;
-(id)_automaticUpdatesEnabled:(id)arg1 ;
-(void)_setAutomaticUpdatesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_cellularNetworkEnabled:(id)arg1 ;
-(void)_setCellularNetworkingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_isSagaSyncEnabled:(id)arg1 ;
-(void)_setSagaSyncEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 ;
-(void)_showSagaExpirationAlert;
-(void)_reloadSagaAvailableFromServerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setDefaultAccountName:(id)arg1 ;
-(void)_showSagaConfirmation;
-(void)_confirmEnableSaga:(id)arg1 ;
-(void)_cancelEnableSaga:(id)arg1 ;
-(void)_reloadAfterAuthenticateEnd;
-(id)_appleID;
-(id)_password;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(void)willBecomeActive;
-(void)_urlBagDidLoadNotification:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)_signOut;
-(void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_reloadUI;
-(void)_updateNetworkActivityIndicator;
-(void)_accountsChangedNotification:(id)arg1 ;
-(char)client:(id)arg1 presentModalViewController:(id)arg2 animated:(char)arg3 ;
-(id)topViewControllerForClient:(id)arg1 ;
-(char)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(char)arg3 ;
-(char)client:(id)arg1 openInternalURL:(id)arg2 ;
@end

