/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BRContainersMonitor : NSObject {

	NSMutableDictionary* _observersByContainerID;
	NSMutableDictionary* _notifyTokenByContainerID;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
+(BOOL)isContainerID:(id)arg1 ;
+(id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 forContainerID:(id)arg2 ;
-(void)removeObserver:(id)arg1 forContainerID:(id)arg2 ;
-(void)finalize;
@end

