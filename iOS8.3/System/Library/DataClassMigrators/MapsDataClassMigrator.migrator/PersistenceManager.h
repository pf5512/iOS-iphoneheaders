/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:26:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, MapsPaths, RAPStorage;

@interface PersistenceManager : NSObject {

	NSString* _settingsDirectoryPath;
	MapsPaths* _locations;
	RAPStorage* _directionsRecordingsStorage;
	RAPStorage* _searchRecordingsStorage;

}

@property (nonatomic,readonly) NSString * settingsDirectoryPath;              //@synthesize settingsDirectoryPath=_settingsDirectoryPath - In the implementation block
+(id)sharedManager;
-(id)readMSPHistory;
-(id)readNanoHistory;
-(id)readFailedMSPSearches;
-(id)readFailedMSPDirectionsRequests;
-(char)writeMSPHistory:(id)arg1 error:(id*)arg2 ;
-(char)writeFailedMSPSearches:(id)arg1 error:(id*)arg2 ;
-(char)checkOrCreateHistorySynced;
-(id)initWithPersistenceData:(id)arg1 ;
-(NSString *)settingsDirectoryPath;
-(id)_searchResultsSettingsPath:(int)arg1 ;
-(id)readMSPBookmarksDictionary;
-(char)_createSyncedFileIfNotExistsWithName:(id)arg1 ;
-(char)_deleteSyncedFileWithName:(id)arg1 ;
-(id)readLegacyBookmarksDictionary;
-(void)deleteDirections;
-(id)_directionsRecordingsDirectoryURLCreatingIfNonexistent:(char)arg1 error:(id*)arg2 ;
-(void)deleteFailedSearches;
-(void)deleteFailedDirectionsRequests;
-(char)_writeMSPHistoryFromHistoryItems:(id)arg1 syncItemsToRAPStorage:(char)arg2 error:(id*)arg3 ;
-(char)_syncRAPStorageWithItemsFromHistory:(id)arg1 error:(id*)arg2 ;
-(id)readMSPHistoryDictionary;
-(id)readNanoHistoryDictionary;
-(id)_readFailedMSPItemsAtPath:(id)arg1 ;
-(id)_readFailedItemsAtPath:(id)arg1 ;
-(char)_writeFailedMSPHistoryItems:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(char)_writeFailedHistoryItems:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(void)deleteTransitAppRanker;
-(id)_searchRecordingsDirectoryURLCreatingIfNonexistent:(char)arg1 error:(id*)arg2 ;
-(id)_directionsRecordingsStorage:(id*)arg1 ;
-(id)_searchRecordingsStorage:(id*)arg1 ;
-(char)readDirectionsRecordings:(out id*)arg1 associatedHistoryItems:(out id*)arg2 fromHistory:(id)arg3 error:(out id*)arg4 ;
-(id)_canonicalHistoryItemForItem:(id)arg1 inHistory:(id)arg2 ;
-(char)readSearchRecording:(out id*)arg1 forHistoryItem:(id)arg2 fromHistory:(id)arg3 error:(out id*)arg4 ;
-(char)writeSearchRecordingWithContentsOfObject:(id)arg1 forHistoryItem:(id)arg2 inHistory:(id)arg3 error:(out id*)arg4 ;
-(char)writeDirections:(id)arg1 error:(id*)arg2 ;
-(char)writeLegacyBookmarks:(id)arg1 error:(id*)arg2 ;
-(id)readLegacyBookmarks;
-(id)readMSPBookmarks;
-(void)deleteLegacyBookmarks;
-(char)writeMSPBookmarks:(id)arg1 error:(id*)arg2 ;
-(char)deleteBookmarksSyncedFile;
-(char)writeSearchResults:(id)arg1 toType:(int)arg2 error:(id*)arg3 ;
-(id)readSearchResultsType:(int)arg1 error:(id*)arg2 ;
-(char)writeLegacyHistory:(id)arg1 error:(id*)arg2 ;
-(id)readLegacyHistory;
-(id)readFailedSearches;
-(char)writeFailedSearches:(id)arg1 error:(id*)arg2 ;
-(char)writeMSPHistoryWithLegacyHistoryItems:(id)arg1 error:(id*)arg2 ;
-(char)deleteHistorySyncedFile;
-(char)writePins:(id)arg1 error:(id*)arg2 ;
-(id)readDirections;
-(char)writeDirectionsRecording:(id)arg1 forDirectionsHistoryItem:(id)arg2 inHistory:(id)arg3 error:(out id*)arg4 ;
-(char)writeTransitAppRanker:(id)arg1 error:(id*)arg2 ;
-(char)writeFailedMSPDirectionsRequests:(id)arg1 error:(id*)arg2 ;
-(id)readFailedDirectionsRequests;
-(id)readBookmarksDictionary;
-(char)getDirectionsRecording:(out id*)arg1 forHistoryItem:(id)arg2 fromHistory:(id)arg3 error:(out id*)arg4 ;
-(char)writeFailedDirectionsRequests:(id)arg1 error:(id*)arg2 ;
-(void)editSearchRecordingForHistoryItem:(id)arg1 fromHistory:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)readTransitAppRanker;
-(char)checkOrCreateBookmarksSynced;
-(void)deleteHistory;
-(void)_deleteItemAtPath:(id)arg1 ;
-(id)readPins;
@end

