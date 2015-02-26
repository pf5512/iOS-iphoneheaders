/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <SpringBoard/_SBFakeBlur.h>
#import <SpringBoard/SBWallpaperObserver.h>

@protocol _SBFakeBlurObserver;
@class NSString;

@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver> {

	long long _variant;
	id<_SBFakeBlurObserver> _observer;

}

@property (assign,nonatomic) id<_SBFakeBlurObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(long long)effectiveStyle;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didMoveToSuperview;
-(void)_updateBackgroundColor;
-(id<_SBFakeBlurObserver>)observer;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(void)requestStyle:(long long)arg1 ;
-(id)initWithVariant:(long long)arg1 ;
@end
