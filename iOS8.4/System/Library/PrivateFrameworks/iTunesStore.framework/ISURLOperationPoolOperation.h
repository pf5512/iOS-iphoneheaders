/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSMutableArray, ISURLOperation;

@interface ISURLOperationPoolOperation : ISOperation {

	long long _cancelCount;
	BOOL _forwardImmediately;
	NSMutableArray* _operations;

}

@property (nonatomic,readonly) ISURLOperation * mainOperation; 
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)run;
-(BOOL)containsOperation:(id)arg1 ;
-(ISURLOperation *)mainOperation;
-(void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2 ;
-(void)cancelOperation:(id)arg1 ;
@end
