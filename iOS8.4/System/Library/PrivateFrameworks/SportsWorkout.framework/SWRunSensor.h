/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWAccessory.h>

@protocol SWRunSensorPacketObserver;
@interface SWRunSensor : SWAccessory {

	id<SWRunSensorPacketObserver> _packetObserver;

}

@property (nonatomic,readonly) unsigned long long remainingBatteryLifetimeInHours; 
+(unsigned long long)remainingHoursConsideredToBeLowBattery;
-(void)setPacketObserver:(id)arg1 ;
@end
