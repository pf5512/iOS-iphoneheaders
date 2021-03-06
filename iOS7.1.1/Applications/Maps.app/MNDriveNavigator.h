/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNNavigator.h>

@interface MNDriveNavigator : MNNavigator {

	BOOL _exitedVehicle;
	int _vehicleExitConfidence;
	SCD_Struct_Si13 _vehicleExitCoordinate;

}
+(BOOL)checkForArrivalFromLocation:(SCD_Struct_Si13)arg1 routeMatch:(id)arg2 arrivalMapRegion:(id)arg3 checkArrivalRadius:(BOOL)arg4 checkDistanceAlongRoute:(BOOL)arg5 isOnRoute:(BOOL)arg6 ;
-(id)_newMapMatcher;
-(BOOL)_checkForArrival:(id)arg1 ;
-(BOOL)_allowNavigatorSwitchToTransportType:(int)arg1 atLocation:(id)arg2 ;
-(void)_updateDetectedMotionAtLocation:(id)arg1 ;
-(Class)_guidanceManagerClass;
-(int)_transportType;
@end

