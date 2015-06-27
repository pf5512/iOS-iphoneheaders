/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineTransportImplementation <CPLPlatformImplementation,CPLEngineComponent>
@optional
-(id)getAssetCountsTaskWithCompletionHandler:(/*^block*/id)arg1;
-(char)supportsDelayedUploads;
-(id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)bestErrorForUnderlyingError:(id)arg1;
-(id)simpleDataForSyncAnchor:(id)arg1;

@required
-(id)setupTaskCreateLibraryIfNecessary:(char)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)uploadBatchTaskForBatch:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)downloadBatchTaskForSyncAnchor:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)resourcePublishTaskForResource:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)removeLibraryTaskWithCompletionHandler:(/*^block*/id)arg1;

@end
