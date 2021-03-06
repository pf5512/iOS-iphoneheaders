/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CUIPSDGradientEvaluator;

@interface CUIPSDGradient : NSObject {

	CUIPSDGradientEvaluator* evaluator;
	double drawingAngle;
	unsigned gradientStyle;

}

@property (retain) CUIPSDGradientEvaluator * evaluator; 
@property (assign) double drawingAngle; 
@property (assign) unsigned gradientStyle; 
+(id)getMidpointLocationFromArray:(id)arg1 atIndex:(long long)arg2 withPolicy:(int)arg3 ;
+(id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 isRadial:(BOOL)arg5 ;
-(void)dealloc;
-(CUIPSDGradientEvaluator *)evaluator;
-(unsigned)gradientStyle;
-(double)drawingAngle;
-(id)initWithEvaluator:(id)arg1 drawingAngle:(double)arg2 gradientStyle:(unsigned)arg3 ;
-(void)setEvaluator:(CUIPSDGradientEvaluator *)arg1 ;
-(void)setDrawingAngle:(double)arg1 ;
-(void)setGradientStyle:(unsigned)arg1 ;
@end

