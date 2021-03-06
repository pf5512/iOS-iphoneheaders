/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver> {

	/*^block*/id _didFinishDownloadHandler;
	/*^block*/id _didFinishPurchaseHandler;
	MPStoreDownload* _download;

}

@property (nonatomic,copy) id didFinishDownloadHandler;                 //@synthesize didFinishDownloadHandler=_didFinishDownloadHandler - In the implementation block
@property (nonatomic,copy) id didFinishPurchaseHandler;                 //@synthesize didFinishPurchaseHandler=_didFinishPurchaseHandler - In the implementation block
@property (nonatomic,readonly) MPStoreDownload * download;              //@synthesize download=_download - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDownload:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(void)setDidFinishDownloadHandler:(id)arg1 ;
-(void)setDidFinishPurchaseHandler:(id)arg1 ;
-(id)didFinishDownloadHandler;
-(id)didFinishPurchaseHandler;
-(MPStoreDownload *)download;
@end

