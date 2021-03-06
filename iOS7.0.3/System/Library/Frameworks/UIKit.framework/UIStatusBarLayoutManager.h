/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIStatusBarForegroundView, UIStatusBarItemView;

@interface UIStatusBarLayoutManager : NSObject {

	UIStatusBarForegroundView* _foregroundView;
	int _region;
	UIStatusBarItemView* _itemViews[32];
	BOOL _persistentAnimationsEnabled;

}

@property (assign,nonatomic) UIStatusBarForegroundView * foregroundView;              //@synthesize foregroundView=_foregroundView - In the implementation block
@property (assign,nonatomic) BOOL persistentAnimationsEnabled;                        //@synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled - In the implementation block
-(void)dealloc;
-(float)_startPosition;
-(id)initWithRegion:(int)arg1 foregroundView:(id)arg2 ;
-(void)setForegroundView:(id)arg1 ;
-(BOOL)prepareEnabledItems:(BOOL*)arg1 withData:(id)arg2 actions:(int)arg3 ;
-(BOOL)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)setVisibilityOfAllItems:(BOOL)arg1 ;
-(void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2 ;
-(void)setVisibilityOfItem:(id)arg1 visible:(BOOL)arg2 ;
-(void)positionInvisibleItems;
-(void)removeDisabledItems:(BOOL*)arg1 ;
-(void)makeVisibleItemsPerformPendedActions;
-(CGRect)rectForItems:(id)arg1 ;
-(void)clearOverlapFromItems:(id)arg1 ;
-(float)widthNeededForItems:(id)arg1 ;
-(float)distributeOverlap:(float)arg1 amongItems:(id)arg2 ;
-(float)widthNeededForItem:(id)arg1 ;
-(float)removeOverlap:(float)arg1 fromItems:(id)arg2 ;
-(BOOL)itemIsVisible:(id)arg1 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(BOOL*)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(BOOL*)arg5 itemDisappearing:(BOOL*)arg6 ;
-(void)_positionNewItemViewsWithEnabledItems:(BOOL*)arg1 ;
-(id)_itemViews;
-(BOOL)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(BOOL)arg4 ;
-(id)foregroundView;
-(id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 ;
-(id)_itemViewsSortedForLayout;
-(CGRect)_frameForItemView:(id)arg1 startPosition:(float)arg2 ;
-(float)_positionAfterPlacingItemView:(id)arg1 startPosition:(float)arg2 ;
-(CGRect)_repositionedNewFrame:(CGRect)arg1 widthDelta:(float)arg2 ;
-(BOOL)_processDelta:(float)arg1 forView:(id)arg2 ;
-(id)_viewForItem:(id)arg1 ;
-(float)_widthNeededForItemView:(id)arg1 ;
-(SEL)_itemSortSelector;
-(BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL*)arg1 ;
-(BOOL)updateDoubleHeightItem;
-(void)itemView:(id)arg1 widthChangedBy:(float)arg2 ;
-(BOOL)persistentAnimationsEnabled;
@end

