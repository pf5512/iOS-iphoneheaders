/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITableViewCell;

@interface UITableViewCellReorderControl : UIControl {

	UITableViewCell* _cell;
	CGPoint _downPoint;

}
+(CGSize)defaultSize;
+(id)grabberImage;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)shouldTrack;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)grabberImage;
-(id)initWithTableViewCell:(id)arg1 ;
@end

