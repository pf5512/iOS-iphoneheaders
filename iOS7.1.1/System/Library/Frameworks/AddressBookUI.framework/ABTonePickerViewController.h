/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@interface ABTonePickerViewController : ABPickerViewController {

	bool _isTextToneViewController;

}

@property (nonatomic,readonly) id tonePicker; 
-(void)setStyleProvider:(id)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(id)initAsRingtoneViewController:(bool)arg1 ;
-(id)tonePicker;
-(void)ringtoneSaveButtonClicked:(id)arg1 ;
-(id)init;
-(void)loadView;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
@end

