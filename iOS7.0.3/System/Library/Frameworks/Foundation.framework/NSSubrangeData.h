/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface NSSubrangeData : NSData {

	unsigned _reserved : 3;
	unsigned _retainCount : 29;
	NSRange _range;
	NSData* _data;

}
-(id)initWithData:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(id)init;
-(unsigned)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 ;
@end

