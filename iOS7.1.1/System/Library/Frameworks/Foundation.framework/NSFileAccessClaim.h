/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_semaphore;
@class NSObject, NSString, NSError, NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface NSFileAccessClaim : NSObject {

	NSObject<OS_xpc_object>* _client;
	NSString* _claimID;
	NSString* _purposeIDOrNil;
	bool _cameFromSuperarbiter;
	unsigned long long _blockageCount;
	bool _didWait;
	bool _isRevoked;
	unsigned long long _claimerBlockageCount;
	NSError* _claimerError;
	NSMutableOrderedSet* _pendingClaims;
	NSMutableSet* _blockingClaims;
	NSMutableSet* _blockingReactorIDs;
	/*^block*/ id _providerCancellationProcedure;
	NSMutableDictionary* _reacquisitionProceduresByPresenterID;
	NSMutableArray* _revocationProcedures;
	id _claimerOrNil;
	NSObject<OS_dispatch_semaphore>* _claimerWaiterOrNull;
	id _sandboxToken;

}
+(bool)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4 ;
+(bool)canWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4 ;
-(bool)cameFromSuperarbiter;
-(bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2 ;
-(id)claimID;
-(void)forwardUsingMessageSender:(/*^block*/ id)arg1 crashHandler:(/*^block*/ id)arg2 ;
-(void)unblock;
-(void)revoked;
-(bool)isRevoked;
-(bool)isGranted;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(/*^block*/ id)arg3 ;
-(void)setCameFromSuperarbiter;
-(id)pendingClaims;
-(id)newClaimerWaiter;
-(void)granted;
-(void)invokeClaimer;
-(bool)claimerInvokingIsBlockedByReactorWithID:(id)arg1 ;
-(id)purposeID;
-(bool)isBlockedByClaimWithPurposeID:(id)arg1 ;
-(void)blockClaimer;
-(void)unblockClaimer;
-(void)whenRevokedPerformProcedure:(/*^block*/ id)arg1 ;
-(void)addPendingClaim:(id)arg1 ;
-(void)setClaimerError:(id)arg1 ;
-(void)devalueSelf;
-(id)descriptionWithIndenting:(id)arg1 ;
-(id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3 ;
-(bool)didWait;
-(id)claimerError;
-(void)evaluateNewClaim:(id)arg1 ;
-(void)removePendingClaims:(id)arg1 ;
-(bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideThenContinue:(/*^block*/ id)arg2 ;
-(void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(bool)arg2 relinquishUsingProcedureGetter:(/*^block*/ id)arg3 ;
-(void)devalueOldClaim:(id)arg1 ;
-(void)ifSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long*)arg2 thenReevaluateSelf:(/*^block*/ id)arg3 elseInvokeClaimer:(/*^block*/ id)arg4 ;
-(id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)cancelled;
-(void)block;
-(id)client;
-(void)finalize;
@end

