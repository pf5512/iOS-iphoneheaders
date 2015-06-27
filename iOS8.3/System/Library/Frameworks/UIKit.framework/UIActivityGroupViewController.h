/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:55 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/_UIActivityGroupViewDelegateFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIActivityGroupViewControllerDelegate, UIActivityGroupViewControllerDataSource;
@class NSDictionary, NSArray, _UIActivityUserDefaults, _UIUserDefaultsActivity, _UIActivityGroupActivityCell, UILongPressGestureRecognizer, NSIndexPath, NSMutableDictionary, NSString;

@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate> {

	char _darkStyleOnLegacyApp;
	char _embedded;
	char _picker;
	char _hasActivities;
	char _activityIndexDidChangeWhileDragging;
	char _allowsUserCustomization;
	id<UIActivityGroupViewControllerDelegate> _delegate;
	int _activityCategory;
	NSDictionary* _customActivityTitles;
	NSArray* _activities;
	id<UIActivityGroupViewControllerDataSource> _dataSource;
	NSArray* _visibleActivities;
	_UIActivityUserDefaults* _userDefaults;
	_UIUserDefaultsActivity* _userDefaultsActivity;
	_UIActivityGroupActivityCell* _prototypeActivityCell;
	UILongPressGestureRecognizer* _editingGestureRecognizer;
	NSIndexPath* _indexPathForMenuActivity;
	NSMutableDictionary* _cachedPreferredItemSizesByString;
	CGPoint _initialDraggingLocation;

}

@property (assign,nonatomic) id<UIActivityGroupViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int activityCategory;                                                 //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,copy) NSDictionary * customActivityTitles;                                    //@synthesize customActivityTitles=_customActivityTitles - In the implementation block
@property (nonatomic,copy) NSArray * activities;                                                   //@synthesize activities=_activities - In the implementation block
@property (assign,nonatomic) char darkStyleOnLegacyApp;                                            //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) char embedded;                                      //@synthesize embedded=_embedded - In the implementation block
@property (assign,getter=isPicker,nonatomic) char picker;                                          //@synthesize picker=_picker - In the implementation block
@property (assign,nonatomic) id<UIActivityGroupViewControllerDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) char hasActivities;                                                   //@synthesize hasActivities=_hasActivities - In the implementation block
@property (nonatomic,copy) NSArray * visibleActivities;                                            //@synthesize visibleActivities=_visibleActivities - In the implementation block
@property (nonatomic,retain) _UIActivityUserDefaults * userDefaults;                               //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) _UIUserDefaultsActivity * userDefaultsActivity;                       //@synthesize userDefaultsActivity=_userDefaultsActivity - In the implementation block
@property (nonatomic,retain) _UIActivityGroupActivityCell * prototypeActivityCell;                 //@synthesize prototypeActivityCell=_prototypeActivityCell - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * editingGestureRecognizer;              //@synthesize editingGestureRecognizer=_editingGestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint initialDraggingLocation;                                      //@synthesize initialDraggingLocation=_initialDraggingLocation - In the implementation block
@property (assign,nonatomic) char activityIndexDidChangeWhileDragging;                             //@synthesize activityIndexDidChangeWhileDragging=_activityIndexDidChangeWhileDragging - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPathForMenuActivity;                                 //@synthesize indexPathForMenuActivity=_indexPathForMenuActivity - In the implementation block
@property (assign,nonatomic) char allowsUserCustomization;                                         //@synthesize allowsUserCustomization=_allowsUserCustomization - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPreferredItemSizesByString;               //@synthesize cachedPreferredItemSizesByString=_cachedPreferredItemSizesByString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDataSource:(id<UIActivityGroupViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<UIActivityGroupViewControllerDelegate>)arg1 ;
-(id<UIActivityGroupViewControllerDataSource>)dataSource;
-(id<UIActivityGroupViewControllerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(id)initWithActivityCategory:(int)arg1 userDefaults:(id)arg2 userDefaultsIdentifier:(id)arg3 ;
-(void)setAllowsUserCustomization:(char)arg1 ;
-(void)setPicker:(char)arg1 ;
-(void)setCachedPreferredItemSizesByString:(NSMutableDictionary *)arg1 ;
-(void)setActivityCategory:(int)arg1 ;
-(void)setUserDefaults:(_UIActivityUserDefaults *)arg1 ;
-(char)allowsUserCustomization;
-(_UIActivityUserDefaults *)userDefaults;
-(void)setUserDefaultsActivity:(_UIUserDefaultsActivity *)arg1 ;
-(void)unregisterForActivityUserDefaultsChanges;
-(void)handleEditingGesture:(id)arg1 ;
-(id)activityGroupViewLayout;
-(void)setEditingGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)registerForActivityUserDefaultsChanges;
-(void)setActivities:(id)arg1 animated:(char)arg2 ;
-(_UIUserDefaultsActivity *)userDefaultsActivity;
-(void)_setActivities:(id)arg1 animated:(char)arg2 ;
-(void)_updateVisibleActivitiesAnimated:(char)arg1 ;
-(NSArray *)activities;
-(void)_setVisibleActivities:(id)arg1 animated:(char)arg2 ;
-(NSIndexPath *)indexPathForMenuActivity;
-(void)hideItemAtIndexPath:(id)arg1 ;
-(NSArray *)visibleActivities;
-(id)activityForItemAtIndexPath:(id)arg1 ;
-(id)_titleTextForActivity:(id)arg1 ;
-(char)darkStyleOnLegacyApp;
-(int)activityCategory;
-(void)_updateItemSizeIfNeeded;
-(UILongPressGestureRecognizer *)editingGestureRecognizer;
-(void)setIndexPathForMenuActivity:(NSIndexPath *)arg1 ;
-(void)setActivityIndexDidChangeWhileDragging:(char)arg1 ;
-(char)activityIndexDidChangeWhileDragging;
-(void)hideActivity:(id)arg1 ;
-(id)targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(void)ignoreUserDefaultsChangesWhileUsingBlock:(/*^block*/id)arg1 ;
-(_UIActivityGroupActivityCell *)prototypeActivityCell;
-(void)setPrototypeActivityCell:(_UIActivityGroupActivityCell *)arg1 ;
-(CGSize)_cachedPreferredItemSizeForString:(id)arg1 ;
-(void)activityUserDefaultsDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 moveItemAtIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 needsContainerViewForDraggingItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3 ;
-(id)initWithActivityCategory:(int)arg1 userDefaults:(id)arg2 ;
-(void)setActivities:(NSArray *)arg1 ;
-(void)reloadItemForActivityOfTypeIfNeeded:(id)arg1 ;
-(NSDictionary *)customActivityTitles;
-(void)setCustomActivityTitles:(NSDictionary *)arg1 ;
-(void)setDarkStyleOnLegacyApp:(char)arg1 ;
-(char)isEmbedded;
-(void)setEmbedded:(char)arg1 ;
-(char)isPicker;
-(char)hasActivities;
-(void)setHasActivities:(char)arg1 ;
-(void)setVisibleActivities:(NSArray *)arg1 ;
-(CGPoint)initialDraggingLocation;
-(void)setInitialDraggingLocation:(CGPoint)arg1 ;
-(NSMutableDictionary *)cachedPreferredItemSizesByString;
@end
