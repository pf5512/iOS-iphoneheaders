/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <ManagedConfigurationUI/MCInteractionDelegate.h>
#import <ManagedConfigurationUI/MCProfileViewControllerDelegate.h>
#import <ManagedConfigurationUI/PSStateRestoration.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIAlertView, NSString, MCProfile, MCProfileViewController, UIAlertController, UITextField;

@interface MCRemoveProfileViewController : UIViewController <MCInteractionDelegate, MCProfileViewControllerDelegate, PSStateRestoration, UITextFieldDelegate, UIActionSheetDelegate> {

	BOOL _processingPayload;
	BOOL _installHasFailed;
	BOOL _userCancelledInstall;
	BOOL _waitingForMoreInput;
	BOOL _isInteractionDelegate;
	BOOL _secondaryProfileReceived;
	BOOL _profileWantsToReEnroll;
	BOOL _actionButtonHidden;
	UIAlertView* _activeAlert;
	/*^block*/id _didAppearBlock;
	BOOL _initialQuestionsHaveBeenAsked;
	NSString* _pin;
	struct {
		unsigned installedThisLaunch : 1;
		unsigned profileSuggestsReboot : 1;
	}  _configurationFlags;
	BOOL _delayUserInput;
	MCProfile* _profile;
	MCProfileViewController* _profileViewController;
	UIAlertController* _activeAlertController;
	MCProfile* _originalProfile;
	UITextField* _passwordField;

}

@property (nonatomic,retain) MCProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) MCProfileViewController * profileViewController;              //@synthesize profileViewController=_profileViewController - In the implementation block
@property (nonatomic,retain) UIAlertController * activeAlertController;                    //@synthesize activeAlertController=_activeAlertController - In the implementation block
@property (nonatomic,retain) MCProfile * originalProfile;                                  //@synthesize originalProfile=_originalProfile - In the implementation block
@property (assign,nonatomic) BOOL delayUserInput;                                          //@synthesize delayUserInput=_delayUserInput - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;                                  //@synthesize passwordField=_passwordField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
+(void)_showRebootAlert;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(UITextField *)passwordField;
-(void)_clearCachedTableCells;
-(void)_profileListChanged:(id)arg1 ;
-(BOOL)_displayedAsSheet;
-(void)_performReEnroll;
-(void)_showReEnrollFailureAlert;
-(void)_showProgressIndicator;
-(void)_showPINSheet;
-(void)_performReEnrollAfterPINVerification;
-(void)_hideProgressIndicatorWithSuccess:(BOOL)arg1 showButtons:(BOOL)arg2 ;
-(void)_cancelActiveAlert:(BOOL)arg1 ;
-(id)_redirectURLFromInstallError:(id)arg1 ;
-(void)_showAlertForInstallError:(id)arg1 ;
-(void)_setDidAppearBlock:(/*^block*/id)arg1 ;
-(void)setDelayUserInput:(BOOL)arg1 ;
-(void)_profileRemovalDidFinish;
-(void)_showRemovalWarningAlert;
-(void)_showWrongRemovalPasswordAlert;
-(BOOL)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2 ;
-(BOOL)delayUserInput;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg1 ;
-(void)profileViewControllerDidSelectUpdateProfile:(id)arg1 ;
-(void)_updateProfile;
-(void)_removeProfile;
-(void)_cancelActiveAlertController:(BOOL)arg1 ;
-(MCProfileViewController *)profileViewController;
-(void)setOriginalProfile:(MCProfile *)arg1 ;
-(void)_continueInstallAfterPresentingWarnings;
-(MCProfile *)originalProfile;
-(void)_installFinishedWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)setActiveAlertController:(UIAlertController *)arg1 ;
-(void)setProfileViewController:(MCProfileViewController *)arg1 ;
-(UIAlertController *)activeAlertController;
-(void)_showRemovalWarningAfterPINVerification;
-(void)_showRemovalWarningActionSheet;
-(void)performRemoveAfterFinalVerification;
-(id)_mdmProfileRemovalAlertBody;
-(void)_cancelInstallAfterPresentingWarnings;
-(id)initWithProfile:(id)arg1 ;
-(void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2 ;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg1 ;
-(void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2 ;
-(void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2 ;
-(void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2 ;
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(MCProfile *)profile;
-(void)setProfile:(MCProfile *)arg1 ;
-(void)setPasswordField:(UITextField *)arg1 ;
@end

