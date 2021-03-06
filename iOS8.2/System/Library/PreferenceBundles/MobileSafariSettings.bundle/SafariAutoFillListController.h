/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class UIBarButtonItem;

@interface SafariAutoFillListController : SafariSettingsListController {

	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_toggleEditing:(id)arg1 ;
-(void)_updateEditButton;
-(id)_cancelBarButtonItem;
-(char)keychainSyncIsEnabled;
-(id)passcodePrompt;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(char)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(id)_deleteBarButtonItem;
-(id)_editBarButtonItem;
-(void)_showDeleteConfirmationAlert:(id)arg1 ;
-(unsigned)_autoFillItemCount;
-(void)_deleteSelectedItems;
-(char)canBeShownFromSuspendedState;
-(void)pushController:(id)arg1 animate:(char)arg2 ;
-(void)_updateDeleteButton;
@end

