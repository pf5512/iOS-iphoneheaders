/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MDM/MCManagedAssetManager.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MCManagedMediaManager : MCManagedAssetManager {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableDictionary* _memberQueuePersistentIDToNonStoreBook;
	NSMutableDictionary* _memberQueueiTunesStoreIDToStoreBook;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                                 //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueuePersistentIDToNonStoreBook;              //@synthesize memberQueuePersistentIDToNonStoreBook=_memberQueuePersistentIDToNonStoreBook - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueiTunesStoreIDToStoreBook;                //@synthesize memberQueueiTunesStoreIDToStoreBook=_memberQueueiTunesStoreIDToStoreBook - In the implementation block
+(id)homeSharingCloudClient;
+(BOOL)shouldBypassVPPLicenseCheck;
+(id)cannotFindVPPLicenseError;
+(id)cannotVerifyiTunesStoreIDError;
+(id)sharedManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cleanUpWithAssertion:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)memberQueueCleanUp;
-(void)memberQueueRereadNonStoreBooksManifest;
-(NSMutableDictionary *)memberQueuePersistentIDToNonStoreBook;
-(void)memberQueueCommitNonStoreBooksManifest;
-(void)memberQueueRereadStoreBooksManifest;
-(NSMutableDictionary *)memberQueueiTunesStoreIDToStoreBook;
-(void)memberQueueCommitStoreBooksManifest;
-(void)setMemberQueuePersistentIDToNonStoreBook:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueiTunesStoreIDToStoreBook:(NSMutableDictionary *)arg1 ;
-(void)setState:(id)arg1 forNonStoreBookWithPersistentID:(id)arg2 ;
-(void)cancelNonStoreDownloadsWithDownloadIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)searchBookPurchaseHistoryForiTunesStoreID:(id)arg1 assertion:(id)arg2 triesLeft:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)refreshBookPurchaseHistoryCompletion:(/*^block*/id)arg1 ;
-(void)setStoreManagedBook:(id)arg1 ;
-(void)searchBookPurchaseHistoryForiTunesStoreID:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)memberQueueMoveTransientStatesForward;
-(void)rereadNonStoreBooksManifestCompletionBlock:(/*^block*/id)arg1 ;
-(void)rereadStoreBooksManifestCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeStoreBookWithiTunesStoreID:(id)arg1 ;
-(void)setNonStoreManagedBook:(id)arg1 ;
-(void)setState:(id)arg1 forStoreBookWithiTunesStoreID:(id)arg2 ;
-(void)installNonStoreBook:(id)arg1 fileExtension:(id)arg2 URL:(id)arg3 assertion:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)installStoreBookWithiTunesStoreID:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)nonStoreBooks;
-(id)storeBooks;
-(void)moveTransientStatesForward;
-(void)removeNonStoreBookWithPersistentID:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeStoreBookWithiTunesStoreID:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)uprootWithAssertion:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

