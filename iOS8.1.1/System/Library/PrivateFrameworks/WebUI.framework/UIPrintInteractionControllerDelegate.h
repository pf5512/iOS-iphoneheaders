/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPrintInteractionControllerDelegate <NSObject>
@optional
-(void)printInteractionControllerWillPresentPrinterOptions:(id)arg1;
-(id)printInteractionControllerParentViewController:(id)arg1;
-(void)printInteractionControllerDidPresentPrinterOptions:(id)arg1;
-(void)printInteractionControllerWillDismissPrinterOptions:(id)arg1;
-(void)printInteractionControllerDidDismissPrinterOptions:(id)arg1;
-(id)printInteractionController:(id)arg1 choosePaper:(id)arg2;
-(double)printInteractionController:(id)arg1 cutLengthForPaper:(id)arg2;
-(void)printInteractionControllerWillStartJob:(id)arg1;
-(void)printInteractionControllerDidFinishJob:(id)arg1;

@end

