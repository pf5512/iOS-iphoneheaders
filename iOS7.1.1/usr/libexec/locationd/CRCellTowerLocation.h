/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, CRLocation, NSMutableArray;

@interface CRCellTowerLocation : PBCodable <NSCopying> {

	NSString* _appBundleId;
	int _arfcn;
	int _ci;
	int _ecn0;
	int _lac;
	CRLocation* _location;
	int _mcc;
	int _mnc;
	NSMutableArray* _neighbors;
	NSString* _operatorName;
	int _psc;
	int _rat;
	int _rscp;
	int _rssi;
	int _serverHash;
	int _transmit;
	SCD_Struct_CR5 _has;

}

@property (assign,nonatomic) int mcc;                                 //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                                 //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int lac;                                 //@synthesize lac=_lac - In the implementation block
@property (assign,nonatomic) int ci;                                  //@synthesize ci=_ci - In the implementation block
@property (assign,nonatomic) int rssi;                                //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasArfcn; 
@property (assign,nonatomic) int arfcn;                               //@synthesize arfcn=_arfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPsc; 
@property (assign,nonatomic) int psc;                                 //@synthesize psc=_psc - In the implementation block
@property (nonatomic,retain) CRLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                  //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                          //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasTransmit; 
@property (assign,nonatomic) int transmit;                            //@synthesize transmit=_transmit - In the implementation block
@property (nonatomic,readonly) BOOL hasOperatorName; 
@property (nonatomic,retain) NSString * operatorName;                 //@synthesize operatorName=_operatorName - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                                //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                                //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasRat; 
@property (assign,nonatomic) int rat;                                 //@synthesize rat=_rat - In the implementation block
@property (nonatomic,retain) NSMutableArray * neighbors;              //@synthesize neighbors=_neighbors - In the implementation block
-(int)mcc;
-(int)mnc;
-(BOOL)hasArfcn;
-(int)arfcn;
-(BOOL)hasPsc;
-(void)setMcc:(int)arg1 ;
-(void)setMnc:(int)arg1 ;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(int)serverHash;
-(void)setNeighbors:(id)arg1 ;
-(unsigned)neighborsCount;
-(void)clearNeighbors;
-(void)setArfcn:(int)arg1 ;
-(void)setHasArfcn:(BOOL)arg1 ;
-(void)setPsc:(int)arg1 ;
-(void)setHasPsc:(BOOL)arg1 ;
-(void)setTransmit:(int)arg1 ;
-(void)setHasTransmit:(BOOL)arg1 ;
-(BOOL)hasTransmit;
-(BOOL)hasOperatorName;
-(void)setEcn0:(int)arg1 ;
-(void)setHasEcn0:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setRscp:(int)arg1 ;
-(void)setHasRscp:(BOOL)arg1 ;
-(BOOL)hasRscp;
-(void)setRat:(int)arg1 ;
-(void)setHasRat:(BOOL)arg1 ;
-(BOOL)hasRat;
-(int)lac;
-(void)setLac:(int)arg1 ;
-(int)ci;
-(void)setCi:(int)arg1 ;
-(void)setRssi:(int)arg1 ;
-(int)transmit;
-(int)ecn0;
-(int)rscp;
-(int)rat;
-(id)neighbors;
-(int)psc;
-(int)rssi;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)location;
-(id)dictionaryRepresentation;
-(id)neighborAtIndex:(unsigned)arg1 ;
-(void)addNeighbor:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)operatorName;
-(void)setOperatorName:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(void)setAppBundleId:(id)arg1 ;
-(BOOL)hasAppBundleId;
-(id)appBundleId;
@end

