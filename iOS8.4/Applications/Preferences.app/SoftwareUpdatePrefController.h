/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Preferences/DevicePINControllerDelegate.h>
#import <Preferences/SUManagerClientDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Preferences/SUNetworkObserver.h>
#import <Preferences/RUIObjectModelDelegate.h>

@class SUManagerClient, SUDownload, SUDescriptor, PSSpecifier, PSSoftwareUpdateTitleCell, NSError, UIAlertView, RUILoader, NSMutableArray, UINavigationController, NSURL, NSString, NSDateComponentsFormatter, UsageStorageController, SUMutableDownloadMetadata;

@interface SoftwareUpdatePrefController : PSListController <DevicePINControllerDelegate, SUManagerClientDelegate, UITableViewDelegate, SUNetworkObserver, RUIObjectModelDelegate> {

	SUManagerClient* _SUManager;
	SUDownload* _download;
	SUDescriptor* _update;
	PSSpecifier* _titleGroup;
	PSSoftwareUpdateTitleCell* _titleCell;
	PSSpecifier* _installButtonGroup;
	PSSpecifier* _installButtonSpecifier;
	int _suState;
	NSError* _suError;
	int _networkType;
	char _manuallyStartedScan;
	char _anyScanInProgress;
	char _disableInstallButton;
	char _connectedToPowerSource;
	char _presentedCellularFees;
	SEL _termsAcceptanceAction;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;
	UIAlertView* _softwareUpdateAlert;
	UIAlertView* _agreeConfirmationAlert;
	RUILoader* _termsLoader;
	NSMutableArray* _objectModels;
	UINavigationController* _modalBuddyMLController;
	NSURL* _genericTermsURL;
	NSString* _agreeURL;
	char _termsLoading;
	NSString* _devicePasscode;
	NSDateComponentsFormatter* _durationFormatter;
	UsageStorageController* _usageStorageController;
	char _hideInsufficientStorageUI;
	char _cacheDeleteInProgress;
	char _refreshOnNextAppearance;
	/*^block*/id _devicePasscodeCompletion;
	SUMutableDownloadMetadata* _downloadMetadata;

}

@property (nonatomic,retain) SUDownload * download;                                     //@synthesize download=_download - In the implementation block
@property (nonatomic,retain) SUDescriptor * update;                                     //@synthesize update=_update - In the implementation block
@property (assign,nonatomic) int SUState;                                               //@synthesize suState=_suState - In the implementation block
@property (nonatomic,retain) NSError * SUError;                                         //@synthesize suError=_suError - In the implementation block
@property (nonatomic,copy) id devicePasscodeCompletion;                                 //@synthesize devicePasscodeCompletion=_devicePasscodeCompletion - In the implementation block
@property (nonatomic,retain) SUMutableDownloadMetadata * downloadMetadata;              //@synthesize downloadMetadata=_downloadMetadata - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_SUManagerClientClass;
-(void)_batteryStateChanged:(id)arg1 ;
-(void)setSUState:(int)arg1 ;
-(char)_SUDownloadPhaseIsQueued:(id)arg1 ;
-(void)handleInstallationError:(id)arg1 ;
-(void)setSUError:(id)arg1 disableButton:(char)arg2 reload:(char)arg3 ;
-(void)setDownload:(SUDownload *)arg1 ;
-(void)scanForUpdate;
-(void)updateStateFromDownload:(id)arg1 ;
-(void)handleScanError:(id)arg1 ;
-(char)handleStoragePurgeIfNeeded;
-(void)scanFinishedWithUpdate:(id)arg1 error:(id)arg2 ;
-(id)humanReadableDescriptionForError:(id)arg1 enableButton:(char*)arg2 showAsButtonFooter:(char*)arg3 ;
-(void)showStorageHelpLinkIfNeededOnFooterForGroup:(id)arg1 error:(id)arg2 ;
-(id)specifiersForState:(int)arg1 ;
-(void)handleDownloadError:(id)arg1 ;
-(void)downloadAndInstall:(id)arg1 ;
-(void)install:(id)arg1 ;
-(void)presentError:(id)arg1 ;
-(void)setSUError:(NSError *)arg1 ;
-(char)_alertForDownloadConstraintsWithContext:(id)arg1 ;
-(void)_reallyResumeDownloadAcceptingCellularFees:(char)arg1 ;
-(void)_termsAgree;
-(void)_termsDisagree;
-(void)_loadTermsRemoteUIFailureWithError:(id)arg1 ;
-(void)setShowsTermsProgress:(char)arg1 ;
-(void)_loadTermsRemoteUIWithResponseData:(id)arg1 ;
-(void)_loadRemoteUITermsWithCloud;
-(void)_loadTermsFromUpdateAsset;
-(void)_reallyDownloadAndInstallAcceptingCellularFees:(char)arg1 ;
-(void)setDevicePasscodeCompletion:(id)arg1 ;
-(void)downloadTermsAccepted;
-(void)presentTermsIfNecessaryWithAcceptanceAction:(SEL)arg1 ;
-(void)promptForDevicePasscodeFromSpecifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_reallyInstall;
-(void)storagePurgeFinished:(char)arg1 ;
-(void)_combinedTermsAgree;
-(void)detailedReleaseNotesDonePressed:(id)arg1 ;
-(id)devicePasscodeCompletion;
-(int)SUState;
-(NSError *)SUError;
-(void)resumeDownload:(id)arg1 ;
-(SUDownload *)download;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(SUDescriptor *)update;
-(void)willEnterForeground;
-(void)setUpdate:(SUDescriptor *)arg1 ;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(char)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)updateState;
-(id)specifiers;
-(Class)tableViewClass;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)devicePINControllerDidDismissPINPane:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2 ;
-(void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3 ;
-(void)client:(id)arg1 downloadDidStart:(id)arg2 ;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2 ;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2 ;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3 ;
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(SUMutableDownloadMetadata *)downloadMetadata;
-(void)setDownloadMetadata:(SUMutableDownloadMetadata *)arg1 ;
@end
