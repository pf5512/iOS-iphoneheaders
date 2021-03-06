/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 ;
@end

