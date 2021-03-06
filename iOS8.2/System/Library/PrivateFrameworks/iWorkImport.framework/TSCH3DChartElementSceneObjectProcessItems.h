/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartElementSceneObject, TSCH3DSceneRenderPipeline, TSCH3DChartElementProperties, TSCH3DRenderProcessor;

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject <TSCHUnretainedParent> {

	TSCH3DChartElementSceneObject* mSceneObject;
	TSCH3DSceneRenderPipeline* mPipeline;
	TSCH3DChartElementProperties* mProperties;
	vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> >* mDelayedItems;

}

@property (nonatomic,readonly) char pushStates; 
@property (nonatomic,readonly) char useBoundsGeometry; 
@property (nonatomic,readonly) char geometryOnly; 
@property (nonatomic,readonly) TSCH3DRenderProcessor * processor; 
+(id)processItemsWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3 ;
-(TSCH3DRenderProcessor *)processor;
-(void)clearParent;
-(id)initWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3 ;
-(char)useBoundsGeometry;
-(char)geometryOnly;
-(RenderElementInfo)elementInfoWithSeries:(id)arg1 position:(const tvec2<int>*)arg2 ;
-(char)pushStates;
-(void)p_processElementInfoWithSeries:(id)arg1 position:(const tvec2<int>*)arg2 ;
-(void)performItemsProcessing;
-(char)p_delayedItemsAreUnique;
-(void)processDelayedItemsWithOpacity:(float)arg1 ;
-(void)processItems;
-(void)dealloc;
@end

