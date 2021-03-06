/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AXEditableTextCell.h>

@class UIStepper, UILabel;

@interface AXEditableTableCellWithStepper : AXEditableTextCell {

	UIStepper* _stepper;
	UILabel* _secondsLabel;

}

@property (nonatomic,retain) UIStepper * stepper;                 //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) UILabel * secondsLabel;              //@synthesize secondsLabel=_secondsLabel - In the implementation block
-(UILabel *)secondsLabel;
-(void)_stepperChanged:(id)arg1 ;
-(void)_updateSecondsLabel;
-(id)_formattedStringForStepperValue:(double)arg1 ;
-(void)setStepper:(UIStepper *)arg1 ;
-(void)setSecondsLabel:(UILabel *)arg1 ;
-(id)_stepperValueFormatString;
-(UIStepper *)stepper;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

