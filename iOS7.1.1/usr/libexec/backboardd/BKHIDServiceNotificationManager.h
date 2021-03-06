/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <backboardd/backboardd-Structs.h>
@class NSObject;

@interface BKHIDServiceNotificationManager : NSObject {

	IOHIDEventSystemRef _hidEventSystem;
	NSObject<OS_dispatch_queue>* _queue;
	CFDictionaryRef _matchingDictionaryToActionMapping;
	CFDictionaryRef _serviceToRemovalNotificationMapping;
	CFDictionaryRef _serviceToRemovalActionsMapping;

}
-(id)initWithHIDEventSystem:(IOHIDEventSystemRef)arg1 ;
-(void)watchServicesMatching:(id)arg1 additionBlock:(/*^block*/ id)arg2 removalBlock:(/*^block*/ id)arg3 ;
-(void)watchServiceForRemoval:(IOHIDServiceRef)arg1 removalBlock:(/*^block*/ id)arg2 ;
-(void)_servicesAdded:(id)arg1 matchingActions:(id)arg2 ;
-(void)_servicesAdded:(id)arg1 matchingDictionary:(id)arg2 ;
-(void)_serviceRemoved:(IOHIDServiceRef)arg1 ;
-(void)dealloc;
@end

