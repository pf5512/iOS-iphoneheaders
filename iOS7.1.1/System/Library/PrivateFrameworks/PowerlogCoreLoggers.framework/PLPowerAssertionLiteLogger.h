/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@class NSMutableArray, NSTimer;

@interface PLPowerAssertionLiteLogger : PLLogger {

	bool _trackingAssertions;
	NSMutableArray* _trackedAssertions;
	NSTimer* _rearmAssertionNotificationsTimer;
	NSMutableArray* _assertionStormTracking;

}

@property (retain) NSMutableArray * trackedAssertions;                      //@synthesize trackedAssertions=_trackedAssertions - In the implementation block
@property (assign) bool trackingAssertions;                                 //@synthesize trackingAssertions=_trackingAssertions - In the implementation block
@property (retain) NSTimer * rearmAssertionNotificationsTimer;              //@synthesize rearmAssertionNotificationsTimer=_rearmAssertionNotificationsTimer - In the implementation block
@property (retain) NSMutableArray * assertionStormTracking;                 //@synthesize assertionStormTracking=_assertionStormTracking - In the implementation block
-(void)dealloc;
-(id)init;
-(void)log;
-(void)handleWake:(id)arg1 ;
-(void)setTrackedAssertions:(id)arg1 ;
-(void)setAssertionStormTracking:(id)arg1 ;
-(void)watchAssertionNotifications:(bool)arg1 ;
-(void)handleBatteryLevelChange:(id)arg1 ;
-(id)rearmAssertionNotificationsTimer;
-(void)setRearmAssertionNotificationsTimer:(id)arg1 ;
-(void)logAssertions;
-(void)checkTrackedAssertionRate;
-(bool)trackingAssertions;
-(id)trackedAssertions;
-(void)logAssertion:(id)arg1 withState:(id)arg2 withExtras:(id)arg3 ;
-(id)assertionStormTracking;
-(void)setTrackingAssertions:(bool)arg1 ;
-(void)handleRearm:(id)arg1 ;
@end

