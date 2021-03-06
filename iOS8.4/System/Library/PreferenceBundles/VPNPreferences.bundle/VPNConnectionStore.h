/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VPNPreferences/VPNPreferences-Structs.h>
@class VPNConnection, NSString, NSMutableArray, NSMutableDictionary, NSArray, NEConfigurationManager, NSObject;

@interface VPNConnectionStore : NSObject {

	BOOL _gradeCurrentConnectionHasBeenSet[4];
	VPNConnection* _gradeCurrentConnection[4];
	NSString* _gradeActiveVPNID[4];
	BOOL _gradeActiveVPNIDLoaded[4];
	NSMutableArray* _gradeVPNServiceIDs[4];
	NSMutableDictionary* _connectionDict[4];
	BOOL _ignoreVPNChangedNotification;
	NSMutableArray* _vpnServices;
	NSArray* _managedServices;
	BOOL _useNEVPN;
	unsigned _vpnServiceCountDirty;
	unsigned _vpnServiceCount;
	NSArray* _configurations;
	NEConfigurationManager* _configurationManager;
	NSObject*<OS_dispatch_queue> _storeQueue;

}

@property (assign) BOOL useNEVPN;                                              //@synthesize useNEVPN=_useNEVPN - In the implementation block
@property (retain) NSArray * configurations;                                   //@synthesize configurations=_configurations - In the implementation block
@property (retain) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> storeQueue;                    //@synthesize storeQueue=_storeQueue - In the implementation block
@property (assign) unsigned vpnServiceCountDirty;                              //@synthesize vpnServiceCountDirty=_vpnServiceCountDirty - In the implementation block
@property (assign) unsigned vpnServiceCount;                                   //@synthesize vpnServiceCount=_vpnServiceCount - In the implementation block
+(id)sharedInstance;
+(CFStringRef)vpnTypeFromConnectionType:(int)arg1 ;
+(int)connectionTypeFromVPNType:(CFStringRef)arg1 ;
-(id)proxyType:(SCNetworkServiceRef)arg1 ;
-(id)proxyServer:(SCNetworkServiceRef)arg1 ;
-(id)proxyPort:(SCNetworkServiceRef)arg1 ;
-(id)proxyUsername:(SCNetworkServiceRef)arg1 ;
-(id)proxyPassword:(SCNetworkServiceRef)arg1 ;
-(id)proxyPacFile:(SCNetworkServiceRef)arg1 ;
-(BOOL)setOnDemandEnabled:(id)arg1 onService:(SCNetworkServiceRef)arg2 forVPNType:(int)arg3 ;
-(BOOL)setDisplayName:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(BOOL)setAuthorizationName:(id)arg1 ofService:(SCNetworkServiceRef)arg2 type:(int)arg3 ;
-(BOOL)setRemoteAddress:(id)arg1 ofService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(BOOL)setSharedSecret:(id)arg1 onService:(SCNetworkServiceRef)arg2 type:(int)arg3 ;
-(BOOL)setRSASecurID:(BOOL)arg1 onService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(BOOL)setEncryptionLevel:(id)arg1 onService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(BOOL)setGroupName:(id)arg1 onService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(BOOL)setPassword:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(BOOL)setSendAllTraffice:(BOOL)arg1 onService:(SCNetworkServiceRef)arg2 usingPreferences:(SCPreferencesRef)arg3 ;
-(BOOL)setCertificate:(void*)arg1 onService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(BOOL)setProxyType:(int)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(BOOL)setProxyServer:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(BOOL)setProxyPort:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(BOOL)setProxyPacFile:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(BOOL)setProxyAuthenticate:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(BOOL)setProxyUsername:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(BOOL)setProxyPassword:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(id)serviceAuthorizationName:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(id)serviceRemoteAddress:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(id)serviceDisplayName:(SCNetworkServiceRef)arg1 ;
-(id)serviceSharedSecret:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(BOOL)serviceUsesRSASecurID:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(id)serviceEncryptionLevel:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(id)serviceGroupName:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(BOOL)serviceRequiresPassword:(SCNetworkServiceRef)arg1 ;
-(id)servicePassword:(SCNetworkServiceRef)arg1 ;
-(void*)certificate:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(BOOL)serviceSendsAllTraffic:(SCNetworkServiceRef)arg1 usingPreferences:(SCPreferencesRef)arg2 ;
-(id)proxyAuthenticate:(SCNetworkServiceRef)arg1 ;
-(BOOL)isOnDemandCapable:(SCNetworkServiceRef)arg1 ;
-(BOOL)onDemandEnabled:(SCNetworkServiceRef)arg1 forVPNType:(int)arg2 ;
-(BOOL)saveActiveVPNIDToPreferences:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(id)copyActiveVPNIDsFromPrefsForGrade:(unsigned long long)arg1 ;
-(void)setPassword:(id)arg1 forServiceName:(id)arg2 accountName:(id)arg3 ;
-(id)_passwordForGenericAccount:(id)arg1 service:(id)arg2 ;
-(BOOL)_setPlistInformation:(id)arg1 intoVPNService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(id)passwordForServiceName:(id)arg1 accountName:(id)arg2 ;
-(void)removePasswordForServiceName:(id)arg1 accountName:(id)arg2 ;
-(NSArray *)configurations;
-(NEConfigurationManager *)configurationManager;
-(void)setConfigurations:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)connectionWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(BOOL)useNEVPN;
-(BOOL)isOnDemandCapableForServiceID:(id)arg1 ;
-(id)getLastConnectionCauseForServiceID:(id)arg1 ;
-(id)servicePasswordForServiceID:(id)arg1 ;
-(void)setUseNEVPN:(BOOL)arg1 ;
-(id)currentConnectionWithGrade:(unsigned long long)arg1 ;
-(id)activeVPNIDWithGrade:(unsigned long long)arg1 ;
-(id)vpnServiceCountWithGrade:(unsigned long long)arg1 ;
-(void)freeResources;
-(id)vpnServicesForCurrentSetWithGrade:(unsigned long long)arg1 ;
-(BOOL)isActiveVPNID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(BOOL)isUserCreatedVPN:(id)arg1 ;
-(id)organizationForServiceID:(id)arg1 ;
-(void)setActiveVPNID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(id)optionsForServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(void)_configurationChanged;
-(void)setVpnServiceCountDirty:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)storeQueue;
-(id)currentConnectionsWithGrade:(unsigned long long)arg1 ;
-(long long)aggregateStatus;
-(id)aggregateAlert;
-(id)vpnServiceTotalCount;
-(void)_connectionsChanged;
-(id)activeVPNIDsWithGrade:(unsigned long long)arg1 ;
-(id)currentConnection:(BOOL)arg1 withGrade:(unsigned long long)arg2 ;
-(id)currentAppVPNConnections:(BOOL)arg1 ;
-(BOOL)setOptions:(id)arg1 toConfiguration:(id)arg2 ;
-(BOOL)setOptions:(id)arg1 toService:(SCNetworkServiceRef)arg2 withPreferences:(SCPreferencesRef)arg3 vpnType:(int)arg4 serviceId:(id)arg5 ;
-(void)removeConnection:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(id)appNameForServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(id)organizationForService:(SCNetworkServiceRef)arg1 ;
-(int)vpnTypeForServiceID:(id)arg1 ;
-(id)aggregateStatusText;
-(unsigned long long)currentOnlyConnectionGrade;
-(id)_defaultDictForType:(int)arg1 ;
-(BOOL)createVPNWithOptions:(id)arg1 ;
-(BOOL)updateVPNWithServiceID:(id)arg1 withOptions:(id)arg2 withGrade:(unsigned long long)arg3 ;
-(BOOL)deleteVPNWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(void)reloadVPN;
-(BOOL)alwaysOnToggleEnabledForServiceID:(id)arg1 ;
-(id)getProfileIDForServiceID:(id)arg1 ;
-(id)getPayloadDictForServiceID:(id)arg1 ;
-(BOOL)gradePresent:(unsigned long long)arg1 ;
-(id)sslTypeForServiceID:(id)arg1 ;
-(BOOL)enable:(BOOL)arg1 serviceID:(id)arg2 withGrade:(unsigned long long)arg3 ;
-(BOOL)isTypeEnabledWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(BOOL)isEnabledWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(void)setConfigurationManager:(NEConfigurationManager *)arg1 ;
-(void)setStoreQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)vpnServiceCountDirty;
-(unsigned)vpnServiceCount;
-(void)setVpnServiceCount:(unsigned)arg1 ;
-(id)queue;
@end

