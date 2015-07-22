/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIView.h>

@class CALayer;

@interface PHInCallRoundedRectView : UIView {

	CALayer* _luminanceRingLayer;
	CALayer* _dodgeRingLayer;
	CALayer* _highlightDodgeLayer;
	CALayer* _highlightLuminanceLayer;
	CALayer* _selectionLayer;
	float _cornerRadius;
	float _strokeWidth;

}

@property (retain) CALayer * luminanceRingLayer;                   //@synthesize luminanceRingLayer=_luminanceRingLayer - In the implementation block
@property (retain) CALayer * dodgeRingLayer;                       //@synthesize dodgeRingLayer=_dodgeRingLayer - In the implementation block
@property (retain) CALayer * highlightDodgeLayer;                  //@synthesize highlightDodgeLayer=_highlightDodgeLayer - In the implementation block
@property (retain) CALayer * highlightLuminanceLayer;              //@synthesize highlightLuminanceLayer=_highlightLuminanceLayer - In the implementation block
@property (retain) CALayer * selectionLayer;                       //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (assign) float cornerRadius;                             //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign) float strokeWidth;                              //@synthesize strokeWidth=_strokeWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(id)createRingImageWithSize:(CGSize)arg1 strokeWidth:(float)arg2 color:(id)arg3 ;
-(CALayer *)luminanceRingLayer;
-(void)setLuminanceRingLayer:(CALayer *)arg1 ;
-(CALayer *)dodgeRingLayer;
-(void)setDodgeRingLayer:(CALayer *)arg1 ;
-(CALayer *)highlightDodgeLayer;
-(void)setHighlightDodgeLayer:(CALayer *)arg1 ;
-(CALayer *)highlightLuminanceLayer;
-(void)setHighlightLuminanceLayer:(CALayer *)arg1 ;
-(CALayer *)selectionLayer;
-(void)setSelectionLayer:(CALayer *)arg1 ;
-(float)strokeWidth;
-(void)setStrokeWidth:(float)arg1 ;
@end
