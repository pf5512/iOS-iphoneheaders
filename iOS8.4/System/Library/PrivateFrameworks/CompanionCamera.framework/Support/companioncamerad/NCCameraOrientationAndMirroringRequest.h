/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <companioncamerad/companioncamerad-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <companioncamerad/NSCopying.h>

@interface NCCameraOrientationAndMirroringRequest : PBRequest <NSCopying> {

	int _orientation;
	BOOL _mirrored;
	SCD_Struct_NC2 _has;

}

@property (assign,nonatomic) BOOL hasOrientation; 
@property (assign,nonatomic) int orientation;                  //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL hasMirrored; 
@property (assign,nonatomic) BOOL mirrored;                    //@synthesize mirrored=_mirrored - In the implementation block
-(void)setHasOrientation:(BOOL)arg1 ;
-(BOOL)hasOrientation;
-(void)setHasMirrored:(BOOL)arg1 ;
-(BOOL)hasMirrored;
-(BOOL)mirrored;
-(void)setMirrored:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
