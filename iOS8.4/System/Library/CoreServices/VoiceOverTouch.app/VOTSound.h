/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class VOTOutputAction, NSString, AXAccessQueue;

@interface VOTSound : NSObject {

	VOTOutputAction* _action;
	OpaqueAudioFileIDRef _audioFileID;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned _soundID;
	id _delegate;
	id _owner;
	/*^block*/id _completionBlock;
	BOOL _soundCompletionInstalled;
	NSString* _soundPath;
	BOOL _isPlaying;
	AXAccessQueue* _soundAccessQueue;

}

@property (nonatomic,copy) id completionBlock;                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) BOOL isPlaying;                                //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic) AXAccessQueue * soundAccessQueue;              //@synthesize soundAccessQueue=_soundAccessQueue - In the implementation block
-(id)initWithSoundPath:(id)arg1 ;
-(id)soundPath;
-(void)_finishedPlaying;
-(void)setIsPlaying:(BOOL)arg1 ;
-(AXAccessQueue *)soundAccessQueue;
-(void)setSoundAccessQueue:(AXAccessQueue *)arg1 ;
-(void)play;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)action;
-(void)stop;
-(void)setAction:(id)arg1 ;
-(id)owner;
-(void)setVolume:(float)arg1 ;
-(void)setOwner:(id)arg1 ;
-(BOOL)isPlaying;
@end

