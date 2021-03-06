/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKRequestHandler.h>

@class SBKTransactionController;

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler {

	BOOL _canceled;
	SBKTransactionController* _transactionController;

}

@property (nonatomic,readonly) SBKTransactionController * transactionController;              //@synthesize transactionController=_transactionController - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                                                 //@synthesize canceled=_canceled - In the implementation block
-(void)cancel;
-(BOOL)canceled;
-(void)timeout;
-(SBKTransactionController *)transactionController;
-(void)cancelWithError:(id)arg1 ;
-(void)scheduleTransaction:(id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(id)initWithBagContext:(id)arg1 ;
@end

