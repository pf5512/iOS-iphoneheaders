/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSArray, UIColor;

@interface UIImageView : UIView {

	id _storage;
	UIImage* _decompressingImage;
	UIImage* _decompressingHighlightedImage;
	UIEdgeInsets _cachedEdgeInsetsForEffects;
	BOOL _edgeInsetsForEffectsAreValid;
	BOOL __animatesContents;
	UIEdgeInsets _edgeInsetsForEffects;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * highlightedImage; 
@property (assign,getter=isUserInteractionEnabled,nonatomic,@dynamic) BOOL userInteractionEnabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,copy) NSArray * animationImages; 
@property (nonatomic,copy) NSArray * highlightedAnimationImages; 
@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic) int animationRepeatCount; 
@property (nonatomic,@dynamic,retain) UIColor * tintColor; 
@property (assign,nonatomic) int drawMode; 
@property (assign,setter=_setTemplateImageRenderingEffects:,nonatomic) unsigned _templateImageRenderingEffects; 
@property (assign,setter=_setAnimatesContents:,nonatomic) BOOL _animatesContents;                                            //@synthesize _animatesContents=__animatesContents - In the implementation block
@property (assign,setter=_setDefaultRenderingMode:,nonatomic) int _defaultRenderingMode; 
@property (nonatomic,readonly) UIEdgeInsets _edgeInsetsForEffects;                                                           //@synthesize edgeInsetsForEffects=_edgeInsetsForEffects - In the implementation block
@property (assign,setter=_setEdgeInsetsForEffectsAreValid:,nonatomic) BOOL _edgeInsetsForEffectsAreValid;                    //@synthesize edgeInsetsForEffectsAreValid=_edgeInsetsForEffectsAreValid - In the implementation block
@property (assign,setter=_setMasksTemplateImages:,nonatomic) BOOL _masksTemplateImages; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)image;
-(CGImageRef)imageRef;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)useBlockyMagnificationInClassic;
-(BOOL)_canDrawContent;
-(id)_generateBackdropMaskImage;
-(void)tintColorDidChange;
-(void)setAnimationRepeatCount:(int)arg1 ;
-(void)_setDefaultRenderingMode:(int)arg1 ;
-(unsigned)_templateImageRenderingEffects;
-(void)_setTemplateImageRenderingEffects:(unsigned)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(id)animationImages;
-(id)highlightedAnimationImages;
-(id)highlightedImage;
-(void)setHighlightedImage:(id)arg1 ;
-(int)_defaultRenderingMode;
-(BOOL)_masksTemplateImages;
-(BOOL)_shouldDrawImage:(id)arg1 ;
-(id)_cachedPretiledImageForImage:(id)arg1 ;
-(BOOL)_needsImageEffectsForImage:(id)arg1 ;
-(id)_effectiveTintColorWithImage:(id)arg1 ;
-(BOOL)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(BOOL)arg2 ;
-(void)_drawImageEffectsForImage:(id)arg1 inRect:(CGRect)arg2 ;
-(BOOL)isAnimating;
-(BOOL)_setImageViewContents:(id)arg1 ;
-(void)stopAnimating;
-(void)_clearPretiledImageCacheForImage:(id)arg1 ;
-(void)_updatePretiledImageCacheForImage:(id)arg1 ;
-(BOOL)_animatesContents;
-(void)_updateState;
-(void)_updateTemplateProperties;
-(BOOL)_recomputePretilingState;
-(void)_setViewGeometry:(CGRect)arg1 forMetric:(int)arg2 ;
-(UIEdgeInsets)_edgeInsetsForEffects;
-(id)_activeImage;
-(BOOL)_shouldTreatImageAsTemplate:(id)arg1 ;
-(void)_updateMasking;
-(void)_templateSettingsDidChange;
-(void)startAnimating;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setAnimationImages:(id)arg1 ;
-(void)setHighlightedAnimationImages:(id)arg1 ;
-(double)animationDuration;
-(int)animationRepeatCount;
-(void)_setMasksTemplateImages:(BOOL)arg1 ;
-(int)drawMode;
-(void)setDrawMode:(int)arg1 ;
-(void)setCGImageRef:(CGImageRef)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)_edgeInsetsForEffectsAreValid;
-(void)_setEdgeInsetsForEffectsAreValid:(BOOL)arg1 ;
-(void)_setAnimatesContents:(BOOL)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_applySettingsForLegibilityStyle:(int)arg1 ;
@end

