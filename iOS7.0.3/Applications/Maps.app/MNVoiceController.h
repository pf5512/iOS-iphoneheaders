/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/VSSpeechSynthesizerDelegate.h>
#import <AirPlayReceiver/AVAudioPlayerDelegate.h>

@protocol VSSpeechSynthesizerDelegate;
@class NSString, NSDictionary, AVAudioPlayer, VSSpeechSynthesizer;

@interface MNVoiceController : NSObject <VSSpeechSynthesizerDelegate, AVAudioPlayerDelegate> {

	NSString* _currentLanguage;
	BOOL _spokenLanguageIsUILanguage;
	NSDictionary* _localizableStrings;
	NSString* _languageLocale;
	NSString* _uiLanguage;
	BOOL _isObservingAudioNotifications;
	BOOL _isPersistentConnectionOpen;
	int _audioSessionType;
	AVAudioPlayer* _leftTurnAudioPlayer;
	AVAudioPlayer* _rightTurnAudioPlayer;
	BOOL _speechMuted;
	BOOL _audioSessionWasBegun;
	/*^block*/ id _completionBlock;
	<VSSpeechSynthesizerDelegate>* delegate;
	VSSpeechSynthesizer* synthesizer;
	NSString* queuedSpeech;

}

@property (nonatomic,readonly) NSString * defaultVoiceLanguage; 
@property (nonatomic,retain) NSString * currentVoiceLanguage;                       //@synthesize currentLanguage=_currentLanguage - In the implementation block
@property (assign,nonatomic) int audioSessionType;                                  //@synthesize audioSessionType=_audioSessionType - In the implementation block
@property (assign,nonatomic) <VSSpeechSynthesizerDelegate> * delegate; 
@property (nonatomic,retain) VSSpeechSynthesizer * synthesizer; 
@property (nonatomic,copy) NSString * queuedSpeech; 
@property (assign,nonatomic) BOOL speechMuted;                                      //@synthesize speechMuted=_speechMuted - In the implementation block
@property (nonatomic,copy) id completionBlock;                                      //@synthesize completionBlock=_completionBlock - In the implementation block
+(void)setVolumeFromDefaults;
+(id)sharedInstance;
+(id)localizedStringForKey:(const char*)arg1 ;
-(id)currentVoiceLanguage;
-(void)speak:(id)arg1 shortPromptType:(int)arg2 ;
-(id)defaultVoiceLanguage;
-(BOOL)_headphonesAreInUse;
-(id)_uiLanguage;
-(id)_vsPreferencesSpokenLanguageIdentifier;
-(void)_setGender;
-(void)_setRate;
-(void)setCurrentVoiceLanguage:(id)arg1 ;
-(id)_localizedStringForKey:(const char*)arg1 ;
-(void)setSpeechMuted:(BOOL)arg1 ;
-(id)synthesizer;
-(void)_setAudioSessionProperties;
-(void)_setVolumeFromDefaults;
-(void)setSynthesizer:(id)arg1 ;
-(void)endAudioSession;
-(void)setQueuedSpeech:(id)arg1 ;
-(BOOL)speechMuted;
-(void)_setAudioSessionActive:(BOOL)arg1 ;
-(void)speak:(id)arg1 shortPromptType:(int)arg2 ignorePromptStyle:(BOOL)arg3 ;
-(id)_rightTurnAudioPlayer;
-(id)_leftTurnAudioPlayer;
-(void)speak:(id)arg1 shortPromptType:(int)arg2 ignorePromptStyle:(BOOL)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)speak:(id)arg1 shortPromptType:(int)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(BOOL)_isVoiceGuidanceEnabled;
-(BOOL)_beepIfNecessaryWithShortPromptType:(int)arg1 ;
-(id)queuedSpeech;
-(void)_speak:(id)arg1 ;
-(void)_audioInterruption:(id)arg1 ;
-(void)_setVolumeControlEnabled:(BOOL)arg1 ;
-(void)_setMaintainInactivePersistentConnection:(BOOL)arg1 ;
-(id)_uiLocaleIdentifier;
-(void)speakInitialAnnouncement:(id)arg1 ;
-(void)beginAudioSession;
-(void)prepareToAnnounce;
-(void)endAnnounce;
-(BOOL)vibrateForPrompt:(int)arg1 ;
-(int)audioSessionType;
-(void)setAudioSessionType:(int)arg1 ;
-(/*^block*/ id)completionBlock;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(void)stop;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3 ;
@end

