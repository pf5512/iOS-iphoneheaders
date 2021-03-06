/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber;

@interface PBBridgeIDSMessageInstance : NSObject {

	unsigned short _typeID;
	NSNumber* _sentAbsoluteTime;
	long long _retryCount;
	double _retryInterval;
	/*^block*/id _retryAction;

}

@property (nonatomic,retain) NSNumber * sentAbsoluteTime;              //@synthesize sentAbsoluteTime=_sentAbsoluteTime - In the implementation block
@property (assign,nonatomic) unsigned short typeID;                    //@synthesize typeID=_typeID - In the implementation block
@property (assign,nonatomic) long long retryCount;                     //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) double retryInterval;                     //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,copy) id retryAction;                             //@synthesize retryAction=_retryAction - In the implementation block
+(id)newMessageInstanceOfType:(unsigned short)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3 withAction:(/*^block*/id)arg4 ;
-(id)init;
-(id)description;
-(long long)retryCount;
-(void)setSentAbsoluteTime:(NSNumber *)arg1 ;
-(void)setTypeID:(unsigned short)arg1 ;
-(void)setRetryAction:(id)arg1 ;
-(NSNumber *)sentAbsoluteTime;
-(unsigned short)typeID;
-(id)retryAction;
-(void)setRetryCount:(long long)arg1 ;
-(void)setRetryInterval:(double)arg1 ;
-(double)retryInterval;
@end

