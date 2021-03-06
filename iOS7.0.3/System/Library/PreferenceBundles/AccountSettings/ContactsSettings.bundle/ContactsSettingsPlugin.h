/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ContactsSettings.bundle/ContactsSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsSettings/ContactsSettings-Structs.h>
#import <AccountsUI/ACUISettingsPluginProtocol.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol ACUISettingsPluginParentProtocol, OS_dispatch_queue;
@class NSMutableArray, PSSpecifier, PSViewController, UIAlertView, UIPopoverController, ABPeoplePickerNavigationController, NSObject;

@interface ContactsSettingsPlugin : NSObject <ACUISettingsPluginProtocol, UIActionSheetDelegate, ABPeoplePickerNavigationControllerDelegate, UIPopoverControllerDelegate> {

	void* _addressBook;
	NSMutableArray* _currentSpecifiers;
	PSSpecifier* _SIMImportSpacerSpecifier;
	PSSpecifier* _SIMImportSpecifier;
	PSSpecifier* _MeCardSpecifier;
	PSSpecifier* _ContactsSortOrderSpecifier;
	PSSpecifier* _PersonNameOrderSpecifier;
	PSViewController<ACUISettingsPluginParentProtocol>* _parentController;
	NSMutableArray* _contactStores;
	NSMutableArray* _contactStoreNames;
	long _contactStoresCount;
	int _meCardLastCheckedSequenceNumber;
	CTServerConnectionRef _ctServerConnection;
	UIAlertView* _loadingContacts;
	CFDictionaryRef _importButtonIndexToStoreID;
	int _importStoreID;
	BOOL _shouldShowSIMImport;
	UIPopoverController* _meCardPopover;
	ABPeoplePickerNavigationController* _meCardPicker;
	NSObject<OS_dispatch_queue>* _addressBookQueue;

}
-(void)dealloc;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)windowDidRotate:(id)arg1 ;
-(void)windowWillRotate:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)_rootControllerDidSuspend;
-(void)_dismissMeCardPickerAnimated:(BOOL)arg1 ;
-(BOOL)_importAlreadyInProgress;
-(void)_updateSIMImportVisibility;
-(void)_updateABStoresAndNames;
-(void)_updateSIMImportSpecifier:(BOOL)arg1 ;
-(void)_setDefaultContacts:(id)arg1 specifier:(id)arg2 ;
-(void)_stopListeningForSIMPhonebookNotifications;
-(void)_noteImportEnded;
-(void)_erroredDuringSIMPhonebookFetch;
-(void)_getSIMPhonebookEntryAtIndex:(int)arg1 entry:(id*)arg2 ;
-(void)_noteImportStarted;
-(void)_fetchSIMPhonebook;
-(void)_beginImportToStoreID:(int)arg1 ;
-(void)_reloadMeCardCellIfVisible;
-(void)_showMeCardPopover;
-(void)setDefaultContacts:(id)arg1 specifier:(id)arg2 ;
-(id)defaultContactsName:(id)arg1 ;
-(id)contactStoreTitlesForSpecifier:(id)arg1 ;
-(void)_phonebookSelected;
-(void)_phonebookAvailable;
-(void)importFromSIM:(id)arg1 ;
-(void)_clearSpecifiers;
-(void)_SIMStatusChanged;
-(id)meCardName:(id)arg1 ;
-(void)showMeCardPicker:(id)arg1 ;
-(id)contactsSortOrder:(id)arg1 ;
-(void)setContactsSortOrder:(id)arg1 specifier:(id)arg2 ;
-(id)personNameOrder:(id)arg1 ;
-(void)setPersonNameOrder:(id)arg1 specifier:(id)arg2 ;
-(id)footerText;
-(BOOL)shouldLoadSpecifiersLazily;
-(id)initWithParentController:(id)arg1 ;
-(CTServerConnectionRef)_ctServerConnection;
-(id)specifiers;
-(id)headerText;
@end

