/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject {

	WebGeolocationPositionInternal* _internal;

}
-(void)dealloc;
-(id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 ;
-(id)initWithGeolocationPosition:(PassRefPtr<WebCore::GeolocationPosition>*)arg1 ;
@end

