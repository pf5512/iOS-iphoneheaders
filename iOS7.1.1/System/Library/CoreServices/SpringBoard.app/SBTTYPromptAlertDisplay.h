/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>
#import <UIKit/UIActionSheetDelegatePrivate.h>

@class UIView, UIActionSheet, TPLCDView, UIImage;

@interface SBTTYPromptAlertDisplay : SBAlertView <UIActionSheetDelegatePrivate> {

	UIView* _containerView;
	UIActionSheet* _voiceAndTTYSheet;
	TPLCDView* _promptView;
	BOOL _didAnimateIn;
	UIImage* _calleeImage;
	BOOL _imageSetupDone;

}
-(void)layoutForInterfaceOrientation:(int)arg1 ;
-(void)startAnimatingIn;
-(void)_makeCall;
-(void)computeImageInformation;
-(float)_lcdYOffset;
-(void)_chooseVoiceMode;
-(void)_chooseTTYMode;
-(void)_ignore;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)dismiss;
-(BOOL)_actionSheet:(id)arg1 shouldDismissForButtonAtIndex:(int)arg2 ;
-(id)thumbnailImage;
-(BOOL)isSupportedInterfaceOrientation:(int)arg1 ;
@end

