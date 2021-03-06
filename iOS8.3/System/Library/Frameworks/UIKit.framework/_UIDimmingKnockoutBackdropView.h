/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIAlertControllerBackgroundView.h>

@class _UIBackdropView, UIView, NSString;

@interface _UIDimmingKnockoutBackdropView : UIView <UIAlertControllerBackgroundView> {

	_UIBackdropView* backdropView;
	UIView* dimmingKnockoutView;

}

@property (assign) float cornerRadius; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(void)setPressed:(char)arg1 animated:(char)arg2 ;
-(id)_filterForBackdropStyle:(int)arg1 ;
-(id)_dimmingKnockoutBackgroundColorForBackdropStyle:(int)arg1 ;
@end

