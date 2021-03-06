/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:05 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSDictionary, GEOPeer, NSString;

@interface GEOMessage : NSObject {

	NSObject<OS_xpc_object>* _xpcMessage;
	NSDictionary* _decodedMessage;
	GEOPeer* _peer;

}

@property (nonatomic,readonly) NSString * messageName; 
@property (nonatomic,readonly) id userInfo; 
@property (nonatomic,readonly) GEOPeer * peer;                      //@synthesize peer=_peer - In the implementation block
-(id)initWithXPCMessage:(id)arg1 peer:(id)arg2 ;
-(id)messageName;
-(id)peer;
-(void)dealloc;
-(id)userInfo;
-(void)sendReply:(id)arg1 ;
-(void)finalize;
@end

