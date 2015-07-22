/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/General/PairedUnlockSettings.bundle/PairedUnlockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PairedUnlockSettings/PairedUnlockSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <PairedUnlockSettings/PUConnectionDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <PairedUnlockSettings/PUSRemotePasscodeViewControllerDelegate.h>

@class UIAlertView, NPSManager, PUConnection, NSString;

@interface PUSPasscodeSettingsListController : PSListController <PUConnectionDelegate, UIAlertViewDelegate, PUSRemotePasscodeViewControllerDelegate> {

	UIAlertView* _awaitingUnlockAlertView;
	long long _pendingAction;
	NPSManager* _syncManager;
	BOOL _wantsSimplePasscode;
	BOOL _justChangedWantsSimplePasscode;
	MKBAssertionRef _unlockPairingAssertion;
	BOOL _gizmoHasPasscodeSet;
	BOOL _gizmoHasPaymentPasses;
	BOOL _devicesArePairedForUnlocking;
	BOOL _gizmoIsLocked;
	BOOL _gizmoIsUnlockOnly;
	BOOL _gizmoIsInLockout;
	int _activityFlags;
	/*^block*/id _checkGizmoUnlockedCompletionHandler;
	PUConnection* _connection;

}

@property (assign,nonatomic) BOOL gizmoHasPasscodeSet;                          //@synthesize gizmoHasPasscodeSet=_gizmoHasPasscodeSet - In the implementation block
@property (assign,nonatomic) BOOL gizmoHasPaymentPasses;                        //@synthesize gizmoHasPaymentPasses=_gizmoHasPaymentPasses - In the implementation block
@property (assign,nonatomic) BOOL devicesArePairedForUnlocking;                 //@synthesize devicesArePairedForUnlocking=_devicesArePairedForUnlocking - In the implementation block
@property (assign,nonatomic) BOOL gizmoIsLocked;                                //@synthesize gizmoIsLocked=_gizmoIsLocked - In the implementation block
@property (assign,nonatomic) BOOL gizmoIsUnlockOnly;                            //@synthesize gizmoIsUnlockOnly=_gizmoIsUnlockOnly - In the implementation block
@property (assign,nonatomic) BOOL gizmoIsInLockout;                             //@synthesize gizmoIsInLockout=_gizmoIsInLockout - In the implementation block
@property (nonatomic,copy) id checkGizmoUnlockedCompletionHandler;              //@synthesize checkGizmoUnlockedCompletionHandler=_checkGizmoUnlockedCompletionHandler - In the implementation block
@property (nonatomic,readonly) PUConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int activityFlags;                                 //@synthesize activityFlags=_activityFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)togglePasscode:(id)arg1 ;
-(void)changePasscode;
-(void)_noteAppWillResignActive;
-(void)_addActivityFlag:(int)arg1 ;
-(void)setGizmoHasPasscodeSet:(BOOL)arg1 ;
-(void)setGizmoIsUnlockOnly:(BOOL)arg1 ;
-(void)setGizmoIsLocked:(BOOL)arg1 ;
-(BOOL)gizmoIsInLockout;
-(void)_removeActivityFlag:(int)arg1 ;
-(void)setCheckGizmoUnlockedCompletionHandler:(id)arg1 ;
-(void)_promptForGizmoUnlock;
-(void)setGizmoHasPaymentPasses:(BOOL)arg1 ;
-(void)setDevicesArePairedForUnlocking:(BOOL)arg1 ;
-(void)_cancelRemoteAction;
-(void)reloadUI;
-(void)_storeAndSyncSimplePasscodeEnabled:(BOOL)arg1 ;
-(void)_resetSimplePasscodeChangeIfNeeded;
-(void)_finishRemoteAction;
-(void)_startRemoteAction:(long long)arg1 ;
-(void)confirmDisablePasscode:(id)arg1 ;
-(void)setGizmoIsInLockout:(BOOL)arg1 ;
-(void)_enableAutoUnlockConfirmed:(id)arg1 ;
-(void)_enableAutoUnlockCanceled:(id)arg1 ;
-(void)setActivityFlags:(int)arg1 ;
-(void)remotePasscodeViewControllerDidCancel:(id)arg1 ;
-(BOOL)gizmoIsLocked;
-(void)_updateLockoutState;
-(int)activityFlags;
-(void)_updateUnlockState;
-(void)_updateSimplePasscodeState;
-(void)_checkGizmoLockState;
-(void)_checkHasPaymentPasses;
-(void)endLockout:(id)arg1 ;
-(id)checkGizmoUnlockedCompletionHandler;
-(id)autoUnlockEnabledValue;
-(void)setAutoUnlockEnabledValue:(id)arg1 ;
-(id)simplePasscodeEnabledValue;
-(void)setSimplePasscodeEnabledValue:(id)arg1 ;
-(id)eraseDataEnabledValue;
-(void)setEraseDataEnabledValue:(id)arg1 ;
-(BOOL)gizmoHasPasscodeSet;
-(BOOL)gizmoHasPaymentPasses;
-(BOOL)devicesArePairedForUnlocking;
-(BOOL)gizmoIsUnlockOnly;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(PUConnection *)connection;
-(void)_handleError:(id)arg1 ;
-(void)unlockConnection:(id)arg1 remoteDeviceDidCompletePasscodeAction:(BOOL)arg2 error:(id)arg3 ;
-(void)unlockConnection:(id)arg1 remoteDeviceDidNotifyStateHasPasscode:(BOOL)arg2 isPasscodeLocked:(BOOL)arg3 isUnlockOnly:(BOOL)arg4 ;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
@end
