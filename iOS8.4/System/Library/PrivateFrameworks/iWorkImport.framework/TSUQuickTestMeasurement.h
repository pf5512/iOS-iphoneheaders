/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSMTraceBuffer, NSDictionary;

@interface TSUQuickTestMeasurement : NSObject {

	TSMTraceBuffer* mBuffer;
	NSDictionary* mPrevious;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedManager;
-(id)p_niceString:(unsigned long long)arg1 withPrefix:(id)arg2 ;
-(id)getPreviousTimeForKey:(id)arg1 ;
-(id)displayTime:(unsigned long long)arg1 forClassAndMethodName:(id)arg2 ;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setup;
-(void)teardown;
-(oneway void)release;
@end

