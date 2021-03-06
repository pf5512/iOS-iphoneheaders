/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNPyramid : SCNGeometry {

	id _reserved;
	double _pyramidwidth;
	double _pyramidheight;
	double _pyramidlength;
	long long _pyramidwidthSegmentCount;
	long long _pyramidheightSegmentCount;
	long long _pyramidlengthSegmentCount;
	long long _pyramidprimitiveType;

}

@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) long long widthSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
@property (assign,nonatomic) long long lengthSegmentCount; 
+(id)SCNJSExportProtocol;
+(id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 ;
+(BOOL)supportsSecureCoding;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 ;
-(id)presentationGeometry;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)widthSegmentCount;
-(void)setWidthSegmentCount:(long long)arg1 ;
-(long long)heightSegmentCount;
-(void)setHeightSegmentCount:(long long)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)lengthSegmentCount;
-(void)setLengthSegmentCount:(long long)arg1 ;
-(id)presentationPyramid;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(id)description;
-(double)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(double)height;
-(void)setLength:(double)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(long long)primitiveType;
@end

