/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:32:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@protocol SiriUIAudioRoutePickerControllerDelegate;
@class NSString, UIWindow, SiriRoutePickerAlertController, UIActionSheet;

@interface SiriUIAudioRoutePickerController : NSObject <UIActionSheetDelegate> {

	id<SiriUIAudioRoutePickerControllerDelegate> _delegate;
	NSString* _audioCategory;
	UIWindow* _window;
	char _hasRoutesToPick;
	char _bluetoothIsPicked;
	char _overrideIsPicked;
	char _useActionSheet;
	SiriRoutePickerAlertController* _pickerAlertController;
	UIActionSheet* _pickerActionSheet;

}

@property (assign,nonatomic,__weak) id<SiriUIAudioRoutePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SiriRoutePickerAlertController * pickerAlertController;                    //@synthesize pickerAlertController=_pickerAlertController - In the implementation block
@property (nonatomic,retain) UIActionSheet * pickerActionSheet;                                         //@synthesize pickerActionSheet=_pickerActionSheet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_nameForRouteInfo:(id)arg1 overridePicked:(char)arg2 isSelected:(char*)arg3 isBluetooth:(char*)arg4 isOverride:(char*)arg5 audioRouteName:(id*)arg6 ;
-(void)dealloc;
-(void)setDelegate:(id<SiriUIAudioRoutePickerControllerDelegate>)arg1 ;
-(id<SiriUIAudioRoutePickerControllerDelegate>)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(char)isShowingPicker;
-(void)cancelPickerAnimated:(char)arg1 ;
-(id)initWithCategory:(id)arg1 delegate:(id)arg2 ;
-(void)showPickerFromViewController:(id)arg1 animated:(char)arg2 ;
-(void)refreshRoutes;
-(char)hasRoutesToPick;
-(char)bluetoothIsPicked;
-(void)_pickableRoutesChanged:(id)arg1 ;
-(void)_routeChanged:(id)arg1 ;
-(void)_showActionSheetFromView:(id)arg1 animated:(char)arg2 ;
-(void)_showAlertControllerFromViewController:(id)arg1 animated:(char)arg2 ;
-(char)_overrideIsPicked;
-(void)_selectRouteWithInfo:(id)arg1 ;
-(void)_dismissAlertController:(char)arg1 ;
-(SiriRoutePickerAlertController *)pickerAlertController;
-(void)_fetchPickableRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(UIActionSheet *)pickerActionSheet;
-(void)_removeWindow;
-(void)setPickerAlertController:(SiriRoutePickerAlertController *)arg1 ;
-(void)setPickerActionSheet:(UIActionSheet *)arg1 ;
@end

