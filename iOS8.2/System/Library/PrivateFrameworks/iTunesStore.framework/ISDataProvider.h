/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/NSCopying.h>

@class SSAuthenticationContext, NSNumber, SSURLBagContext, NSString, ISOperation, NSURL;

@interface ISDataProvider : NSObject <NSCopying> {

	SSAuthenticationContext* _authenticationContext;
	NSNumber* _authenticatedAccountDSID;
	SSURLBagContext* _bagContext;
	long long _contentLength;
	NSString* _contentType;
	id _output;
	ISOperation* _parentOperation;
	NSURL* _redirectURL;
	int _errorHandlerResponseType;

}

@property (retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) SSURLBagContext * bagContext;                                 //@synthesize bagContext=_bagContext - In the implementation block
@property (assign) ISOperation * parentOperation;                                //@synthesize parentOperation=_parentOperation - In the implementation block
@property (assign) long long contentLength;                                      //@synthesize contentLength=_contentLength - In the implementation block
@property (retain) NSString * contentType;                                       //@synthesize contentType=_contentType - In the implementation block
@property (retain) NSNumber * authenticatedAccountDSID;                          //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (retain) id output;                                                    //@synthesize output=_output - In the implementation block
@property (retain) NSURL * redirectURL;                                          //@synthesize redirectURL=_redirectURL - In the implementation block
@property (assign) int errorHandlerResponseType;                                 //@synthesize errorHandlerResponseType=_errorHandlerResponseType - In the implementation block
+(id)provider;
-(id)output;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isStream;
-(ISOperation *)parentOperation;
-(void)setParentOperation:(ISOperation *)arg1 ;
-(long long)contentLength;
-(void)setup;
-(SSURLBagContext *)bagContext;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setContentLength:(long long)arg1 ;
-(NSString *)contentType;
-(void)streamCancelled;
-(long long)streamedBytes;
-(char)isStreamComplete;
-(id)closeStream;
-(int)errorHandlerResponseType;
-(void)resetStream;
-(void)streamDidFailWithError:(id)arg1 ;
-(char)canStreamContentLength:(long long)arg1 error:(id*)arg2 ;
-(void)setBagContext:(SSURLBagContext *)arg1 ;
-(void)setAuthenticatedAccountDSID:(NSNumber *)arg1 ;
-(char)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
-(char)runSubOperation:(id)arg1 error:(id*)arg2 ;
-(void)setErrorHandlerResponseType:(int)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setOutput:(id)arg1 ;
-(void)configureFromProvider:(id)arg1 ;
-(char)parseData:(id)arg1 returningError:(id*)arg2 ;
-(void)migrateOutputFromSubProvider:(id)arg1 ;
-(char)runAuthorizationDialog:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)authenticatedAccountDSID;
@end

