/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PFUbiquityTransactionLog, PFUbiquityStoreSaveSnapshot;

@interface _PFUbiquityMigrationContext : NSObject {

	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquityStoreSaveSnapshot* _sourceStoreSaveSnapshot;
	PFUbiquityStoreSaveSnapshot* _destinationStoreSaveSnapshot;

}

@property (nonatomic,retain) PFUbiquityTransactionLog * transactionLog;                               //@synthesize transactionLog=_transactionLog - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * sourceStoreSaveSnapshot;                   //@synthesize sourceStoreSaveSnapshot=_sourceStoreSaveSnapshot - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * destinationStoreSaveSnapshot;              //@synthesize destinationStoreSaveSnapshot=_destinationStoreSaveSnapshot - In the implementation block
-(PFUbiquityTransactionLog *)transactionLog;
-(void)setTransactionLog:(PFUbiquityTransactionLog *)arg1 ;
-(void)setSourceStoreSaveSnapshot:(PFUbiquityStoreSaveSnapshot *)arg1 ;
-(void)setDestinationStoreSaveSnapshot:(PFUbiquityStoreSaveSnapshot *)arg1 ;
-(PFUbiquityStoreSaveSnapshot *)destinationStoreSaveSnapshot;
-(id)sourceGlobalObjectIDFromCompressedID:(id)arg1 ;
-(PFUbiquityStoreSaveSnapshot *)sourceStoreSaveSnapshot;
-(void)dealloc;
@end

