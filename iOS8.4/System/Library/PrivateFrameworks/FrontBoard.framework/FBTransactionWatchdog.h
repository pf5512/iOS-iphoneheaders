/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog {

	FBTransaction* _transaction;

}

@property (nonatomic,retain,readonly) FBTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(id)initWithTransaction:(id)arg1 ;
-(FBTransaction *)transaction;
-(void)dealloc;
-(void)invalidate;
-(void)_watchdogTimerFired;
-(void)_dumpDebugInfo;
@end

