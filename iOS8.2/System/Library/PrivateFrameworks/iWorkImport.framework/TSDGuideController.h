/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDecorator.h>

@class TSDInteractiveCanvasController, NSMutableDictionary, NSMutableArray, NSSet, NSMutableSet, NSString;

@interface TSDGuideController : NSObject <TSDDecorator> {

	TSDInteractiveCanvasController* mICC;
	NSMutableDictionary* mVerticalSpacings;
	NSMutableDictionary* mHorizontalSpacings;
	NSMutableArray* mVerticalSizingGuides;
	NSMutableArray* mHorizontalSizingGuides;
	NSMutableArray* mGuidesForSnappingY;
	NSMutableArray* mGuidesForSnappingX;
	NSMutableArray* mSpacingGuidesForSnappingX;
	NSMutableArray* mSpacingGuidesForSnappingY;
	NSMutableArray* mSpacingCenterGuidesForSnappingX;
	NSMutableArray* mSpacingCenterGuidesForSnappingY;
	NSSet* mCurrentGuides;
	NSMutableSet* mCurrentSizingGuideUILayers;
	char mShouldAlignEdges;
	char mShouldAlignCenters;
	char mShouldAlignToSpacingGuides;
	char mShouldAlignToSizingGuides;
	char mShouldAlignEdgesToMasterGuides;
	char mDoNotRemoveExistingGuidesWhenDisplaying;
	char mDidJustSnapInX;
	char mDidJustSnapInY;

}

@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (assign,nonatomic) char doNotRemoveExistingGuidesWhenDisplaying; 
@property (nonatomic,readonly) char didJustSnapInX; 
@property (nonatomic,readonly) char didJustSnapInY; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultGuideColor;
+(char)shouldAlignCenters;
+(char)shouldAlignEdges;
+(char)shouldAlignToSpacingGuides;
+(char)shouldAlignToSizingGuides;
+(char)shouldAlignEdgesToMasterGuides;
+(void)setShouldAlignEdges:(char)arg1 ;
+(void)setShouldAlignToSpacingGuides:(char)arg1 ;
+(void)setShouldAlignToSizingGuides:(char)arg1 ;
+(void)setGuideColor:(id)arg1 ;
+(void)setShouldAlignCenters:(char)arg1 ;
+(void)setShouldAlignEdgesToMasterGuides:(char)arg1 ;
+(id)guideColor;
+(void)initialize;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(id)decoratorOverlayLayers;
-(void)beginAlignmentOperationForReps:(id)arg1 ;
-(void)beginAlignmentOperationForReps:(id)arg1 preventCenterGuides:(char)arg2 preventSpacingGuides:(char)arg3 ;
-(void)p_addGuidesForLayout:(id)arg1 ;
-(void)p_addGuide:(id)arg1 toSortedArray:(id)arg2 ;
-(void)p_addSpacingGuidesForFrame:(CGRect)arg1 spacing:(id)arg2 isVerticalSpacing:(char)arg3 ;
-(CGPoint)snapRectToGuides:(CGRect)arg1 forKnobTag:(unsigned)arg2 snapSize:(char)arg3 ;
-(float)p_maxSnap;
-(char)p_guidesAreRelevantForEdge:(int)arg1 whileDraggingKnobTag:(unsigned)arg2 ;
-(id)p_guideClosestToEdge:(int)arg1 ofFrame:(CGRect)arg2 ;
-(id)p_closestGuideForOffset:(float)arg1 predicate:(id)arg2 inArray:(id)arg3 ;
-(char)p_sizingGuidesAreRelevantForOrientation:(int)arg1 whileDraggingKnobTag:(unsigned)arg2 ;
-(void)showGuidesAlignedWithRect:(CGRect)arg1 forKnobTag:(unsigned)arg2 shouldRenderX:(char)arg3 shouldRenderY:(char)arg4 shouldRenderSizeGuides:(char)arg5 ;
-(id)p_guidesForEdge:(int)arg1 ofFrame:(CGRect)arg2 ;
-(float)p_spacingForCenterOrSpacingGuide:(id)arg1 ;
-(char)doNotRemoveExistingGuidesWhenDisplaying;
-(id)p_guidesForOffset:(float)arg1 predicate:(id)arg2 inArray:(id)arg3 ;
-(void)hideAlignmentGuides;
-(void)hideSizingGuides;
-(void)p_getOffset:(float*)arg1 andGuidesArray:(id*)arg2 forEdge:(int)arg3 ofFrame:(CGRect)arg4 ;
-(void)beginAlignmentOperationForRep:(id)arg1 ;
-(CGPoint)snapRectToGuides:(CGRect)arg1 ;
-(CGPoint)snapRectToGuides:(CGRect)arg1 forKnobTag:(unsigned)arg2 ;
-(void)showGuidesAlignedWithRect:(CGRect)arg1 shouldRenderX:(char)arg2 shouldRenderY:(char)arg3 ;
-(void)showGuidesAlignedWithRect:(CGRect)arg1 forKnobTag:(unsigned)arg2 ;
-(void)showSizingGuidesAlignedWithLayout:(id)arg1 forKnobTag:(unsigned)arg2 ;
-(void)showSizingGuideUIForRep:(id)arg1 matchingWidth:(char)arg2 matchingHeight:(char)arg3 ;
-(void)endAlignmentOperation;
-(void)setDoNotRemoveExistingGuidesWhenDisplaying:(char)arg1 ;
-(char)didJustSnapInX;
-(char)didJustSnapInY;
@end

