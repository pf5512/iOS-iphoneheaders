/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>

@class JSValue, SKUIViewElementLayoutContext, JSContext, MPMediaQuery, SKUIMediaQueryViewElement, IKViewElementFactory, NSMutableDictionary, NSString;

@interface SKUIMediaQueryPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	JSValue* _cellFactoryMethod;
	SKUIViewElementLayoutContext* _cellLayoutContext;
	JSContext* _cellScriptContext;
	MPMediaQuery* _query;
	int _queryStyle;
	id _styleFactory;
	SKUIMediaQueryViewElement* _viewElement;
	IKViewElementFactory* _viewElementFactory;
	NSMutableDictionary* _viewElements;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(Class)_cellClassForViewElement:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)_viewElementWithIndexPath:(id)arg1 ;
-(void)_enumerateVisibleViewElementsUsingBlock:(/*^block*/id)arg1 ;
@end

