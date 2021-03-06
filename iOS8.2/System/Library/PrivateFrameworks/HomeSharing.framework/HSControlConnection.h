/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/NSStreamDelegate.h>

@protocol HSControlConnectionDelegate;
@class NSOutputStream, NSString;

@interface HSControlConnection : NSObject <NSStreamDelegate> {

	unsigned _key;
	NSOutputStream* _outputStream;
	double _timestamp;
	id<HSControlConnectionDelegate> _delegate;
	unsigned _protocolVersion;

}

@property (assign,nonatomic) id<HSControlConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned protocolVersion;                              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<HSControlConnectionDelegate>)arg1 ;
-(id<HSControlConnectionDelegate>)delegate;
-(void)close;
-(void)open;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(unsigned)protocolVersion;
-(id)_newDataForControlEventMessage:(SCD_Struct_HS6)arg1 ;
-(id)_newDataForControlExtendedMessage:(SCD_Struct_HS6)arg1 withData:(id)arg2 ;
-(void)_sendTouchEvent:(int)arg1 locations:(const unsigned*)arg2 count:(unsigned)arg3 velocity:(CGSize)arg4 ;
-(id)_newDataForControlTouchEventMessage_v1:(SCD_Struct_HS7*)arg1 ;
-(id)_newDataForControlTouchEventMessage_v1_1:(SCD_Struct_HS8*)arg1 ;
-(id)initWithHost:(id)arg1 port:(unsigned)arg2 key:(unsigned)arg3 ;
-(void)sendEvent:(int)arg1 value:(unsigned)arg2 ;
-(void)sendShowItemDetailWithDictionary:(id)arg1 ;
-(void)sendTouchesBegan:(const unsigned*)arg1 count:(unsigned)arg2 ;
-(void)sendTouchesEnded:(const unsigned*)arg1 count:(unsigned)arg2 ;
-(void)sendTouchesMoved:(const unsigned*)arg1 count:(unsigned)arg2 velocity:(CGSize)arg3 ;
@end

