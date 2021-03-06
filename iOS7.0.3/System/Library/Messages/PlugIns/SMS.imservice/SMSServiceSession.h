/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMDServiceSession.h>

@class NSMutableDictionary;

@interface SMSServiceSession : IMDServiceSession {

	NSMutableDictionary* _outgoingMessageMap;
	NSMutableDictionary* _outgoingMessageBlockMap;
	NSMutableDictionary* _outgoingMessageFailureMap;

}
-(void)dealloc;
-(void)_updatePhoneNumberCallerID;
-(void)_handleCapabilitiesChanged:(id)arg1 ;
-(void)_registerForCTNotifications;
-(void)_clearPendingIncomingMessageQueue;
-(void)updateMMSCapability;
-(void)_unregisterForCTNotifications;
-(unsigned)_generateMessageIDForMessageGUID:(id)arg1 completionBlock:(/*^block*/ id)arg2 failureBlock:(/*^block*/ id)arg3 ;
-(/*^block*/ id)_failureBlockForMessageGUID:(id)arg1 ;
-(void)_clearMapForMessageGUID:(id)arg1 ;
-(unsigned char)_readMMSUserOverride;
-(BOOL)_checkMMSEnablement;
-(id)_messageGUIDForMessageID:(int)arg1 ;
-(/*^block*/ id)_completionBlockForMessageGUID:(id)arg1 ;
-(void)_processReceivedMessage:(id)arg1 ;
-(void)_processMessageSent:(unsigned)arg1 ;
-(void)_processMessageSendFailure:(unsigned)arg1 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactive;
-(void)logoutServiceSession;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)refreshServiceCapabilities;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4 ;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)loginServiceSession;
-(unsigned long long)capabilities;
@end

