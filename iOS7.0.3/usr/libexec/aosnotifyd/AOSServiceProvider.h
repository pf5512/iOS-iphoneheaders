/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class AOSAccount, NSString;

@interface AOSServiceProvider : NSObject {

	AOSAccount* _account;

}

@property (nonatomic,retain) AOSAccount * account;                  //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
-(void)accountDidChange;
-(void)deinitializeProvider;
-(void)accountDeactivated;
-(void)_accountDidDeactivateHandler:(id)arg1 ;
-(void)_accountDidChangeHandler:(id)arg1 ;
-(id)serviceName;
-(void)start;
-(void)stop;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void).cxx_destruct;
@end

