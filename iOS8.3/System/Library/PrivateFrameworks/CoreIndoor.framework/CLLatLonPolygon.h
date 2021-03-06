/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:11:20 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@interface CLLatLonPolygon : PBCodable <NSCopying> {

	SCD_Struct_CL11* _latitudes;
	SCD_Struct_CL11* _longitudes;
	double _tolerance;

}

@property (nonatomic,readonly) unsigned latitudesCount; 
@property (nonatomic,readonly) double* latitudes; 
@property (nonatomic,readonly) unsigned longitudesCount; 
@property (nonatomic,readonly) double* longitudes; 
@property (assign,nonatomic) double tolerance;                        //@synthesize tolerance=_tolerance - In the implementation block
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)latitudesCount;
-(void)clearLatitudes;
-(double)latitudeAtIndex:(unsigned)arg1 ;
-(void)addLatitude:(double)arg1 ;
-(unsigned)longitudesCount;
-(void)clearLongitudes;
-(double)longitudeAtIndex:(unsigned)arg1 ;
-(void)addLongitude:(double)arg1 ;
-(double*)latitudes;
-(void)setLatitudes:(double*)arg1 count:(unsigned)arg2 ;
-(double*)longitudes;
-(void)setLongitudes:(double*)arg1 count:(unsigned)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

