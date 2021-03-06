/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class PSSpecifier;

@interface SafariSavedPasswordDetailController : SafariSettingsListController {

	PSSpecifier* _usernameSpecifier;
	PSSpecifier* _passwordSpecifier;

}
+(id)_valueOfSpecifier:(id)arg1 ;
+(id)_specifierWithName:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)viewDidLoad;
-(id)specifiers;
-(bool)canBeShownFromSuspendedState;
-(void)willResignActive;
-(void)willBecomeActive;
@end

