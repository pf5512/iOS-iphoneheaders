/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <ZoomWindow/ZWZoomViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol ZWZoomLensViewControllerDelegate;
@class NSString, ZWLensZoomView, UIScrollView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface ZWZoomLensViewController : ZWZoomViewController <UIGestureRecognizerDelegate> {

	CGPoint _lastDragOffset;
	char _shouldNotifyDelegateOfDrag;
	double _lastTapTime;
	unsigned _prescrollTaps;
	char _userIsInteractingWithLens;
	char _userIsMovingLens;
	char _inStandbyMode;
	id<ZWZoomLensViewControllerDelegate> _delegate;
	float _zoomFactor;
	NSString* _lensEffect;
	ZWLensZoomView* _lensZoomView;
	UIScrollView* _dummyScrollView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSString* _screenshotActionHandlerIdentifier;
	CGPoint _zoomPanOffset;

}

@property (assign,nonatomic,__weak) id<ZWZoomLensViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic) float zoomFactor;                                                       //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) CGPoint zoomPanOffset;                                                  //@synthesize zoomPanOffset=_zoomPanOffset - In the implementation block
@property (nonatomic,retain) NSString * lensEffect;                                                  //@synthesize lensEffect=_lensEffect - In the implementation block
@property (assign,nonatomic) char userIsInteractingWithLens;                                         //@synthesize userIsInteractingWithLens=_userIsInteractingWithLens - In the implementation block
@property (assign,nonatomic) char userIsMovingLens;                                                  //@synthesize userIsMovingLens=_userIsMovingLens - In the implementation block
@property (nonatomic,retain) ZWLensZoomView * lensZoomView;                                          //@synthesize lensZoomView=_lensZoomView - In the implementation block
@property (assign,nonatomic) char inStandbyMode;                                                     //@synthesize inStandbyMode=_inStandbyMode - In the implementation block
@property (nonatomic,retain) UIScrollView * dummyScrollView;                                         //@synthesize dummyScrollView=_dummyScrollView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSString * screenshotActionHandlerIdentifier;                           //@synthesize screenshotActionHandlerIdentifier=_screenshotActionHandlerIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)offsetByPanningToPoint:(CGPoint)arg1 zoomFactor:(float)arg2 ;
-(UIScrollView *)dummyScrollView;
-(NSString *)lensEffect;
-(void)setLensEffect:(NSString *)arg1 ;
-(NSString *)screenshotActionHandlerIdentifier;
-(void)setScreenshotActionHandlerIdentifier:(NSString *)arg1 ;
-(char)inStandbyMode;
-(void)_applyInitialLayoutConstraints;
-(ZWLensZoomView *)lensZoomView;
-(void)updateLensEffect:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLensZoomView:(ZWLensZoomView *)arg1 ;
-(void)setDummyScrollView:(UIScrollView *)arg1 ;
-(CGSize)dummyScrollViewContentSize;
-(CGPoint)dummyScrollViewDefaultOffset;
-(void)updateZoomFactor:(float)arg1 panOffset:(CGPoint)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(char)_shouldRoundLensCorners;
-(void)setInStandbyMode:(char)arg1 ;
-(char)_shouldDisableLensEffectsForStandbyMode;
-(void)_updateLensChromeVisibility:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(CGPoint)validPanOffsetForProposedOffset:(CGPoint)arg1 proposedZoomFactor:(float)arg2 ;
-(CGPoint)offsetByPanningToRect:(CGRect)arg1 zoomFactor:(float)arg2 ;
-(CGPoint)maximumPanOffsetWithZoomFactor:(float)arg1 ;
-(void)setUserIsInteractingWithLens:(char)arg1 ;
-(void)setUserIsMovingLens:(char)arg1 ;
-(CGPoint)dummyScrollViewOffsetForSlug;
-(CGPoint)_lensDragMultiplier;
-(void)updateLensChromeAnimated:(char)arg1 ;
-(id)dummyScrollViewPanGestureRecognizer;
-(id)zoomRootview:(id)arg1 viewForHitTestAtPoint:(CGPoint)arg2 ;
-(id)initWithZoomFactor:(float)arg1 zoomPanOffset:(CGPoint)arg2 lensEffect:(id)arg3 ;
-(char)userIsInteractingWithLens;
-(void)updateStandbyMode:(char)arg1 zoomFactor:(float)arg2 panOffset:(CGPoint)arg3 lensEffect:(id)arg4 animated:(char)arg5 completion:(/*^block*/id)arg6 ;
-(char)shouldPanZoomContentForAxis:(int)arg1 delta:(CGPoint)arg2 edgeMask:(unsigned)arg3 ;
-(CGPoint)offsetByPanningWithDelta:(CGPoint)arg1 axis:(int)arg2 zoomFactor:(float)arg3 ;
-(char)userIsMovingLens;
-(void)_handleLongPress:(id)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)setZoomFactor:(float)arg1 ;
-(float)zoomFactor;
-(void)dealloc;
-(void)setDelegate:(id<ZWZoomLensViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(char)scrollViewShouldScrollToTop:(id)arg1 ;
-(id<ZWZoomLensViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSString *)identifier;
-(void)loadView;
-(void)viewDidLoad;
-(CGPoint)zoomPanOffset;
-(void)setZoomPanOffset:(CGPoint)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
@end
