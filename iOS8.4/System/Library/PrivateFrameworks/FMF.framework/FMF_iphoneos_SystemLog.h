/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/FMFSystemLog.h>

@interface FMF_iphoneos_SystemLog : FMFSystemLog
-(id)init;
-(BOOL)isLoggingToFile;
-(void)startLoggingToFile:(id)arg1 ;
-(void)stopLoggingToFile;
-(void)writeLevel:(unsigned)arg1 facility:(id)arg2 path:(const char*)arg3 line:(unsigned)arg4 function:(const char*)arg5 format:(id)arg6 ;
@end

