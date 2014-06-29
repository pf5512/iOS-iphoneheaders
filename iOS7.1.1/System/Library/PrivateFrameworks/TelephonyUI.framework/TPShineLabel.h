/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UILabel.h>

@interface TPShineLabel : UILabel {

	bool _isAnimating;

}

@property (assign,nonatomic) bool isAnimating;              //@synthesize isAnimating=_isAnimating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(bool)isAnimating;
-(id)_maskLayer;
-(CGPoint)_maskStartingPosition;
-(id)_maskAnimation;
-(CGPoint)_maskEndingPosition;
-(CGSize)_maskSize;
-(void)setIsAnimating:(bool)arg1 ;
@end
