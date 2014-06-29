/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:55:58 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSXPCConnection;

@interface SBManagerServerClient : NSObject {

	int _pid;
	NSString* _identifier;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int pid;                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,@dynamic,readonly) <SBManagerClientInterface> * proxy; 
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)identifier;
-(id)connection;
-(id)initWithConnection:(id)arg1 ;
-(int)pid;
-(id)proxy;
@end
