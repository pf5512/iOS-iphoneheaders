/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@class UIView;

@interface _UIScreenTransparentHitTestWindow : UIWindow {

	UIView* _hitTestableView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateTransformLayer;
-(BOOL)pointWithinHitTestInsets:(CGPoint)arg1 ;
-(void)setHitTestInsets:(UIEdgeInsets)arg1 ;
@end

