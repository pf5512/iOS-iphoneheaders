/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, MRContext, NSMutableDictionary;

@interface MRShader : NSObject {

	NSString* mShaderID;
	NSString* mShaderKey;
	NSDictionary* mDescription;
	MRContext* mContext;
	unsigned mProgram;
	unsigned mVertexShader;
	unsigned mFragmentShader;
	MRContext* mUseContext;
	float mModelViewProjectionMatrix[16];
	float mNormal[3];
	float mTextureMatrix[4][16];
	float mForeColor[4];
	int mModelViewProjectionMatrixLocation;
	int mNormalLocation;
	int mTextureMatrixLocation[4];
	int mForeColorLocation;
	NSMutableDictionary* mUniformLocations;
	NSMutableDictionary* mUniforms;
	NSMutableDictionary* mAttributeLocations;
	char mTextureUnitsAreBound;

}

@property (readonly) NSString * shaderID; 
@property (readonly) NSString * shaderKey; 
@property (nonatomic,readonly) unsigned program; 
@property (retain) MRContext * useContext; 
@property (assign) char textureUnitsAreBound; 
-(unsigned)program;
-(void)dealloc;
-(void)setForeColor:(const float*)arg1 ;
-(NSString *)shaderID;
-(void)setTextureMatrix:(float)arg1 onTextureUnit:(unsigned)arg2 ;
-(char)textureUnitsAreBound;
-(void)setTextureUnitsAreBound:(char)arg1 ;
-(MRContext *)useContext;
-(void)setUseContext:(MRContext *)arg1 ;
-(void)setModelViewProjectionMatrix:(float)arg1 ;
-(char)caresAboutForeColor;
-(char)caresAboutNormal;
-(void)setNormal:(float)arg1 :(float)arg2 :(float)arg3 ;
-(void)setUniformVec2:(float)arg1 :(float)arg2 forKey:(id)arg3 ;
-(void)setUniform:(id)arg1 forKey:(id)arg2 ;
-(int)locationForAttribute:(id)arg1 ;
-(id)initWithShaderID:(id)arg1 shaderKey:(id)arg2 description:(id)arg3 vertexShader:(unsigned)arg4 andFragmentShader:(unsigned)arg5 inContext:(id)arg6 ;
-(int)_locationForUniform:(id)arg1 ;
-(void)setUniformInt:(int)arg1 forKey:(id)arg2 ;
-(void)setUniformFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setUniformVec3:(float)arg1 :(float)arg2 :(float)arg3 forKey:(id)arg4 ;
-(void)setUniformVec4:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)arg5 ;
-(void)setUniformMat3:(float)arg1 forKey:(id)arg2 ;
-(void)setUniformMat4:(float)arg1 forKey:(id)arg2 ;
-(NSString *)shaderKey;
@end

