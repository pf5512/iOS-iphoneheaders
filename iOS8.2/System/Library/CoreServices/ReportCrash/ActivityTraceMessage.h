/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ActivityTraceMessage : NSObject {

	NSString* _imageUUIDString;
	NSString* _imagePath;
	unsigned _offset;
	NSString* _traceMessage;
	unsigned long long _timeStamp;

}

@property (readonly) unsigned long long timeStamp;                   //@synthesize timeStamp=_timeStamp - In the implementation block
@property (retain,readonly) NSString * imageUUIDString;              //@synthesize imageUUIDString=_imageUUIDString - In the implementation block
@property (retain,readonly) NSString * imagePath;                    //@synthesize imagePath=_imagePath - In the implementation block
@property (assign) unsigned offset;                                  //@synthesize offset=_offset - In the implementation block
@property (retain,readonly) NSString * traceMessage;                 //@synthesize traceMessage=_traceMessage - In the implementation block
-(id)initWithTimeStamp:(unsigned long long)arg1 UUIDBytes:(const char*)arg2 imagePath:(const char*)arg3 offset:(unsigned)arg4 traceMessage:(char*)arg5 ;
-(NSString *)traceMessage;
-(NSString *)imageUUIDString;
-(void)dealloc;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(unsigned long long)timeStamp;
-(NSString *)imagePath;
@end

