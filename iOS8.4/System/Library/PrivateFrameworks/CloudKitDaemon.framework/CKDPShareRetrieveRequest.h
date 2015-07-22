/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPShareIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPShareRetrieveRequest : PBRequest <NSCopying> {

	CKDPShareIdentifier* _shareId;
	CKDPRecordZoneIdentifier* _zoneId;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                  //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneId; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneId;              //@synthesize zoneId=_zoneId - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setZoneId:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(BOOL)hasZoneId;
-(CKDPRecordZoneIdentifier *)zoneId;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
