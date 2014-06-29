/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIMissingItemDelegate.h>
#import <iTunesStoreUI/SKUIShowcaseDelegate.h>

@class SKUIMissingItemLoader, SKUIShowcaseViewController, SKUIShowcasePageComponent;

@interface SKUIShowcasePageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIShowcaseDelegate> {

	SKUIMissingItemLoader* _missingItemLoader;
	bool _pinned;
	SKUIShowcaseViewController* _showcaseViewController;

}

@property (nonatomic,@dynamic,readonly) SKUIShowcasePageComponent * pageComponent; 
-(void)dealloc;
-(void).cxx_destruct;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(long long)numberOfCells;
-(id)popPinnedHeaderView;
-(void)restorePinnedHeaderView:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(double)contentInsetAdjustmentForCollectionView:(id)arg1 ;
-(id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2 ;
-(void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2 ;
-(id)_showcaseViewController;
-(id)cellForIndexPath:(id)arg1 ;
-(void)showcase:(id)arg1 didDisplayItemAtIndex:(long long)arg2 ;
-(void)showcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3 ;
@end
