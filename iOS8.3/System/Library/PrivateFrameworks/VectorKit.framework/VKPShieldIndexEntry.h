/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VectorKit/NSCopying.h>

@class NSString;

@interface VKPShieldIndexEntry : PBCodable <NSCopying> {

	SCD_Struct_VK263* _defaultForFeatureTypes;
	SCD_Struct_VK263* _shieldTypes;
	NSString* _artworkIdentifier;

}

@property (nonatomic,readonly) char hasArtworkIdentifier; 
@property (nonatomic,retain) NSString * artworkIdentifier;                        //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned shieldTypesCount; 
@property (nonatomic,readonly) int* shieldTypes; 
@property (nonatomic,readonly) unsigned defaultForFeatureTypesCount; 
@property (nonatomic,readonly) int* defaultForFeatureTypes; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)shieldTypesCount;
-(int*)shieldTypes;
-(NSString *)artworkIdentifier;
-(unsigned)defaultForFeatureTypesCount;
-(int)defaultForFeatureTypeAtIndex:(unsigned)arg1 ;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(void)clearShieldTypes;
-(int)shieldTypesAtIndex:(unsigned)arg1 ;
-(void)addShieldTypes:(int)arg1 ;
-(void)clearDefaultForFeatureTypes;
-(void)addDefaultForFeatureType:(int)arg1 ;
-(char)hasArtworkIdentifier;
-(void)setShieldTypes:(int*)arg1 count:(unsigned)arg2 ;
-(int*)defaultForFeatureTypes;
-(void)setDefaultForFeatureTypes:(int*)arg1 count:(unsigned)arg2 ;
@end

