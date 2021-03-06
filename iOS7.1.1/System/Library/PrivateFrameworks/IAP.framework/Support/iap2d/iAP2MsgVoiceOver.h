/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, iAP2Connection;

@interface iAP2MsgVoiceOver : NSObject {

	NSObject<OS_dispatch_queue>* _voiceOverQ;
	unsigned _informationMask;
	unsigned _propertyMask;
	bool _lastSentEnabled;
	unsigned char _lastSentVolume;
	unsigned char _lastSentRate;
	iAP2Connection* _connection;

}

@property (nonatomic,readonly) iAP2Connection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) unsigned informationMask; 
@property (assign,nonatomic) unsigned propertyMask; 
@property (assign,nonatomic) bool lastSentEnabled;                       //@synthesize lastSentEnabled=_lastSentEnabled - In the implementation block
@property (assign,nonatomic) unsigned char lastSentVolume;               //@synthesize lastSentVolume=_lastSentVolume - In the implementation block
@property (assign,nonatomic) unsigned char lastSentRate;                 //@synthesize lastSentRate=_lastSentRate - In the implementation block
-(void)shuttingDown;
-(void)setLastSentVolume:(unsigned char)arg1 ;
-(void)setLastSentRate:(unsigned char)arg1 ;
-(void)setLastSentEnabled:(bool)arg1 ;
-(void)setInformationMask:(unsigned)arg1 ;
-(void)setPropertyMask:(unsigned)arg1 ;
-(unsigned)propertyMask;
-(unsigned)informationMask;
-(bool)lastSentEnabled;
-(unsigned char)lastSentVolume;
-(unsigned char)lastSentRate;
-(void)dealloc;
-(id)description;
-(id)connection;
-(id)initWithConnection:(id)arg1 ;
@end

