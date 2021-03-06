/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <RemoteMediaServices/NSCopying.h>

@interface RMSBeginDiscoveryMessage : PBCodable <NSCopying> {

	int _discoveryTypes;
	SCD_Struct_RM1 _has;

}

@property (assign,nonatomic) BOOL hasDiscoveryTypes; 
@property (assign,nonatomic) int discoveryTypes;                  //@synthesize discoveryTypes=_discoveryTypes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)discoveryTypes;
-(void)setDiscoveryTypes:(int)arg1 ;
-(void)setHasDiscoveryTypes:(BOOL)arg1 ;
-(BOOL)hasDiscoveryTypes;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

