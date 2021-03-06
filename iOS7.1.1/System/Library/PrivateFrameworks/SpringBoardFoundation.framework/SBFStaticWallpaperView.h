/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSMutableSet, UIImage, SBFColorBoxes;

@interface SBFStaticWallpaperView : SBFWallpaperView {

	NSMutableSet* _mappedBackdropKeys;
	UIImage* _image;
	UIImage* _treatedImage;
	bool _treatWallpaper;
	SBFColorBoxes* _colorBoxes;

}

@property (nonatomic,retain) SBFColorBoxes * colorBoxes;              //@synthesize colorBoxes=_colorBoxes - In the implementation block
+(bool)_allowsParallax;
+(bool)_allowsRasterization;
-(void)dealloc;
-(void)setContentView:(id)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(float)_zoomScale;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(CGSize)_imageSize;
-(id)wallpaperImage;
-(id)_computeAverageColor;
-(unsigned long long)_colorBoxSize;
-(id)colorBoxes;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(id)_blurredImage;
-(id)_imageForBackdropParameters:(SCD_Struct_SB3)arg1 includeTint:(bool)arg2 ;
-(id)_displayedImage;
-(double)contrastInRect:(CGRect)arg1 ;
-(bool)isDisplayingWallpaper:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 ;
-(id)_createColorBoxes;
-(void)setColorBoxes:(id)arg1 ;
-(void)_setupContentView;
-(id)_wallpaperImageForAnalysis;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 treatWallpaper:(bool)arg3 ;
-(id)_treatedImageKey;
-(void)_removeMappedBlurs;
-(id)_mappedImageKeyForParameters:(SCD_Struct_SB3)arg1 includingTint:(bool)arg2 ;
-(id)_untintedImageForBackdropParameters:(SCD_Struct_SB3)arg1 ;
-(void)_resetColorBoxes;
-(id)_newTreatedImage;
-(void)_cacheTreatedImage;
@end

