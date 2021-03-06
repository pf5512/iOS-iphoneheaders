/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <StoreServices/SSVPlayActivityController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, URLBagTimer;

@interface DaemonPlayActivityController : SSVPlayActivityController {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _currentJingleRevision;
	unsigned long long _currentRevision;
	NSOperationQueue* _flushOperationQueue;
	BOOL _hasValidCurrentJingleRevision;
	BOOL _hasValidCurrentRevision;
	unsigned long long _flushingTransactionCount;
	BOOL _isJingleFlushTimerEnabled;
	BOOL _isStarted;
	URLBagTimer* _jingleFlushTimer;

}
+(void)observeXPCServer:(id)arg1 ;
+(void)acquirePendingPlayActivityEventsForEndpointIdentifierWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)completePendingPlayEventsForSessionTokenWithResultWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)recordPlayActivityEventsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removePlayActivityEventsUpToRevisionWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)setRevisionInformationForEndpointIdentifierWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)defaultPlayActivityController;
+(void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(/*^block*/id)arg3 ;
-(void)_playActivityControllerEndpointRevisionInformationDidChangeNotification:(id)arg1 ;
-(void)_playActivityControllerDidRecordPlayActivityEventsNotification:(id)arg1 ;
-(void)_reloadJingleFlushTimer;
-(void)_flushWithTimerReset:(BOOL)arg1 ;
-(void)_setJingleFlushTimerEnabled:(BOOL)arg1 ;
-(id)_jingleFlushTimer;
-(void)dealloc;
-(void)start;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
@end

