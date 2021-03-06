/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSDictionary, NSArray;

@interface CKPublishAssetsOperation : CKDatabaseOperation {

	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned _requestedTTL;
	unsigned _URLOptions;
	/*^block*/id _assetPublishedBlock;
	/*^block*/id _publishAssetCompletionBlock;
	NSArray* _recordIDs;

}

@property (nonatomic,retain) NSDictionary * fileNamesByAssetFieldNames;              //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned requestedTTL;                                  //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned URLOptions;                                    //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,copy) id assetPublishedBlock;                                   //@synthesize assetPublishedBlock=_assetPublishedBlock - In the implementation block
@property (nonatomic,copy) id publishAssetCompletionBlock;                           //@synthesize publishAssetCompletionBlock=_publishAssetCompletionBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)publishAssetCompletionBlock;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
-(void)setRequestedTTL:(unsigned)arg1 ;
-(void)setURLOptions:(unsigned)arg1 ;
-(void)setPublishAssetCompletionBlock:(id)arg1 ;
-(void)setAssetPublishedBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(unsigned)requestedTTL;
-(unsigned)URLOptions;
-(id)assetPublishedBlock;
@end

