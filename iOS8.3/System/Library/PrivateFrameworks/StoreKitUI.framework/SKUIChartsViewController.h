/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:13 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUICategoryControllerDelegate.h>
#import <StoreKitUI/SKUIMetricsViewController.h>
#import <StoreKitUI/SKUIViewControllerTesting.h>

@class SKUICategoryController, SKUIStorePageViewController, NSURL, NSString;

@interface SKUIChartsViewController : SKUIViewController <SKUICategoryControllerDelegate, SKUIMetricsViewController, SKUIViewControllerTesting> {

	SKUICategoryController* _categoryController;
	char _hasCategoryButton;
	SKUIStorePageViewController* _storePageViewController;
	NSURL* _url;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
+(id)_defaultURL;
-(void)dealloc;
-(void)reloadData;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(id)_storePageViewController;
-(char)performTestWithName:(id)arg1 options:(id)arg2 ;
-(id)activeMetricsController;
-(void)_reloadNavigationItem;
-(void)_finishLoadWithResult:(char)arg1 error:(id)arg2 ;
-(id)_categoryController;
-(void)categoryController:(id)arg1 didSelectCategory:(id)arg2 ;
-(void)_loadStorePage;
-(void)_loadCategoriesWithURL:(id)arg1 ;
@end

