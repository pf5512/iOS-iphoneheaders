/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class UIView, SBAppStatusBarTransitionInfo;

@interface SBUIAnimationZoomUpApp : SBUIMainScreenAnimationController {

	UIView* _contextHostView;
	BOOL _zoomHostView;
	SBAppStatusBarTransitionInfo* _appStatusBarTransitionInfo;
	int _animationTransition;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	BOOL _animationFinished;
	BOOL _fromSwitcher;
	BOOL _fromNC;
	BOOL _fromCC;
	BOOL _fromAssistant;
	UIView* _viewToAnimate;

}

@property (assign,nonatomic) int animationTransition;              //@synthesize animationTransition=_animationTransition - In the implementation block
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithActivatingApp:(id)arg1 ;
-(double)animationDelay;
-(void)animateFakeStatusBarWithParameters:(id)arg1 ;
-(void)prepareZoom;
-(void)animateZoomWithCompletion:(/*^block*/ id)arg1 ;
-(void)cleanupZoom;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(BOOL)_animationShouldStart;
-(id)_animationProgressDependency;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_applicationDependencyStateChanged;
-(id)appStatusBarTransitionInfoWithStartStyleRequest:(id)arg1 startOrientation:(int)arg2 ;
-(void)_noteZoomDidFinish;
-(void)noteDependencyDidInvalidate;
-(BOOL)_shouldWaitForSiriDismissBeforeZooming;
-(int)animationTransition;
-(void)setAnimationTransition:(int)arg1 ;
-(void)dealloc;
-(double)animationDuration;
-(void)_startAnimation;
@end

