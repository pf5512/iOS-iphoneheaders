/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimer.h>

@interface __NSCFTimer : NSTimer
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long)_cfTypeID;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)fire;
-(id)retain;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(void)invalidate;
-(char)isValid;
-(void)setFireDate:(id)arg1 ;
-(id)userInfo;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(char)arg6 ;
-(double)timeInterval;
-(id)fireDate;
-(oneway void)release;
-(void)finalize;
@end

