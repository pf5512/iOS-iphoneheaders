/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDView.h>

@interface HNDPinchChainView : HNDView {

	CGPoint _startPoint;
	CGPoint _endPoint;
	char _pressed;
	int pinchChainMode;

}

@property (assign,nonatomic) CGPoint startPoint;                         //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) CGPoint endPoint;                           //@synthesize endPoint=_endPoint - In the implementation block
@property (assign,getter=isPressed,nonatomic) char pressed;              //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) int pinchChainMode; 
-(void)setPinchChainMode:(int)arg1 ;
-(CGPoint)midPoint;
-(int)pinchChainMode;
-(char)isPressed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isUserInteractionEnabled;
-(void)setPressed:(char)arg1 ;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)endPoint;
@end
