/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SBVoiceControlController : NSObject {

	BOOL _delayedAssistantActivationPending;
	BOOL _headsetDownDelayedActionPerformed;

}
+(BOOL)isVoiceControlVisible;
+(id)sharedInstance;
-(void)configureVoiceControl;
-(void)preheatForMenuButtonWithFireDate:(id)arg1 ;
-(BOOL)handleHomeButtonHeld;
-(void)headsetAvailabilityChanged;
-(void)handleHeadsetButtonDownWithClickCount:(unsigned long long)arg1 ;
-(BOOL)handleHeadsetButtonUp;
-(BOOL)handleHeadsetButtonUpNotInCall;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(void)_updateNextRecognitionAudioInputPaths:(id)arg1 ;
-(void)_assistantActivationSettingsDidChange:(id)arg1 ;
-(void)_performDelayedHeadsetActionForAssistant;
-(void)_performDelayedHeadsetActionForVoiceControl;
-(void)_prepareDelayedHeadsetAction;
-(void)_cancelDelayedHeadsetAction;
-(id)init;
-(void)_spokenLanguageDidChange:(id)arg1 ;
@end

