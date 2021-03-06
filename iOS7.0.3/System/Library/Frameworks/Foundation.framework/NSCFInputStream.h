/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@interface NSCFInputStream : NSInputStream
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)initWithFileAtPath:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned)streamStatus;
-(id)streamError;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(BOOL)hasBytesAvailable;
-(BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/ void*)arg2 context:(SCD_Struct_NS46*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(oneway void)release;
-(id)retain;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(id)delegate;
-(id)initWithData:(id)arg1 ;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(void)close;
-(id)initWithURL:(id)arg1 ;
-(void)finalize;
-(void)open;
@end

