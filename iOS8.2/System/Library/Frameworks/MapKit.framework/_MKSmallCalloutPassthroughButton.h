/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIControl, UIView;

@interface _MKSmallCalloutPassthroughButton : UIControl {

	UIControl* _targetControl;
	UIView* _highlightView;
	float _leftHighlightInset;

}

@property (nonatomic,retain) UIControl * targetControl;              //@synthesize targetControl=_targetControl - In the implementation block
@property (assign,nonatomic) float leftHighlightInset;               //@synthesize leftHighlightInset=_leftHighlightInset - In the implementation block
-(void)setTargetControl:(UIControl *)arg1 ;
-(void)handleTap:(id)arg1 ;
-(UIControl *)targetControl;
-(float)leftHighlightInset;
-(void)setLeftHighlightInset:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 ;
@end
