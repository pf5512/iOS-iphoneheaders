/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISStoreURLOperationDelegate.h>

@class NSNumber, NSString, SSURLRequestProperties, NSDictionary, SSVGratisRequestBody;

@interface GratisClaimOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSNumber* _accountID;
	NSString* _authenticationReasonDescription;
	SSURLRequestProperties* _defaultRequestProperties;
	NSDictionary* _rawOutput;
	SSVGratisRequestBody* _requestBody;
	char _suppressesErrorDialogs;

}

@property (copy) NSString * authenticationReasonDescription; 
@property (assign) char suppressesErrorDialogs; 
@property (readonly) NSDictionary * rawOutput; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)rawOutput;
-(id)_accountID;
-(id)initWithRequestBody:(id)arg1 ;
-(id)_newDefaultRequestProperties;
-(id)_newRetryRequestPropertiesWithURL:(id)arg1 ;
-(char)suppressesErrorDialogs;
-(NSString *)authenticationReasonDescription;
-(void)setAuthenticationReasonDescription:(NSString *)arg1 ;
-(void)setSuppressesErrorDialogs:(char)arg1 ;
-(void)dealloc;
-(void)run;
-(id)_authenticationContext;
-(id)_bodyData;
-(char)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2 ;
-(id)initWithPurchase:(id)arg1 ;
@end

