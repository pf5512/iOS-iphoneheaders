/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol PKAddPassesViewControllerDelegate;
@class NSDate, NSArray, NSURL, _UIAsyncInvocation, PKRemoteAddPassesViewController;

@interface PKAddPassesViewController : UIViewController {

	BOOL _viewHasAppeared;
	NSDate* _perfTestingForIngestion;
	BOOL _allowsPassIngestion;
	BOOL _succeeded;
	NSArray* _passes;
	NSURL* _URL;
	_UIAsyncInvocation* _cancelViewServiceRequest;
	PKRemoteAddPassesViewController* _remoteViewController;
	int _previousStatusBarStyle;
	<PKAddPassesViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <PKAddPassesViewControllerDelegate> * delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelViewServiceRequest;                       //@synthesize cancelViewServiceRequest=_cancelViewServiceRequest - In the implementation block
@property (nonatomic,retain) PKRemoteAddPassesViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSArray * passes;                                                    //@synthesize passes=_passes - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                         //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) int previousStatusBarStyle;                                          //@synthesize previousStatusBarStyle=_previousStatusBarStyle - In the implementation block
+(BOOL)isAvailable;
-(void)setAllowsPassIngestion:(BOOL)arg1 ;
-(void)ingestionDidFinishWithResult:(int)arg1 ;
-(void)setCancelViewServiceRequest:(id)arg1 ;
-(void)setPasses:(id)arg1 ;
-(id)initWithPasses:(id)arg1 ;
-(void)setPreviousStatusBarStyle:(int)arg1 ;
-(int)previousStatusBarStyle;
-(id)cancelViewServiceRequest;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)wantsFullScreenLayout;
-(int)modalPresentationStyle;
-(void)_transitionDidStop:(id)arg1 finished:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(int)modalTransitionStyle;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setRemoteViewController:(id)arg1 ;
-(id)remoteViewController;
-(id)initWithPass:(id)arg1 ;
-(BOOL)succeeded;
-(id)passes;
@end

