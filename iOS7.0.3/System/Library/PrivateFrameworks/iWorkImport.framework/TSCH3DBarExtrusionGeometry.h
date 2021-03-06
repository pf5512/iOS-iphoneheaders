/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DExtrusionGeometry.h>

@class TSCH3DNormalDirectionMapper;

@interface TSCH3DBarExtrusionGeometry : TSCH3DExtrusionGeometry {

	BarExtrusionSetting mExtrusionSetting;
	TSCH3DNormalDirectionMapper* mNormalDirectionMapper;
	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >* mNormalizedSpine;
	float mScaleMappingStartingHeight;
	float mBottomCapScale;

}

@property (assign,nonatomic) BarExtrusionSetting extrusionSetting; 
@property (nonatomic,readonly) TSCH3DNormalDirectionMapper * normalDirectionMapper; 
@property (nonatomic,readonly) float scaleMappingStartingHeight; 
@property (nonatomic,readonly) float bottomCapScale; 
@property (nonatomic,readonly) BOOL isCylindrical; 
@property (nonatomic,readonly) BOOL hasTopBevel; 
@property (nonatomic,readonly) BOOL hasBottomBevel; 
@property (nonatomic,readonly) float size; 
+(id)namedBevelInterpolationShaderFunction;
-(float)scaleMappingStartingHeight;
-(float)bottomCapScale;
-(unsigned)capOffset;
-(void)generateArrays;
-(id)normalDirectionMapper;
-(void)setExtrusionSetting:(BarExtrusionSetting)arg1 ;
-(unsigned)geometryOffset;
-(int)capCount;
-(void)p_insertCrossPointsIntoVector:(vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)arg1 ;
-(BOOL)hasBottomBevel;
-(BOOL)hasTopBevel;
-(void)p_updateNormalizedSpineScaleMappingsUsingTransform:(const tmat4x4<float>*)arg1 forSpineGenerator:(id)arg2 ;
-(void)debug_printDataPoints;
-(BOOL)isCylindrical;
-(id)selectionKnobPositions;
-(BarExtrusionSetting)extrusionSetting;
-(void)dealloc;
-(float)size;
-(id)init;
-(id).cxx_construct;
-(int)geometryCount;
-(void).cxx_destruct;
@end

