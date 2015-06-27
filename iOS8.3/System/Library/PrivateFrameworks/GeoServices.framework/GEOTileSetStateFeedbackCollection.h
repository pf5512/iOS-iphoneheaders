/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOTileSetStateFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	double _durationInOldState;
	double _newCoverage;
	double _oldCoverage;
	double _sessionRelativeTimestamp;
	int _tileSetStateType;
	SCD_Struct_GE62 _has;

}

@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp;               //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (assign,nonatomic) char hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState;                     //@synthesize durationInOldState=_durationInOldState - In the implementation block
@property (assign,nonatomic) char hasTileSetStateType; 
@property (assign,nonatomic) int tileSetStateType;                          //@synthesize tileSetStateType=_tileSetStateType - In the implementation block
@property (assign,nonatomic) char hasOldCoverage; 
@property (assign,nonatomic) double oldCoverage;                            //@synthesize oldCoverage=_oldCoverage - In the implementation block
@property (assign,nonatomic) char hasNewCoverage; 
@property (assign,nonatomic) double newCoverage;                            //@synthesize newCoverage=_newCoverage - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(void)setTileSetStateType:(int)arg1 ;
-(void)setNewCoverage:(double)arg1 ;
-(void)setOldCoverage:(double)arg1 ;
-(void)setDurationInOldState:(double)arg1 ;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasDurationInOldState:(char)arg1 ;
-(char)hasDurationInOldState;
-(double)durationInOldState;
-(void)setHasSessionRelativeTimestamp:(char)arg1 ;
-(char)hasSessionRelativeTimestamp;
-(void)setHasTileSetStateType:(char)arg1 ;
-(char)hasTileSetStateType;
-(void)setHasOldCoverage:(char)arg1 ;
-(char)hasOldCoverage;
-(void)setHasNewCoverage:(char)arg1 ;
-(char)hasNewCoverage;
-(double)sessionRelativeTimestamp;
-(int)tileSetStateType;
-(double)oldCoverage;
-(double)newCoverage;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
