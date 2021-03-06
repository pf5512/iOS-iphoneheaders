/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantCreateRequest : AARequest {

	NSDictionary* appleIDParameters;
	AASigningSession* signingSession;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 withAppleIDParameters:(id)arg2 signingSession:(id)arg3 ;
-(id)bodyDictionary;
-(void).cxx_destruct;
@end

