/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextHostLayout.h>
#import <iWorkImport/TSKSearchTarget.h>
#import <iWorkImport/TSWPColumnMetrics.h>
#import <iWorkImport/TSWPLayoutParent.h>
#import <iWorkImport/TSWPStorageObserver.h>

@class TSWPPadding, TSTMasterLayout, TSTLayoutHint, TSTLayoutSpaceBundle, TSWPLayout, NSMutableDictionary, TSTTableInfo, TSTTableModel, TSTEditingState, NSString;

@interface TSTLayout : TSWPTextHostLayout <TSKSearchTarget, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver> {

	TSTMasterLayout* mMasterLayout;
	TSTLayoutHint* mLayoutHint;
	CGRect mCanvasVisibleRect;
	CGRect mPreviousVisibleStrokeFrame;
	BOOL mProcessChangesFiltering;
	BOOL mTabsVisible;
	BOOL mTableNameVisibilityIsValid;
	BOOL mTableNameVisible;
	BOOL mNewCanvasRevealedHorizontally;
	BOOL mNewCanvasRevealedVertically;
	BOOL mLayoutDirectionIsLeftToRight;
	TSTLayoutSpaceBundle* mSpaceBundle;
	SCD_Struct_TS494 mCached;
	CGRect mRenderingFrameForLayoutGeometryFromInfo;
	TSWPLayout* mContainedTextEditingLayout;
	NSMutableDictionary* mAttachmentCellLayouts;
	UIEdgeInsets mCachedPaddingForEditingCell;
	CGRect mComputedEditingCellContentFrame;
	int mCachedVerticalAlignmentForEditingCell;
	CGSize mTableSizeWithoutStrokes;
	CGSize mStrokeDelta;
	CGSize mCapturedStrokeFrameSizeForInline;
	SCD_Struct_TS496 mEditingSpillingTextRange;
	SCD_Struct_TS496 mPrevEditingSpillingTextRange;
	int mContainedTextEditorParagraphAlignment;
	BOOL mContainedTextEditorTextWraps;
	BOOL mContainedTextEditorSpills;
	CGSize mSpillingTextSize;
	int mCoordinatesChangedMaskForChrome;
	BOOL mShouldUpdateAttachmentChildren;

}

@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (assign,nonatomic) TSTMasterLayout * masterLayout; 
@property (nonatomic,retain) TSTLayoutHint * layoutHint; 
@property (nonatomic,retain) TSTLayoutSpaceBundle * spaceBundle; 
@property (assign,nonatomic) BOOL processChangesFiltering; 
@property (nonatomic,readonly) TSTEditingState * editingState; 
@property (assign,nonatomic) BOOL newCanvasRevealedHorizontally; 
@property (assign,nonatomic) BOOL newCanvasRevealedVertically; 
@property (nonatomic,readonly) BOOL layoutDirectionIsLeftToRight; 
@property (assign,nonatomic) CGSize scaleToFit; 
@property (nonatomic,retain) TSWPLayout * containedTextEditingLayout; 
@property (nonatomic,readonly) UIEdgeInsets paddingForEditingCell; 
@property (nonatomic,readonly) CGRect computedEditingCellContentFrame; 
@property (nonatomic,readonly) SCD_Struct_TS496 editingSpillingTextRange; 
@property (assign,nonatomic) SCD_Struct_TS496 prevEditingSpillingTextRange; 
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(TSTTableModel *)tableModel;
-(CGSize)scaleToFit;
-(void)setScaleToFit:(CGSize)arg1 ;
-(void)processChanges:(id)arg1 ;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(BOOL)inPrintPreviewMode;
-(void)takeSizeFromTracker:(id)arg1 ;
-(void)beginResize;
-(void)invalidateSize;
-(id)layoutGeometryFromInfo;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(id)computeLayoutGeometry;
-(CGRect)alignmentFrame;
-(BOOL)canRotateChildLayout:(id)arg1 ;
-(int)wrapFitType;
-(void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 ;
-(void)layoutSearchForSpellingErrorsWithHitBlock:(/*^block*/id)arg1 stop:(BOOL*)arg2 ;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)orderedBefore:(id)arg1 ;
-(CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1 ;
-(void)updateChildrenFromInfo;
-(id)dependentLayouts;
-(void)invalidatePosition;
-(CGPoint)capturedInfoPositionForAttachment;
-(CGSize)maximumFrameSizeForChild:(id)arg1 ;
-(id)childSearchTargets;
-(void)layoutSearchForAnnotationWithHitBlock:(/*^block*/id)arg1 ;
-(void)willBeAddedToLayoutController:(id)arg1 ;
-(void)willBeRemovedFromLayoutController:(id)arg1 ;
-(CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
-(BOOL)resizeMayChangeAspectRatio;
-(id)initialInfoGeometry;
-(CGPoint)calculatePointFromSearchReference:(id)arg1 ;
-(id)additionalGuides;
-(BOOL)supportsRotation;
-(TSTMasterLayout *)masterLayout;
-(TSTEditingState *)editingState;
-(BOOL)textIsVertical;
-(TSTTableInfo *)tableInfo;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(id)initWithInfo:(id)arg1 layoutHint:(id)arg2 ;
-(void)removeContainedTextEditingLayout;
-(void)removeAttachmentCellLayouts;
-(TSTLayoutSpaceBundle *)spaceBundle;
-(TSTLayoutHint *)layoutHint;
-(void)validateTableNameVisibility;
-(TSWPLayout *)containedTextEditingLayout;
-(BOOL)inFindReplaceMode;
-(BOOL)isZoomedEditing;
-(void)setNewCanvasRevealedHorizontally:(BOOL)arg1 ;
-(void)setNewCanvasRevealedVertically:(BOOL)arg1 ;
-(BOOL)layoutDirectionIsLeftToRight;
-(int)naturalAlignmentForCellID:(SCD_Struct_TS272)arg1 ;
-(SCD_Struct_TS496)p_maximumSpillRangeForCellID:(SCD_Struct_TS272)arg1 ;
-(SCD_Struct_TS496)p_spillRangeToRightForCellID:(SCD_Struct_TS272)arg1 ;
-(CGSize)initialTextSize;
-(void)setupContainedTextEditingLayout:(SCD_Struct_TS272)arg1 ;
-(void)p_updateCachedStyleInformationFromCellID:(SCD_Struct_TS272)arg1 ;
-(void)p_prepareAttachmentCells;
-(CGSize)adjustedInsetsForTarget:(id)arg1 ;
-(CGRect)p_textFrameForWrappingCell:(SCD_Struct_TS272)arg1 defaultRowHeight:(BOOL*)arg2 ;
-(int)p_defaultAlignmentForTableWritingDirection;
-(SCD_Struct_TS272)p_cellIDForWPLayout:(id)arg1 ;
-(CGRect)computedEditingCellContentFrame;
-(CGRect)p_nonAutosizedFrameForTextEditingLayout:(id)arg1 ;
-(CGRect)p_nonAutosizedFrameForRichTextLayout:(id)arg1 ;
-(BOOL)p_layoutWhollyContainsGridRange:(SCD_Struct_TS498)arg1 ;
-(CGSize)p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(SCD_Struct_TS498)arg1 ;
-(CGRect)p_autosizedFrameForTextEditingLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(CGRect)p_autosizedFrameForRichTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(CGRect)p_computeSpillingTextFrameForEditingLayout:(id)arg1 textSize:(CGSize)arg2 editingSpillRange:(SCD_Struct_TS496*)arg3 ;
-(CGRect)p_maskRectForTextEditingLayout:(id)arg1 ;
-(CGRect)p_maskRectForRichTextLayout:(id)arg1 ;
-(SCD_Struct_TS496)p_spillRangeForMaskingRichTextLayout:(id)arg1 ;
-(void)invalidateTableNameVisibility;
-(void)p_processChange:(id)arg1 forChangeSource:(id)arg2 actions:(id)arg3 ;
-(void)p_processChangeActions:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(double)maxAutoGrowWidthForTextLayout:(id)arg1 ;
-(CGRect)maskRectForTextLayout:(id)arg1 ;
-(int)naturalAlignmentForTextLayout:(id)arg1 ;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(void)setLayoutHint:(TSTLayoutHint *)arg1 ;
-(void)bezierPathsForCellRegion:(id)arg1 selectionMask:(unsigned)arg2 transform:(CGAffineTransform)arg3 viewScale:(double)arg4 inset:(double)arg5 block:(/*^block*/id)arg6 ;
-(int)reapCoordinatesChangedMaskForChrome;
-(BOOL)newCanvasRevealedHorizontally;
-(BOOL)newCanvasRevealedVertically;
-(void)setContainedTextEditingLayout:(TSWPLayout *)arg1 ;
-(UIEdgeInsets)paddingForEditingCell;
-(void)setSpaceBundle:(TSTLayoutSpaceBundle *)arg1 ;
-(SCD_Struct_TS496)editingSpillingTextRange;
-(SCD_Struct_TS496)prevEditingSpillingTextRange;
-(void)setPrevEditingSpillingTextRange:(SCD_Struct_TS496)arg1 ;
-(void)setMasterLayout:(TSTMasterLayout *)arg1 ;
-(BOOL)processChangesFiltering;
-(void)setProcessChangesFiltering:(BOOL)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)invalidate;
-(void)validate;
-(TSWPPadding *)layoutMargins;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(CGRect)rectForSelection:(id)arg1 ;
-(unsigned long long)pageCount;
-(CGSize)minimumSize;
-(unsigned long long)columnCount;
-(unsigned long long)pageNumber;
-(BOOL)isBeingManipulated;
-(id)children;
@end
