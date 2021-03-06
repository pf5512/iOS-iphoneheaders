/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface CameraTS : NSObject <tGraphDataSource> {

	BOOL _rearCamAutoFocusState;
	BOOL _rearCamAutoFocusStateTokenValid;
	int torchState;
	int _rearCamAutoFocusStateToken;

}

@property (assign,nonatomic) BOOL rearCamAutoFocusState;                        //@synthesize rearCamAutoFocusState=_rearCamAutoFocusState - In the implementation block
@property (assign,nonatomic) int torchState; 
@property (assign,nonatomic) int rearCamAutoFocusStateToken;                    //@synthesize rearCamAutoFocusStateToken=_rearCamAutoFocusStateToken - In the implementation block
@property (assign,nonatomic) BOOL rearCamAutoFocusStateTokenValid;              //@synthesize rearCamAutoFocusStateTokenValid=_rearCamAutoFocusStateTokenValid - In the implementation block
-(void)setTorchState:(int)arg1 ;
-(id)initSensor:(int)arg1 :(int)arg2 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(CFNumberRef)copyNumericFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(void)setAutoFocusNotificationEnabledState:(BOOL)arg1 ;
-(void)setRearCamAutoFocusState:(BOOL)arg1 ;
-(void)setRearCamAutoFocusStateTokenValid:(BOOL)arg1 ;
-(void)setRearCamAutoFocusStateToken:(int)arg1 ;
-(BOOL)rearCamAutoFocusStateTokenValid;
-(int)rearCamAutoFocusStateToken;
-(void)updateThermalTable:(int)arg1 :(unsigned long long)arg2 ;
-(BOOL)rearCamAutoFocusState;
-(void)dealloc;
-(int)torchState;
@end

