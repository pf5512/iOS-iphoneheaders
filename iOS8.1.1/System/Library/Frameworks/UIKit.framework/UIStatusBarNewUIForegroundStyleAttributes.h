/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarForegroundStyleAttributes.h>

@class NSString, UIColor;

@interface UIStatusBarNewUIForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes {

	NSString* _uniqueIdentifier;
	BOOL _isTintColorBlack;
	BOOL _hasBusyBackground;
	UIColor* _tintColor;

}

@property (nonatomic,retain,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(void)dealloc;
-(UIColor *)tintColor;
-(id)textColorForStyle:(long long)arg1 ;
-(id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4 ;
-(double)edgePadding;
-(id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3 ;
-(id)textForNetworkType:(int)arg1 ;
-(id)batteryImageNameWithCapacity:(double)arg1 ;
-(double)batteryAccessoryMargin;
-(void)drawBatteryInsidesWithSize:(CGSize)arg1 capacity:(double)arg2 charging:(BOOL)arg3 ;
-(id)bluetoothBatteryImageNameWithCapacity:(double)arg1 ;
-(void)drawBluetoothBatteryInsidesWithSize:(CGSize)arg1 capacity:(double)arg2 ;
-(double)bluetoothBatteryExtraPadding;
-(long long)activityIndicatorStyleWithSyncActivity:(BOOL)arg1 ;
-(id)uniqueIdentifier;
-(double)sizeForMoonMaskVisible:(BOOL)arg1 ;
-(CGPoint)positionForMoonMaskInBounds:(CGRect)arg1 ;
-(double)textOffsetForStyle:(long long)arg1 ;
-(id)expandedNameForImageName:(id)arg1 ;
-(id)makeTextFontForStyle:(long long)arg1 ;
-(id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 ;
-(UIEdgeInsets)edgeInsetsForBatteryInsides;
-(double)_roundDimension:(double)arg1 ;
-(id)_batteryColorForCapacity:(double)arg1 lowCapacity:(double)arg2 charging:(BOOL)arg3 ;
-(UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
-(BOOL)_shouldUseBoldFontForStyle:(long long)arg1 ;
-(id)proportionalFontForFont:(id)arg1 ;
@end

