/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLBatteryLifeMonitorLogger.bundle/PLBatteryLifeMonitorLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLDuetSnapshot : NSObject {

	NSMutableSet* _duetEvents;
	unsigned _sequenceId;
	double _timeSinceEpoch;

}

@property (retain) NSMutableSet * duetEvents;              //@synthesize duetEvents=_duetEvents - In the implementation block
@property (assign) double timeSinceEpoch;                  //@synthesize timeSinceEpoch=_timeSinceEpoch - In the implementation block
@property (assign) unsigned sequenceId;                    //@synthesize sequenceId=_sequenceId - In the implementation block
-(void)dealloc;
-(id)description;
-(double)timeSinceEpoch;
-(id)duetEvents;
-(unsigned)sequenceId;
-(void)setTimeSinceEpoch:(double)arg1 ;
-(id)initWithDuetEvents:(id)arg1 time:(double)arg2 sequenceId:(unsigned)arg3 ;
-(void)setDuetEvents:(id)arg1 ;
-(void)setSequenceId:(unsigned)arg1 ;
@end

