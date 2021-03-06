/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@interface PKSettingTableCell : UITableViewCell {

	UISwitch* _settingSwitch;
	id _target;
	SEL _action;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (nonatomic,readonly) id target;                      //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                     //@synthesize action=_action - In the implementation block
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SEL)action;
-(id)target;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
@end

