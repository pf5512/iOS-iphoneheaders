/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, MPUNowPlayingDelegate;
@class NSObject, NSDictionary, NSString, UIImage;

@interface MPUNowPlayingController : NSObject {

	NSObject<OS_dispatch_source>* _timeInformationTimer;
	NSDictionary* _currentNowPlayingInfo;
	double _currentElapsed;
	double _currentDuration;
	int _isPlaying;
	int _currentNowPlayingAppPID;
	int _nowPlayingPIDForCachedDisplayID;
	NSString* _cachedNowPlayingAppDisplayID;
	BOOL _isRegisteredForNowPlayingNotifications;
	BOOL _isUpdatingNowPlayingInfo;
	BOOL _isUpdatingPlaybackState;
	BOOL _isUpdatingNowPlayingApp;
	UIImage* _cachedNowPlayingArtwork;
	BOOL _cachedArtworkDirty;
	<MPUNowPlayingDelegate>* _delegate;
	double _timeInformationUpdateInterval;

}

@property (assign,nonatomic,__weak) <MPUNowPlayingDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentNowPlayingInfo; 
@property (nonatomic,readonly) UIImage * currentNowPlayingArtwork; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) NSString * nowPlayingAppDisplayID; 
@property (nonatomic,readonly) double currentElapsed;                                //@synthesize currentElapsed=_currentElapsed - In the implementation block
@property (nonatomic,readonly) double currentDuration; 
@property (assign,nonatomic) double timeInformationUpdateInterval;                   //@synthesize timeInformationUpdateInterval=_timeInformationUpdateInterval - In the implementation block
-(void)_unregisterForNotifications;
-(BOOL)isPlaying;
-(void)_registerForNotifications;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)update;
-(void)stopUpdating;
-(void)_updateCurrentNowPlaying;
-(id)currentNowPlayingInfo;
-(void)_updatePlaybackState;
-(void)_updateNowPlayingApp;
-(void)_updateTimeInformation;
-(void)_stopUpdatingTimeInformation;
-(void)_startUpdatingTimeInformation;
-(id)nowPlayingAppDisplayID;
-(id)currentNowPlayingArtwork;
-(double)currentDuration;
-(void)setTimeInformationUpdateInterval:(double)arg1 ;
-(double)currentElapsed;
-(double)timeInformationUpdateInterval;
-(void).cxx_destruct;
-(void)startUpdating;
@end

