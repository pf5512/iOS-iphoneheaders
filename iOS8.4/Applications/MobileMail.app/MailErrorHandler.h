/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface MailErrorHandler : NSObject {

	NSMutableSet* _displayedErrorDescriptions;
	NSMutableSet* _sslErrorAccountsDisplayed;

}
-(void)displayError:(id)arg1 forAccount:(id)arg2 mode:(int)arg3 ;
-(void)_changeSetManagerEncounteredError:(id)arg1 ;
-(id)lastTimeConnectToACEDBForAccount:(id)arg1 ;
-(id)_fetchServerFromACEDB:(id)arg1 forIncomingServer:(char)arg2 ;
-(char)_shouldHealAccount:(id)arg1 withNewAccount:(id)arg2 ;
-(void)_promptUserToTryAlternateSettingsAccount:(id)arg1 newAccount:(id)arg2 withError:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)sanitizedErrorForError:(id)arg1 forAccount:(id)arg2 ;
-(char)shouldDisplayError:(id)arg1 forAccount:(id)arg2 mode:(int)arg3 ;
-(void)_promptUserForPasswordWithAccount:(id)arg1 error:(id)arg2 ;
-(void)_promptUserForWebLoginWithAccount:(id)arg1 error:(id)arg2 ;
-(void)_renewCredentialsForAccount:(id)arg1 error:(id)arg2 ;
-(void)_presentAlertWithSettingsButtonForAccount:(id)arg1 error:(id)arg2 ;
-(void)didDisplayError:(id)arg1 ;
-(void)_displayError:(id)arg1 forAccount:(id)arg2 mode:(int)arg3 ;
-(void)healAccount:(id)arg1 withError:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_getMailAccountFromDeliveryAccount:(id)arg1 ;
-(id)_alertTitleWithError:(id)arg1 ;
-(void)_overwriteAccount:(id)arg1 withAlternateAccount:(id)arg2 ;
-(void)_attemptHealOfAccount:(id)arg1 withAlternateAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)preferencesURLForAccount:(id)arg1 withError:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)_redirectToRecoveryURL:(id)arg1 ;
@end

