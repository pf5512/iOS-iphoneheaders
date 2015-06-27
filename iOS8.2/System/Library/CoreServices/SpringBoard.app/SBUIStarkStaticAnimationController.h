/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class UIView, SBApplication;

@interface SBUIStarkStaticAnimationController : SBUIStarkScreenAnimationController {

	char _relaunchExpected;
	char _awaitingKeybagRefetch;
	char _appWasActivating;
	UIView* _staticAppView;
	UIView* _hostView;

}

@property (nonatomic,retain,readonly) SBApplication * app; 
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_setupStartDependencies;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(char)_shouldDismissBanner;
-(char)_willAnimate;
-(void)_hideAppHostView;
-(id)initWithApp:(id)arg1 starkScreenController:(id)arg2 ;
-(void)_startAnimation;
-(void)dealloc;
-(SBApplication *)app;
@end
