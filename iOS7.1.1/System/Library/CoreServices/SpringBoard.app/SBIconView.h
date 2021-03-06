/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UISettingsKeyObserver.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBReusableView.h>

@protocol SBIconAccessoryView, SBIconViewDelegate, SBIconViewObserver;
@class SBIcon, UIView, SBIconImageView, SBIconImageCrossfadeView, SBCloseBoxView, SBFParallaxSettings, SBIconLabelView, SBFolderIconBackgroundView, NSTimer, _UILegibilitySettings;

@interface SBIconView : UIView <_UISettingsKeyObserver, SBIconObserver, SBReusableView> {

	SBIcon* _icon;
	int _iconLocation;
	UIView* _currentImageView;
	SBIconImageView* _iconImageView;
	SBIconImageCrossfadeView* _crossfadeView;
	UIView<SBIconAccessoryView>* _accessoryView;
	SBCloseBoxView* _closeBox;
	SBFParallaxSettings* _closeBoxParallaxSettings;
	CGPoint _wallpaperRelativeCloseBoxCenter;
	SBIconLabelView* _labelView;
	UIView* _updatedMark;
	SBFolderIconBackgroundView* _dropGlow;
	unsigned _drawsLabel : 1;
	unsigned _isEditing : 1;
	unsigned _isPaused : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _launchDisabled : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _hideLabel : 1;
	unsigned _hideUpdatedMark;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer* _longPressTimer;
	CGRect _visibleImageRect;
	<SBIconViewDelegate>* _delegate;
	<SBIconViewObserver>* _observer;
	_UILegibilitySettings* _legibilitySettings;
	float _iconImageAlpha;
	float _iconAccessoryAlpha;
	float _iconLabelAlpha;
	CGPoint _wallpaperRelativeImageCenter;

}

@property (nonatomic,retain) SBIcon * icon; 
@property (assign,nonatomic) <SBIconViewDelegate> * delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) <SBIconViewObserver> * observer;                         //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) int location;                                            //@synthesize iconLocation=_iconLocation - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) float iconImageAlpha;                                    //@synthesize iconImageAlpha=_iconImageAlpha - In the implementation block
@property (assign,nonatomic) float iconAccessoryAlpha;                                //@synthesize iconAccessoryAlpha=_iconAccessoryAlpha - In the implementation block
@property (assign,nonatomic) float iconLabelAlpha;                                    //@synthesize iconLabelAlpha=_iconLabelAlpha - In the implementation block
@property (assign,nonatomic) BOOL isEditing; 
@property (assign,nonatomic) CGPoint wallpaperRelativeImageCenter;                    //@synthesize wallpaperRelativeImageCenter=_wallpaperRelativeImageCenter - In the implementation block
+(CGSize)defaultIconImageSize;
+(CGSize)defaultIconSize;
+(int)_defaultIconFormat;
+(CGPoint)defaultIconImageCenter;
+(BOOL)canShowUpdatedMark;
+(CGRect)_rectForLayoutMetric:(int)arg1 ;
+(float)_labelHeight;
+(float)updatedMarkRightMargin;
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimation;
+(CGSize)defaultVisibleIconImageSize;
+(CGSize)maxLabelSize;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)removeAllIconAnimations;
-(BOOL)isTouchDownInIcon;
-(void)setWallpaperRelativeImageCenter:(CGPoint)arg1 ;
-(CGPoint)iconImageCenter;
-(BOOL)canReceiveGrabbedIcon:(id)arg1 ;
-(void)setIsEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAllowJitter:(BOOL)arg1 ;
-(void)setIconPosition:(CGPoint)arg1 ;
-(void)setIsGrabbed:(BOOL)arg1 ;
-(void)setIsOverlapping:(BOOL)arg1 ;
-(void)prepareDropGlow;
-(void)showDropGlow:(BOOL)arg1 ;
-(void)removeDropGlow;
-(id)dropGlow;
-(BOOL)isGrabbed;
-(CGSize)iconImageVisibleSize;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)iconLaunchEnabledDidChange:(id)arg1 ;
-(id)iconImageSnapshot;
-(CGRect)iconImageFrame;
-(float)iconImageAlpha;
-(void)setIconImageAndAccessoryAlpha:(float)arg1 ;
-(void)setIconLabelAlpha:(float)arg1 ;
-(void)setRefusesRecipientStatus:(BOOL)arg1 ;
-(BOOL)isInDock;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1 ;
-(void)cancelLongPressTimer;
-(void)_updateJitter;
-(void)_updateIconImageViewAnimated:(BOOL)arg1 ;
-(void)_updateUpdatedMark;
-(void)_updateProgressAnimated:(BOOL)arg1 ;
-(void)_updateAccessoryViewWithAnimation:(BOOL)arg1 ;
-(void)_setIcon:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIconImageAlpha:(float)arg1 ;
-(void)setIconAccessoryAlpha:(float)arg1 ;
-(void)_applyIconImageAlpha:(float)arg1 ;
-(void)_applyIconAccessoryAlpha:(float)arg1 ;
-(void)_applyIconLabelAlpha:(float)arg1 ;
-(CGRect)_frameForImageView;
-(CGRect)_frameForLabel;
-(CGRect)_frameForUpdatedMarkWithLabelFrame:(CGRect)arg1 ;
-(CGRect)_frameForAccessoryView;
-(CGPoint)_centerForCloseBox;
-(float)_labelVerticalOffset;
-(CGPoint)_centerForCloseBoxRelativeToVisibleImageFrame:(CGRect)arg1 ;
-(void)_updateAdaptiveColors;
-(id)_labelImageParameters;
-(id)_legibilitySettingsWithParameters:(id)arg1 ;
-(id)_legibilitySettingsWithStyle:(int)arg1 primaryColor:(id)arg2 ;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg1 ;
-(void)_createAccessoryViewIfNecessary;
-(void)_updateBrightness;
-(void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(BOOL)arg2 trueCrossfade:(BOOL)arg3 anchorPoint:(CGPoint)arg4 ;
-(void)cleanupAfterImageCrossfade;
-(void)setImageCrossfadeFadeFraction:(float)arg1 ;
-(void)setImageCrossfadeMorphFraction:(float)arg1 totalScale:(float)arg2 ;
-(void)_delegateTouchEnded:(BOOL)arg1 ;
-(double)grabDurationForEvent:(id)arg1 ;
-(void)longPressTimerFired;
-(CGPoint)wallpaperRelativeImageCenter;
-(BOOL)_delegateTapAllowed;
-(BOOL)allowsTapWhileEditing;
-(void)_applyEditingStateAnimated:(BOOL)arg1 ;
-(BOOL)_isShowingCloseBox;
-(void)_closeBoxTapped;
-(void)setShouldRasterizeImageView:(BOOL)arg1 ;
-(void)swapInIcon:(id)arg1 ;
-(void)setLabelHidden:(BOOL)arg1 ;
-(void)setUpdatedMarkHidden:(BOOL)arg1 ;
-(CGRect)_frameForVisibleImage;
-(void)invalidateLabelLayoutGeometry;
-(void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned)arg1 ;
-(void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(BOOL)arg2 trueCrossfade:(BOOL)arg3 ;
-(void)setTouchDownInIcon:(BOOL)arg1 ;
-(UIEdgeInsets)snapshotEdgeInsets;
-(float)iconAccessoryAlpha;
-(float)iconLabelAlpha;
-(void)_updateCloseBoxAnimated:(BOOL)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_automationID;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)tintColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)_updateLabel;
-(BOOL)isEditing;
-(void)prepareForReuse;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setIcon:(id)arg1 ;
-(id)initWithDefaultSize;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(int)location;
-(id)_labelImage;
-(void)setLegibilitySettings:(id)arg1 ;
-(id)legibilitySettings;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(void)_recursivelyUpdateBackdropMaskFrames;
-(id)_iconImageView;
-(id)icon;
-(void)setLocation:(int)arg1 ;
@end

