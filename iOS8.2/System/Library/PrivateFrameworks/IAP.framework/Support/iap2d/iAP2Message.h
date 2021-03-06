/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class iAP2GroupParam;

@interface iAP2Message : NSObject {

	unsigned long long msgTimestampMs;
	unsigned short msgLen;
	unsigned short msgID;
	unsigned short msgLenRemain;
	int msgParseState;
	iAP2GroupParam* pGroupParams;

}
+(id)createMsgWithID:(unsigned short)arg1 ;
-(void)setMsgID:(unsigned short)arg1 ;
-(int)createParamWithID:(unsigned short)arg1 ;
-(unsigned short)getMsgID;
-(unsigned short)getMsgLen;
-(int)createParamWithIDAndDataRaw:(unsigned short)arg1 :(char*)arg2 :(unsigned short)arg3 ;
-(int)createParamWithIDAndDataBool:(unsigned short)arg1 :(BOOL)arg2 ;
-(int)createParamWithIDAndDataU8:(unsigned short)arg1 :(unsigned char)arg2 ;
-(int)createParamWithIDAndDataU16:(unsigned short)arg1 :(unsigned short)arg2 ;
-(int)createParamWithIDAndDataU32:(unsigned short)arg1 :(unsigned)arg2 ;
-(int)createParamWithIDAndDataU64:(unsigned short)arg1 :(unsigned long long)arg2 ;
-(int)createParamWithIDAndDataInt8:(unsigned short)arg1 :(char)arg2 ;
-(int)createParamWithIDAndDataInt16:(unsigned short)arg1 :(short)arg2 ;
-(int)createParamWithIDAndDataInt32:(unsigned short)arg1 :(int)arg2 ;
-(int)createParamWithIDAndDataInt64:(unsigned short)arg1 :(long long)arg2 ;
-(int)createParamWithIDAndNSData:(unsigned short)arg1 :(id)arg2 ;
-(int)createParamWithIDAndNSString:(unsigned short)arg1 :(id)arg2 ;
-(id)getParamArray;
-(id)allocAndAddGroupWithID:(unsigned short)arg1 ;
-(id)initWithMsgID:(unsigned short)arg1 ;
-(unsigned short)getRawMsgLength;
-(void)reinit;
-(int)parseMsgBuffer:(unsigned long long)arg1 :(const char*)arg2 :(unsigned short)arg3 :(unsigned short*)arg4 ;
-(unsigned short)getParamCount;
-(id)getGroupParams;
-(void)setGroupParams:(id)arg1 ;
-(unsigned short)generateRawMsgBuffer:(char*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

