/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class NSMutableArray, NSString, NSMutableDictionary, PSSpecifier, NSArray, ACAccount;

@interface ACUIDataclassConfigurationViewController : ACUIViewController {

	BOOL _forceMailSetup;
	NSMutableArray* _dirtyDataclassCells;
	NSString* _accountIdentifier;
	NSMutableDictionary* _allDesiredDataclassActions;
	BOOL _isMergingSyncData;
	PSSpecifier* _deleteButtonSpecifier;
	PSSpecifier* _accountSummaryCellSpecifier;
	NSArray* _dataclassSpecifiers;
	NSArray* _otherSpecifiers;
	BOOL _didShowDataclassActionPickerDuringRemoval;
	BOOL _firstTimeSetup;
	BOOL _shouldShowDeleteAccountButton;
	BOOL _shouldEnableAccountSummaryCell;
	BOOL _isMailSetupForced;
	NSArray* _preEnabledDataclasses;
	ACAccount* _account;
	PSSpecifier* _dataclassGroupSpecifier;

}

@property (assign,getter=isFirstTimeSetup,nonatomic) BOOL firstTimeSetup;               //@synthesize firstTimeSetup=_firstTimeSetup - In the implementation block
@property (nonatomic,copy) NSArray * preEnabledDataclasses;                             //@synthesize preEnabledDataclasses=_preEnabledDataclasses - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * dataclassGroupSpecifier;              //@synthesize dataclassGroupSpecifier=_dataclassGroupSpecifier - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDeleteAccountButton;                        //@synthesize shouldShowDeleteAccountButton=_shouldShowDeleteAccountButton - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableAccountSummaryCell;                       //@synthesize shouldEnableAccountSummaryCell=_shouldEnableAccountSummaryCell - In the implementation block
@property (assign,nonatomic) BOOL isMailSetupForced;                                    //@synthesize isMailSetupForced=_isMailSetupForced - In the implementation block
+(BOOL)shouldPresentAsModalSheet;
-(void)doneButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2 ;
-(void)hideActivityInProgressUIWithDelay:(double)arg1 ;
-(void)setFirstTimeSetup:(BOOL)arg1 ;
-(void)forceMailSetup;
-(void)setPreEnabledDataclasses:(id)arg1 ;
-(void)setShouldEnableAccountSummaryCell:(BOOL)arg1 ;
-(void)setShouldShowDeleteAccountButton:(BOOL)arg1 ;
-(BOOL)isFirstTimeSetup;
-(id)_navigationTitle;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)_specifierForAccountSummaryCell;
-(id)_specifiersForDataclasses:(id)arg1 ;
-(id)otherSpecifiers;
-(BOOL)shouldShowDeleteAccountButton;
-(void)deleteButtonTapped:(id)arg1 ;
-(Class)accountInfoControllerClass;
-(id)valueForAccountSummaryCell;
-(BOOL)shouldEnableAccountSummaryCell;
-(id)_orderDataclassList:(id)arg1 ;
-(void)setDataclassGroupSpecifier:(id)arg1 ;
-(id)dataclassGroupSpecifier;
-(BOOL)shouldShowSpecifierForDataclass:(id)arg1 ;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(id)dataclassSwitchStateForSpecifier:(id)arg1 ;
-(id)preEnabledDataclasses;
-(void)_markDataclassSwitchCellAsDirty:(id)arg1 ;
-(void)_setDataclass:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(void)resetDirtyDataclassSwitchCells;
-(void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
-(id)_activityInProgressTextForDataclass:(id)arg1 isBeingEnabled:(BOOL)arg2 ;
-(void)_showDelayedActivityInProgressUIWithMessage:(id)arg1 ;
-(BOOL)_confirmKeepLocalDataForDataclasses:(id)arg1 ;
-(BOOL)_confirmDeleteLocalDataForDataclasses:(id)arg1 ;
-(void)_notifyRootControllerOfAccountSetupCompletion;
-(BOOL)_isShowingDeleteAccountButton;
-(BOOL)_promptUserToConfirmAccountDeletion;
-(int)deleteButtonIndex;
-(BOOL)isMailSetupForced;
-(void)reloadDynamicSpecifiersWithAnimation:(BOOL)arg1 ;
-(void)setDataclass:(id)arg1 enabled:(BOOL)arg2 ;
-(void)appendDeleteAccountButton;
-(void)setIsMailSetupForced:(BOOL)arg1 ;
-(id)account;
-(id)displayedAccountTypeString;
-(id)displayedShortAccountTypeString;
-(void)setAccount:(id)arg1 ;
-(id)specifiers;
-(void).cxx_destruct;
-(id)_accountIdentifier;
@end

