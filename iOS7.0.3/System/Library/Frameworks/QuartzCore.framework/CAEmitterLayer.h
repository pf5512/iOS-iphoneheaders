/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAEmitterLayer : CALayer

@property (assign) CGPathRef emitterPath; 
@property (assign) float emitterDuration; 
@property (assign) float spinBias; 
@property (copy) NSArray * emitterBehaviors; 
@property (assign) CGRect cullRect; 
@property (assign) float cullMinZ; 
@property (assign) float cullMaxZ; 
@property (copy) NSArray * emitterCells; 
@property (assign) float birthRate; 
@property (assign) float lifetime; 
@property (assign) CGPoint emitterPosition; 
@property (assign) float emitterZPosition; 
@property (assign) CGSize emitterSize; 
@property (assign) float emitterDepth; 
@property (copy) NSString * emitterShape; 
@property (copy) NSString * emitterMode; 
@property (copy) NSString * renderMode; 
@property (assign) BOOL preservesDepth; 
@property (assign) float velocity; 
@property (assign) float scale; 
@property (assign) float spin; 
@property (assign) unsigned seed; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(unsigned)seed;
-(bool)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(id)renderMode;
-(void)setRenderMode:(id)arg1 ;
-(float)birthRate;
-(float)lifetime;
-(float)spin;
-(id)emitterCells;
-(id)emitterBehaviors;
-(void)setBirthRate:(float)arg1 ;
-(void)setLifetime:(float)arg1 ;
-(void)setSpin:(float)arg1 ;
-(void)setEmitterCells:(id)arg1 ;
-(void)setEmitterBehaviors:(id)arg1 ;
-(float)emitterDuration;
-(CGPoint)emitterPosition;
-(float)emitterZPosition;
-(CGSize)emitterSize;
-(float)emitterDepth;
-(float)spinBias;
-(CGRect)cullRect;
-(float)cullMinZ;
-(float)cullMaxZ;
-(CGPathRef)emitterPath;
-(id)emitterShape;
-(id)emitterMode;
-(BOOL)preservesDepth;
-(void)setEmitterShape:(id)arg1 ;
-(void)setEmitterMode:(id)arg1 ;
-(void)setEmitterPosition:(CGPoint)arg1 ;
-(void)setEmitterZPosition:(float)arg1 ;
-(void)setEmitterSize:(CGSize)arg1 ;
-(void)setEmitterDepth:(float)arg1 ;
-(void)setPreservesDepth:(BOOL)arg1 ;
-(void)setSeed:(unsigned)arg1 ;
-(void)setEmitterPath:(CGPathRef)arg1 ;
-(void)setEmitterDuration:(float)arg1 ;
-(void)setSpinBias:(float)arg1 ;
-(void)setCullRect:(CGRect)arg1 ;
-(void)setCullMinZ:(float)arg1 ;
-(void)setCullMaxZ:(float)arg1 ;
-(void)setVelocity:(float)arg1 ;
-(float)scale;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setScale:(float)arg1 ;
-(float)velocity;
-(void)reloadValueForKeyPath:(id)arg1 ;
@end
