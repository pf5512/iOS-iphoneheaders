/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:34:27 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <AirPortAssistant/StepByStepUIDevicePicker.h>

@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	int _selectorChoice;

}
-(void)viewWillAppear:(char)arg1 ;
-(void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2 ;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)updateNavigationButtons;
-(void)selectedDeviceUpdated;
-(char)canBeExtendedWithDWDS;
-(void)addBrowsedRecords:(id)arg1 toDestList:(id)arg2 ;
@end
