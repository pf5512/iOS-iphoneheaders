/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@class MPMediaPickerController;

@interface MPRemoteMediaPickerController : _UIRemoteViewController {

	MPMediaPickerController* _mediaPickerController;

}

@property (assign,nonatomic,__weak) MPMediaPickerController * mediaPickerController;              //@synthesize mediaPickerController=_mediaPickerController - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setMediaPickerController:(MPMediaPickerController *)arg1 ;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(MPMediaPickerController *)mediaPickerController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

