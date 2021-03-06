/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <WebCore/AVVideoLayer.h>

@class CALayer;

@interface WebAVVideoLayer : CALayer <AVVideoLayer> {

	RetainPtr<WebAVPlayerController>* _avPlayerController;
	RetainPtr<AVPlayerViewController>* _avPlayerViewController;
	RetainPtr<CALayer>* _videoSublayer;
	long long _videoLayerGravity;
	BOOL _readyForDisplay;
	CGRect _videoRect;

}

@property (assign,nonatomic) long long videoLayerGravity; 
@property (assign,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;              //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (assign,nonatomic) CGRect videoRect;                                           //@synthesize videoRect=_videoRect - In the implementation block
@property (nonatomic,retain) CALayer * videoSublayer; 
+(id)videoLayer;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)videoRect;
-(void)setVideoLayerGravity:(long long)arg1 ;
-(void)setPlayerController:(id)arg1 ;
-(long long)videoLayerGravity;
-(BOOL)isReadyForDisplay;
-(void)setPlayerViewController:(id)arg1 ;
-(void)setVideoSublayer:(CALayer *)arg1 ;
-(CALayer *)videoSublayer;
-(void)setReadyForDisplay:(BOOL)arg1 ;
-(void)setVideoRect:(CGRect)arg1 ;
@end

