/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, NSArray;

@interface SWSDAFakeRunSensorDelegate : NSObject {

	NSTimer* _packetTimer;
	NSArray* _packets;
	unsigned long long _packetIndex;

}
+(void)enableSDA;
+(void)disableSDA;
-(void)_schedulePacketTimerForFakeSensor:(id)arg1 ;
-(void)_fakeNextPacketForTimer:(id)arg1 ;
-(unsigned long long)remainingBatteryLifetimeInHoursForFakeSensor:(id)arg1 ;
-(void)beginLinkingForFakeSensor:(id)arg1 ;
-(void)cancelLinkingForFakeSensor:(id)arg1 ;
-(void)beginSearchingForFakeSensor:(id)arg1 ;
-(void)cancelSearchingForFakeSensor:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

