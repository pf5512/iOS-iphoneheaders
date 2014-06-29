/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:22 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, AXAccessQueue, AXSpeechManager;

@interface AXOutputManager : NSObject {

	BOOL _speechEnabled;
	BOOL _soundEffectsEnabled;
	BOOL _audioSessionActive;
	NSMutableDictionary* _registeredSoundIDs;
	AXAccessQueue* _outputAccessQueue;
	AXSpeechManager* _speechManager;

}

@property (nonatomic,readonly) BOOL scanningInterruptsSpeech; 
@property (assign,getter=isAudioSessionActive,nonatomic) BOOL audioSessionActive;                 //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (assign,getter=areSoundEffectsEnabled,nonatomic) BOOL soundEffectsEnabled;              //@synthesize soundEffectsEnabled=_soundEffectsEnabled - In the implementation block
@property (assign,getter=isSpeechEnabled,nonatomic) BOOL speechEnabled;                           //@synthesize speechEnabled=_speechEnabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredSoundIDs;                            //@synthesize registeredSoundIDs=_registeredSoundIDs - In the implementation block
@property (nonatomic,retain) AXAccessQueue * outputAccessQueue;                                   //@synthesize outputAccessQueue=_outputAccessQueue - In the implementation block
@property (nonatomic,retain) AXSpeechManager * speechManager;                                     //@synthesize speechManager=_speechManager - In the implementation block
-(void)_setAudioSessionProperties:(id)arg1 ;
-(void)_flushSoundIDs;
-(void)setRegisteredSoundIDs:(id)arg1 ;
-(void)setOutputAccessQueue:(id)arg1 ;
-(void)setSpeechManager:(id)arg1 ;
-(BOOL)areSoundEffectsEnabled;
-(id)outputAccessQueue;
-(id)registeredSoundIDs;
-(void)_playSoundWithSoundID:(unsigned long)arg1 ;
-(id)_urlForSoundEffect:(int)arg1 ;
-(id)_voiceOverBundle;
-(void)setAudioSessionActive:(BOOL)arg1 ;
-(void)playSound:(int)arg1 ;
-(BOOL)isSpeechEnabled;
-(void)setSoundEffectsEnabled:(BOOL)arg1 ;
-(BOOL)isAudioSessionActive;
-(BOOL)scanningInterruptsSpeech;
-(void)outputScannerFocusContext:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)speechManager;
-(void)dealloc;
-(id)init;
-(void)cancelSpeech;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(void)dispatchSpeechAction:(id)arg1 ;
@end
