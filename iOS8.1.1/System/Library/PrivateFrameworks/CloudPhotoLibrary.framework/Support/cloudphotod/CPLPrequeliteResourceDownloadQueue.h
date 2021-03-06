/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineResourceDownloadQueueImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceDownloadQueue : CPLPrequeliteStorage <CPLEngineResourceDownloadQueueImplementation> {

	CPLPrequeliteVariable* _nextTaskIdentifier;
	CPLPrequeliteVariable* _nextPosition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)initializeStorage;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
-(BOOL)_getNextPosition:(unsigned long long*)arg1 andBumpWithError:(id*)arg2 ;
-(BOOL)_enqueueResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)_deleteEnqueuedResource:(id)arg1 error:(id*)arg2 ;
-(id)_enqueuedResourceForResource:(id)arg1 ;
-(id)status;
-(BOOL)openWithError:(id*)arg1 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)removeAllBackgroundDownloadTasksForItemWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)newTaskIdentifier;
-(BOOL)enqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)dequeueNextBackgroundDownloadTask:(id*)arg1 resourceType:(unsigned long long)arg2 taskIdentifier:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(BOOL)arg3 didDiscard:(BOOL*)arg4 error:(id*)arg5 ;
-(BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id*)arg1 ;
-(id)enumeratorForDownloadedResources;
-(unsigned long long)countOfQueuedDownloadTasks;
-(id)initWithAbstractObject:(id)arg1 ;
@end

