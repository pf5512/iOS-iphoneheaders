/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <AccessibilitySettings/ASTGestureRecorderViewControllerDelegate.h>
#import <AccessibilitySettings/ASTGestureRecorderControlsViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class ASTGestureRecorderStyleProvider, ASTGestureRecorderViewController, ASTGestureRecorderControlsView, UILabel, UIBarButtonItem, UIAlertView;

@interface ASTGestureRecorderMainViewController : PSViewController <ASTGestureRecorderViewControllerDelegate, ASTGestureRecorderControlsViewDelegate, UITextFieldDelegate> {

	bool _inReplayMode;
	ASTGestureRecorderStyleProvider* _styleProvider;
	ASTGestureRecorderViewController* _gestureRecorderViewController;
	ASTGestureRecorderControlsView* _controlsView;
	UILabel* _instructionsLabel;
	UIBarButtonItem* _saveButton;
	UIAlertView* _saveAlertView;
	unsigned long long _leftButtonIdentifier;
	unsigned long long _rightButtonIdentifier;
	double _gestureRecordingDidStartTimeInterval;
	SEL _customGesturesGetter;
	SEL _customGesturesSetter;

}

@property (assign,nonatomic) SEL customGesturesGetter;                                                      //@synthesize customGesturesGetter=_customGesturesGetter - In the implementation block
@property (assign,nonatomic) SEL customGesturesSetter;                                                      //@synthesize customGesturesSetter=_customGesturesSetter - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderStyleProvider * styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderViewController * gestureRecorderViewController;              //@synthesize gestureRecorderViewController=_gestureRecorderViewController - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderControlsView * controlsView;                                 //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLabel;                                                   //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                                  //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIAlertView * saveAlertView;                                                   //@synthesize saveAlertView=_saveAlertView - In the implementation block
@property (assign,nonatomic) unsigned long long leftButtonIdentifier;                                       //@synthesize leftButtonIdentifier=_leftButtonIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long rightButtonIdentifier;                                      //@synthesize rightButtonIdentifier=_rightButtonIdentifier - In the implementation block
@property (assign,nonatomic) double gestureRecordingDidStartTimeInterval;                                   //@synthesize gestureRecordingDidStartTimeInterval=_gestureRecordingDidStartTimeInterval - In the implementation block
@property (assign,getter=isInReplayMode,nonatomic) bool inReplayMode;                                       //@synthesize inReplayMode=_inReplayMode - In the implementation block
-(void)setInstructionsLabel:(id)arg1 ;
-(id)instructionsLabel;
-(void)_enterWaitingMode;
-(void)setSaveAlertView:(id)arg1 ;
-(void)setControlsView:(id)arg1 ;
-(void)_manageDisplayLinkManager:(bool)arg1 ;
-(unsigned long long)leftButtonIdentifier;
-(void)setRightButtonIdentifier:(unsigned long long)arg1 ;
-(SEL)customGesturesGetter;
-(void)setCustomGesturesSetter:(SEL)arg1 ;
-(unsigned long long)rightButtonIdentifier;
-(void)_updateProgressView:(id)arg1 ;
-(void)_saveWithMessage:(id)arg1 ;
-(void)_enterReplayMode;
-(id)gestureRecorderViewController;
-(void)setInReplayMode:(bool)arg1 ;
-(SEL)customGesturesSetter;
-(void)setCustomGesturesGetter:(SEL)arg1 ;
-(void)_updateFingerView:(id)arg1 ;
-(void)_didSaveGestureWithName:(id)arg1 ;
-(void)setLeftButtonIdentifier:(unsigned long long)arg1 ;
-(void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1 ;
-(void)gestureRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2 ;
-(double)gestureRecordingDidStartTimeInterval;
-(void)setGestureRecordingDidStartTimeInterval:(double)arg1 ;
-(bool)_canSaveGestureWithName:(id)arg1 ;
-(double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1 ;
-(void)gestureRecorderViewControllerDidStartRecordingAtomicFingerPath:(id)arg1 ;
-(void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1 ;
-(id)saveAlertView;
-(bool)isInReplayMode;
-(id)saveButton;
-(void)setGestureRecorderViewController:(id)arg1 ;
-(void)_setLeftButtonIdentifier:(unsigned long long)arg1 enabled:(bool)arg2 rightButtonIdentifier:(unsigned long long)arg3 enabled:(bool)arg4 animate:(bool)arg5 completion:(/*^block*/ id)arg6 ;
-(void)_releaseOutlets;
-(void)_getButtonPropertiesForIdentifier:(unsigned long long)arg1 enabled:(bool)arg2 color:(int*)arg3 title:(id*)arg4 icon:(id*)arg5 ;
-(void)setSaveButton:(id)arg1 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(bool)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)_commonInit;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_hide;
-(void)_reset;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_saveButtonTapped:(id)arg1 ;
-(id)controlsView;
@end

