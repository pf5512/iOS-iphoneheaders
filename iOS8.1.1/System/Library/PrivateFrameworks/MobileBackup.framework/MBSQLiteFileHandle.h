/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/MBFileHandleProxy.h>

@class MBFileHandle;

@interface MBSQLiteFileHandle : MBFileHandleProxy {

	MBFileHandle* _originalFileHandle;

}
+(BOOL)setAttributes:(id)arg1 ofSQLiteFileAtPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)isSQLiteFileAtPath:(id)arg1 result:(BOOL*)arg2 error:(id*)arg3 ;
+(long long)lastModifiedForSQLiteFileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)copySQLiteFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)isSQLiteFileHandle:(id)arg1 result:(BOOL*)arg2 error:(id*)arg3 ;
+(BOOL)copySQLiteFileAtPath:(id)arg1 toPath:(id)arg2 timeout:(double)arg3 error:(id*)arg4 ;
+(int)_openFlagForProtectionClass:(int)arg1 ;
+(BOOL)_removeJournalsForSQLiteFileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)_removeSQLiteFileAtPath:(id)arg1 error:(id*)arg2 ;
+(id)SQLiteFileHandleWithOriginalFileHandle:(id)arg1 copiedFileHandle:(id)arg2 ;
-(id)initWithOriginalFileHandle:(id)arg1 copiedFileHandle:(id)arg2 ;
-(BOOL)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)closeWithError:(id*)arg1 ;
@end

