/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:29:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DMXPCConnection.h>
#import <DataMigration/DMMigratorServiceProtocol.h>

@class NSString;

@interface DMConnection : DMXPCConnection <DMMigratorServiceProtocol> {

	NSString* _lastPlugin;

}

@property (nonatomic,readonly) NSString * lastPlugin;               //@synthesize lastPlugin=_lastPlugin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMessage:(id)arg1 ;
-(void)orderedPluginIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)lastPlugin;
-(void)testMigrationUIWithProgress:(char)arg1 forceInvert:(char)arg2 completion:(/*^block*/id)arg3 ;
@end

