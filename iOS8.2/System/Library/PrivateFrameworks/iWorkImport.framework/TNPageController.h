/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKChangeSourceObserver.h>

@protocol TNPageControllerDelegate;
@class TNDocumentRoot, TNPageCoordinateDictionary, TSUPointerKeyDictionary, TNSheet, NSMutableDictionary, NSObject, TNPrintProperties, NSString;

@interface TNPageController : NSObject <TSKChangeSourceObserver> {

	TNDocumentRoot* mDocumentRoot;
	TNPageCoordinateDictionary* mPageLayoutCache;
	TSUPointerKeyDictionary* mHintCacheDictionary;
	TSUPointerKeyDictionary* mSheetPageCountCache;
	TNSheet* mSheet;
	SCD_Struct_TS271 mMaxPageCoordinate;
	char mMaxPageCoordinateValid;
	NSMutableDictionary* mCachedAutoFitContentScaleDictionary;
	TNPageCoordinateDictionary* mHeaderLayerCache;
	TNPageCoordinateDictionary* mFooterLayerCache;
	int mCachedPageCountDuringDynamicContentScaleChange;
	int mPriorPageCount;
	int mSubsequentPageCount;
	char mPageCountsValid;
	char mComputingPageCounts;
	char mInDynamicContentScaleChange;
	NSObject*<TNPageControllerDelegate> mDelegate;
	TNPrintProperties* _printProperties;
	float mUserViewScale;
	float _headerTextHeight;
	float _footerTextHeight;

}

@property (assign,nonatomic) TNDocumentRoot * documentRoot; 
@property (assign,nonatomic) NSObject*<TNPageControllerDelegate> delegate; 
@property (assign,nonatomic) TNSheet * sheet; 
@property (readonly) CGSize pageSize; 
@property (readonly) CGRect contentFrame; 
@property (readonly) TNPrintProperties * printProperties;                               //@synthesize printProperties=_printProperties - In the implementation block
@property (getter=isPortrait,readonly) char portrait; 
@property (readonly) unsigned numPages; 
@property (readonly) float contentScale; 
@property (assign,nonatomic) float userViewScale; 
@property (assign,nonatomic) float headerTextHeight;                                    //@synthesize headerTextHeight=_headerTextHeight - In the implementation block
@property (assign,nonatomic) float footerTextHeight;                                    //@synthesize footerTextHeight=_footerTextHeight - In the implementation block
@property (nonatomic,readonly) char inDynamicContentScaleChange; 
@property (readonly) CGSize pageSizeWithGutter; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)printViewDefaultUserViewScale;
+(float)p_contentScaleAutoFitForSheet:(id)arg1 ;
+(id)p_cachedAutoFitContentScaleDictionary;
+(float)autoFitContentScaleForSheet:(id)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(char)isPagePlaceholderAtPageCoordinate:(SCD_Struct_TS271)arg1 ;
-(id)pageLayoutGeometryForPrintingAtPageCoordinate:(SCD_Struct_TS271)arg1 ;
-(id)pageLayoutGeometryForPageCoordinate:(SCD_Struct_TS271)arg1 ;
-(SCD_Struct_TS271)pageCoordinateForPageIndex:(unsigned)arg1 ;
-(void)registerPageLayout:(id)arg1 atPageCoordinate:(SCD_Struct_TS271)arg2 ;
-(void)layoutAtPageIndex:(unsigned)arg1 forLayoutController:(id)arg2 ;
-(TNPrintProperties *)printProperties;
-(void)i_invalidatePageLayoutCache;
-(void)i_invalidateHintCache;
-(unsigned)pageNumberForPageCoordinate:(SCD_Struct_TS271)arg1 ;
-(void)p_willBeginDynamicContentScaleChange:(id)arg1 ;
-(id)i_layerForHeaderType:(int)arg1 fragment:(int)arg2 atPageCoordinate:(SCD_Struct_TS271)arg3 ;
-(float)userViewScale;
-(char)inDynamicContentScaleChange;
-(void)i_setLayer:(id)arg1 forHeaderType:(int)arg2 fragment:(int)arg3 atPageCoordinate:(SCD_Struct_TS271)arg4 ;
-(CGRect)firstPartitionFrameForInfo:(id)arg1 outStartPageCoordinate:(out SCD_Struct_TS271*)arg2 ;
-(void)syncPositionOfLayout:(id)arg1 atCoordinate:(SCD_Struct_TS271)arg2 ;
-(void)setHeaderTextHeight:(float)arg1 ;
-(void)setFooterTextHeight:(float)arg1 ;
-(void)p_didEndDynamicContentScaleChange:(id)arg1 ;
-(void)invalidateCachedAutoFitContentScaleForSheet:(id)arg1 ;
-(void)p_clearHintCache;
-(void)p_computePriorPageCountForCurrentSheet;
-(void)p_computeSubsequentPageCountForCurrentSheet;
-(int)p_updateCachedPageCountForCurrentSheet;
-(int)p_pageCountForSheet:(id)arg1 ;
-(float)headerTextHeight;
-(float)footerTextHeight;
-(void)p_measureHeadersAndFooters;
-(void)updateViewScale;
-(void)setUserViewScale:(float)arg1 ;
-(void)invalidatePageLayoutGeometries;
-(SCD_Struct_TS274)pageRangeForContentWithUpperBound:(SCD_Struct_TS271)arg1 ;
-(SCD_Struct_TS274)pageRangeForInfo:(id)arg1 upperBound:(SCD_Struct_TS271)arg2 ;
-(SCD_Struct_TS271)p_pageCoordinateForPageLayoutAtDevicePoint:(CGPoint)arg1 ;
-(SCD_Struct_TS271)pageCoordinateForMaxVisiblePage;
-(SCD_Struct_TS274)pageRangeForContent;
-(int)p_priorPageCount;
-(SCD_Struct_TS271)pageCoordinateForDrawableAtUnscaledPoint:(CGPoint)arg1 ;
-(void)p_updateVisiblePageRange:(SCD_Struct_TS274)arg1 forLayoutController:(id)arg2 ;
-(CGSize)pageSizeWithGutter;
-(void)p_layoutInfo:(id)arg1 intoPageLayout:(id)arg2 atPageCoordinate:(SCD_Struct_TS271)arg3 ;
-(void)removeLayoutsFromPages;
-(void)invalidateDrawableLayouts;
-(void)p_invalidatePageCounts;
-(void)updateContentScale;
-(void)updatePrintMargins;
-(id)p_hintCacheForInfo:(id)arg1 ;
-(char)p_headersOrFootersContainPageNumberRelatedAttachments;
-(SCD_Struct_TS274)pageRangeWithPlaceholdersWithUpperBound:(SCD_Struct_TS271)arg1 ;
-(id)p_pageLayoutAtCoordinate:(SCD_Struct_TS271)arg1 ;
-(void)p_enumerateOverPageRange:(SCD_Struct_TS274)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)p_layoutForInfo:(id)arg1 atCoordinate:(SCD_Struct_TS271)arg2 parentLayout:(id)arg3 ;
-(id)p_pageInfoForPageAtIndex:(unsigned)arg1 ;
-(SCD_Struct_TS274)pageRangeForPageIndex:(unsigned)arg1 ;
-(void)p_layoutInfo:(id)arg1 intoPageRange:(SCD_Struct_TS274)arg2 ;
-(void)canvasViewScaleDidChange:(float)arg1 ;
-(void)updateUserViewScale;
-(CGSize)contentSizeForCanvasLayer;
-(void)layoutInPageRange:(SCD_Struct_TS274)arg1 forLayoutController:(id)arg2 ;
-(SCD_Struct_TS271)pageCoordinateForPageLayoutAtUnscaledPoint:(CGPoint)arg1 ;
-(CGRect)printingLayoutRectForPageIndex:(unsigned)arg1 ;
-(void)willExitPrintView;
-(void)invalidatePageLayout;
-(id)pageInfoForPageIndex:(unsigned)arg1 ;
-(unsigned)numPages;
-(char)isPortrait;
-(void)dealloc;
-(void)setDelegate:(NSObject*<TNPageControllerDelegate>)arg1 ;
-(NSObject*<TNPageControllerDelegate>)delegate;
-(unsigned)pageCount;
-(float)contentScale;
-(CGRect)contentFrame;
-(CGSize)pageSize;
-(void)setSheet:(TNSheet *)arg1 ;
-(TNDocumentRoot *)documentRoot;
-(void)setDocumentRoot:(TNDocumentRoot *)arg1 ;
-(TNSheet *)sheet;
@end

