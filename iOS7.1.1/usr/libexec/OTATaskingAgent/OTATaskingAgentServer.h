/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/OTATaskingAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_source;
@class NSObject, NSArray, OTAXPCServer;

@interface OTATaskingAgentServer : NSObject {

	NSObject<OS_xpc_object>* _serverConn;
	NSArray* _whitelist;
	OTAXPCServer* _xpcServer;
	NSObject<OS_dispatch_source>* _idleTimerSource;

}
-(void)_handleClientRequest:(id)arg1 ;
-(BOOL)_handleSetPrefRequest:(id)arg1 withUID:(unsigned)arg2 domain:(id)arg3 preference:(id)arg4 ;
-(BOOL)_handleDeletePrefRequest:(id)arg1 withUID:(unsigned)arg2 domain:(id)arg3 preference:(id)arg4 ;
-(void)_sendReplyForRequest:(id)arg1 withStatus:(BOOL)arg2 ;
-(void)dealloc;
-(void)start;
-(void)_idleTimerFired;
-(id)initWithServiceName:(id)arg1 ;
-(void)_resetIdleTimer;
@end
