/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface SPRemoteInterfaceOpenParentRequest : NSObject {

	char _waitingForReply;
	NSData* _userInfoData;
	/*^block*/id _reply;

}

@property (assign,nonatomic) char waitingForReply;              //@synthesize waitingForReply=_waitingForReply - In the implementation block
@property (nonatomic,copy) NSData * userInfoData;               //@synthesize userInfoData=_userInfoData - In the implementation block
@property (nonatomic,copy) id reply;                            //@synthesize reply=_reply - In the implementation block
-(char)waitingForReply;
-(void)setWaitingForReply:(char)arg1 ;
-(NSData *)userInfoData;
-(void)setUserInfoData:(NSData *)arg1 ;
-(void)setReply:(id)arg1 ;
-(id)reply;
@end

