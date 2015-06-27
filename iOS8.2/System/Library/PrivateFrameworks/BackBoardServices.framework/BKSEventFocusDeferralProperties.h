/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/NSSecureCoding.h>

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {

	NSString* _clientID;
	int _pid;
	NSString* _displayUUID;
	unsigned _contextID;

}

@property (nonatomic,readonly) NSString * clientID;                 //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int pid;                             //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * displayUUID;              //@synthesize displayUUID=_displayUUID - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                  //@synthesize contextID=_contextID - In the implementation block
+(char)supportsSecureCoding;
+(id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned)arg4 ;
+(id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned)arg3 ;
+(id)propertiesWithMainDisplayAndClientID:(id)arg1 contextID:(unsigned)arg2 ;
+(id)propertiesWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)contextID;
-(id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned)arg4 ;
-(NSString *)displayUUID;
-(char)isEqualNotIncludingClientIDAndPid:(id)arg1 ;
-(id)propertiesOneLevelMoreGeneric;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(NSString *)clientID;
@end
