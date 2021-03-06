/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSData, NSString, NSArray, NSDate, NSNumber, NSMutableArray;

@interface IDSDOutgoingMessage : NSObject {

	NSDictionary* _message;
	NSData* _data;
	NSDictionary* _protobuf;
	NSString* _fromID;
	NSArray* _destinations;
	NSString* _accountGUID;
	BOOL _useDictAsTopLevel;
	NSData* _dataToEncrypt;
	BOOL _encryptPayload;
	BOOL _compressPayload;
	BOOL _wantsResponse;
	NSDate* _expirationDate;
	NSNumber* _command;
	BOOL _wantsDeliveryStatus;
	NSDictionary* _deliveryStatusContext;
	NSData* _messageUUID;
	long long _priority;
	NSString* _guid;
	NSString* _alternateGUID;
	NSString* _identifier;
	BOOL _forcedLocal;
	NSString* _queueOneIdentifier;
	NSString* _peerResponseIdentifier;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _fireAndForget;
	BOOL _nonWaking;
	NSMutableArray* _combinedMessages;

}

@property (copy) NSDictionary * message;                             //@synthesize message=_message - In the implementation block
@property (copy) NSData * data;                                      //@synthesize data=_data - In the implementation block
@property (copy) NSDictionary * protobuf;                            //@synthesize protobuf=_protobuf - In the implementation block
@property (copy) NSString * fromID;                                  //@synthesize fromID=_fromID - In the implementation block
@property (copy) NSArray * destinations;                             //@synthesize destinations=_destinations - In the implementation block
@property (copy) NSString * accountGUID;                             //@synthesize accountGUID=_accountGUID - In the implementation block
@property (assign) BOOL useDictAsTopLevel;                           //@synthesize useDictAsTopLevel=_useDictAsTopLevel - In the implementation block
@property (copy) NSData * dataToEncrypt;                             //@synthesize dataToEncrypt=_dataToEncrypt - In the implementation block
@property (assign) BOOL encryptPayload;                              //@synthesize encryptPayload=_encryptPayload - In the implementation block
@property (assign) BOOL compressPayload;                             //@synthesize compressPayload=_compressPayload - In the implementation block
@property (assign) BOOL wantsResponse;                               //@synthesize wantsResponse=_wantsResponse - In the implementation block
@property (retain) NSDate * expirationDate;                          //@synthesize expirationDate=_expirationDate - In the implementation block
@property (copy) NSNumber * command;                                 //@synthesize command=_command - In the implementation block
@property (assign) BOOL wantsDeliveryStatus;                         //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (copy) NSDictionary * deliveryStatusContext;               //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (copy) NSData * messageUUID;                               //@synthesize messageUUID=_messageUUID - In the implementation block
@property (assign) long long priority;                               //@synthesize priority=_priority - In the implementation block
@property (copy) NSString * guid;                                    //@synthesize guid=_guid - In the implementation block
@property (copy) NSString * alternateGUID;                           //@synthesize alternateGUID=_alternateGUID - In the implementation block
@property (copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign) BOOL forcedLocal;                                 //@synthesize forcedLocal=_forcedLocal - In the implementation block
@property (copy) NSString * peerResponseIdentifier;                  //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
@property (assign) BOOL expectsPeerResponse;                         //@synthesize expectsPeerResponse=_expectsPeerResponse - In the implementation block
@property (assign) BOOL wantsAppAck;                                 //@synthesize wantsAppAck=_wantsAppAck - In the implementation block
@property (assign) BOOL fireAndForget;                               //@synthesize fireAndForget=_fireAndForget - In the implementation block
@property (assign) BOOL nonWaking;                                   //@synthesize nonWaking=_nonWaking - In the implementation block
@property (copy) NSString * queueOneIdentifier;                      //@synthesize queueOneIdentifier=_queueOneIdentifier - In the implementation block
@property (retain,readonly) NSArray * combinedMessages;              //@synthesize combinedMessages=_combinedMessages - In the implementation block
-(void)setAlternateGUID:(NSString *)arg1 ;
-(void)setForcedLocal:(BOOL)arg1 ;
-(BOOL)forcedLocal;
-(NSString *)alternateGUID;
-(id)initWithMessage:(id)arg1 data:(id)arg2 protobuf:(id)arg3 fromID:(id)arg4 toDestinations:(id)arg5 accountGUID:(id)arg6 useDictAsTopLevel:(BOOL)arg7 dataToEncrypt:(id)arg8 encryptPayload:(BOOL)arg9 compressPayload:(BOOL)arg10 wantsResponse:(BOOL)arg11 expirationDate:(id)arg12 command:(id)arg13 wantsDeliveryStatus:(BOOL)arg14 deliveryStatusContext:(id)arg15 messageUUID:(id)arg16 priority:(long long)arg17 guid:(id)arg18 alternateGUID:(id)arg19 identifier:(id)arg20 forcedLocal:(BOOL)arg21 peerResponseIdentifier:(id)arg22 expectsPeerResponse:(BOOL)arg23 wantsAppAck:(BOOL)arg24 fireAndForget:(BOOL)arg25 nonWaking:(BOOL)arg26 queueOneIdentifier:(id)arg27 ;
-(BOOL)canCombineWithMessage:(id)arg1 ;
-(void)combineWithMessage:(id)arg1 ;
-(id)copySendParameters;
-(NSArray *)combinedMessages;
-(NSNumber *)command;
-(void)setDestinations:(NSArray *)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSDictionary *)message;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMessage:(NSDictionary *)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(void)setGuid:(NSString *)arg1 ;
-(void)setCommand:(NSNumber *)arg1 ;
-(BOOL)wantsResponse;
-(NSArray *)destinations;
-(void)setDataToEncrypt:(NSData *)arg1 ;
-(void)setWantsResponse:(BOOL)arg1 ;
-(void)setFromID:(NSString *)arg1 ;
-(void)setWantsAppAck:(BOOL)arg1 ;
-(void)setWantsDeliveryStatus:(BOOL)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(void)setMessageUUID:(NSData *)arg1 ;
-(void)setEncryptPayload:(BOOL)arg1 ;
-(void)setCompressPayload:(BOOL)arg1 ;
-(void)setUseDictAsTopLevel:(BOOL)arg1 ;
-(void)setExpectsPeerResponse:(BOOL)arg1 ;
-(void)setPeerResponseIdentifier:(NSString *)arg1 ;
-(void)setNonWaking:(BOOL)arg1 ;
-(void)setFireAndForget:(BOOL)arg1 ;
-(void)setQueueOneIdentifier:(NSString *)arg1 ;
-(void)setProtobuf:(NSDictionary *)arg1 ;
-(BOOL)wantsAppAck;
-(BOOL)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(BOOL)expectsPeerResponse;
-(NSData *)messageUUID;
-(NSString *)peerResponseIdentifier;
-(NSDictionary *)protobuf;
-(NSString *)fromID;
-(NSData *)dataToEncrypt;
-(NSString *)queueOneIdentifier;
-(BOOL)useDictAsTopLevel;
-(BOOL)encryptPayload;
-(BOOL)compressPayload;
-(BOOL)nonWaking;
-(BOOL)fireAndForget;
-(NSString *)accountGUID;
-(void)setAccountGUID:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)guid;
-(void)setExpirationDate:(NSDate *)arg1 ;
@end

