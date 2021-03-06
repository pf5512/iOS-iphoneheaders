/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <healthd/HDHealthService.h>

@interface HDCyclingSpeedAndCadenceService : HDHealthService {

	char _supportsWheelRevolution;
	char _supportsCrankRevolution;
	char _supportsMultipleSensorLocations;
	unsigned short _sensorLocation;

}

@property (readonly) char supportsWheelRevolution;                      //@synthesize supportsWheelRevolution=_supportsWheelRevolution - In the implementation block
@property (readonly) char supportsCrankRevolution;                      //@synthesize supportsCrankRevolution=_supportsCrankRevolution - In the implementation block
@property (readonly) char supportsMultipleSensorLocations;              //@synthesize supportsMultipleSensorLocations=_supportsMultipleSensorLocations - In the implementation block
@property (readonly) unsigned short sensorLocation;                     //@synthesize sensorLocation=_sensorLocation - In the implementation block
+(int)serviceType;
+(id)serviceUUID;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(id)handleResponse:(id)arg1 forOperation:(unsigned char)arg2 ;
-(void)setCumulativeValue:(id)arg1 onPeripheral:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSensorCalibrationOnPeripheral:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSensorLocation:(id)arg1 onPeripheral:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleCSCMeasurement:(id)arg1 ;
-(void)handleCSCFeature:(id)arg1 ;
-(void)handleCSCSensorLocation:(id)arg1 ;
-(void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)supportsWheelRevolution;
-(char)supportsCrankRevolution;
-(char)supportsMultipleSensorLocations;
-(unsigned short)sensorLocation;
-(id)init;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
@end

