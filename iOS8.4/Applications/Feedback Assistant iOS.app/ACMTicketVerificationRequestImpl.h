/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACMTicketVerificationRequest.h>

@class NSString, NSNumber;

@interface ACMTicketVerificationRequestImpl : NSObject <ACMTicketVerificationRequest> {

	NSString* _userName;
	NSString* _realm;
	NSString* _token;
	NSString* _appIDKey;
	NSNumber* _appID;
	NSNumber* _serverResponseTimeout;
	id _userInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * userName;                             //@synthesize userName=_userName - In the implementation block
@property (retain) NSString * realm;                                //@synthesize realm=_realm - In the implementation block
@property (retain) NSString * token;                                //@synthesize token=_token - In the implementation block
@property (retain) NSNumber * appID;                                //@synthesize appID=_appID - In the implementation block
@property (retain) NSString * appIDKey;                             //@synthesize appIDKey=_appIDKey - In the implementation block
@property (retain) NSNumber * serverResponseTimeout;                //@synthesize serverResponseTimeout=_serverResponseTimeout - In the implementation block
@property (retain) id userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(void)dealloc;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setAppID:(NSNumber *)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(NSString *)realm;
-(void)setAppIDKey:(NSString *)arg1 ;
-(NSNumber *)appID;
-(NSString *)appIDKey;
-(NSNumber *)serverResponseTimeout;
-(void)setServerResponseTimeout:(NSNumber *)arg1 ;
@end

