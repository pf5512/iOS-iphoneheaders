/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingCommand.h>

@interface SASettingSetValue : SASettingCommand

@property (assign,nonatomic) BOOL dryRun; 
@property (assign,nonatomic) BOOL failOnSiriDisconnectWarnings; 
+(id)setValue;
+(id)setValueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(BOOL)failOnSiriDisconnectWarnings;
-(void)setFailOnSiriDisconnectWarnings:(BOOL)arg1 ;
@end
