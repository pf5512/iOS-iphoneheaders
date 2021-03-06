/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>

@class MCProfileInfo, NSArray, PSListController, PSSpecifier;

@interface MCUIBundleController : PSBundleController {

	MCProfileInfo* _mdmProfileInfo;
	NSArray* _configProfilesInfo;
	PSListController* _parentController;
	PSSpecifier* _specifier;

}

@property (assign,nonatomic,__weak) PSListController * parentController;                                //@synthesize parentController=_parentController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                   //@synthesize specifier=_specifier - In the implementation block
@property (setter=_setMDMProfileInfo:,nonatomic,retain) MCProfileInfo * _mdmProfileInfo;                //@synthesize mdmProfileInfo=_mdmProfileInfo - In the implementation block
@property (setter=_setConfigProfilesInfo:,nonatomic,retain) NSArray * _configProfilesInfo;              //@synthesize configProfilesInfo=_configProfilesInfo - In the implementation block
+(id)provisioningProfilesWithValidityCheck:(BOOL)arg1 ;
+(id)configurationProfiles;
+(id)provisioningProfiles;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)dealloc;
-(void)load;
-(void)_reloadAllProfilesInBackground;
-(void)_configurationProfilesChanged:(id)arg1 ;
-(id)_profileInfoForSpecifier:(id)arg1 ;
-(MCProfileInfo *)_mdmProfileInfo;
-(NSArray *)_configProfilesInfo;
-(id)_specifier;
-(Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)arg1 ;
-(unsigned long long)_profileCount;
-(void)_updateSpecifierProfileInfo;
-(void)_updateSpecifierControllerClass;
-(void)_setMDMProfileInfo:(id)arg1 ;
-(void)_setConfigProfilesInfo:(id)arg1 ;
-(void)_updateUIWithNewProfileList;
-(PSListController *)parentController;
-(void)setParentController:(PSListController *)arg1 ;
-(void)unload;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 ;
@end

