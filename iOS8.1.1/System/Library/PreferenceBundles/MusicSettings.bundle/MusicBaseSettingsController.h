/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <MusicSettings/SSURLConnectionRequestDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class SSURLConnectionRequest, UIAlertView, NSString;

@interface MusicBaseSettingsController : PSListController <SSURLConnectionRequestDelegate, UIActionSheetDelegate> {

	SSURLConnectionRequest* _request;
	UIAlertView* _signedInAlertView;

}

@property (nonatomic,readonly) NSString * stringTable; 
@property (nonatomic,retain) NSString * appleID; 
@property (nonatomic,retain) NSString * password; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)suspend;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)bundle;
-(id)musicSpecifiers;
-(id)homeSharingSpecifiers;
-(NSString *)stringTable;
-(void)_verifyHomeSharingAccount;
-(void)_ditchUnsupportedSpecifiersFromArray:(id)arg1 ;
-(id)_resetMediaLibrarySpecifier;
-(void)_fixupVolumeLimitSpecifier:(id)arg1 ;
-(void)_fixupEQSpecifier:(id)arg1 ;
-(void)_fixupSoundCheck:(id)arg1 ;
-(id)_homeSharingGroupSpecifier;
-(id)_homeSharingButtonSpecifier;
-(id)_homeSharingAppleIDSpecifier;
-(id)_homeSharingPasswordSpecifier;
-(void)_resetMediaLibraryAction:(id)arg1 ;
-(void)_updateHomeSharingSpecifiers;
-(void)_resetMediaLibrary;
-(void)settingsChangedExternally;
-(id)videoSpecifiers;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(void)_signOut;
-(NSString *)appleID;
@end
