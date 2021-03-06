/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CityUpdaterDelegate;
#import <Weather/Weather-Structs.h>
@class NSString, NSMutableArray, NSDate, CLLocation, MKSearchCompletion, NSTimer;

@interface City : NSObject {

	id<CityUpdaterDelegate> _delegate;
	NSString* _updateTimeString;
	NSMutableArray* _dayForecasts;
	NSMutableArray* _hourlyForecasts;
	char _autoUpdate;
	char _isDay;
	char _isLocalWeatherCity;
	char _isHourlyDataCelsius;
	char _dataCelsius;
	char _isUpdating;
	char _isRequestedByFrameworkClient;
	char _lockedForDemoMode;
	NSString* _temperature;
	NSDate* _updateTime;
	unsigned _conditionCode;
	NSString* _name;
	NSString* _locationID;
	NSString* _state;
	unsigned _observationTime;
	unsigned _sunsetTime;
	unsigned _sunriseTime;
	unsigned _moonPhase;
	unsigned _uvIndex;
	float _precipitationPast24Hours;
	NSString* _link;
	NSString* _deeplink;
	CLLocation* _location;
	int _secondsFromGMT;
	unsigned _lastUpdateDetail;
	float _windChill;
	float _windDirection;
	float _windSpeed;
	float _humidity;
	float _visibility;
	float _pressure;
	int _pressureRising;
	float _dewPoint;
	float _feelsLike;
	float _heatIndex;
	int _lastUpdateStatus;
	NSString* _fullName;
	MKSearchCompletion* _searchCompletion;
	int _updateInterval;
	NSTimer* _autoUpdateTimer;

}

@property (assign,nonatomic) id<CityUpdaterDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isLocalWeatherCity;                            //@synthesize isLocalWeatherCity=_isLocalWeatherCity - In the implementation block
@property (nonatomic,copy) NSString * woeid; 
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * locationID;                                //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,copy) NSString * state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * temperature;                               //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) unsigned conditionCode;                             //@synthesize conditionCode=_conditionCode - In the implementation block
@property (assign,nonatomic) unsigned observationTime;                           //@synthesize observationTime=_observationTime - In the implementation block
@property (assign,nonatomic) unsigned sunsetTime;                                //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (assign,nonatomic) unsigned sunriseTime;                               //@synthesize sunriseTime=_sunriseTime - In the implementation block
@property (assign,nonatomic) unsigned moonPhase;                                 //@synthesize moonPhase=_moonPhase - In the implementation block
@property (assign,setter=setUVIndex:,nonatomic) unsigned uvIndex;                //@synthesize uvIndex=_uvIndex - In the implementation block
@property (assign,nonatomic) float precipitationPast24Hours;                     //@synthesize precipitationPast24Hours=_precipitationPast24Hours - In the implementation block
@property (nonatomic,copy) NSString * link;                                      //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * deeplink;                                  //@synthesize deeplink=_deeplink - In the implementation block
@property (nonatomic,retain) CLLocation * location;                              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) float longitude; 
@property (assign,nonatomic) float latitude; 
@property (assign,nonatomic) int secondsFromGMT;                                 //@synthesize secondsFromGMT=_secondsFromGMT - In the implementation block
@property (assign,nonatomic) char isHourlyDataCelsius;                           //@synthesize isHourlyDataCelsius=_isHourlyDataCelsius - In the implementation block
@property (assign,nonatomic) unsigned lastUpdateDetail;                          //@synthesize lastUpdateDetail=_lastUpdateDetail - In the implementation block
@property (nonatomic,retain) NSDate * updateTime;                                //@synthesize updateTime=_updateTime - In the implementation block
@property (assign,getter=isDataCelsius,nonatomic) char dataCelsius;              //@synthesize dataCelsius=_dataCelsius - In the implementation block
@property (assign,nonatomic) float windChill;                                    //@synthesize windChill=_windChill - In the implementation block
@property (assign,nonatomic) float windDirection;                                //@synthesize windDirection=_windDirection - In the implementation block
@property (assign,nonatomic) float windSpeed;                                    //@synthesize windSpeed=_windSpeed - In the implementation block
@property (assign,nonatomic) float humidity;                                     //@synthesize humidity=_humidity - In the implementation block
@property (assign,nonatomic) float visibility;                                   //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) float pressure;                                     //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) int pressureRising;                                 //@synthesize pressureRising=_pressureRising - In the implementation block
@property (assign,nonatomic) float dewPoint;                                     //@synthesize dewPoint=_dewPoint - In the implementation block
@property (assign,nonatomic) float feelsLike;                                    //@synthesize feelsLike=_feelsLike - In the implementation block
@property (assign,nonatomic) float heatIndex;                                    //@synthesize heatIndex=_heatIndex - In the implementation block
@property (assign,nonatomic) char isDay; 
@property (assign,nonatomic) int lastUpdateStatus;                               //@synthesize lastUpdateStatus=_lastUpdateStatus - In the implementation block
@property (assign,nonatomic) char isUpdating;                                    //@synthesize isUpdating=_isUpdating - In the implementation block
@property (assign,nonatomic) char isRequestedByFrameworkClient;                  //@synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient - In the implementation block
@property (assign,nonatomic) char lockedForDemoMode;                             //@synthesize lockedForDemoMode=_lockedForDemoMode - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                  //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) MKSearchCompletion * searchCompletion;              //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (assign,nonatomic) int updateInterval;                                 //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) NSTimer * autoUpdateTimer;                          //@synthesize autoUpdateTimer=_autoUpdateTimer - In the implementation block
+(id)descriptionForWeatherUpdateDetail:(unsigned)arg1 ;
-(float)pressure;
-(char)isUpdating;
-(void)dealloc;
-(void)setDelegate:(id<CityUpdaterDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<CityUpdaterDelegate>)delegate;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)updateInterval;
-(void)setUpdateInterval:(int)arg1 ;
-(void)update;
-(CLLocation *)location;
-(id)displayName;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)link;
-(void)setSearchCompletion:(MKSearchCompletion *)arg1 ;
-(MKSearchCompletion *)searchCompletion;
-(id)updateTimeString;
-(void)setLatitude:(float)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(float)latitude;
-(float)longitude;
-(void)setUpdateTime:(NSDate *)arg1 ;
-(NSString *)locationID;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(unsigned)conditionCode;
-(void)setConditionCode:(unsigned)arg1 ;
-(float)dewPoint;
-(void)setDewPoint:(float)arg1 ;
-(float)heatIndex;
-(void)setHeatIndex:(float)arg1 ;
-(unsigned)moonPhase;
-(void)setMoonPhase:(unsigned)arg1 ;
-(NSString *)temperature;
-(void)setTemperature:(NSString *)arg1 ;
-(float)windChill;
-(void)setWindChill:(float)arg1 ;
-(float)windSpeed;
-(void)setWindSpeed:(float)arg1 ;
-(id)hourlyForecasts;
-(void)setHourlyForecasts:(id)arg1 ;
-(float)windDirection;
-(void)setWindDirection:(float)arg1 ;
-(NSDate *)updateTime;
-(int)secondsFromGMT;
-(void)_clearAutoUpdateTimer;
-(char)isLocalWeatherCity;
-(float)feelsLike;
-(id)windDirectionAsString:(float)arg1 ;
-(float)humidity;
-(unsigned)uvIndex;
-(int)weatherDataAge;
-(int)timeDigit;
-(void)setIsUpdating:(char)arg1 ;
-(id)dayForecasts;
-(void)setLastUpdateStatus:(int)arg1 ;
-(unsigned)lastUpdateDetail;
-(void)setLastUpdateDetail:(unsigned)arg1 ;
-(void)discardDataIfNeeded;
-(char)_isUpdating;
-(NSString *)deeplink;
-(void)setDeeplink:(NSString *)arg1 ;
-(void)setSecondsFromGMT:(int)arg1 ;
-(void)setDayForecasts:(id)arg1 ;
-(unsigned)observationTime;
-(void)setObservationTime:(unsigned)arg1 ;
-(unsigned)sunsetTime;
-(void)setSunsetTime:(unsigned)arg1 ;
-(unsigned)sunriseTime;
-(void)setSunriseTime:(unsigned)arg1 ;
-(char)isDataCelsius;
-(void)setDataCelsius:(char)arg1 ;
-(int)lastUpdateStatus;
-(void)setLocationID:(NSString *)arg1 ;
-(void)setHumidity:(float)arg1 ;
-(void)setFeelsLike:(float)arg1 ;
-(float)distanceToLatitude:(float)arg1 longitude:(float)arg2 ;
-(float)distanceToLocation:(id)arg1 ;
-(id)naturalLanguageDescriptionWithDescribedCondition:(out int*)arg1 ;
-(char)isDay;
-(int)primaryConditionForRange:(NSRange)arg1 ;
-(int)locationOfTime:(int)arg1 ;
-(void)associateWithDelegate:(id)arg1 ;
-(void)disassociateWithDelegate:(id)arg1 ;
-(void)setAutoUpdate:(char)arg1 ;
-(void)setIsDay:(char)arg1 ;
-(void)localWeatherDidBeginUpdate;
-(void)clearForecasts;
-(void)addDayForecast:(id)arg1 ;
-(void)addHourlyForecast:(id)arg1 ;
-(void)finishedUpdating:(int)arg1 statusDetail:(unsigned)arg2 ;
-(char)isUpdatingOrNoData;
-(id)cityAndState;
-(NSString *)woeid;
-(void)setWoeid:(NSString *)arg1 ;
-(char)populateWithDataFromCity:(id)arg1 ;
-(char)containsLatitude:(float)arg1 longitude:(float)arg2 ;
-(id)naturalLanguageDescription;
-(int)precipitationForecast;
-(void)_generateLocalizableStrings;
-(void)setIsLocalWeatherCity:(char)arg1 ;
-(void)setUVIndex:(unsigned)arg1 ;
-(float)precipitationPast24Hours;
-(void)setPrecipitationPast24Hours:(float)arg1 ;
-(char)isHourlyDataCelsius;
-(void)setIsHourlyDataCelsius:(char)arg1 ;
-(void)setPressure:(float)arg1 ;
-(int)pressureRising;
-(void)setPressureRising:(int)arg1 ;
-(char)isRequestedByFrameworkClient;
-(void)setIsRequestedByFrameworkClient:(char)arg1 ;
-(char)lockedForDemoMode;
-(void)setLockedForDemoMode:(char)arg1 ;
-(NSTimer *)autoUpdateTimer;
-(void)setAutoUpdateTimer:(NSTimer *)arg1 ;
-(float)visibility;
-(void)setVisibility:(float)arg1 ;
@end

