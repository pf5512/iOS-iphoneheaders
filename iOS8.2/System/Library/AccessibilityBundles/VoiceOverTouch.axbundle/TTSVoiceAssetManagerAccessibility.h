/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/VoiceOverTouch.axbundle/VoiceOverTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceOverTouch/__TTSVoiceAssetManagerAccessibility_super.h>

@interface TTSVoiceAssetManagerAccessibility : __TTSVoiceAssetManagerAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_voiceAssetQueryForName:(id)arg1 language:(id)arg2 gender:(int)arg3 footprint:(int)arg4 version:(id)arg5 localOnly:(char)arg6 ;
-(id)resourcePathForLanguage:(id)arg1 gender:(int)arg2 footprint:(int)arg3 name:(id)arg4 ;
-(void)getVoiceAssetsLocalOnly:(char)arg1 reply:(/*^block*/id)arg2 ;
@end
