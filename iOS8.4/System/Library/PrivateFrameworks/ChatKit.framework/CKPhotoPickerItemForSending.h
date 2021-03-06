/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, CKPhotoPickerItemForSendingDelegate;
@class NSObject, NSURL, UIImage;

@interface CKPhotoPickerItemForSending : NSObject {

	NSObject*<OS_dispatch_semaphore> _outstandingWork;
	id<CKPhotoPickerItemForSendingDelegate> _delegate;
	NSURL* _localURL;
	NSURL* _assetURL;
	UIImage* _thumbnail;

}

@property (nonatomic,retain,readonly) NSURL * localURL;              //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * assetURL;              //@synthesize assetURL=_assetURL - In the implementation block
@property (retain) UIImage * thumbnail;                              //@synthesize thumbnail=_thumbnail - In the implementation block
-(void)dealloc;
-(id)description;
-(NSURL *)localURL;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)waitForOutstandingWork;
-(void)_fetchAndPersistImageDataForAsset:(id)arg1 withImageManager:(id)arg2 ;
-(id)initWithImageManager:(id)arg1 asset:(id)arg2 delegate:(id)arg3 ;
-(id)initWithAssetURL:(id)arg1 ;
-(NSURL *)assetURL;
@end

