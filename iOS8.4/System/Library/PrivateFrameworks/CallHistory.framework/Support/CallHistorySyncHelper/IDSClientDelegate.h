/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>
#import <CallHistorySyncHelper/PSYSyncCoordinatorDelegate.h>
#import <CallHistorySyncHelper/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSMutableDictionary, NSString, NSArray;

@interface IDSClientDelegate : CHSynchronizedLoggable <PSYSyncCoordinatorDelegate, IDSServiceDelegate> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _peerDevices;
	int _configuration;
	/*^block*/id _callback;
	NSString* _persistedDeviceListKey;
	NSArray* _bootstrappedDeviceUuids;

}

@property (retain) NSString * persistedDeviceListKey;               //@synthesize persistedDeviceListKey=_persistedDeviceListKey - In the implementation block
@property (retain) NSArray * bootstrappedDeviceUuids;               //@synthesize bootstrappedDeviceUuids=_bootstrappedDeviceUuids - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPersistedDeviceListKey:(NSString *)arg1 ;
-(void)setupBootstrappedDevices;
-(void)checkForBootstrapDeviceChanges;
-(NSString *)persistedDeviceListKey;
-(void)setBootstrappedDeviceUuids:(NSArray *)arg1 ;
-(NSArray *)bootstrappedDeviceUuids;
-(void)rememberBootstrappedDevices:(id)arg1 ;
-(void)handleMessage:(id)arg1 fromID:(id)arg2 ;
-(void)handleTransactionData:(id)arg1 withConfigurationData:(id)arg2 ;
-(void)devicesChanged:(id)arg1 shouldRemoveUnregisteredDevices:(BOOL)arg2 ;
-(void)dealloc;
-(void)update:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
@end
