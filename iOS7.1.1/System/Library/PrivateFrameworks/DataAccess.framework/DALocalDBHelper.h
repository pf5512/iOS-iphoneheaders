/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataAccess/DataAccess-Structs.h>
@class NoteContext;

@interface DALocalDBHelper : NSObject {

	void* _abDB;
	int _abConnectionCount;
	CalDatabaseRef _calDB;
	int _calConnectionCount;
	void* _bookmarkDB;
	int _bookmarkConnectionCount;
	NoteContext* _noteDB;
	int _noteConnectionCount;
	/*^block*/ id _calUnitTestCallbackBlock;

}
+(void)abSetTestABDBDir:(id)arg1 ;
+(id)abTestABDBDir;
+(void)calSetTestCalDBDir:(id)arg1 ;
+(id)calTestCalDBDir;
+(id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2 ;
-(void)_registerForAddressBookYieldNotifications;
-(void)_registerForCalendarYieldNotifications;
-(bool)noteSaveDB;
-(void)abProcessAddedRecords;
-(void)abProcessAddedImages;
-(id)abConstraintPlistPath;
-(void)calOpenDBWithChangeLogging;
-(void*)bookmarkDB;
-(bool)bookmarkOpenDB;
-(void)bookmarkSaveDB;
-(void)bookmarkCloseDBAndSave:(bool)arg1 ;
-(void)noteOpenDB;
-(bool)noteCloseDBAndSave:(bool)arg1 ;
-(int)noteConnectionCount;
-(void)calUnitTestsSetCallbackBlockForSave:(/*^block*/ id)arg1 ;
-(int)calConnectionCount;
-(bool)calSaveDBAndFlushCaches;
-(void)abOpenDB;
-(bool)abCloseDBAndSave:(bool)arg1 ;
-(CalDatabaseRef)calDB;
-(void)calOpenDB;
-(bool)calCloseDBAndSave:(bool)arg1 ;
-(void*)abDB;
-(bool)abSaveDB;
-(bool)calSaveDB;
-(id)noteDB;
@end
