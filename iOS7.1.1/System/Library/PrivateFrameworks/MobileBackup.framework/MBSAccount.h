/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:21:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface MBSAccount : PBCodable {

	NSString* _accountID;
	NSMutableArray* _backupUDIDs;
	BOOL _loggingEnabled;
	SCD_Struct_MB4 _has;

}

@property (nonatomic,readonly) BOOL hasAccountID; 
@property (nonatomic,retain) NSString * accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSMutableArray * backupUDIDs;              //@synthesize backupUDIDs=_backupUDIDs - In the implementation block
@property (assign,nonatomic) BOOL hasLoggingEnabled; 
@property (assign,nonatomic) BOOL loggingEnabled;                       //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
-(id)backupUDIDs;
-(unsigned)backupUDIDsCount;
-(BOOL)hasLoggingEnabled;
-(void)setBackupUDIDs:(id)arg1 ;
-(void)addBackupUDID:(id)arg1 ;
-(BOOL)hasAccountID;
-(void)clearBackupUDIDs;
-(id)backupUDIDAtIndex:(unsigned)arg1 ;
-(void)setHasLoggingEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setAccountID:(id)arg1 ;
-(id)accountID;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)loggingEnabled;
-(void)setLoggingEnabled:(BOOL)arg1 ;
@end

