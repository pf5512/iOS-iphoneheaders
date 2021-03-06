/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKTilePool;

@interface VKTile : NSObject {

	VKTileKey _key;
	SCD_Struct_VK51 _box;
	SCD_Struct_VK42 _matrix;
	SCD_Struct_VK42* _inverseMatrix;
	VKTilePool* _pool;
	double _birthdate;
	SCD_Struct_VK47 bounds;
	VKCameraState _cameraState;
	SCD_Union_VG35 _shaderMatrix;

}

@property (nonatomic,readonly) VKTileKey key;                                     //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) double birthdate;                                  //@synthesize birthdate=_birthdate - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_VK42* matrix; 
@property (nonatomic,readonly) const SCD_Struct_VK42* inverseMatrix; 
@property (nonatomic,readonly) ? shaderMatrix;                                    //@synthesize shaderMatrix=_shaderMatrix - In the implementation block
@property (nonatomic,readonly) double tileWidth; 
-(void)dealloc;
-(id)description;
-(VKTileKey)key;
-(id).cxx_construct;
-(void)setKey:(const VKTileKey*)arg1 ;
-(const SCD_Struct_VK42*)matrix;
-(/*function pointer*/ void*)shaderMatrix;
-(void)setPool:(id)arg1 ;
-(const VKTileKey*)keyPointer;
-(id)initWithKey:(const VKTileKey*)arg1 ;
-(const SCD_Struct_VK42*)inverseMatrix;
-(double)tileWidth;
-(unsigned)geometryCount;
-(void)updateViewDependentStateWithContext:(id)arg1 ;
-(double)birthdate;
@end

