/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSMutableDictionary, NSMutableSet;

@interface PDDistributedNotificationManager : NSObject {

	NSHashTable* _consumers;
	NSMutableDictionary* _registeredNameMapping;
	NSMutableSet* _registeredNotificationNames;

}
-(void)registerConsumer:(id)arg1 ;
-(void)recalculateNotificationNames;
-(void)unregisterConsumer:(id)arg1 ;
-(id)_updateNameCacheForConsumer:(id)arg1 ;
-(void)_startObservingNotification:(id)arg1 ;
-(void)_clearNameCacheForConsumer:(id)arg1 ;
-(void)_stopObservingNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
@end

