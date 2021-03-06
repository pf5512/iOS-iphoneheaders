/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TwoSteps/TwoSteps-Structs.h>
#import <UIKit/UIView.h>
#import <TwoSteps/NSXMLParserDelegate.h>

@class UIBezierPath, NSMutableArray, CAShapeLayer, UIColor, CABasicAnimation, NSNumber, NSString;

@interface BKUICurvesView : UIView <NSXMLParserDelegate> {

	UIBezierPath* _wholePath;
	NSMutableArray* _paths;
	NSMutableArray* _pathLayers;
	CAShapeLayer* _fingerLayer;
	UIColor* _color;
	unsigned long long _currentLayer;
	unsigned long long _preEstimateLayer;
	float _progress;
	BOOL _estimateFailed;
	BOOL _estimating;
	CABasicAnimation* _lastAnimation;
	double _lastRatio;
	NSNumber* _speed;

}

@property (retain) NSNumber * speed;                                //@synthesize speed=_speed - In the implementation block
@property (assign) float progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animateEstimateFailure;
-(void)_addEstimateWatchDog;
-(void)_checkEstimateFailedAfterAnimation:(id)arg1 ;
-(void)_resetLayers;
-(void)estimateProgress:(float)arg1 ;
-(void)_startAnimation:(unsigned long long)arg1 withColor:(id)arg2 isLast:(BOOL)arg3 ;
-(void)_removeEstimateWatchDog;
-(void)_animateFromLayer:(unsigned long long)arg1 toLayer:(unsigned long long)arg2 withColor:(id)arg3 ;
-(void)_drawFinger:(CGSize)arg1 ;
-(void)loadDataFromXML:(id)arg1 name:(id)arg2 color:(id)arg3 ;
-(unsigned long long)_animateFromLayer:(unsigned long long)arg1 toProgress:(float)arg2 withColor:(id)arg3 ;
-(void)setSublayersSize:(CGSize)arg1 ;
-(void)_resetEstimate:(id)arg1 ;
-(CGPoint)_getPoint:(id)arg1 ;
-(void)estimateFailed;
-(void)setSpeed:(NSNumber *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(NSNumber *)speed;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
@end

