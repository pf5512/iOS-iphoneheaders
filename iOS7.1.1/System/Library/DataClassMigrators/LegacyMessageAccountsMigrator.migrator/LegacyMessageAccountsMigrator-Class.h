/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/LegacyMessageAccountsMigrator.migrator/LegacyMessageAccountsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ACAccountStore, NSArray;

@interface LegacyMessageAccountsMigrator : DataClassMigrator {

	ACAccountStore* _accountStore;
	NSArray* _legacyMessageAccounts;
	unsigned long long _numberOfAccountsMigrated;

}
+(id)_legacyAccountsPlistPath;
-(bool)specifyDefaultSendingAccountIfNotSet;
-(bool)migrateLegacyAccounts;
-(id)initWithPath:(id)arg1 accountStore:(id)arg2 ;
-(id)dataClassName;
-(bool)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
-(void)dealloc;
-(id)init;
@end

