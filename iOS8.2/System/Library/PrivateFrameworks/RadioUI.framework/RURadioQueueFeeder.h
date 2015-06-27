/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <MediaPlayer/MPQueueFeeder.h>

@class RURadioAdObserver, NSMapTable, NSArray, RadioStation, RadioStationSkipController, NSMutableSet;

@interface RURadioQueueFeeder : MPQueueFeeder {

	RURadioAdObserver* _adObserver;
	NSMapTable* _adSlotToAllAdTracks;
	NSMapTable* _adSlotToInsertedAdTracks;
	NSMapTable* _adSlotToRadioTrack;
	char _didReceiveTracklistEnd;
	NSMapTable* _fetchingTracksCompletionHandlersByStation;
	char _hasReceivedStreamTrack;
	int _maximumGetTracksRetryCount;
	int _playbackMode;
	NSArray* _previousDatabaseTrackPlaybackDescriptorQueue;
	NSMapTable* _radioTrackToAdSlot;
	RadioStation* _station;
	RadioStationSkipController* _stationSkipController;
	NSMapTable* _stationTracklistRetrievalRetryCount;
	NSArray* _tracks;
	NSMutableSet* _visibleAdSlots;
	char _wasUsingBackgroundNetwork;

}

@property (nonatomic,retain) RadioStation * station; 
@property (nonatomic,copy,readonly) NSArray * allPreparedAdSlotRadioTracks; 
@property (nonatomic,readonly) NSArray * tracksForNextPlaybackGroup; 
@property (nonatomic,copy) NSArray * tracks;                                             //@synthesize tracks=_tracks - In the implementation block
+(char)isExplicitTracksEnabled;
+(void)_updateIsExplicitContentRestrictedAndPostNotification:(char)arg1 removeTracks:(char)arg2 ;
+(void)_explicitContentAllowedDidChangeNotification:(id)arg1 ;
+(char)isUserDefaultExplicitTracksEnabled;
+(id)_tracksByRemovingPromotionalContentFromTracks:(id)arg1 ;
+(char)isProfileExplicitContentRestricted;
+(id)_tracksWithPromotionalContentFromTracks:(id)arg1 ;
+(void)setUserDefaultExplicitTracksEnabled:(char)arg1 ;
+(int)maximumNumberOfTracksToFetch;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(int)playbackMode;
-(id)copyRawItemAtIndex:(unsigned)arg1 ;
-(id)playbackInfoAtIndex:(unsigned)arg1 ;
-(id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3 ;
-(id)localizedPositionInPlaylistString:(id)arg1 ;
-(char)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(char)arg2 ;
-(char)hasValidItemAtIndex:(unsigned)arg1 ;
-(unsigned)initialPlaybackQueueDepthForStartingIndex:(unsigned)arg1 ;
-(char)canSkipItem:(id)arg1 ;
-(char)canSkipToPreviousItem;
-(unsigned)itemTypeForIndex:(unsigned)arg1 ;
-(char)playerPreparesItemsForPlaybackAsynchronously;
-(SCD_Struct_RU5)skipLimit;
-(char)userCanChangeShuffleAndRepeatType;
-(unsigned)realRepeatType;
-(void)getContainerType:(unsigned*)arg1 mediaLibraryContainerPersistentID:(long long*)arg2 storeContainerID:(id*)arg3 storePersonalizedContainerID:(id*)arg4 ;
-(void)setAVController:(id)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)_itemWillChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(Class)itemClass;
-(unsigned)itemCount;
-(void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(NSArray *)allPreparedAdSlotRadioTracks;
-(id)preparedAdSlotForRadioTrack:(id)arg1 ;
-(char)isRadioQueueFeeder;
-(void)_adSlotAdTracksDidChangeNotification:(id)arg1 ;
-(void)_adTrackActionDidFinishNotification:(id)arg1 ;
-(void)_adTrackActionWillBeginNotification:(id)arg1 ;
-(void)_adTrackDidFailToLoadNotification:(id)arg1 ;
-(void)_itemIsBannedDidChangedNotification:(id)arg1 ;
-(void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1 ;
-(void)_updateForLoadedStoreBag:(id)arg1 ;
-(void)_storeBagDidLoadNotification:(id)arg1 ;
-(char)_hasReceivedStreamTrack;
-(id)_trackAtIndex:(unsigned)arg1 ;
-(int)_playbackModeForTrack:(id)arg1 ;
-(char)_canHavePlaceholderTrack;
-(char)_reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(char)arg2 startPlayback:(char)arg3 ;
-(void)_playerContentsDidChangeNotification:(id)arg1 ;
-(void)_updateTracksForAdSlot:(id)arg1 radioTrack:(id)arg2 ;
-(id)_adSlotForAdTrack:(id)arg1 ;
-(id)_currentTrackPlaybackDescriptorQueueWithCurrentItem:(id)arg1 shouldIncludePlaybackInformation:(char)arg2 skipDate:(id)arg3 ;
-(char)_endPlaybackIfNecessaryForNetworkType;
-(unsigned)_indexOfCurrentItem;
-(void)_updateWithTracks:(id)arg1 tracklistActionType:(int)arg2 options:(int)arg3 ;
-(void)_fetchAdditionalTracksWithBaseIndex:(int)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_fetchNextTrackAdSlotIfNeeded;
-(void)_updateTracksForChangedTrackPlaybackDescriptorQueue;
-(void)_numberOfAvailableSkipsDidChangeNotification:(id)arg1 ;
-(void)_setAdSlot:(id)arg1 forRadioTrack:(id)arg2 ;
-(unsigned)_indexOfItem:(id)arg1 ;
-(void)_performGetTracksOperationForStation:(id)arg1 withNumberOfTracks:(int)arg2 ;
-(void)_fetchAdSlotIfNeededForRadioTrack:(id)arg1 inStation:(id)arg2 ;
-(unsigned)_indexOfItem:(id)arg1 inTracks:(id)arg2 ;
-(void)_applyTracksForAdSlot:(id)arg1 radioTrack:(id)arg2 currentPlayingItem:(id)arg3 toTracks:(id)arg4 ;
-(void)setTracks:(NSArray *)arg1 ;
-(id)_tracksByRemovingPlayedTracks:(id)arg1 ;
-(NSArray *)tracksForNextPlaybackGroup;
-(RadioStation *)station;
-(void)setStation:(RadioStation *)arg1 ;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(NSArray *)tracks;
-(char)canSeek;
@end
