/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ACDAuthenticationHandlerQueueManager : NSObject {

	NSMutableDictionary* _verificationHandlerQueues;
	NSMutableDictionary* _renewalHandlerQueues;
	NSMutableDictionary* _promptHandlerQueues;

}
-(id)init;
-(void).cxx_destruct;
-(bool)hasVerificationQueueForAccountID:(id)arg1 ;
-(bool)hasPromptQueueForAccountID:(id)arg1 ;
-(void)pushVerificationHandler:(/*^block*/ id)arg1 forAccountID:(id)arg2 ;
-(/*^block*/ id)popVerificationHandlerForAccountID:(id)arg1 ;
-(bool)hasRenewalQueueForRenewalID:(id)arg1 ;
-(void)pushRenewalHandler:(/*^block*/ id)arg1 forRenewalID:(id)arg2 ;
-(/*^block*/ id)popRenewalHandlerForRenewalID:(id)arg1 ;
-(void)pushPromptHandler:(/*^block*/ id)arg1 forAccountID:(id)arg2 ;
-(/*^block*/ id)popPromptHandlerForAccountID:(id)arg1 ;
@end

