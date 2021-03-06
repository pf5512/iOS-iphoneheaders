/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:53:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, CAShapeLayer;

@interface CAMPanoramaArrowView : UIView {

	UIImageView* _arrowHead;
	UIView* _arrowTail;
	CAShapeLayer* _arrowTailPiecesLayer;
	CGPathRef _currentTailPiecesPath;
	CGRect _arrowTailRect;
	float _currentNormalizedSpeed;
	float _tailBiggestDelta;
	float _tailBigDelta;
	float _tailMediumDelta;
	float _tailSmallDelta;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGPathRef)_newTailPiecesPathOfWidth:(float*)arg1 ;
-(void)_updateTailWithAnimationDuration:(double)arg1 ;
-(void)resetArrow;
-(void)animateArrowSpeedWithNormalizedSpeed:(float)arg1 duration:(double)arg2 ;
@end

