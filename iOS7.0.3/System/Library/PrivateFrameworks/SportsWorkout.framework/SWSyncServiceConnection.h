/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SWSyncHost, NSURLConnection, NSMutableData, NSTimer;

@interface SWSyncServiceConnection : NSObject {

	SWSyncHost* _host;
	NSURLConnection* _URLConnection;
	NSMutableData* _receivedData;
	NSTimer* _bailOutTimer;

}

@property (nonatomic,readonly) SWSyncHost * host;              //@synthesize host=_host - In the implementation block
-(void)_restartBailOutTimer;
-(void)_bailOutTimerFired:(id)arg1 ;
-(id)initWithHost:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(void)dealloc;
-(id)delegate;
-(id)host;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)handleResponse:(id)arg1 ;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
@end

