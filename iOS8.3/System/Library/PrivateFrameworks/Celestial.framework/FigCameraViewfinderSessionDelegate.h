/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:56:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FigCameraViewfinderSessionDelegate <NSObject>
@optional
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(long)arg2;

@end

