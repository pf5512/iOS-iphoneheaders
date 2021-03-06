/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableSet;

@interface ADAdSheetProxy : NSObject {

	BOOL _serviceLaunchThrottled;
	int _bootstrapState;
	unsigned _adSheetBootstrapAttempts;
	NSXPCConnection* _adSheetConnection;
	int _classicUnavailableToken;
	NSMutableSet* _connectionAssertions;
	double _lastTermination;
	double _lastBootstrap;

}

@property (nonatomic,readonly) BOOL connectionAvailable; 
@property (assign,nonatomic) BOOL serviceLaunchThrottled;                      //@synthesize serviceLaunchThrottled=_serviceLaunchThrottled - In the implementation block
@property (nonatomic,readonly) <ADSSession_RPC> * rpcProxy; 
@property (assign,nonatomic) int bootstrapState;                               //@synthesize bootstrapState=_bootstrapState - In the implementation block
@property (assign,nonatomic) double lastTermination;                           //@synthesize lastTermination=_lastTermination - In the implementation block
@property (assign,nonatomic) double lastBootstrap;                             //@synthesize lastBootstrap=_lastBootstrap - In the implementation block
@property (assign,nonatomic) unsigned adSheetBootstrapAttempts;                //@synthesize adSheetBootstrapAttempts=_adSheetBootstrapAttempts - In the implementation block
@property (nonatomic,retain) NSXPCConnection * adSheetConnection;              //@synthesize adSheetConnection=_adSheetConnection - In the implementation block
@property (assign,nonatomic) int classicUnavailableToken;                      //@synthesize classicUnavailableToken=_classicUnavailableToken - In the implementation block
@property (nonatomic,retain) NSMutableSet * connectionAssertions;              //@synthesize connectionAssertions=_connectionAssertions - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)resetAdSheetThrottle;
-(id)rpcProxy;
-(void)_considerConnectingToAdSheet;
-(void)_considerLaunchingAdSheet;
-(id)connectionAssertions;
-(id)adSheetConnection;
-(int)bootstrapState;
-(void)setBootstrapState:(int)arg1 ;
-(unsigned)adSheetBootstrapAttempts;
-(void)setServiceLaunchThrottled:(BOOL)arg1 ;
-(void)setAdSheetBootstrapAttempts:(unsigned)arg1 ;
-(void)setLastTermination:(double)arg1 ;
-(void)setAdSheetConnection:(id)arg1 ;
-(void)_adSheetConnectionLost;
-(void)setLastBootstrap:(double)arg1 ;
-(double)lastBootstrap;
-(BOOL)serviceLaunchThrottled;
-(void)takeConnectionAssertion:(id)arg1 ;
-(void)releaseConnectionAssertion:(id)arg1 ;
-(BOOL)connectionAvailable;
-(double)lastTermination;
-(int)classicUnavailableToken;
-(void)setClassicUnavailableToken:(int)arg1 ;
-(void)setConnectionAssertions:(id)arg1 ;
@end

