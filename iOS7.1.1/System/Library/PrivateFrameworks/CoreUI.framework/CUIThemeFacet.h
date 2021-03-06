/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeImageSource.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding> {

	renditionkeytoken* _renditionKeyList;
	unsigned long long _themeIndex;
	long long _renditionType;
	CGSize _thumbnailSize;
	CGPoint _hotSpot;
	struct {
		unsigned hasCheckedButtonGlyph : 1;
		unsigned isButtonGlyph : 1;
		unsigned reserved : 14;
	}  _fFlags;

}
+(void)initialize;
+(id)_themeStoreForThemeIndex:(unsigned long long)arg1 ;
+(unsigned long long)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)facetWithElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 fromTheme:(unsigned long long)arg5 ;
+(id)_facetWithKeyList:(const renditionkeytoken*)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4 ;
+(void)_invalidateArtworkCaches;
+(unsigned long long)themeForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)themeWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)debug_bundleIdentifierForThemeRef:(unsigned long long)arg1 ;
+(id)facetWithElement:(long long)arg1 part:(long long)arg2 fromTheme:(unsigned long long)arg3 ;
+(id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2 ;
+(id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned long long)arg2 ;
+(bool)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)alpha;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)image;
-(void)setControlSize:(long long)arg1 ;
-(CGSize)imageSize;
-(id)imageForState:(long long)arg1 ;
-(long long)controlSize;
-(id)displayName;
-(id)thumbnail;
-(id)imageForSliceIndex:(long long)arg1 ;
-(id)_themeStore;
-(bool)_isButtonGlyph;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 context:(CGContextRef)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(bool)arg6 ;
-(void)_drawSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 context:(CGContextRef)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(bool)arg6 isFlipped:(bool)arg7 ;
-(id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2 ;
-(void)_initWithRenditionKey:(id)arg1 ;
-(void)_applyFixedAttributesToKey:(id)arg1 ;
-(CGImageRef)copyLayerImageContentsAndCenter:(CGRect*)arg1 renditionKey:(id)arg2 ;
-(id)_rendition;
-(id)gradientWithKeyAdjustment:(id)arg1 angle:(double*)arg2 style:(unsigned long long*)arg3 ;
-(CGImageRef)copyLayerImageContentsAndCenter:(CGRect*)arg1 ;
-(id)blendModeAsCAFilterString;
-(void)_drawSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 context:(CGContextRef)arg3 isFocused:(bool)arg4 isFlipped:(bool)arg5 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(bool)arg4 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(bool)arg4 context:(CGContextRef)arg5 ;
-(id)themeRendition;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(void)drawMaskInFrame:(CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(void)_updateSpecificRenditionKey:(id)arg1 isFocused:(bool*)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(bool)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(long long)arg2 ;
-(id)_imageForRenditionFromKey:(id)arg1 withSize:(CGSize)arg2 isMask:(bool)arg3 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 ;
-(void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(bool)arg5 ;
-(void)drawGradientInFrame:(CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(bool)arg5 keyAdjustment:(id)arg6 context:(CGContextRef)arg7 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(bool)arg4 keyAdjustment:(id)arg5 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 keyAdjustment:(id)arg4 ;
-(void)drawMaskInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(bool)arg4 keyAdjustment:(id)arg5 ;
-(id)renditionForSpecificKeyWrapper:(id)arg1 ;
-(void)_drawSpecificRenditionKey:(id)arg1 rendition:(id)arg2 inFrame:(CGRect)arg3 context:(CGContextRef)arg4 alpha:(double)arg5 operation:(int)arg6 isFocused:(bool)arg7 isFlipped:(bool)arg8 ;
-(long long)_sliceIndexForSlice:(long long)arg1 ofRendition:(id)arg2 ;
-(id)_approximateRenditionForRenditionKey:(id)arg1 ;
-(id)imageForState:(long long)arg1 value:(long long)arg2 ;
-(bool)isValidButtonImageSourceForSize:(unsigned long long)arg1 ;
-(id)imageForState:(long long)arg1 value:(long long)arg2 size:(unsigned long long)arg3 ;
-(id)renditionKey;
-(CGSize)_thumbnailSizeForRendition:(id)arg1 ;
-(id)imageForState:(long long)arg1 withValue:(long long)arg2 ;
-(bool)hasValueSlices;
-(CGPoint)_hotSpot;
-(void)_setHasCheckedButtonGlyph:(bool)arg1 ;
-(void)_setIsButtonGlyph:(bool)arg1 ;
-(id)makeLayer;
-(void)updateLayer:(id)arg1 ;
-(void)drawInFrame:(CGRect)arg1 isFocused:(bool)arg2 context:(CGContextRef)arg3 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 isFocused:(bool)arg3 ;
-(void)drawAsOnePartWithSlice:(int)arg1 inFrame:(CGRect)arg2 isFocused:(bool)arg3 ;
-(void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(CGRect)arg2 isFocused:(bool)arg3 context:(CGContextRef)arg4 ;
-(void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(CGRect)arg2 isFocused:(bool)arg3 context:(CGContextRef)arg4 ;
-(void)drawSegmentInFrame:(CGRect)arg1 isFocused:(bool)arg2 segmentType:(int)arg3 ;
-(void)drawInFrame:(CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 ;
-(void)drawHighlightInFrame:(CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 ;
-(void)drawMaskInFrame:(CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 ;
-(bool)hitTestAtPoint:(CGPoint)arg1 inFrame:(CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(void)drawPulseInFrame:(CGRect)arg1 pulseValue:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(void)drawGradientInFrame:(CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(bool)arg5 keyAdjustment:(id)arg6 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 isFocused:(bool)arg3 keyAdjustment:(id)arg4 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(double)arg2 keyAdjustment:(id)arg3 ;
-(void)drawMaskInFrame:(CGRect)arg1 alpha:(double)arg2 isFocused:(bool)arg3 keyAdjustment:(id)arg4 ;
-(void)drawPulseInFrame:(CGRect)arg1 pulseValue:(double)arg2 isFocused:(bool)arg3 keyAdjustment:(id)arg4 ;
-(void)_drawSlice:(long long)arg1 inFrame:(CGRect)arg2 withKeyAdjustment:(id)arg3 ;
-(id)renditionMetricsWithKeyAdjustment:(id)arg1 ;
-(id)renditionSliceInformationForRect:(CGRect)arg1 keyAdjustment:(id)arg2 ;
-(bool)isValidButtonImageSource;
-(id)imageWithKeyAdjustment:(id)arg1 ;
-(void)_setThemeIndex:(unsigned long long)arg1 ;
-(long long)renditionType;
-(CGSize)topLeftCapSize;
-(id)maskForSlice:(long long)arg1 withKeyAdjustment:(id)arg2 ;
-(id)imageForSlice:(long long)arg1 withKeyAdjustment:(id)arg2 ;
-(id)imageWithSize:(CGSize)arg1 keyAdjustment:(id)arg2 ;
-(id)highlightWithSize:(CGSize)arg1 keyAdjustment:(id)arg2 ;
-(id)maskWithSize:(CGSize)arg1 keyAdjustment:(id)arg2 ;
-(unsigned long long)themeIndex;
-(int)blendMode;
-(CGContextRef)currentCGContext;
-(CGSize)thumbnailSize;
@end

