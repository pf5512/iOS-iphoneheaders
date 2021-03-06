/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIViewController.h>

@class NSArray, IKImageElement, MPUArtworkView, NSTimer, UIImageView;

@interface MPUExtrasBackgroundViewController : UIViewController {

	NSArray* _backgroundElements;
	IKImageElement* _displayedImageElement;
	NSArray* _imageConstraints;
	MPUArtworkView* _imageView;
	NSTimer* _updateTimer;
	UIImageView* _vignetteView;
	unsigned _vignetteType;

}

@property (nonatomic,readonly) NSArray * backgroundElements;              //@synthesize backgroundElements=_backgroundElements - In the implementation block
@property (assign,nonatomic) unsigned vignetteType;                       //@synthesize vignetteType=_vignetteType - In the implementation block
+(id)vignetteImageForType:(unsigned)arg1 ;
-(void)_invalidateTimer;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setVignetteType:(unsigned)arg1 ;
-(unsigned)vignetteType;
-(id)initWithBackgroundElements:(id)arg1 ;
-(void)_updateImage;
-(void)_scheduleTimerIfNeeded;
-(void)_didReceiveImage:(id)arg1 ;
-(void)_updateConstraintsForImageSize:(CGSize)arg1 position:(unsigned)arg2 ;
-(id)initWithBackgroundElement:(id)arg1 ;
-(NSArray *)backgroundElements;
@end

