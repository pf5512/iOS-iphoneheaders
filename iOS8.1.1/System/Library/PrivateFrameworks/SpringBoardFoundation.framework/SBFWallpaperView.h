/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoardFoundation/_UISettingsKeyObserver.h>

@protocol SBFWallpaperViewLegibilityObserver, SBFWallpaperViewInternalObserver;
@class SBFWallpaperSettings, UIImageView, UIView, _UILegibilitySettingsProvider, _UILegibilitySettings, UIColor, NSTimer, SBFWallpaperParallaxSettings, UIImage, NSString;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver> {

	SBFWallpaperSettings* _wallpaperSettings;
	UIImageView* _topGradientView;
	UIImageView* _bottomGradientView;
	UIView* _parallaxView;
	double _contentScaleFactor;
	long long _variant;
	_UILegibilitySettingsProvider* _legibilitySettingsProvider;
	_UILegibilitySettings* _legibilitySettings;
	UIColor* _lastAverageColor;
	NSTimer* _colorSampleTimer;
	BOOL _shouldGenerateBlurredImagesWhenVisible;
	BOOL _generatingBlurredImages;
	SBFWallpaperParallaxSettings* _parallaxSettings;
	BOOL _wantsRasterization;
	long long _disallowRasterizationBlockCount;
	BOOL _filtersAverageColor;
	BOOL _continuousColorSamplingEnabled;
	BOOL _wallpaperAnimationEnabled;
	BOOL _parallaxEnabled;
	BOOL _suppressesGradients;
	id<SBFWallpaperViewLegibilityObserver> _legibilityObserver;
	UIView* _contentView;
	double _zoomFactor;
	double _contrast;
	double _parallaxFactor;
	id<SBFWallpaperViewInternalObserver> _internalObserver;
	double _parallaxAxisAdjustmentAngle;

}

@property (nonatomic,readonly) UIImage * wallpaperImage; 
@property (assign,nonatomic) id<SBFWallpaperViewLegibilityObserver> legibilityObserver;              //@synthesize legibilityObserver=_legibilityObserver - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                                      //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) long long variant;                                                      //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) BOOL filtersAverageColor;                                               //@synthesize filtersAverageColor=_filtersAverageColor - In the implementation block
@property (assign,nonatomic) double contrast;                                                        //@synthesize contrast=_contrast - In the implementation block
@property (assign,nonatomic) BOOL continuousColorSamplingEnabled;                                    //@synthesize continuousColorSamplingEnabled=_continuousColorSamplingEnabled - In the implementation block
@property (assign,nonatomic) BOOL wallpaperAnimationEnabled;                                         //@synthesize wallpaperAnimationEnabled=_wallpaperAnimationEnabled - In the implementation block
@property (assign,nonatomic) BOOL parallaxEnabled;                                                   //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (assign,nonatomic) double parallaxFactor;                                                  //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,nonatomic) id<SBFWallpaperViewInternalObserver> internalObserver;                  //@synthesize internalObserver=_internalObserver - In the implementation block
@property (assign,nonatomic) BOOL suppressesGradients;                                               //@synthesize suppressesGradients=_suppressesGradients - In the implementation block
@property (assign,nonatomic) double parallaxAxisAdjustmentAngle;                                     //@synthesize parallaxAxisAdjustmentAngle=_parallaxAxisAdjustmentAngle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowsParallax;
+(BOOL)_allowsRasterization;
+(BOOL)_shouldScaleForParallax;
-(CGRect)cropRect;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)invalidate;
-(void)setContrast:(double)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(double)contentScaleFactor;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(double)contrast;
-(BOOL)_isVisible;
-(UIImage *)wallpaperImage;
-(double)parallaxFactor;
-(BOOL)parallaxEnabled;
-(BOOL)supportsCropping;
-(void)updateLegibilitySettingsForAverageColor:(id)arg1 ;
-(id)_computeAverageColor;
-(void)_updateParallaxSettings;
-(void)_updateRasterizationState;
-(id)initWithFrame:(CGRect)arg1 variant:(long long)arg2 ;
-(void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(BOOL)arg2 ;
-(void)_updateScaleFactor;
-(void)_beginDisallowRasterizationBlock;
-(void)_updateContentViewScale;
-(void)_endDisallowRasterizationBlock;
-(void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 ;
-(void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 forced:(BOOL)arg3 ;
-(void)_prepareToAnimateGradients;
-(void)_updateGradientAlpha;
-(void)_updateGradientImage;
-(void)_handleVariantChange;
-(void)_cleanupAfterAnimatingGradients;
-(void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2 ;
-(id)_wallpaperName;
-(id)_primaryColorOverride;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(void)_updateGeneratingBlurs;
-(id)_blurReplacementImage;
-(id)_blurredImage;
-(id)_imageForBackdropParameters:(SCD_Struct_SB8)arg1 includeTint:(BOOL)arg2 ;
-(id)_displayedImage;
-(void)_handleVisibilityChange;
-(void)_applyParallaxSettings;
-(void)_notifyBlursInvalidated;
-(void)_startGeneratingBlurredImages;
-(void)_stopGeneratingBlurredImages;
-(void)_addParallax;
-(void)_removeParallax;
-(void)_notifyGeometryInvalidated;
-(id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(double)arg2 ;
-(BOOL)contrastRequiresTreatments;
-(BOOL)_shouldShowTopGradient;
-(BOOL)_shouldShowBottomGradient;
-(double)_topGradientAlpha;
-(double)_bottomGradientAlpha;
-(CGRect)_topGradientTestRect;
-(double)gradientOpacityInRect:(CGRect)arg1 contrastWithinBoxesFactor:(double)arg2 allowLuminanceCheck:(BOOL)arg3 ;
-(CGRect)_bottomGradientTestRect;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(void)prepareToAppear;
-(void)prepareToDisappear;
-(double)cropZoomScale;
-(void)setFiltersAverageColor:(BOOL)arg1 ;
-(double)contrastInRect:(CGRect)arg1 ;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(void)setGeneratesBlurredImages:(BOOL)arg1 ;
-(id)blurredImage;
-(id)imageForBackdropParameters:(SCD_Struct_SB8)arg1 includeTint:(BOOL)arg2 ;
-(void)setSuppressesGradients:(BOOL)arg1 ;
-(BOOL)isDisplayingWallpaper:(id)arg1 forVariant:(long long)arg2 options:(id)arg3 ;
-(BOOL)wantsRasterization;
-(BOOL)luminanceInRectRequiresTreatments:(CGRect)arg1 ;
-(id<SBFWallpaperViewLegibilityObserver>)legibilityObserver;
-(void)setLegibilityObserver:(id<SBFWallpaperViewLegibilityObserver>)arg1 ;
-(BOOL)filtersAverageColor;
-(BOOL)continuousColorSamplingEnabled;
-(void)setContinuousColorSamplingEnabled:(BOOL)arg1 ;
-(BOOL)wallpaperAnimationEnabled;
-(void)setWallpaperAnimationEnabled:(BOOL)arg1 ;
-(void)setParallaxFactor:(double)arg1 ;
-(id<SBFWallpaperViewInternalObserver>)internalObserver;
-(void)setInternalObserver:(id<SBFWallpaperViewInternalObserver>)arg1 ;
-(BOOL)suppressesGradients;
-(double)parallaxAxisAdjustmentAngle;
-(void)setParallaxAxisAdjustmentAngle:(double)arg1 ;
-(long long)variant;
-(void)setVariant:(long long)arg1 ;
@end

