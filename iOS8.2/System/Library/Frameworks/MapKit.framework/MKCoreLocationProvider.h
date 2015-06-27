/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/CLLocationManagerDelegate.h>
#import <MapKit/CLLocationManagerVehicleDelegate.h>
#import <MapKit/MKLocationProvider.h>

@protocol MKLocationProviderDelegate;
@class NSBundle, NSString, CLLocationManager, NSLock;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider> {

	CLLocationManager* _clLocationManager;
	id<MKLocationProviderDelegate> _delegate;
	char _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	/*^block*/id _authorizationRequestBlock;
	char _waitingForAuthorization;
	char _hasQueriedAuthorization;
	NSLock* _authorizationLock;

}

@property (nonatomic,readonly) CLLocationManager * _clLocationManager; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) char matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) char airplaneModeBlocksLocation; 
@property (assign,nonatomic) int activityType; 
@property (nonatomic,readonly) char usesCLMapCorrection; 
@property (nonatomic,readonly) char isSimulation; 
@property (nonatomic,readonly) char isTracePlayer; 
-(double)distanceFilter;
-(double)expectedGpsUpdateInterval;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(void)_createCLLocationManager;
-(void)_updateAuthorizationStatus;
-(CLLocationManager *)_clLocationManager;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(double)desiredAccuracy;
-(void)_resetForNewEffectiveBundle;
-(char)isLocationServicesPreferencesDialogEnabled;
-(void)setMatchInfoEnabled:(char)arg1 ;
-(int)headingOrientation;
-(void)dismissHeadingCalibrationDisplay;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2 ;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(char)matchInfoEnabled;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(char)airplaneModeBlocksLocation;
-(char)usesCLMapCorrection;
-(char)isSimulation;
-(char)isTracePlayer;
-(void)requestWhenInUseAuthorization;
-(void)dealloc;
-(void)setDelegate:(id<MKLocationProviderDelegate>)arg1 ;
-(id)init;
-(id<MKLocationProviderDelegate>)delegate;
-(NSBundle *)effectiveBundle;
-(int)activityType;
-(int)authorizationStatus;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(char)locationManagerShouldDisplayHeadingCalibration:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)setActivityType:(int)arg1 ;
@end
