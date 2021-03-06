/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CLTimerScheduler;
@class CLSilo;

@interface CLTimer : NSObject {

	CLSilo* _silo;
	<CLTimerScheduler>* _scheduler;
	/*^block*/ id _handler;
	double _nextFireTime;
	double _fireInterval;

}

@property (nonatomic,copy) id handler;                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double nextFireTime;              //@synthesize nextFireTime=_nextFireTime - In the implementation block
@property (assign,nonatomic) double fireInterval;              //@synthesize fireInterval=_fireInterval - In the implementation block
-(void)shouldFire;
-(id)initInSilo:(id)arg1 withScheduler:(id)arg2 ;
-(void)updateScheduler;
-(void)setNextFireAfterDelay:(double)arg1 ;
-(void)setNextFireTime:(double)arg1 ;
-(void)setFireInterval:(double)arg1 ;
-(void)setNextFireAfterDelay:(double)arg1 interval:(double)arg2 ;
-(void)setNextFireTime:(double)arg1 interval:(double)arg2 ;
-(double)nextFireTime;
-(double)fireInterval;
-(void)invalidate;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
-(void).cxx_destruct;
@end

