/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDSmartPathSource
@property (readonly) unsigned numberOfControlKnobs; 
@optional
-(CGPoint*)fixedPointForControlKnobChange;

@required
-(void)setControlKnobPosition:(unsigned)arg1 toPoint:(CGPoint)arg2;
-(CGPoint*)getControlKnobPosition:(unsigned)arg1;
-(id)getFeedbackStringForKnob:(unsigned)arg1;
-(CGPathRef)newFeedbackPathForKnob:(unsigned)arg1;
-(unsigned)numberOfControlKnobs;
@end

