/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASGetOptionsTask : ASTask {

	NSArray* _versionArray;
	NSArray* _commandArray;

}
+(void)__setUsePort:(BOOL)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(int)commandCode;
-(id)requestBody;
-(BOOL)processContext:(id)arg1 ;
-(id)_url;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(void)setVersionArray:(id)arg1 ;
-(void)setCommandArray:(id)arg1 ;
-(id)commandArray;
-(id)versionArray;
-(id)httpMethod;
@end

