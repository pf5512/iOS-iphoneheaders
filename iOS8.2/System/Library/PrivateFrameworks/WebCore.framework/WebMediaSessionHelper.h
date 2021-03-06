/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionManageriOS* _callback;
	RetainPtr<MPVolumeView>* _volumeView;
	RetainPtr<MPAVRoutingController>* _airPlayPresenceRoutingController;

}
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(id)initWithCallback:(MediaSessionManageriOS*)arg1 ;
-(void)clearCallback;
-(char)hasWirelessTargetsAvailable;
-(void)startMonitoringAirPlayRoutes;
-(void)stopMonitoringAirPlayRoutes;
-(void)interruption:(id)arg1 ;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
@end

