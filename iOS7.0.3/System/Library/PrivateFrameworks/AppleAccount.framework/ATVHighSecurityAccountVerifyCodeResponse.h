/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse

@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSString * errorTitle; 
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) int errorCode; 
-(BOOL)success;
-(id)errorTitle;
-(id)errorMessage;
-(int)errorCode;
@end
