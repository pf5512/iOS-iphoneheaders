/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:59 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class UIPrintingProgress, UIPrintingMessageView, UINavigationController, UIWindow;

@interface UIPrintingProgressViewController : UITableViewController {

	UIPrintingProgress* _printingProgress;
	UIPrintingMessageView* _messageView;
	UINavigationController* _navController;
	UIWindow* _window;
	double _rotationDelay;

}
-(void)show;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setMessage:(id)arg1 ;
-(char)visible;
-(void)dismissAnimated:(char)arg1 ;
-(void)setDonePrinting:(char)arg1 ;
-(void)doneProgress;
-(void)cancelProgress;
-(void)cleanupAfterDismiss;
-(id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3 ;
-(double)rotationDelay;
@end
