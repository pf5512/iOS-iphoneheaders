/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MediaPlayerUI/MPUExtrasZoomingImageTransitionParticipant.h>

@protocol MPUExtrasSlideshowViewControllerDataSource;
@class MPUExtrasConstrainedArtworkContainerView, UIImage, NSTimer, NSString;

@interface MPUExtrasSlideshowViewController : UIViewController <MPUExtrasZoomingImageTransitionParticipant> {

	char _animatingTransition;
	char _viewVisible;
	id<MPUExtrasSlideshowViewControllerDataSource> _dataSource;
	unsigned _transitionStyle;
	unsigned _visibleImageIndex;
	MPUExtrasConstrainedArtworkContainerView* _disappearingImageContainerView;
	MPUExtrasConstrainedArtworkContainerView* _imageContainerView;
	UIImage* _nextImage;
	NSTimer* _transitionTimer;
	double _transitionInterval;

}

@property (assign,nonatomic,__weak) id<MPUExtrasSlideshowViewControllerDataSource> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned transitionStyle;                                                               //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (assign,nonatomic) double transitionInterval;                                                              //@synthesize transitionInterval=_transitionInterval - In the implementation block
@property (assign,nonatomic) unsigned visibleImageIndex;                                                             //@synthesize visibleImageIndex=_visibleImageIndex - In the implementation block
@property (assign,getter=isAnimatingTransition,nonatomic) char animatingTransition;                                  //@synthesize animatingTransition=_animatingTransition - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) char viewVisible;                                                  //@synthesize viewVisible=_viewVisible - In the implementation block
@property (nonatomic,retain) MPUExtrasConstrainedArtworkContainerView * disappearingImageContainerView;              //@synthesize disappearingImageContainerView=_disappearingImageContainerView - In the implementation block
@property (nonatomic,retain) MPUExtrasConstrainedArtworkContainerView * imageContainerView;                          //@synthesize imageContainerView=_imageContainerView - In the implementation block
@property (nonatomic,retain) UIImage * nextImage;                                                                    //@synthesize nextImage=_nextImage - In the implementation block
@property (nonatomic,retain) NSTimer * transitionTimer;                                                              //@synthesize transitionTimer=_transitionTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDataSource:(id<MPUExtrasSlideshowViewControllerDataSource>)arg1 ;
-(id<MPUExtrasSlideshowViewControllerDataSource>)dataSource;
-(unsigned)transitionStyle;
-(void)setTransitionStyle:(unsigned)arg1 ;
-(int)preferredStatusBarStyle;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(char)arg2 ;
-(void)setVisibleImageIndex:(unsigned)arg1 ;
-(unsigned)visibleImageIndex;
-(void)_invalidateTransitionTimer;
-(void)setViewVisible:(char)arg1 ;
-(void)_prepareNextImageAndScheduleTransitionTimerIfAppropriate;
-(void)_loadImageContainerViewIfAppropriateWithImage:(id)arg1 ;
-(void)_transitionDidComplete;
-(MPUExtrasConstrainedArtworkContainerView *)imageContainerView;
-(NSTimer *)transitionTimer;
-(void)setTransitionTimer:(NSTimer *)arg1 ;
-(double)transitionInterval;
-(void)_transitionTimerDidFire:(id)arg1 ;
-(void)_transitionToNextImageIfAppropriate;
-(void)setDisappearingImageContainerView:(MPUExtrasConstrainedArtworkContainerView *)arg1 ;
-(UIImage *)nextImage;
-(MPUExtrasConstrainedArtworkContainerView *)disappearingImageContainerView;
-(void)setAnimatingTransition:(char)arg1 ;
-(unsigned)_numberOfImages;
-(void)setImageContainerView:(MPUExtrasConstrainedArtworkContainerView *)arg1 ;
-(char)isViewVisible;
-(void)setNextImage:(UIImage *)arg1 ;
-(void)_scheduleTransitionTimer;
-(void)_performInstantaneousTransition;
-(void)_performDissolveTransition;
-(void)_performPushTransition;
-(void)_performWipeTransition;
-(void)setTransitionInterval:(double)arg1 ;
-(char)isAnimatingTransition;
-(void)_reload;
@end

