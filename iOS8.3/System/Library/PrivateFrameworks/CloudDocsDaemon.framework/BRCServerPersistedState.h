/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:47 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/NSSecureCoding.h>
#import <CloudDocsDaemon/NSCopying.h>
#import <CloudDocsDaemon/PQLBindable.h>

@class NSMutableDictionary, BRCServerChangeState, NSString;

@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable> {

	NSMutableDictionary* _pendingMigrations;
	BRCServerChangeState* _sharedDatabaseChangeState;
	long long _nextRank;

}

@property (assign,nonatomic) long long nextRank;                                  //@synthesize nextRank=_nextRank - In the implementation block
@property (retain) BRCServerChangeState * sharedDatabaseChangeState;              //@synthesize sharedDatabaseChangeState=_sharedDatabaseChangeState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToDB:(id)arg1 ;
-(void)initiateMigrationQueryForContainerIDs:(id)arg1 key:(id)arg2 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(BRCServerChangeState *)sharedDatabaseChangeState;
-(long long)nextRank;
-(void)setNextRank:(long long)arg1 ;
-(id)migrationQueryKeyForContainerID:(id)arg1 continuationCursor:(id*)arg2 ;
-(id)dumpMigrationQueriesForContainerID:(id)arg1 ;
-(void)migrationQueryForContainerID:(id)arg1 key:(id)arg2 didCompleteWithContinuationCursor:(id)arg3 ;
-(char)containerIDIsPendingMigration:(id)arg1 ;
-(id)initWithState:(id)arg1 ;
-(void)setSharedDatabaseChangeState:(BRCServerChangeState *)arg1 ;
@end

