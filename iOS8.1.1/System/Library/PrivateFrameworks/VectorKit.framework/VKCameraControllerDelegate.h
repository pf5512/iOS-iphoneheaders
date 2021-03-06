/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKCameraControllerDelegate <NSObject>
@required
-(void)runAnimation:(id)arg1;
-(void)cameraControllerDidChangeCameraState:(id)arg1;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
-(void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
-(void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
-(void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;

@end

