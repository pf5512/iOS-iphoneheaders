/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface EventMonitorEvent : NSObject <NSCopying> {

	double _lastOccurrenceCheckTime;
	int _pollInterval;
	BOOL _shouldKeepDaemonAlive;

}

@property (nonatomic,readonly) BOOL hasOccurred; 
@property (assign,nonatomic) int pollInterval;                                                                                                 //@synthesize pollInterval=_pollInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepDaemonAlive;                                                                                       //@synthesize shouldKeepDaemonAlive=_shouldKeepDaemonAlive - In the implementation block
@property (assign,setter=_setLastOccurrenceCheckTime:,getter=_lastOccurrenceCheckTime,nonatomic) double _lastOccurrenceCheckTime;              //@synthesize lastOccurrenceCheckTime=_lastOccurrenceCheckTime - In the implementation block
-(void)_setLastOccurrenceCheckTime:(double)arg1 ;
-(BOOL)shouldKeepDaemonAlive;
-(double)_lastOccurrenceCheckTime;
-(int)pollInterval;
-(BOOL)hasOccurred;
-(void)setPollInterval:(int)arg1 ;
-(void)setShouldKeepDaemonAlive:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)performAction;
@end

