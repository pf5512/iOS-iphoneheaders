/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/NSCopying.h>

@interface CoreIRButton : NSObject <NSCopying> {

	unsigned long _usagePage;
	unsigned long _usageID;

}

@property (nonatomic,readonly) unsigned long usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (nonatomic,readonly) unsigned long usageID;                //@synthesize usageID=_usageID - In the implementation block
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long)usagePage;
-(unsigned long)usageID;
-(id)initWithUsagePage:(unsigned long)arg1 usageID:(unsigned long)arg2 ;
@end

