/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VideoUpload/JSONHTTPRequestDelegate.h>

@class NSString, JSONHTTPRequest;

@interface VUAuthenticator : NSObject <JSONHTTPRequestDelegate> {

	int _authenticatorState;
	NSString* _accountName;
	JSONHTTPRequest* _authenticationRequest;

}

@property (nonatomic,readonly) int authenticatorState;              //@synthesize authenticatorState=_authenticatorState - In the implementation block
@property (nonatomic,readonly) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAuthenticator;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)accountName;
-(void)request:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)_notifyStateChange;
-(void)_notifyFailure;
-(void)authenticateWithUsername:(id)arg1 password:(id)arg2 ;
-(void)loadCredentials;
-(void)invalidateAuthentication;
-(int)authenticatorState;
-(id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2 ;
@end
