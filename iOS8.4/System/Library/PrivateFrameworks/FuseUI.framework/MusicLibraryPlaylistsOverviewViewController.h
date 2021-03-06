/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <FuseUI/MusicActionableHeaderViewDelegate.h>
#import <FuseUI/MusicLibraryBrowseCollectionViewControllerDelegate.h>
#import <FuseUI/MusicNoContentViewDelegate.h>
#import <FuseUI/MusicSwitcherButtonContainerViewDelegate.h>
#import <FuseUI/SKUITabBarItemRootViewController.h>
#import <FuseUI/MusicClientContextConsuming.h>

@class UISwitch, NSDictionary, UIBarButtonItem, UIAlertController, MusicHairlineView, MusicSwitcherButtonContainerView, MusicMatchLoadingViewController, UIViewController, MusicLibraryPlaylistsViewConfiguration, MusicActionableHeaderView, MusicLibraryBrowseCollectionViewController, NSString, MusicVerticalScrollingContainerViewController, MusicClientContext, SKUIClientContext;

@interface MusicLibraryPlaylistsOverviewViewController : UIViewController <MusicActionableHeaderViewDelegate, MusicLibraryBrowseCollectionViewControllerDelegate, MusicNoContentViewDelegate, MusicSwitcherButtonContainerViewDelegate, SKUITabBarItemRootViewController, MusicClientContextConsuming> {

	UISwitch* _alertShowOfflineSwitch;
	NSDictionary* _curatorsByID;
	UIBarButtonItem* _editButtonItem;
	UIAlertController* _filterAlertController;
	MusicHairlineView* _hairlineView;
	BOOL _hasSubscribedPlaylistsCapability;
	MusicSwitcherButtonContainerView* _librarySwitcherButtonContainerView;
	MusicMatchLoadingViewController* _matchLoadingViewController;
	UIBarButtonItem* _newButtonItem;
	UIViewController* _noContentViewController;
	unsigned long long _playlistsConfigurationOptions;
	MusicLibraryPlaylistsViewConfiguration* _playlistsViewConfiguration;
	MusicActionableHeaderView* _playlistsHeaderView;
	UIViewController* _playlistsViewController;
	MusicActionableHeaderView* _recentlyPlayedPlaylistsHeaderView;
	MusicLibraryBrowseCollectionViewController* _recentlyPlayedPlaylistsViewController;
	NSString* _selectedFilter;
	BOOL _selectedFilterIsCuratorID;
	MusicLibraryPlaylistsViewConfiguration* _selectedPlaylistsViewConfiguration;
	BOOL _shouldShowMatchLoadingView;
	BOOL _shouldShowNoContentView;
	MusicVerticalScrollingContainerViewController* _verticalScrollingContainerViewController;
	MusicClientContext* _clientContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)actionableHeaderViewDidSelectButton:(id)arg1 ;
-(void)_updateMatchLoadingViewVisibility;
-(void)_alertShowOfflineSwitchValueChangedAction:(id)arg1 ;
-(void)_alertShowPurchasesSwitchValueChangedAction:(id)arg1 ;
-(void)switcherButtonWasSelectedInContainerView:(id)arg1 ;
-(void)_delayedDismissFilterAlertController;
-(void)_updateSizeOfLibrarySwitcherButtonContainerView;
-(void)_cloudUpdateInProgressDidChangeNotification:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)leadingButtonWasSelectedInContainerView:(id)arg1 ;
-(void)trailingButtonWasSelectedInContainerView:(id)arg1 ;
-(void)noContentViewDidTapButton:(id)arg1 ;
-(void)_musicLibraryPlaylistsOverviewViewControllerCommonInitialization;
-(void)_updateLibrarySwitcherButtonWithVerticalContainerItemsReload:(BOOL)arg1 ;
-(void)_updateRecentlyPlayedViewMoreButton;
-(void)_updateCuratorsMapping;
-(id)_validFilterForFilter:(id)arg1 ;
-(void)_setSelectedFilter:(id)arg1 ;
-(void)_loadRecentlyPlayedPlaylistsViewController;
-(void)_loadRecentlyPlayedPlaylistsHeaderView;
-(void)_configureForSelectedFilter;
-(void)_updateShouldShowMatchLoadingView;
-(void)_updatePlaylistNoContentViewVisibilityForceReload:(BOOL)arg1 ;
-(void)_updateChildViewController;
-(void)_updateSizeOfRecentlyPlayedPlaylistsView;
-(void)_presentCreatePlaylistViewController;
-(id)_getCurrentSortedPlaylistsOverviewFilters;
-(id)_titleForPlaylistsOverviewFilter:(id)arg1 ;
-(void)_handlePlaylistsOverviewFilterAlertControllerDismissal;
-(void)_editButtonTapped:(id)arg1 ;
-(void)_newButtonTapped:(id)arg1 ;
-(void)_updatePlaylistHeaderHeight;
-(void)_updateSizeOfRecentlyPlayedPlaylistsHeaderView;
-(BOOL)_calculateHasSubscribedPlaylistsCapability;
-(id)_newLibraryPlaylistsViewConfiguration;
-(void)_dismissEditSheet;
-(id)_sortedSubscriberPlaylistsOverviewFilters;
-(id)_sortedBasicPlaylistsOverviewFilters;
-(void)_recentlyPlayedEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_playlistsEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_configureNoContentView:(id)arg1 ;
-(id)_matchLoadingViewController;
-(id)_noContentViewController;
-(double)_calculateHairlineViewHeight;
-(void)collectionViewFlowLayoutLayoutMetricsWereUpdatedForLibraryBrowseCollectionViewController:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithTabBarItem:(id)arg1 ;
-(SKUIClientContext *)clientContext;
@end

