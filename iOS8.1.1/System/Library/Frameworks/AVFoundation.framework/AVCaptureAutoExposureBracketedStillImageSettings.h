/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	float _exposureTargetBias;

}

@property (readonly) float exposureTargetBias;              //@synthesize exposureTargetBias=_exposureTargetBias - In the implementation block
+(id)autoExposureSettingsWithExposureTargetBias:(float)arg1 ;
-(float)exposureTargetBias;
-(id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1 ;
-(id)description;
@end
