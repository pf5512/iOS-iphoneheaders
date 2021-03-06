/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSData, NSMutableArray, GEORPUserCredentials, GEOLocation;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {

	NSString* _countryCode;
	NSData* _devicePushToken;
	NSString* _hwMachine;
	NSString* _inputLanguage;
	NSString* _osRelease;
	NSMutableArray* _requestElements;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	GEOLocation* _userLocation;

}

@property (nonatomic,retain) NSMutableArray * requestElements;                    //@synthesize requestElements=_requestElements - In the implementation block
@property (nonatomic,readonly) BOOL hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine;                                //@synthesize hwMachine=_hwMachine - In the implementation block
@property (nonatomic,readonly) BOOL hasOsRelease; 
@property (nonatomic,retain) NSString * osRelease;                                //@synthesize osRelease=_osRelease - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage;                            //@synthesize inputLanguage=_inputLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;              //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken;                            //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail;                                //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,readonly) BOOL hasUserLocation; 
@property (nonatomic,retain) GEOLocation * userLocation;                          //@synthesize userLocation=_userLocation - In the implementation block
-(GEOLocation *)userLocation;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(BOOL)hasUserLocation;
-(void)setRequestElements:(NSMutableArray *)arg1 ;
-(unsigned long long)requestElementsCount;
-(void)clearRequestElements;
-(NSMutableArray *)requestElements;
-(void)setInputLanguage:(NSString *)arg1 ;
-(BOOL)hasInputLanguage;
-(NSString *)inputLanguage;
-(void)setHwMachine:(NSString *)arg1 ;
-(BOOL)hasHwMachine;
-(NSString *)hwMachine;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(BOOL)hasUserCredentials;
-(GEORPUserCredentials *)userCredentials;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(BOOL)hasDevicePushToken;
-(BOOL)hasUserEmail;
-(NSData *)devicePushToken;
-(NSString *)userEmail;
-(void)setOsRelease:(NSString *)arg1 ;
-(void)addRequestElement:(id)arg1 ;
-(id)requestElementAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOsRelease;
-(NSString *)osRelease;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(NSString *)countryCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

