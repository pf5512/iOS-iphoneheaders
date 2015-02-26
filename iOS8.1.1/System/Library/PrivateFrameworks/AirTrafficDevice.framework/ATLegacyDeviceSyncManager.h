/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
#import <AirTrafficDevice/ATDeviceSyncManager.h>
#import <AirTrafficDevice/ATEnvironmentMonitorObserver.h>
#import <AirTrafficDevice/ATSessionObserver.h>
#import <AirTrafficDevice/ATLegacyAssetLinkProgressDelegate.h>

@protocol OS_dispatch_queue;
@class ATUserDefaults, ATClientController, NSMutableDictionary, NSObject, NSMutableArray, ATLegacyMessageLink, ATLegacyAssetLink, NSDate, NSString, ATAsset, ATSession;

@interface ATLegacyDeviceSyncManager : ATDeviceSyncManager <ATEnvironmentMonitorObserver, ATSessionObserver, ATLegacyAssetLinkProgressDelegate> {

	ATUserDefaults* _defaults;
	ATClientController* _clientController;
	NSMutableDictionary* _diskUsageInfo;
	NSObject*<OS_dispatch_queue> _diskUsageQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _messageLinks;
	ATLegacyMessageLink* _currentMessageLink;
	ATLegacyAssetLink* _assetLink;
	NSMutableArray* _dataclasses;
	unsigned _grappaId;
	NSDate* _startTime;
	BOOL _localSyncRequestCanceled;
	BOOL _localSyncRequest;
	BOOL _automaticSync;
	/*^block*/id _clientProgressCallback;
	NSMutableDictionary* _dataclassTimers;
	unsigned _currentStage;
	NSString* _currentDataclass;
	NSString* _currentStatus;
	ATAsset* _currentAsset;
	double _currentOverallProgress;
	CacheDeleteTokenRef _cacheDeleteToken;
	ATSession* _syncSession;

}

@property (nonatomic,retain) ATSession * syncSession;               //@synthesize syncSession=_syncSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)legacyDeviceSyncManager;
-(id)init;
-(void)_reset;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)environmentMonitorDidChangePower:(id)arg1 ;
-(void)initiateSyncForLibrary:(id)arg1 onMessageLink:(id)arg2 ;
-(void)cancelSyncOnMessageLink:(id)arg1 ;
-(void)assetLink:(id)arg1 didUpdateOverallProgress:(double)arg2 ;
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2 ;
-(void)session:(id)arg1 didBeginSessionTask:(id)arg2 ;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2 ;
-(void)sessionWillBegin:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(void)_sendSyncAllowed;
-(void)_handleCapabilitiesMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleHostInfoMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleRequestingSyncMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleSyncFailedMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleFinishedSyncingMetadataMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleAssetMetricsMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleSyncStatusMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_sendInstalledAssets;
-(void)_sendDiskUsageForDataClasses:(id)arg1 ;
-(void)_reportLocalProgress;
-(BOOL)_currentLinkIsWifiConnection;
-(void)_reconcileSyncWithMessage:(id)arg1 ;
-(void)_updatePurgeableStorageUsage;
-(ATSession *)syncSession;
-(void)setSyncSession:(ATSession *)arg1 ;
@end
