/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSDate.h>

@interface __NSDate : NSDate {

	double _time;

}
+(id)__new:(double)arg1 ;
+(id)allocWithZone:(NSZone)arg1 ;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(double)timeIntervalSinceReferenceDate;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
@end
