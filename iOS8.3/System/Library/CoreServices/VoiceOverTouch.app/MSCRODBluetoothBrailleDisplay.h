/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:23:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/scrod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/SCROBrailleDisplay.h>

@class NSMutableDictionary;

@interface MSCRODBluetoothBrailleDisplay : SCROBrailleDisplay {

	NSMutableDictionary* _bluetoothConnectedDevices;
	char _isReconnectionEnabled;
	char _isDriverLoading;
	char _isDriverDisconnected;

}
+(id)displayWithIOElement:(id)arg1 cachedInfo:(id)arg2 delegate:(id)arg3 reconnectionEnabled:(char)arg4 ;
+(id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 modelIdentifier:(id)arg3 mainSize:(id)arg4 statusSize:(id)arg5 delegate:(id)arg6 reconnectionEnabled:(char)arg7 ;
+(id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 reconnectionEnabled:(char)arg4 ;
+(id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)addDeviceNotification:(id)arg1 ;
-(void)removeDeviceNotification:(id)arg1 ;
-(void)resetReconnectionTimer;
-(id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 modelIdentifier:(id)arg3 ioElement:(id)arg4 mainSize:(int)arg5 statusSize:(int)arg6 delegate:(id)arg7 reconnectionEnabled:(char)arg8 ;
-(void)_stopWatchingForDevices;
-(void)_startWatchingForDevices;
-(void)_setupDriverSupport;
-(void)deviceUpdatedNotification:(id)arg1 ;
-(void)_delayedAddDeviceNotification:(id)arg1 ;
-(void)_reloadDriver;
-(void)_delayedRemoveDeviceNotification:(id)arg1 ;
-(void)_delayedDeviceUpdatedNotification:(id)arg1 ;
-(void)invalidate;
-(id)configuration;
-(void)_runThread;
-(id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4 ;
-(void)_delayedDisplayLoad;
-(void)_unloadHandler;
@end

