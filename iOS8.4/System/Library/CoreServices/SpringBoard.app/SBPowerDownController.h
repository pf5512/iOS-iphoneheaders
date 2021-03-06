/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>
#import <SpringBoard/SBPowerDownViewDelegate.h>

@protocol SBPowerDownViewInterface;
@class SBAlertView;

@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate> {

	id _delegate;
	SBAlertView*<SBPowerDownViewInterface> _powerDownView;
	/*^block*/id _orderOutCompletion;
	BOOL _wasStatusBarHiddenAtActivation;

}

@property (assign,nonatomic) id<SBPowerDownControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id orderOutCompletion;                                     //@synthesize orderOutCompletion=_orderOutCompletion - In the implementation block
@property (assign,nonatomic) BOOL wasStatusBarHiddenAtActivation;                     //@synthesize wasStatusBarHiddenAtActivation=_wasStatusBarHiddenAtActivation - In the implementation block
-(void)orderFront;
-(void)powerDown;
-(void)orderOutWithCompletion:(/*^block*/id)arg1 ;
-(double)autoLockTime;
-(BOOL)managesOwnStatusBarAtActivation;
-(BOOL)showsSpringBoardStatusBar;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(void)_lockedOnTop;
-(void)setOrderOutCompletion:(id)arg1 ;
-(void)setWasStatusBarHiddenAtActivation:(BOOL)arg1 ;
-(void)_restoreIconListIfNecessary;
-(BOOL)wasStatusBarHiddenAtActivation;
-(void)powerDownViewRequestCancel:(id)arg1 ;
-(void)powerDownViewRequestPowerDown:(id)arg1 ;
-(BOOL)powerDownViewShouldShowStatusBarWhenAnimatingOut:(id)arg1 ;
-(void)powerDownViewAnimateOutCompleted:(id)arg1 ;
-(id)orderOutCompletion;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<SBPowerDownControllerDelegate>)arg1 ;
-(id)init;
-(id<SBPowerDownControllerDelegate>)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)activate;
-(BOOL)hasTranslucentBackground;
@end

