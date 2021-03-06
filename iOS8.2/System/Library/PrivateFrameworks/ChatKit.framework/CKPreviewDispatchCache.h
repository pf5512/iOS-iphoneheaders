/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/IMSystemMonitorListener.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener> {

	CKDispatchCache* _dispatchCache;
	CKMultiDict* _pendingBlocks;

}

@property (nonatomic,retain) CKDispatchCache * dispatchCache;              //@synthesize dispatchCache=_dispatchCache - In the implementation block
@property (nonatomic,retain) CKMultiDict * pendingBlocks;                  //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
+(id)detailsPreviewCache;
+(id)mapThumbnailQueue;
+(id)transcriptPreviewCache;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)didReceiveMemoryWarning;
-(void)resume;
-(char)isGeneratingPreviewForKey:(id)arg1 ;
-(id)cachedPreviewForKey:(id)arg1 ;
-(void)enqueueGenerationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withPriority:(int)arg3 forKey:(id)arg4 ;
-(void)setCachedPreview:(id)arg1 key:(id)arg2 ;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 forMediaObject:(id)arg2 withPriority:(int)arg3 ;
-(id)notificationCenter;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 withPriority:(int)arg2 ;
-(void)transferRemoved:(id)arg1 ;
-(void)beginGeneratingForKey:(id)arg1 ;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)endGeneratingForKey:(id)arg1 ;
-(void)setDispatchCache:(CKDispatchCache *)arg1 ;
-(void)setPendingBlocks:(CKMultiDict *)arg1 ;
-(CKDispatchCache *)dispatchCache;
-(char)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2 ;
-(CKMultiDict *)pendingBlocks;
-(id)mediaObjectManager;
-(void)transferFinished:(id)arg1 ;
@end

