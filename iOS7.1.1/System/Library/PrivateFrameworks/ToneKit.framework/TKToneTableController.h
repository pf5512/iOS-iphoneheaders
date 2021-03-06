/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/TKVibrationPickerViewControllerDelegate.h>
#import <ToneKit/TKToneClassicsTableViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <iTunesStoreUI/MPMediaPickerControllerDelegate.h>

@protocol TKTonePickerStyleProvider;
@class NSMutableArray, NSIndexPath, NSString, UITableView, TKVibrationPickerViewController, MPMediaPickerController, MPMusicPlayerController, TLToneManager, UIImage, NSArray, UIView;

@interface TKToneTableController : NSObject <TKVibrationPickerViewControllerDelegate, TKToneClassicsTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, MPMediaPickerControllerDelegate> {

	id _delegate;
	NSMutableArray* _ringtoneGroupLists;
	NSMutableArray* _ringtoneGroupNames;
	NSIndexPath* _selectedRingtoneIndexPath;
	bool _showsNone;
	bool _showsDefault;
	NSString* _noneString;
	NSString* _classicTextTonesIdentifier;
	NSString* _classicRingtonesIdentifier;
	NSString* _defaultIdentifier;
	bool _showsNothingSelected;
	bool _showsRingtonesStore;
	bool _noneAtTop;
	UITableView* _tableView;
	bool _showsVibrations;
	bool _showsDefaultVibration;
	bool _showsUserGeneratedVibrations;
	bool _showsNoneVibration;
	bool _showsNoVibrationSelected;
	bool _allowsDeletingCurrentSystemVibration;
	NSString* _selectedVibrationIdentifier;
	TKVibrationPickerViewController* _vibrationPickerViewController;
	bool _showsMedia;
	bool _showMediaAtTop;
	MPMediaPickerController* _mediaPickerController;
	NSMutableArray* _mediaItems;
	MPMusicPlayerController* _musicPlayer;
	TLToneManager* _ringtoneManager;
	id _avController;
	bool _startedInteruption;
	bool _customAVController;
	bool _tonePicker;
	unsigned long long _filter;
	unsigned long long _systemRingtoneStartIndex;
	Class _customTableViewCellClass;
	int _context;
	bool _showsStoreButtonInNavigationBar;
	UIImage* checkmarkImage;
	NSArray* classicTextToneIdentifiers;
	NSArray* classicRingtoneIdentifiers;
	NSIndexPath* selectedClassicTextTonesIndexPath;
	NSIndexPath* selectedClassicRingtonesIndexPath;
	long long selectedClassicTextToneIndex;
	long long selectedClassicRingtoneIndex;
	NSString* _vibrationAccountIdentifier;
	<TKTonePickerStyleProvider>* _styleProvider;
	UIView* _defaultSectionHeaderView;
	UIView* _mediaSectionHeaderView;
	NSMutableArray* _regularToneSectionHeaderViews;

}

@property (assign,nonatomic) bool showsVibrations;                                                                                   //@synthesize showsVibrations=_showsVibrations - In the implementation block
@property (assign,nonatomic) bool showsDefaultVibration;                                                                             //@synthesize showsDefaultVibration=_showsDefaultVibration - In the implementation block
@property (assign,nonatomic) bool showsUserGeneratedVibrations;                                                                      //@synthesize showsUserGeneratedVibrations=_showsUserGeneratedVibrations - In the implementation block
@property (assign,nonatomic) bool showsNoneVibration;                                                                                //@synthesize showsNoneVibration=_showsNoneVibration - In the implementation block
@property (assign,nonatomic) bool showsNoVibrationSelected;                                                                          //@synthesize showsNoVibrationSelected=_showsNoVibrationSelected - In the implementation block
@property (assign,nonatomic) bool allowsDeletingCurrentSystemVibration;                                                              //@synthesize allowsDeletingCurrentSystemVibration=_allowsDeletingCurrentSystemVibration - In the implementation block
@property (nonatomic,retain) NSString * selectedVibrationIdentifier;                                                                 //@synthesize selectedVibrationIdentifier=_selectedVibrationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * vibrationAccountIdentifier;                                                                  //@synthesize vibrationAccountIdentifier=_vibrationAccountIdentifier - In the implementation block
@property (nonatomic,retain) <TKTonePickerStyleProvider> * styleProvider; 
@property (setter=setDefaultIdentifier:,nonatomic,retain) id defaultIdentifier;                                                      //@synthesize defaultIdentifier=_defaultIdentifier - In the implementation block
@property (setter=_setStyleProvider:,nonatomic,retain) <TKTonePickerStyleProvider> * _styleProvider;                                 //@synthesize styleProvider=_styleProvider - In the implementation block
@property (setter=_setDefaultSectionHeaderView:,nonatomic,retain) UIView * _defaultSectionHeaderView;                                //@synthesize defaultSectionHeaderView=_defaultSectionHeaderView - In the implementation block
@property (setter=_setMediaSectionHeaderView:,nonatomic,retain) UIView * _mediaSectionHeaderView;                                    //@synthesize mediaSectionHeaderView=_mediaSectionHeaderView - In the implementation block
@property (setter=_setRegularToneSectionHeaderViews:,nonatomic,retain) NSMutableArray * _regularToneSectionHeaderViews;              //@synthesize regularToneSectionHeaderViews=_regularToneSectionHeaderViews - In the implementation block
@property (nonatomic,retain) UIImage * checkmarkImage; 
@property (nonatomic,retain) NSArray * classicTextToneIdentifiers; 
@property (nonatomic,retain) NSArray * classicRingtoneIdentifiers; 
@property (nonatomic,retain) NSIndexPath * selectedClassicTextTonesIndexPath; 
@property (nonatomic,retain) NSIndexPath * selectedClassicRingtonesIndexPath; 
@property (assign,nonatomic) long long selectedClassicTextToneIndex; 
@property (assign,nonatomic) long long selectedClassicRingtoneIndex; 
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)setSelectedRingtoneIdentifier:(id)arg1 ;
-(void)setSelectedVibrationIdentifier:(id)arg1 ;
-(void)setShowsNothingSelected:(bool)arg1 ;
-(void)setShowsNone:(bool)arg1 ;
-(void)setNoneAtTop:(bool)arg1 ;
-(void)setShowsDefault:(bool)arg1 ;
-(void)setShowsVibrations:(bool)arg1 ;
-(id)selectedRingtoneIdentifier;
-(void)stopPlaying;
-(void)setCustomTableViewCellClass:(Class)arg1 ;
-(id)selectedVibrationIdentifier;
-(void)setAVController:(id)arg1 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setContext:(int)arg1 ;
-(void)setTableView:(id)arg1 ;
-(id)avController;
-(id)ringtoneManager;
-(id)indexPathForSelectedRingtone;
-(id)indexPathForFirstRingtoneGroup;
-(void)reloadRingtones;
-(void)setDefaultIdentifier:(id)arg1 ;
-(id)vibrationAccountIdentifier;
-(void)setVibrationAccountIdentifier:(id)arg1 ;
-(void)setNoneString:(id)arg1 ;
-(id)selectedIdentifier:(bool*)arg1 ;
-(void)setShowsMedia:(bool)arg1 ;
-(void)setSelectedMediaIdentifier:(id)arg1 ;
-(void)setMediaAtTop:(bool)arg1 ;
-(void)setShowsStoreButtonInNavigationBar:(bool)arg1 ;
-(id)initWithAVController:(id)arg1 filter:(unsigned long long)arg2 tonePicker:(bool)arg3 ;
-(void)updateSelectedIdentifierForExternalChange;
-(void)addMediaItems:(id)arg1 ;
-(void)removeMediaItems:(id)arg1 ;
-(void)setShowsDefaultVibration:(bool)arg1 ;
-(void)setShowsUserGeneratedVibrations:(bool)arg1 ;
-(void)setShowsNoneVibration:(bool)arg1 ;
-(void)setShowsNoVibrationSelected:(bool)arg1 ;
-(bool)allowsDeletingCurrentSystemVibration;
-(void)setAllowsDeletingCurrentSystemVibration:(bool)arg1 ;
-(void)configureNavigationBarIfNeeded;
-(void)stopPlayingWithFadeOut:(bool)arg1 ;
-(void)finishedWithPicker;
-(void)setCheckmarkImage:(id)arg1 ;
-(id)toneIdentifiersForToneClassicsTableView:(id)arg1 ;
-(long long)preselectedIndexForToneClassicsTableView:(id)arg1 ;
-(void)toneClassicsTableView:(id)arg1 willDimissWithNewSelectedIndexPath:(id)arg2 ;
-(int)currentToneContext;
-(id)checkmarkImage;
-(void)playRingtoneWithIdentifier:(id)arg1 ;
-(void)togglePlayWithRingtoneWithIdentifier:(id)arg1 ;
-(void)_configureTextColorOfLabelInCell:(id)arg1 checked:(bool)arg2 ;
-(void)processNewRingtoneSelected:(id)arg1 ;
-(id)_styleProvider;
-(id)initWithAVController:(id)arg1 ;
-(bool)_canShowStore;
-(id)indexPathForNone;
-(void)setSelectedClassicTextToneIndex:(long long)arg1 ;
-(void)setSelectedClassicRingtoneIndex:(long long)arg1 ;
-(void)_unregisterForItemPlaybackDidEndNotificationWithCurrentAVController;
-(void)_setDefaultSectionHeaderView:(id)arg1 ;
-(void)_setMediaSectionHeaderView:(id)arg1 ;
-(void)_setRegularToneSectionHeaderViews:(id)arg1 ;
-(void)_setStyleProvider:(id)arg1 ;
-(bool)_showsVibrations;
-(id)identifierOfRingtoneAtIndexPath:(id)arg1 ;
-(bool)isMediaGroupAtIndexPath:(id)arg1 ;
-(bool)isDefaultGroupAtIndexPath:(id)arg1 ;
-(bool)isNoneGroupAtIndexPath:(id)arg1 ;
-(long long)selectedClassicTextToneIndex;
-(id)classicTextToneIdentifiers;
-(long long)selectedClassicRingtoneIndex;
-(id)classicRingtoneIdentifiers;
-(id)indexPathForMediaGroup;
-(id)indexPathForRingtoneWithIdentifier:(id)arg1 ;
-(id)_loadTonesFromPlistNamed:(id)arg1 ;
-(void)_refreshMediaItems;
-(id)identifierAtIndexPath:(id)arg1 isMediaItem:(bool*)arg2 ;
-(id)_regularToneSectionHeaderViews;
-(void)addRingtonesInDirectory:(id)arg1 toArray:(id)arg2 fileExtension:(id)arg3 ;
-(id)loadRingtonesFromPlist;
-(void)setClassicRingtoneIdentifiers:(id)arg1 ;
-(id)loadTextTonesFromPlist;
-(void)setClassicTextToneIdentifiers:(id)arg1 ;
-(id)indexPathForDefaultGroup;
-(void)processNewMediaItemSelected:(id)arg1 ;
-(id)_mediaItemForIdentifier:(id)arg1 ;
-(unsigned long long)_addMediaIdentifierToList:(id)arg1 ;
-(id)identifierOfSelectedClassicTextTone;
-(id)identifierOfSelectedClassicRingtone;
-(void)_goToStore;
-(bool)isVibrationGroupAtIndexPath:(id)arg1 ;
-(bool)isDividerAtIndexPath:(id)arg1 ;
-(bool)isRingtonesStoreGroupAtIndexPath:(id)arg1 ;
-(id)copyCurrentPhoneTextToneName;
-(id)copyCurrentPhoneRingtoneName;
-(id)indexPathForRingtonesStoreGroup;
-(id)indexPathForVibrationGroup;
-(void)playMediaItemWithIdentifier:(id)arg1 ;
-(void)togglePlayMediaItemWithIdentifier:(id)arg1 ;
-(bool)showsDefaultVibration;
-(bool)showsUserGeneratedVibrations;
-(bool)showsNoneVibration;
-(void)setSelectedClassicRingtonesIndexPath:(id)arg1 ;
-(void)setSelectedClassicTextTonesIndexPath:(id)arg1 ;
-(id)_defaultSectionHeaderView;
-(id)_mediaSectionHeaderView;
-(void)_getTitle:(id*)arg1 customHeaderView:(id*)arg2 forHeaderInSection:(long long)arg3 ;
-(void)_registerForItemPlaybackDidEndNotificationWithCurrentAVController;
-(id)copyCurrentPhoneTextToneIdentifier;
-(id)copyCurrentPhoneRingtoneIdentifier;
-(id)musicPlayer;
-(id)selectedClassicTextTonesIndexPath;
-(id)selectedClassicRingtonesIndexPath;
-(void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2 ;
-(long long)compareRingtoneWithIdentifier:(id)arg1 toRingtoneWithIdentifier:(id)arg2 ;
-(void)setShowsRingtonesStore:(bool)arg1 ;
-(void)_handleItemPlaybackDidEndWithAVController:(id)arg1 ;
-(void)_setRingtoneManager:(id)arg1 ;
-(id)defaultIdentifier;
-(bool)showsVibrations;
-(bool)showsNoVibrationSelected;
@end

