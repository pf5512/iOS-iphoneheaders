/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:41:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSUDownloadSessionDelegate, OS_dispatch_group, OS_dispatch_queue;
@class TSUDownloadManager, NSObject, NSMutableSet, NSMutableDictionary, TSUBasicProgress, NSURLResponse, NSError, NSString, NSProgress, TSUProgress;

@interface TSUDownloadSession : NSObject {

	char _isCancelled;
	TSUDownloadManager* _manager;
	id<TSUDownloadSessionDelegate> _delegate;
	char _didFinishInitialization;
	NSObject*<OS_dispatch_group> _initializationGroup;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _remainingTasks;
	NSMutableDictionary* _taskProgress;
	double _lastProgressValue;
	NSObject*<OS_dispatch_group> _completionGroup;
	TSUBasicProgress* _progress;
	NSURLResponse* _lastResponse;
	NSError* _error;
	NSString* _sessionDescription;
	NSProgress* _NSProgress;
	long long _totalBytesDownloaded;
	long long _totalBytesExpectedToBeDownloaded;

}

@property (nonatomic,readonly) char isActive; 
@property (nonatomic,readonly) NSString * sessionDescription;                           //@synthesize sessionDescription=_sessionDescription - In the implementation block
@property (nonatomic,readonly) NSProgress * NSProgress;                                 //@synthesize NSProgress=_NSProgress - In the implementation block
@property (nonatomic,readonly) TSUProgress * progress;                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) long long totalBytesDownloaded;                          //@synthesize totalBytesDownloaded=_totalBytesDownloaded - In the implementation block
@property (nonatomic,readonly) long long totalBytesExpectedToBeDownloaded;              //@synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded - In the implementation block
@property (nonatomic,readonly) char isCancelled;                                        //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)didFinishInitialization;
-(void)cancelRemainingTasksNotifyingDelegate:(char)arg1 ;
-(long long)totalBytesExpectedToBeDownloaded;
-(void)headRequestForDownloadItem:(id)arg1 taskProgress:(id)arg2 ;
-(void)updateTaskProgress:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 ;
-(void)updateProgressAndNotifyDelegate;
-(long long)totalBytesDownloaded;
-(void)notifyCompletionWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)waitUntilTimeout:(unsigned long long)arg1 ;
-(id)initWithManager:(id)arg1 downloadItems:(id)arg2 description:(id)arg3 willRequestDownload:(char)arg4 delegate:(id)arg5 ;
-(char)hasActiveTaskWithDescription:(id)arg1 ;
-(void)task:(id)arg1 withDescription:(id)arg2 didCompleteWithError:(id)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)task:(id)arg1 withDescription:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(NSProgress *)NSProgress;
-(NSString *)sessionDescription;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isActive;
-(char)isCancelled;
-(TSUProgress *)progress;
-(id)lastResponse;
@end

