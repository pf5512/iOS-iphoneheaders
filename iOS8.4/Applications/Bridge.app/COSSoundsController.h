/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Bridge/NACVolumeControllerDelegate.h>

@protocol NACVolumeController;
@class UIImage, PSSpecifier, NSString;

@interface COSSoundsController : PSListController <NACVolumeControllerDelegate> {

	id<NACVolumeController> _volumeController;
	UIImage* _volumeSliderDownDisabled;
	UIImage* _volumeSliderDownEnabled;
	UIImage* _hapticSliderDownDisabled;
	UIImage* _hapticSliderDownEnabled;
	PSSpecifier* _audioSlider;
	PSSpecifier* _audioMuteSwitch;
	PSSpecifier* _hapticSlider;

}

@property (nonatomic,retain) id<NACVolumeController> volumeController;              //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) UIImage * volumeSliderDownDisabled;                    //@synthesize volumeSliderDownDisabled=_volumeSliderDownDisabled - In the implementation block
@property (nonatomic,retain) UIImage * volumeSliderDownEnabled;                     //@synthesize volumeSliderDownEnabled=_volumeSliderDownEnabled - In the implementation block
@property (nonatomic,retain) UIImage * hapticSliderDownDisabled;                    //@synthesize hapticSliderDownDisabled=_hapticSliderDownDisabled - In the implementation block
@property (nonatomic,retain) UIImage * hapticSliderDownEnabled;                     //@synthesize hapticSliderDownEnabled=_hapticSliderDownEnabled - In the implementation block
@property (nonatomic,retain) PSSpecifier * audioSlider;                             //@synthesize audioSlider=_audioSlider - In the implementation block
@property (nonatomic,retain) PSSpecifier * audioMuteSwitch;                         //@synthesize audioMuteSwitch=_audioMuteSwitch - In the implementation block
@property (nonatomic,retain) PSSpecifier * hapticSlider;                            //@synthesize hapticSlider=_hapticSlider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateVolumeSliderWithHighlightedDownGlyph:(char)arg1 ;
-(void)updateHapticSliderWithHighlightedDownGlyph:(char)arg1 ;
-(void)updateAudioVolumeSlider;
-(void)updateHapticIntensitySlider;
-(void)updateAudioMuteSwitch;
-(id)audioVolume:(id)arg1 ;
-(void)setAudioVolume:(id)arg1 specifier:(id)arg2 ;
-(void)setHapticIntensity:(id)arg1 specifier:(id)arg2 ;
-(void)setAudioMuted:(id)arg1 specifier:(id)arg2 ;
-(id)isAudioMuted:(id)arg1 ;
-(id)prominentHapticsEnabled:(id)arg1 ;
-(void)setProminentHapticsEnabled:(id)arg1 specifier:(id)arg2 ;
-(UIImage *)volumeSliderDownDisabled;
-(void)setVolumeSliderDownDisabled:(UIImage *)arg1 ;
-(UIImage *)volumeSliderDownEnabled;
-(void)setVolumeSliderDownEnabled:(UIImage *)arg1 ;
-(UIImage *)hapticSliderDownDisabled;
-(void)setHapticSliderDownDisabled:(UIImage *)arg1 ;
-(UIImage *)hapticSliderDownEnabled;
-(void)setHapticSliderDownEnabled:(UIImage *)arg1 ;
-(PSSpecifier *)audioSlider;
-(void)setAudioSlider:(PSSpecifier *)arg1 ;
-(PSSpecifier *)audioMuteSwitch;
-(void)setAudioMuteSwitch:(PSSpecifier *)arg1 ;
-(PSSpecifier *)hapticSlider;
-(void)setHapticSlider:(PSSpecifier *)arg1 ;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id<NACVolumeController>)volumeController;
-(id)hapticIntensity:(id)arg1 ;
-(void)setVolumeController:(id<NACVolumeController>)arg1 ;
-(void)volumeControllerDidUpdateVolumeControlAvailibility:(id)arg1 ;
-(void)volumeControllerDidUpdateVolumeValue:(id)arg1 ;
-(void)volumeControllerDidUpdateHapticIntensity:(id)arg1 ;
-(void)volumeControllerDidUpdateSystemMutedState:(id)arg1 ;
-(id)specifiers;
-(char)shouldReloadSpecifiersOnResume;
@end

