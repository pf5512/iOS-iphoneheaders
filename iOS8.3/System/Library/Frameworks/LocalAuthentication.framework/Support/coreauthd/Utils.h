/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:55:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <coreauthd/coreauthd-Structs.h>
@interface Utils : NSObject
+(id)callerNameForAuditToken:(SCD_Struct_Ca0)arg1 bundleId:(id*)arg2 ;
+(id)callerDisplayNameForPID:(int)arg1 bundleId:(id*)arg2 ;
+(id)callerDisplayNameAndBundleId:(id*)arg1 ;
+(id)callerUUID;
+(id)callerDisplayNameForUUID:(id)arg1 bundleId:(id*)arg2 ;
+(id)callerNameForBundle:(id)arg1 ;
@end

