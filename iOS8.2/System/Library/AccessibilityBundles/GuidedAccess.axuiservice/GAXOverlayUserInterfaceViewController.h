/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXViewController.h>
#import <GuidedAccess/GAXOverlayUserInterfaceViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>

@protocol GAXOverlayUserInterfaceViewControllerDelegate;
@class NSMutableArray, NSString;

@interface GAXOverlayUserInterfaceViewController : GAXViewController <GAXOverlayUserInterfaceViewDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate> {

	char _hasOverlayUserInterface;
	id<GAXOverlayUserInterfaceViewControllerDelegate> _delegate;
	NSMutableArray* _presentedPopoverControllers;

}

@property (assign,nonatomic) id<GAXOverlayUserInterfaceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char hasOverlayUserInterface;                                            //@synthesize hasOverlayUserInterface=_hasOverlayUserInterface - In the implementation block
@property (nonatomic,retain) NSMutableArray * presentedPopoverControllers;                            //@synthesize presentedPopoverControllers=_presentedPopoverControllers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)releaseOutlets;
-(void)willPresentPopoverController:(id)arg1 ;
-(void)willPresentModalViewController;
-(void)didDismissPopoverController:(id)arg1 ;
-(NSMutableArray *)presentedPopoverControllers;
-(void)setPresentedPopoverControllers:(NSMutableArray *)arg1 ;
-(void)_checkPresenceOfOverlayUserInterface;
-(char)hasOverlayUserInterface;
-(char)_hasOverlayUserInterface;
-(void)setHasOverlayUserInterface:(char)arg1 ;
-(char)isModalContentBeingPresentedInOverlayUserInterfaceView:(id)arg1 ;
-(void)didDismissModalViewController;
-(void)dealloc;
-(void)setDelegate:(id<GAXOverlayUserInterfaceViewControllerDelegate>)arg1 ;
-(id<GAXOverlayUserInterfaceViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
@end
