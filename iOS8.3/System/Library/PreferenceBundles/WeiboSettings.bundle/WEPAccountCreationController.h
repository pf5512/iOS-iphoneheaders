/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:21:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@protocol WEAccountCreationDelegate;
@class NSString, PSTextFieldSpecifier, PSSpecifier;

@interface WEPAccountCreationController : ACUIViewController {

	NSString* _screenName;
	NSString* _email;
	NSString* _password;
	NSString* _verify;
	NSString* _gender;
	char _geoEnabled;
	PSTextFieldSpecifier* _emailSpecifier;
	PSSpecifier* _signUpSpecifier;
	PSSpecifier* _legalSpecifier;
	id<WEAccountCreationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WEAccountCreationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setLocation:(id)arg1 withSpecifier:(id)arg2 ;
-(id)locationWithSpecifier:(id)arg1 ;
-(void)_legalTermsOfServiceLinkTapped:(id)arg1 ;
-(char)_haveEnoughValuesForValidation;
-(char)_isEmailAddressValid;
-(void)_presentInvalidEmailAddressAlert;
-(void)_presentScreenNameTooLongAlert;
-(char)_isScreenNameValid;
-(void)_presentScreenNameInvalidAlert;
-(void)_presentPasswordVerifyDoNotMatchAlert;
-(char)_isPasswordBlackListed;
-(void)_presentPasswordTooSimpleAlert;
-(void)_presentPasswordTooLongAlert;
-(void)_presentResponseError:(id)arg1 ;
-(void)_incrementNewAccountCounter;
-(void)_setGeotagAccountSetting:(char)arg1 ;
-(void)_presentErrorCreatingAccount;
-(char)_validateValues;
-(void)_signUpButtonClicked:(id)arg1 ;
-(void)setScreenName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)screenNameWithSpecifier:(id)arg1 ;
-(void)setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(id)verifyWithSpecifier:(id)arg1 ;
-(void)setEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(id)emailWithSpecifier:(id)arg1 ;
-(void)setGender:(id)arg1 withSpecifier:(id)arg2 ;
-(id)genderWithSpecifier:(id)arg1 ;
-(void)_createAccount;
-(void)_presentPasswordTooShortAlert;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)passwordWithSpecifier:(id)arg1 ;
-(id)_localizedMessageForErrorCode:(id)arg1 ;
-(id)gender;
-(void)setGender:(id)arg1 ;
-(void)setDelegate:(id<WEAccountCreationDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<WEAccountCreationDelegate>)delegate;
-(void)viewDidLoad;
-(void)propertyValueChanged:(id)arg1 ;
-(void)updateNavButtons;
-(void)_updateDoneButton;
-(void)_cancelButtonClicked:(id)arg1 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
@end
