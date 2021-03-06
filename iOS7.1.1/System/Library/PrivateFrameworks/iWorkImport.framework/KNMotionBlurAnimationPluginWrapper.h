/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol KNAnimationPluginAnimationRendering;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary, NSArray, KNMotionBlurWrapper, NSObject;

@interface KNMotionBlurAnimationPluginWrapper : NSObject {

	NSDictionary* _animationDict;
	NSDictionary* _animationCacheDict;
	/*^block*/ id _textureDrawOptionsBlock;
	NSArray* _generatedTextures;
	bool _shouldGenerateNewTexturesFromLayers;
	bool _isSetup;
	KNMotionBlurWrapper* _motionBlurWrapper;
	NSObject<KNAnimationPluginAnimationRendering>* _animationPlugin;
	CGRect _drawableFrame;
	CGRect _animationFrame;
	CATransform3D _projectionTransform;

}

@property (nonatomic,readonly) KNMotionBlurWrapper * motionBlurWrapper;                                    //@synthesize motionBlurWrapper=_motionBlurWrapper - In the implementation block
@property (assign,nonatomic) CGRect drawableFrame;                                                         //@synthesize drawableFrame=_drawableFrame - In the implementation block
@property (assign,nonatomic) CGRect animationFrame;                                                        //@synthesize animationFrame=_animationFrame - In the implementation block
@property (assign,nonatomic) CATransform3D projectionTransform;                                            //@synthesize projectionTransform=_projectionTransform - In the implementation block
@property (assign,nonatomic) bool shouldGenerateNewTexturesFromLayers;                                     //@synthesize shouldGenerateNewTexturesFromLayers=_shouldGenerateNewTexturesFromLayers - In the implementation block
@property (assign,nonatomic) NSObject<KNAnimationPluginAnimationRendering> * animationPlugin;              //@synthesize animationPlugin=_animationPlugin - In the implementation block
@property (assign,nonatomic) bool isSetup;                                                                 //@synthesize isSetup=_isSetup - In the implementation block
-(CATransform3D)projectionTransform;
-(void)renderFrameWithContext:(id)arg1 ;
-(id)initWithAnimationPlugin:(id)arg1 drawableFrame:(CGRect)arg2 animationFrame:(CGRect)arg3 ;
-(void)setupWithContext:(id)arg1 animationContext:(id)arg2 orthographicProjection:(bool)arg3 ;
-(id)motionBlurWrapper;
-(void)setShouldGenerateNewTexturesFromLayers:(bool)arg1 ;
-(bool)shouldGenerateNewTexturesFromLayers;
-(CATransform3D)p_projectionTransformWithType:(long long)arg1 customProjectionTransform:(CATransform3D)arg2 context:(id)arg3 animationContext:(id)arg4 ;
-(id)animationPlugin;
-(id)p_generatedTexturesFromLayersInAnimationDict:(id)arg1 context:(id)arg2 animationContext:(id)arg3 textures:(id)arg4 ;
-(void)p_setupAnimationDictionariesWithAnimationDict:(id)arg1 context:(id)arg2 ;
-(CGRect)animationFrame;
-(void)setIsSetup:(bool)arg1 ;
-(void)setupWithContext:(id)arg1 animationContext:(id)arg2 animationDict:(id)arg3 textures:(id)arg4 projectionTransformType:(long long)arg5 customProjectionTransform:(CATransform3D)arg6 ;
-(CGRect)drawableFrame;
-(void)setDrawableFrame:(CGRect)arg1 ;
-(void)setAnimationFrame:(CGRect)arg1 ;
-(void)setProjectionTransform:(CATransform3D)arg1 ;
-(void)setAnimationPlugin:(id)arg1 ;
-(void)dealloc;
-(bool)isSetup;
-(void)teardown;
@end

