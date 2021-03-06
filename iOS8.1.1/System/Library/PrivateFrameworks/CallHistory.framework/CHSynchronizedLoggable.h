/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHLoggerProtocol.h>
#import <CallHistory/CHSynchronizableProtocol.h>

@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject <CHLoggerProtocol, CHSynchronizableProtocol> {

	CHLogger* _logger;
	CHSynchronizable* _synchronizable;

}
-(id)initWithName:(id)arg1 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 queue:(id)arg2 ;
-(BOOL)shouldLogForLevel:(unsigned)arg1 ;
-(void)logWithLevel:(unsigned)arg1 withFormat:(id)arg2 ;
-(void)execute:(/*^block*/id)arg1 ;
-(id)queue;
@end

