/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerDirectionPad.h>

@class _GCControllerAxisInput;

@interface _GCControllerDirectionPad : GCControllerDirectionPad {

	/*^block*/id _valueChangedHandler;
	_GCControllerAxisInput* _xAxis;
	_GCControllerAxisInput* _yAxis;

}
-(id)down;
-(char)setHIDValue:(IOHIDValueRef)arg1 ;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(id)initWithFlippedY:(char)arg1 digital:(char)arg2 ;
-(id)xAxis;
-(id)yAxis;
-(void)_fireValueChanged;
-(id)description;
-(id)up;
-(id)left;
-(id)right;
@end

