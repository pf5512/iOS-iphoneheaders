/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, SUClientInterface, NSObject, SSDownloadManager, NSMutableDictionary;

@interface SUDownloadManager : NSObject {

	NSArray* _cachedDownloads;
	SUClientInterface* _clientInterface;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	SSDownloadManager* _downloadManager;
	NSMutableDictionary* _downloadsByID;

}

@property (nonatomic,readonly) SSDownloadManager * downloadManager; 
@property (nonatomic,readonly) NSArray * downloads; 
-(id)initWithDownloadManager:(id)arg1 ;
-(id)downloads;
-(void)dealloc;
-(id)downloadManager;
-(void)reloadDownloadManager;
-(id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2 ;
-(void)preflightWithCompletionBlock:(/*^block*/ id)arg1 ;
-(BOOL)deleteDownload:(id)arg1 ;
-(void)_removeObject:(id)arg1 fromArray:(id*)arg2 ;
-(void)_reloadDownloadManager;
-(void)_finishPreflightWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)downloadForDownloadIdentifier:(long long)arg1 ;
@end
