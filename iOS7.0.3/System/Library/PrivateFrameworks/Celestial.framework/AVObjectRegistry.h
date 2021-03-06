/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSRecursiveLock;

@interface AVObjectRegistry : NSObject {

	NSHashTable* _registeredObjects;
	NSRecursiveLock* _lock;

}
+(id)defaultObjectRegistry;
-(void)dealloc;
-(id)init;
-(void)registerObject:(id)arg1 ;
-(BOOL)safeRetainObject:(id)arg1 ;
-(void)safeInvokeWithDescription:(id)arg1 ;
-(void)safeInvokeWithDescriptionDelayed:(id)arg1 ;
-(void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)safePostDelayedNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)safePerformOnThread:(id)arg1 target:(id)arg2 selector:(SEL)arg3 object:(id)arg4 ;
-(void)registerObjectForSafeRetain:(id)arg1 ;
-(void)unregisterObject:(id)arg1 ;
-(void)safePerformTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
-(void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
-(void)safePostNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)safePostNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4 ;
-(void)safePostDelayedNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4 ;
@end

