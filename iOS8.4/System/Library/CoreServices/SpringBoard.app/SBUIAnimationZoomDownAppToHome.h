/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomDownApp.h>

@class SBIconAnimator;

@interface SBUIAnimationZoomDownAppToHome : SBUIAnimationZoomDownApp {

	SBIconAnimator* _iconAnimator;

}
-(void)prepareZoom;
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanupZoom;
-(BOOL)_shouldUpdateStatusBarOnContentRestore;
-(void)dealloc;
@end
