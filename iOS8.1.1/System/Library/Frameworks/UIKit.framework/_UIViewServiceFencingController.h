/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray, NSTimer;

@interface _UIViewServiceFencingController : NSObject {

	int _lock;
	NSMutableSet* _pendingFenceSendRights;
	NSMutableArray* _resumeActions;
	unsigned long long _expectedParticipatingFencingProxyCount;
	NSTimer* _fencingControlTimeoutTimer;

}
+(id)activeFencePort;
-(void)dealloc;
-(id)init;
-(void)fencingControlProxy:(id)arg1 didBeginFencingWithSendRight:(id)arg2 expectedParticipatingFencingProxyCount:(unsigned long long)arg3 ;
-(void)fencingControlProxy:(id)arg1 didEndFencingWithSendRight:(id)arg2 ;
-(void)_fencingControlTimedOut;
@end

