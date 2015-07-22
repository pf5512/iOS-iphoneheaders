/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInternalEvent.h>

@class NSMutableSet, NSMapTable;

@interface UITouchesEvent : UIInternalEvent {

	NSMutableSet* _touches;
	CFDictionaryRef _keyedTouches;
	CFDictionaryRef _keyedTouchesByWindow;
	CFDictionaryRef _gestureRecognizersByWindow;
	NSMapTable* _latentSystemGestureWindows;

}

@property (nonatomic,readonly) double _initialTouchTimestamp; 
@property (nonatomic,readonly) unsigned _windowServerHitTestContextId; 
-(void)dealloc;
-(id)description;
-(id)_init;
-(void)_addTouch:(id)arg1 forDelayedDelivery:(BOOL)arg2 ;
-(long long)type;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(void)_clearViewForTouch:(id)arg1 ;
-(void)_removeTouch:(id)arg1 ;
-(id)allTouches;
-(id)_windows;
-(id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg1 ;
-(id)_allTouches;
-(void)_clearTouches;
-(void)_dismissSharedCalloutBarIfNeeded;
-(BOOL)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2 currentTouchMap:(CFDictionaryRef)arg3 newTouchMap:(CFDictionaryRef)arg4 ;
-(id)_touchesForKey:(id)arg1 ;
-(CGPoint)_digitizerLocation;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(void)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 intoSet:(id)arg3 ;
-(id)_viewsForWindow:(id)arg1 ;
-(id)_touchesForView:(id)arg1 withPhase:(long long)arg2 ;
-(void)_invalidateGestureRecognizerForWindowCache;
-(id)_firstTouchForView:(id)arg1 ;
-(id)_cloneEvent;
-(id)touchesForWindow:(id)arg1 ;
-(id)touchesForView:(id)arg1 ;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(id)_touchesForWindow:(id)arg1 ;
-(void)_removeTouchesForKey:(id)arg1 ;
-(void)_removeTouchesForWindow:(id)arg1 ;
-(void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(id)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 ;
-(void)_moveTouchesFromView:(id)arg1 toView:(id)arg2 ;
-(double)_initialTouchTimestamp;
-(unsigned)_windowServerHitTestContextId;
-(void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg1 deliveredToEventWindow:(id)arg2 ;
-(void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg1 ;
@end
