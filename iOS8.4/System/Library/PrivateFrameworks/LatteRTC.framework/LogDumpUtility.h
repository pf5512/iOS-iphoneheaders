/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface LogDumpUtility : NSObject
+(id)getHomeDirPath;
+(BOOL)createDirectoy:(id)arg1 ;
+(id)getDefaultLogDumpPath;
+(void)AddFileToMarco:(id)arg1 logCategory:(int)arg2 ;
+(id)openLogDump:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 fullFilename:(id*)arg6 ;
+(id)createLogFilename:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 ;
@end

