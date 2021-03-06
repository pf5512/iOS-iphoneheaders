/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:50:44 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoRegistry/NRDeviceDiscoveryControllerXPCFrameworkDelegate.h>
#import <NanoRegistry/NSXPCConnectionDelegate.h>

@class NSArray, NSMutableArray, NSXPCConnection, NSString;

@interface NRDeviceDiscoveryController : NSObject <NRDeviceDiscoveryControllerXPCFrameworkDelegate, NSXPCConnectionDelegate> {

	NSArray* _devices;
	NSMutableArray* _mutableDevices;
	unsigned _counter;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSArray * devices;                          //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableDevices;              //@synthesize mutableDevices=_mutableDevices - In the implementation block
@property (assign,nonatomic) unsigned counter;                             //@synthesize counter=_counter - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)begin;
-(void)end;
-(unsigned)counter;
-(void)setCounter:(unsigned)arg1 ;
-(NSArray *)devices;
-(void)xpcSetValue:(id)arg1 forProperty:(id)arg2 deviceID:(id)arg3 ;
-(void)xpcAssertInClient:(id)arg1 ;
-(char)_xpcConnectToService;
-(void)xpcDidDiscoverDevice:(id)arg1 deviceID:(id)arg2 advertisedName:(id)arg3 ;
-(void)xpcDidRestartDiscovery;
-(NSMutableArray *)mutableDevices;
-(void)setMutableDevices:(NSMutableArray *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

