/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface MBSSnapshotID : PBCodable {

	unsigned _snapshotID;
	SCD_Struct_MB4 _has;

}

@property (assign,nonatomic) char hasSnapshotID; 
@property (assign,nonatomic) unsigned snapshotID;              //@synthesize snapshotID=_snapshotID - In the implementation block
-(void)setSnapshotID:(unsigned)arg1 ;
-(char)hasSnapshotID;
-(void)setHasSnapshotID:(char)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)snapshotID;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
