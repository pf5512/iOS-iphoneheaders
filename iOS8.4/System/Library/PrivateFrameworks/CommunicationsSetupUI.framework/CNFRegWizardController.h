/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <Preferences/PSSetupController.h>
#import <CommunicationsSetupUI/CNFRegFirstRunDelegate.h>

@protocol CNFRegWizardControllerDelegate;
@class CNFRegController, _UIBackdropView, NSString;

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate> {

	CNFRegController* _regController;
	long long _serviceType;
	/*^block*/id _alertHandler;
	id<CNFRegWizardControllerDelegate> _firstRunDelegate;
	id _resignListener;
	id _resumeListener;
	struct {
		unsigned automaticKeyboardWasDisabled : 1;
		unsigned shouldListenForSuspension : 1;
		unsigned canStartNested : 1;
		unsigned canShowSplashScreen : 1;
		unsigned canShowDisabledScreen : 1;
		unsigned hideLearnMoreButton : 1;
		unsigned showSplashOnSignin : 1;
		unsigned skipReloadOnNextViewWillAppear : 1;
		unsigned allowCancel : 1;
		unsigned allowSMS : 1;
		unsigned shouldTerminateInBackground : 1;
	}  _wizardFlags;
	_UIBackdropView* _backdropView;

}

@property (assign,nonatomic) id<CNFRegWizardControllerDelegate> firstRunDelegate;              //@synthesize firstRunDelegate=_firstRunDelegate - In the implementation block
@property (assign,nonatomic) BOOL canStartNested; 
@property (assign,nonatomic) BOOL canShowSplashScreen; 
@property (assign,nonatomic) BOOL canShowDisabledScreen; 
@property (assign,nonatomic) BOOL allowCancel; 
@property (assign,nonatomic) BOOL allowSMS; 
@property (assign,nonatomic) BOOL hideLearnMoreButton; 
@property (assign,nonatomic) BOOL showSplashOnSignin; 
@property (nonatomic,retain) _UIBackdropView * backdropView;                                   //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) CNFRegController * regController;                                 //@synthesize regController=_regController - In the implementation block
@property (nonatomic,copy) id alertHandler;                                                    //@synthesize alertHandler=_alertHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldListenForSuspension; 
@property (assign,nonatomic) BOOL shouldTerminateInBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setGlobalAppearanceStyle:(long long)arg1 ;
+(void)setSupportsAutoRotation:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)applicationWillSuspend;
-(void)_applicationDidEnterBackground;
-(void)applicationDidResume;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerWithTransition:(int)arg1 ;
-(void)pushViewController:(id)arg1 transition:(int)arg2 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setupController;
-(void)setAlertHandler:(id)arg1 ;
-(id)alertHandler;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(void)setCanStartNested:(BOOL)arg1 ;
-(void)setCanShowSplashScreen:(BOOL)arg1 ;
-(void)setHideLearnMoreButton:(BOOL)arg1 ;
-(void)setCanShowDisabledScreen:(BOOL)arg1 ;
-(void)setShouldListenForSuspension:(BOOL)arg1 ;
-(void)setAllowCancel:(BOOL)arg1 ;
-(void)setFirstRunDelegate:(id<CNFRegWizardControllerDelegate>)arg1 ;
-(void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2 ;
-(void)_restrictionsChanged;
-(void)_applicationDidFinishLaunching;
-(id)initWithServiceTypes:(long long)arg1 ;
-(void)_stopListeningForResignResume;
-(BOOL)shouldShowFirstRunController;
-(BOOL)shouldTerminateInBackground;
-(void)setShouldTerminateInBackground:(BOOL)arg1 ;
-(int)_firstRunState:(id)arg1 ;
-(BOOL)canShowSplashScreen;
-(BOOL)canShowDisabledScreen;
-(id)controllerClassesToShow:(BOOL)arg1 ;
-(void)_doCancel;
-(id)controllersToShow:(BOOL)arg1 ;
-(void)_updateNavigationBarTitle;
-(void)_updateNavigationBarHiddenForCurrentState;
-(void)_updateNavigationBarHiddenForPop;
-(void)_updateNavigationBarHiddenForPush;
-(void)_startListeningForResignResume;
-(void)_checkRestrictions;
-(void)dismissFinished:(BOOL)arg1 ;
-(void)dismissWithState:(unsigned long long)arg1 ;
-(id)controllersToShow;
-(BOOL)canStartNested;
-(BOOL)skipReloadOnNextViewWillAppear;
-(void)setSkipReloadOnNextViewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldListenForSuspension;
-(BOOL)allowCancel;
-(BOOL)allowSMS;
-(void)setAllowSMS:(BOOL)arg1 ;
-(BOOL)hideLearnMoreButton;
-(BOOL)showSplashOnSignin;
-(void)setShowSplashOnSignin:(BOOL)arg1 ;
-(id<CNFRegWizardControllerDelegate>)firstRunDelegate;
@end

