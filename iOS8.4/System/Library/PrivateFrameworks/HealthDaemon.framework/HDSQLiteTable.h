/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface HDSQLiteTable : NSObject {

	NSMutableArray* _columns;
	NSMutableArray* _tableConstraints;
	NSString* _tableName;

}

@property (nonatomic,copy) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
+(id)SQLToAddColumnWithSQL:(id)arg1 toTableNamed:(id)arg2 ;
+(id)tableWithSQL:(id)arg1 ;
+(id)SQLToInsertColumnNames:(id)arg1 fromTableNamed:(id)arg2 intoTableNamed:(id)arg3 ;
+(id)SQLToDropTableNamed:(id)arg1 ;
+(id)SQLToRenameTable:(id)arg1 to:(id)arg2 ;
-(NSString *)tableName;
-(void)setTableName:(NSString *)arg1 ;
-(BOOL)removeColumn:(id)arg1 ;
-(BOOL)renameColumn:(id)arg1 to:(id)arg2 ;
-(id)creationSQL;
-(id)_initWithTableSQL:(id)arg1 ;
-(id)_columnNamed:(id)arg1 ;
-(unsigned long long)_indexOfColumnNamed:(id)arg1 ;
-(id)columnNames;
@end

